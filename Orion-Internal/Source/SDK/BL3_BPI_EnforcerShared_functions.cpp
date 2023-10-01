// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_EnforcerShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AllowButtStagger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowButtStagger               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_EnforcerShared_C::Enforcer_AllowButtStagger(bool AllowButtStagger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AllowButtStagger");

	UBPI_EnforcerShared_C_Enforcer_AllowButtStagger_Params params;
	params.AllowButtStagger = AllowButtStagger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AnointedJoe_ShieldDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EnforcerShared_C::Enforcer_AnointedJoe_ShieldDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AnointedJoe_ShieldDown");

	UBPI_EnforcerShared_C_Enforcer_AnointedJoe_ShieldDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AnointedJoe_SpawnAI
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EnforcerShared_C::Enforcer_AnointedJoe_SpawnAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AnointedJoe_SpawnAI");

	UBPI_EnforcerShared_C_Enforcer_AnointedJoe_SpawnAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_TransformToGun
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EnforcerShared_C::Enforcer_TransformToGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_TransformToGun");

	UBPI_EnforcerShared_C_Enforcer_TransformToGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_Anointed_Death
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_EnforcerShared_C::Enforcer_Anointed_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_Anointed_Death");

	UBPI_EnforcerShared_C_Enforcer_Anointed_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_ForcedDirectionalStagger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary DamageSummary                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_EnforcerShared_C::Enforcer_ForcedDirectionalStagger(const struct FDamageReactionEventSummary& DamageSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_ForcedDirectionalStagger");

	UBPI_EnforcerShared_C_Enforcer_ForcedDirectionalStagger_Params params;
	params.DamageSummary = DamageSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_GetType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_EnforcerVariants> EnforcerType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_EnforcerShared_C::Enforcer_GetType(TEnumAsByte<Enum_EnforcerVariants>* EnforcerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_GetType");

	UBPI_EnforcerShared_C_Enforcer_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnforcerType != nullptr)
		*EnforcerType = params.EnforcerType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
