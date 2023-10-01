// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_CollectionParentCrewChallenge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_CollectionParentCrewChallenge.BP_IO_CollectionParentCrewChallenge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IO_CollectionParentCrewChallenge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_CollectionParentCrewChallenge.BP_IO_CollectionParentCrewChallenge_C.UserConstructionScript");

	ABP_IO_CollectionParentCrewChallenge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
