// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Varkid_LeapAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_Varkid_LeapAttack.ANav_Varkid_LeapAttack_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Varkid_LeapAttack_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Varkid_LeapAttack.ANav_Varkid_LeapAttack_C.OnBegin");

	UANav_Varkid_LeapAttack_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Varkid_LeapAttack.ANav_Varkid_LeapAttack_C.ExecuteUbergraph_ANav_Varkid_LeapAttack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Varkid_LeapAttack_C::ExecuteUbergraph_ANav_Varkid_LeapAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Varkid_LeapAttack.ANav_Varkid_LeapAttack_C.ExecuteUbergraph_ANav_Varkid_LeapAttack");

	UANav_Varkid_LeapAttack_C_ExecuteUbergraph_ANav_Varkid_LeapAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
