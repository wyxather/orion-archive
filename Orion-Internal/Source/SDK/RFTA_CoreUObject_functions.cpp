// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CoreUObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

auto FVector::toAngle() const noexcept -> FRotator
	{
		return {
			math::rad2deg(std::atan2(Z, std::hypot(X, Y))),
			math::rad2deg(std::atan2(Y, X)),
			0.f
		};
	}

auto UObject::GetName() const noexcept -> std::string
	{
		std::string name{ Name.GetName() };
		if (Name.Number > 0)
			name += '_' + std::to_string(Name.Number);

		const auto pos = name.rfind('/');
		if (pos == std::string::npos)
			return name;

		return name.substr(pos + 1);
	}

auto UObject::GetFullName() const noexcept -> std::string
	{
		std::string name;
		if (Class == nullptr)
			return name;

		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
			temp = p->GetName() + "." + temp;

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();

		return name;
	}

auto UObject::IsA(UClass* cmp) const noexcept -> bool
	{
		for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
			if (super == cmp)
				return true;
		return false;
	}

// Function CoreUObject.Object.ExecuteUbergraph
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObject::ExecuteUbergraph(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

	UObject_ExecuteUbergraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
