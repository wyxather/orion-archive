// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_IronSight_Fire_Bolt_02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SR_JAK_IronSight_Fire_Bolt_02_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.OnBegin");

	UAction_SR_JAK_IronSight_Fire_Bolt_02_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SR_JAK_IronSight_Fire_Bolt_02_C::ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02");

	UAction_SR_JAK_IronSight_Fire_Bolt_02_C_ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
