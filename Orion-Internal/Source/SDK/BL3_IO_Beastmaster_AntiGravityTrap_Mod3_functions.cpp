// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Beastmaster_AntiGravityTrap_Mod3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_Mod3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.UserConstructionScript");

	AIO_Beastmaster_AntiGravityTrap_Mod3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.SetTrapEndCondition
// (BlueprintCallable, BlueprintEvent)

void AIO_Beastmaster_AntiGravityTrap_Mod3_C::SetTrapEndCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.SetTrapEndCondition");

	AIO_Beastmaster_AntiGravityTrap_Mod3_C_SetTrapEndCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Beastmaster_AntiGravityTrap_Mod3_C::ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3");

	AIO_Beastmaster_AntiGravityTrap_Mod3_C_ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
