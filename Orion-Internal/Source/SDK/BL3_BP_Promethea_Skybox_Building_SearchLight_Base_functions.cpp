// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Promethea_Skybox_Building_SearchLight_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Promethea_Skybox_Building_SearchLight_Base.BP_Promethea_Skybox_Building_SearchLight_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Promethea_Skybox_Building_SearchLight_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Promethea_Skybox_Building_SearchLight_Base.BP_Promethea_Skybox_Building_SearchLight_Base_C.UserConstructionScript");

	ABP_Promethea_Skybox_Building_SearchLight_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
