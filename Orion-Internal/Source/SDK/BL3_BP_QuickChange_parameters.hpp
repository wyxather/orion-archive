#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_QuickChange_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_QuickChange.BP_QuickChange_C.UserConstructionScript
struct ABP_QuickChange_C_UserConstructionScript_Params
{
};

// Function BP_QuickChange.BP_QuickChange_C.OnSaveGameRenamed
struct ABP_QuickChange_C_OnSaveGameRenamed_Params
{
	struct FText*                                      NewName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewSkinColor
struct ABP_QuickChange_C_OnPickedNewSkinColor_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewSkin
struct ABP_QuickChange_C_OnPickedNewSkin_Params
{
	class UOakCustomizationData**                      NewSkin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewHead
struct ABP_QuickChange_C_OnPickedNewHead_Params
{
	class UOakCustomizationData**                      NewHead;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewECHOTheme
struct ABP_QuickChange_C_OnPickedNewECHOTheme_Params
{
	class UOakCustomizationData**                      NewECHOTheme;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuickChange.BP_QuickChange_C.OnRespec
struct ABP_QuickChange_C_OnRespec_Params
{
};

// Function BP_QuickChange.BP_QuickChange_C.OnPlayerStopInteraction
struct ABP_QuickChange_C_OnPlayerStopInteraction_Params
{
	class AOakPlayerController**                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuickChange.BP_QuickChange_C.ExecuteUbergraph_BP_QuickChange
struct ABP_QuickChange_C_ExecuteUbergraph_BP_QuickChange_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QuickChange.BP_QuickChange_C.OnChangeSkinColor__DelegateSignature
struct ABP_QuickChange_C_OnChangeSkinColor__DelegateSignature_Params
{
};

// Function BP_QuickChange.BP_QuickChange_C.OnPickedEchoTheme__DelegateSignature
struct ABP_QuickChange_C_OnPickedEchoTheme__DelegateSignature_Params
{
};

// Function BP_QuickChange.BP_QuickChange_C.OnPickedHead__DelegateSignature
struct ABP_QuickChange_C_OnPickedHead__DelegateSignature_Params
{
};

// Function BP_QuickChange.BP_QuickChange_C.OnSkillRespec__DelegateSignature
struct ABP_QuickChange_C_OnSkillRespec__DelegateSignature_Params
{
};

// Function BP_QuickChange.BP_QuickChange_C.OnRenameSave__DelegateSignature
struct ABP_QuickChange_C_OnRenameSave__DelegateSignature_Params
{
};

// Function BP_QuickChange.BP_QuickChange_C.OnPickedSkin__DelegateSignature
struct ABP_QuickChange_C_OnPickedSkin__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
