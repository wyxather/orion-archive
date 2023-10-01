// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CoreUObject_classes.hpp"
#include "RFTA_Engine_classes.hpp"

namespace SDK
{
	TNameEntryArray* FName::GNames = nullptr;
	FUObjectArray* UObject::GObjects = nullptr;

	auto FWeakObjectPtr::IsValid() const noexcept -> bool
	{
		if (ObjectSerialNumber == 0)
			return false;

		if (ObjectIndex < 0 || ObjectIndex >= UObject::GetGlobalObjects().Num())
			return false;

		const auto& item = UObject::GetGlobalObjects().GetByIndex(ObjectIndex);
		if (item.SerialNumber != ObjectSerialNumber)
			return false;

		return !(item.IsUnreachable() || item.IsPendingKill());
	}

	auto FWeakObjectPtr::Get() const noexcept -> class UObject*
	{
		if (!IsValid())
			return nullptr;

		auto& item = UObject::GetGlobalObjects().GetByIndex(ObjectIndex);
		return item.Object;
	}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
