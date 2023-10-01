#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Beastmaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.TryForceSpawnPetAtLocation
struct UIBPChar_Beastmaster_C_TryForceSpawnPetAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.SetNewPetThreatScale
struct UIBPChar_Beastmaster_C_SetNewPetThreatScale_Params
{
	float                                              NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.PlayPetAudioCallAndResponse
struct UIBPChar_Beastmaster_C_PlayPetAudioCallAndResponse_Params
{
	TEnumAsByte<Enum_BeastmasterDialogAction>          DialogType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.GetCurrentPet
struct UIBPChar_Beastmaster_C_GetCurrentPet_Params
{
	class AOakCharacter*                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
