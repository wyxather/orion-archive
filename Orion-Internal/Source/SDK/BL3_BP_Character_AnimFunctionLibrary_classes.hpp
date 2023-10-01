#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Character_AnimFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Character_AnimFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C");
		return ptr;
	}


	void STATIC_SetLocalWeaponSequenceArray_Generic(const struct FAStruct_Generic_WeaponAnimContainer& AStruct_WeaponAnimContainer_Menu, int WeaponManufacturer, int WeaponType, int GripType, int ForeGripType, bool Debug_Pose_Array_, class UObject* __WorldContext, TArray<struct FName>* LiveWeaponPoses);
	void STATIC_SetLocalWeaponSequenceArray_Menu(const struct FAStruct_WeaponAnimContainer_Menu& AStruct_WeaponAnimContainer_Menu, int WeaponManufacturer, int WeaponType, int GripType, int ForeGripType, bool Debug_Pose_Array_, class UObject* __WorldContext, TArray<struct FName>* LiveWeaponPoses);
	void STATIC_SetLocalWeaponSequenceArray_Player(const struct FAStruct_WeaponAnimContainer& AStruct_WeaponAnimContainer, int WeaponManufacturer, int WeaponType, int GripType, int ForeGripType, bool Debug_Pose_Array_, class UObject* __WorldContext, TArray<struct FName>* LiveWeaponPoses);
	void STATIC_PostInitCheck(class UObject* Object, class AOakCharacter* Character, class UGbxCharacterMovementComponent* GbxMoveComp, class UOakCharacterMovementComponent* OakMoveComp, class UObject* __WorldContext);
	void STATIC_Log_Error(class UObject* Object, const struct FText& Log_Text, class UObject* __WorldContext);
	void STATIC_InitCharacterComponents(class APawn* Target, class UObject* __WorldContext, class AOakCharacter** Character, class UGbxCharacterMovementComponent** GbxMoveComp, class UOakCharacterMovementComponent** OakMoveComp, class AOakCharacter** Characteroutput, class UGbxCharacterMovementComponent** GbxCharacterMovement, class UOakCharacterMovementComponent** OakCharacterMovement);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
