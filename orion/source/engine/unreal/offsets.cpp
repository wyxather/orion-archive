#include "source/engine/unreal/offsets.h"
#include "source/engine/unreal/offset_finder.h"
#include "source/engine/unreal/name_array.h"
#include "source/core/log.h"

void Off::InSDK::InitPE()
{
	void** Vft = *(void***)ObjectArray::GetByIndex(0).GetAddress();

	auto Resolve32BitRelativeJump = [](void* FunctionPtr) -> uint8_t*
	{
		uint8_t* Address = reinterpret_cast<uint8_t*>(FunctionPtr);
		if (*Address == 0xE9)
		{
			uint8_t* Ret = ((Address + 5) + *reinterpret_cast<int32_t*>(Address + 1));

			if (IsInProcessRange(uintptr_t(Ret)))
				return Ret;
		}

		return reinterpret_cast<uint8_t*>(FunctionPtr);
	};

	for (int i = 0; i < 0x150; i++)
	{
		if (!Vft[i] || !IsInProcessRange(reinterpret_cast<uintptr_t>(Vft[i])))
			break;

		if (FindPatternInRange({ 0xF7, -0x1, Off::UFunction::FunctionFlags, 0x0, 0x0, 0x0, 0x0, 0x04, 0x0, 0x0 }, Resolve32BitRelativeJump(Vft[i]), 0x400)
		&&  FindPatternInRange({ 0xF7, -0x1, Off::UFunction::FunctionFlags, 0x0, 0x0, 0x0, 0x0, 0x0, 0x40, 0x0 }, Resolve32BitRelativeJump(Vft[i]), 0x400))
		{
			Off::InSDK::PEIndex = i;
			Off::InSDK::PEOffset = GetOffset(Vft[i]);

			log::info("PE-{}: {:#x}", "Offset", Off::InSDK::PEOffset);
			log::info("PE-{}: {:#x}({})", "Index", i, i);
			return;
		}
	}

	void* PeAddr = (void*)FindByWStringInAllSections(L"Accessed None").FindNextFunctionStart();

	for (int i = 0; i < 0x150; i++)
	{
		if (!PeAddr)
			break;

		if (Resolve32BitRelativeJump(Vft[i]) == PeAddr)
		{
			Off::InSDK::PEIndex = i;
			Off::InSDK::PEOffset = GetOffset(PeAddr);

			log::info("PE-{}: {:#x}", "Offset", Off::InSDK::PEOffset);
            log::info("PE-{}: {:#x}({})", "Index", i, i);
			return;
		}
	}

	// If PE wasn't found by string ref, use a sig (or two)
}

void Off::InSDK::InitPE(int32 Index)
{
	Off::InSDK::PEIndex = Index;

	void** VFT = *reinterpret_cast<void***>(ObjectArray::GetByIndex(0).GetAddress());

	uintptr_t Imagebase = GetImageBase();

	Off::InSDK::PEOffset = uintptr_t(VFT[Off::InSDK::PEIndex]) - Imagebase;

	std::cout << "VFT-Offset: 0x" << std::hex << uintptr_t(VFT) - Imagebase << std::endl;
}

void Off::Init()
{
	OffsetFinder::InitUObjectOffsets();
	OffsetFinder::InitFNameSettings();
	::NameArray::PostInit();
	Off::UStruct::Children = OffsetFinder::FindChildOffset();
	Off::UField::Next = OffsetFinder::FindUFieldNextOffset();
	Off::UStruct::SuperStruct = OffsetFinder::FindSuperOffset();
	Off::UStruct::Size = OffsetFinder::FindStructSizeOffset();
	Off::UClass::CastFlags = OffsetFinder::FindCastFlagsOffset();
	if (Settings::Internal::bUseFProperty)
	{
		Off::UStruct::ChildProperties = OffsetFinder::FindChildPropertiesOffset();
		OffsetFinder::FixupHardcodedOffsets(); // must be called after FindChildPropertiesOffset 
		Off::FField::Next = OffsetFinder::FindFFieldNextOffset();
		Off::FField::Name = OffsetFinder::FindFFieldNameOffset();
	}
	Off::UClass::ClassDefaultObject = OffsetFinder::FindDefaultObjectOffset();
	Off::UEnum::Names = OffsetFinder::FindEnumNamesOffset();
	Off::UFunction::FunctionFlags = OffsetFinder::FindFunctionFlagsOffset();
	Off::UFunction::ExecFunction = OffsetFinder::FindFunctionNativeFuncOffset();
	Off::UProperty::ElementSize = OffsetFinder::FindElementSizeOffset();
	Off::UProperty::ArrayDim = OffsetFinder::FindArrayDimOffset();
	Off::UProperty::Offset_Internal = OffsetFinder::FindOffsetInternalOffset();
	Off::UProperty::PropertyFlags = OffsetFinder::FindPropertyFlagsOffset();
	const int32 PropertySize = OffsetFinder::FindBoolPropertyBaseOffset();
	Off::UArrayProperty::Inner = OffsetFinder::FindInnerTypeOffset(PropertySize);
	Off::USetProperty::ElementProp = OffsetFinder::FindSetPropertyBaseOffset(PropertySize);
	Off::UMapProperty::Base = OffsetFinder::FindMapPropertyBaseOffset(PropertySize);
	Off::UByteProperty::Enum = PropertySize;
	Off::UBoolProperty::Base = PropertySize;
	Off::UObjectProperty::PropertyClass = PropertySize;
	Off::UStructProperty::Struct = PropertySize;
	Off::UEnumProperty::Base = PropertySize;
	Off::UClassProperty::MetaClass = PropertySize + 0x8; //0x8 inheritance from UObjectProperty

	if (Settings::Internal::bUseFProperty)
        log::info("Game uses FProperty system");
    log::info(
        "{}PropertySize: {:x}",
        Settings::Internal::bUseFProperty ? "F" : "U",
		PropertySize
    );
#pragma push_macro("log_offset")
#define log_offset(o) log::info("{}: {:x}", #o, o)
    log_offset(Off::UField::Next);
    log_offset(Off::UEnum::Names);
    log_offset(Off::UStruct::SuperStruct);
    log_offset(Off::UStruct::Children);
    log_offset(Off::UStruct::ChildProperties);
    log_offset(Off::UStruct::Size);
    log_offset(Off::UClass::CastFlags);
    log_offset(Off::UClass::ClassDefaultObject);
    log_offset(Off::UFunction::FunctionFlags);
    log_offset(Off::UFunction::ExecFunction);
    log_offset(Off::FField::Next);
    log_offset(Off::FField::Name);
    log_offset(Off::UProperty::ArrayDim);
    log_offset(Off::UProperty::ElementSize);
    log_offset(Off::UProperty::PropertyFlags);
    log_offset(Off::UProperty::Offset_Internal);
    log_offset(Off::UArrayProperty::Inner);
    log_offset(Off::USetProperty::ElementProp);
    log_offset(Off::UMapProperty::Base);
    log_offset(Off::UByteProperty::Enum);
    log_offset(Off::UBoolProperty::Base);
    log_offset(Off::UObjectProperty::PropertyClass);
    log_offset(Off::UStructProperty::Struct);
    log_offset(Off::UEnumProperty::Base);
    log_offset(Off::UClassProperty::MetaClass);
#pragma pop_macro("log_offset")
}
