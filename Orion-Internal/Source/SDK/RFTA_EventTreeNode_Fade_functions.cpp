// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_Fade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTreeNode_Fade.EventTreeNode_Fade_C.Begin
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEventTreeComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTreeNode_Fade_C::Begin(class UEventTreeComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_Fade.EventTreeNode_Fade_C.Begin");

	UEventTreeNode_Fade_C_Begin_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTreeNode_Fade.EventTreeNode_Fade_C.ExecuteUbergraph_EventTreeNode_Fade
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTreeNode_Fade_C::ExecuteUbergraph_EventTreeNode_Fade(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_Fade.EventTreeNode_Fade_C.ExecuteUbergraph_EventTreeNode_Fade");

	UEventTreeNode_Fade_C_ExecuteUbergraph_EventTreeNode_Fade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
