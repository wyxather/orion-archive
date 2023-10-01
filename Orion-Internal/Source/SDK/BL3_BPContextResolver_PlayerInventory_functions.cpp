// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPContextResolver_PlayerInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C.GetContextForAttribute
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData**      Attribute                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                ContextSource                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UBPContextResolver_PlayerInventory_C::GetContextForAttribute(class UGbxAttributeData** Attribute, class UObject** ContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C.GetContextForAttribute");

	UBPContextResolver_PlayerInventory_C_GetContextForAttribute_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
