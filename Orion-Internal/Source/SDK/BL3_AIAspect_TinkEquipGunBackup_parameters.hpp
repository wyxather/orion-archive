#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_TinkEquipGunBackup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkEquipGunBackup
struct UAIAspect_TinkEquipGunBackup_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkEquipGunBackup_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C.ExecuteUbergraph_AIAspect_TinkEquipGunBackup
struct UAIAspect_TinkEquipGunBackup_C_ExecuteUbergraph_AIAspect_TinkEquipGunBackup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
