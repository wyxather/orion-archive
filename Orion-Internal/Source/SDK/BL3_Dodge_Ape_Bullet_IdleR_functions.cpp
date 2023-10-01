// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Dodge_Ape_Bullet_IdleR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDodge_Ape_Bullet_IdleR_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.OnEnd");

	UDodge_Ape_Bullet_IdleR_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.ExecuteUbergraph_Dodge_Ape_Bullet_IdleR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDodge_Ape_Bullet_IdleR_C::ExecuteUbergraph_Dodge_Ape_Bullet_IdleR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.ExecuteUbergraph_Dodge_Ape_Bullet_IdleR");

	UDodge_Ape_Bullet_IdleR_C_ExecuteUbergraph_Dodge_Ape_Bullet_IdleR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
