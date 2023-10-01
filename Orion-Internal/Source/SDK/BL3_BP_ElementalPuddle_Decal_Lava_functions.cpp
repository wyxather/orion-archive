// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ElementalPuddle_Decal_Lava_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ElementalPuddle_Decal_Lava_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C.UserConstructionScript");

	ABP_ElementalPuddle_Decal_Lava_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
