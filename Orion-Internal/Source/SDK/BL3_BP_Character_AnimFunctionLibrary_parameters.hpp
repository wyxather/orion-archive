#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Character_AnimFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Generic
struct UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Generic_Params
{
	struct FAStruct_Generic_WeaponAnimContainer        AStruct_WeaponAnimContainer_Menu;                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FName>                               LiveWeaponPoses;                                          // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                WeaponManufacturer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GripType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ForeGripType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug_Pose_Array_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Menu
struct UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Menu_Params
{
	struct FAStruct_WeaponAnimContainer_Menu           AStruct_WeaponAnimContainer_Menu;                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FName>                               LiveWeaponPoses;                                          // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                WeaponManufacturer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GripType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ForeGripType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug_Pose_Array_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Player
struct UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Player_Params
{
	struct FAStruct_WeaponAnimContainer                AStruct_WeaponAnimContainer;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FName>                               LiveWeaponPoses;                                          // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                WeaponManufacturer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GripType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ForeGripType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug_Pose_Array_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.PostInitCheck
struct UBP_Character_AnimFunctionLibrary_C_PostInitCheck_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxMoveComp;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakCharacterMovementComponent*              OakMoveComp;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.Log Error
struct UBP_Character_AnimFunctionLibrary_C_Log_Error_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Log_Text;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.InitCharacterComponents
struct UBP_Character_AnimFunctionLibrary_C_InitCharacterComponents_Params
{
	class APawn*                                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxMoveComp;                                              // (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UOakCharacterMovementComponent*              OakMoveComp;                                              // (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter*                               Characteroutput;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxCharacterMovement;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakCharacterMovementComponent*              OakCharacterMovement;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
