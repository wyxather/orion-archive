// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_PlayerShared_Skills_Confuse_FixedVersion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.On Confuse Target death
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_PlayerShared_Skills_Confuse_FixedVersion_C::On_Confuse_Target_death(class AActor** DamageReceiver, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.On Confuse Target death");

	UCE_PlayerShared_Skills_Confuse_FixedVersion_C_On_Confuse_Target_death_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_PlayerShared_Skills_Confuse_FixedVersion_C::ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion");

	UCE_PlayerShared_Skills_Confuse_FixedVersion_C_ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
