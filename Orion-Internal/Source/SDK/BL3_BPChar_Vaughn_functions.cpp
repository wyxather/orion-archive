// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Vaughn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Vaughn.BPChar_Vaughn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Vaughn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Vaughn.BPChar_Vaughn_C.UserConstructionScript");

	ABPChar_Vaughn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Vaughn.BPChar_Vaughn_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700
// (BlueprintEvent)
// Parameters:
// class AController**            UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Vaughn_C::BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController** UserController, class UPrimitiveComponent** UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Vaughn.BPChar_Vaughn_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700");

	ABPChar_Vaughn_C_BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Vaughn.BPChar_Vaughn_C.ExecuteUbergraph_BPChar_Vaughn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Vaughn_C::ExecuteUbergraph_BPChar_Vaughn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Vaughn.BPChar_Vaughn_C.ExecuteUbergraph_BPChar_Vaughn");

	ABPChar_Vaughn_C_ExecuteUbergraph_BPChar_Vaughn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
