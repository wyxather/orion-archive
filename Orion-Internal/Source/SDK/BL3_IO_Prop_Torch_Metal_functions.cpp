// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Prop_Torch_Metal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Prop_Torch_Metal.IO_Prop_Torch_Metal_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_Prop_Torch_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Prop_Torch_Metal.IO_Prop_Torch_Metal_C.UserConstructionScript");

	AIO_Prop_Torch_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
