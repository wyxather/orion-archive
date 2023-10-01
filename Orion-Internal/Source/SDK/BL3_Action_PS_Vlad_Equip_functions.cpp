// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_Vlad_Equip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PS_Vlad_Equip.Action_PS_Vlad_Equip_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PS_Vlad_Equip_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PS_Vlad_Equip.Action_PS_Vlad_Equip_C.OnBegin");

	UAction_PS_Vlad_Equip_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PS_Vlad_Equip.Action_PS_Vlad_Equip_C.ExecuteUbergraph_Action_PS_Vlad_Equip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PS_Vlad_Equip_C::ExecuteUbergraph_Action_PS_Vlad_Equip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PS_Vlad_Equip.Action_PS_Vlad_Equip_C.ExecuteUbergraph_Action_PS_Vlad_Equip");

	UAction_PS_Vlad_Equip_C_ExecuteUbergraph_Action_PS_Vlad_Equip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
