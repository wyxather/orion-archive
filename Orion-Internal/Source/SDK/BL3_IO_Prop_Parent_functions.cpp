// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Prop_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Prop_Parent.IO_Prop_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Prop_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Prop_Parent.IO_Prop_Parent_C.UserConstructionScript");

	AIO_Prop_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Prop_Parent.IO_Prop_Parent_C.BndEvt__BP_Elem_Destructible_K2Node_ComponentBoundEvent_3_Destruct_Normal__DelegateSignature_IO_Combat_Parent
// (BlueprintEvent)

void AIO_Prop_Parent_C::BndEvt__BP_Elem_Destructible_K2Node_ComponentBoundEvent_3_Destruct_Normal__DelegateSignature_IO_Combat_Parent()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Prop_Parent.IO_Prop_Parent_C.BndEvt__BP_Elem_Destructible_K2Node_ComponentBoundEvent_3_Destruct_Normal__DelegateSignature_IO_Combat_Parent");

	AIO_Prop_Parent_C_BndEvt__BP_Elem_Destructible_K2Node_ComponentBoundEvent_3_Destruct_Normal__DelegateSignature_IO_Combat_Parent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Prop_Parent.IO_Prop_Parent_C.ExecuteUbergraph_IO_Prop_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Prop_Parent_C::ExecuteUbergraph_IO_Prop_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Prop_Parent.IO_Prop_Parent_C.ExecuteUbergraph_IO_Prop_Parent");

	AIO_Prop_Parent_C_ExecuteUbergraph_IO_Prop_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
