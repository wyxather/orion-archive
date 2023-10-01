// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_TinkTurret_LockedFiringBeamOn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAspect_TinkTurret_LockedFiringBeamOn.AIAspect_TinkTurret_LockedFiringBeamOn_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_TinkTurret_FiringLightOn
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAspect_TinkTurret_LockedFiringBeamOn_C::BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_TinkTurret_FiringLightOn(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAspect_TinkTurret_LockedFiringBeamOn.AIAspect_TinkTurret_LockedFiringBeamOn_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_TinkTurret_FiringLightOn");

	UAIAspect_TinkTurret_LockedFiringBeamOn_C_BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_TinkTurret_FiringLightOn_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAspect_TinkTurret_LockedFiringBeamOn.AIAspect_TinkTurret_LockedFiringBeamOn_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkTurret_IdleLightOn
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAspect_TinkTurret_LockedFiringBeamOn_C::BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkTurret_IdleLightOn(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAspect_TinkTurret_LockedFiringBeamOn.AIAspect_TinkTurret_LockedFiringBeamOn_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkTurret_IdleLightOn");

	UAIAspect_TinkTurret_LockedFiringBeamOn_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkTurret_IdleLightOn_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAspect_TinkTurret_LockedFiringBeamOn.AIAspect_TinkTurret_LockedFiringBeamOn_C.ExecuteUbergraph_AIAspect_TinkTurret_LockedFiringBeamOn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAspect_TinkTurret_LockedFiringBeamOn_C::ExecuteUbergraph_AIAspect_TinkTurret_LockedFiringBeamOn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAspect_TinkTurret_LockedFiringBeamOn.AIAspect_TinkTurret_LockedFiringBeamOn_C.ExecuteUbergraph_AIAspect_TinkTurret_LockedFiringBeamOn");

	UAIAspect_TinkTurret_LockedFiringBeamOn_C_ExecuteUbergraph_AIAspect_TinkTurret_LockedFiringBeamOn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
