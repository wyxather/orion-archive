// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetSpiderant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PetSpiderant.BPChar_PetSpiderant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetSpiderant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetSpiderant.BPChar_PetSpiderant_C.UserConstructionScript");

	ABPChar_PetSpiderant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
