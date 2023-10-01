// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Character_AnimFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Generic
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAStruct_Generic_WeaponAnimContainer AStruct_WeaponAnimContainer_Menu (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FName>           LiveWeaponPoses                (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            WeaponManufacturer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GripType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ForeGripType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug_Pose_Array_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Character_AnimFunctionLibrary_C::STATIC_SetLocalWeaponSequenceArray_Generic(const struct FAStruct_Generic_WeaponAnimContainer& AStruct_WeaponAnimContainer_Menu, int WeaponManufacturer, int WeaponType, int GripType, int ForeGripType, bool Debug_Pose_Array_, class UObject* __WorldContext, TArray<struct FName>* LiveWeaponPoses)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Generic");

	UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Generic_Params params;
	params.AStruct_WeaponAnimContainer_Menu = AStruct_WeaponAnimContainer_Menu;
	params.WeaponManufacturer = WeaponManufacturer;
	params.WeaponType = WeaponType;
	params.GripType = GripType;
	params.ForeGripType = ForeGripType;
	params.Debug_Pose_Array_ = Debug_Pose_Array_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveWeaponPoses != nullptr)
		*LiveWeaponPoses = params.LiveWeaponPoses;
}


// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Menu
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAStruct_WeaponAnimContainer_Menu AStruct_WeaponAnimContainer_Menu (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FName>           LiveWeaponPoses                (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            WeaponManufacturer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GripType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ForeGripType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug_Pose_Array_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Character_AnimFunctionLibrary_C::STATIC_SetLocalWeaponSequenceArray_Menu(const struct FAStruct_WeaponAnimContainer_Menu& AStruct_WeaponAnimContainer_Menu, int WeaponManufacturer, int WeaponType, int GripType, int ForeGripType, bool Debug_Pose_Array_, class UObject* __WorldContext, TArray<struct FName>* LiveWeaponPoses)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Menu");

	UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Menu_Params params;
	params.AStruct_WeaponAnimContainer_Menu = AStruct_WeaponAnimContainer_Menu;
	params.WeaponManufacturer = WeaponManufacturer;
	params.WeaponType = WeaponType;
	params.GripType = GripType;
	params.ForeGripType = ForeGripType;
	params.Debug_Pose_Array_ = Debug_Pose_Array_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveWeaponPoses != nullptr)
		*LiveWeaponPoses = params.LiveWeaponPoses;
}


// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Player
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAStruct_WeaponAnimContainer AStruct_WeaponAnimContainer    (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FName>           LiveWeaponPoses                (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            WeaponManufacturer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GripType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ForeGripType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug_Pose_Array_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Character_AnimFunctionLibrary_C::STATIC_SetLocalWeaponSequenceArray_Player(const struct FAStruct_WeaponAnimContainer& AStruct_WeaponAnimContainer, int WeaponManufacturer, int WeaponType, int GripType, int ForeGripType, bool Debug_Pose_Array_, class UObject* __WorldContext, TArray<struct FName>* LiveWeaponPoses)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Player");

	UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Player_Params params;
	params.AStruct_WeaponAnimContainer = AStruct_WeaponAnimContainer;
	params.WeaponManufacturer = WeaponManufacturer;
	params.WeaponType = WeaponType;
	params.GripType = GripType;
	params.ForeGripType = ForeGripType;
	params.Debug_Pose_Array_ = Debug_Pose_Array_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveWeaponPoses != nullptr)
		*LiveWeaponPoses = params.LiveWeaponPoses;
}


// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.PostInitCheck
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxCharacterMovementComponent* GbxMoveComp                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOakCharacterMovementComponent* OakMoveComp                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Character_AnimFunctionLibrary_C::STATIC_PostInitCheck(class UObject* Object, class AOakCharacter* Character, class UGbxCharacterMovementComponent* GbxMoveComp, class UOakCharacterMovementComponent* OakMoveComp, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.PostInitCheck");

	UBP_Character_AnimFunctionLibrary_C_PostInitCheck_Params params;
	params.Object = Object;
	params.Character = Character;
	params.GbxMoveComp = GbxMoveComp;
	params.OakMoveComp = OakMoveComp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.Log Error
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Log_Text                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Character_AnimFunctionLibrary_C::STATIC_Log_Error(class UObject* Object, const struct FText& Log_Text, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.Log Error");

	UBP_Character_AnimFunctionLibrary_C_Log_Error_Params params;
	params.Object = Object;
	params.Log_Text = Log_Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.InitCharacterComponents
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter*           Character                      (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UGbxCharacterMovementComponent* GbxMoveComp                    (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UOakCharacterMovementComponent* OakMoveComp                    (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter*           Characteroutput                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UGbxCharacterMovementComponent* GbxCharacterMovement           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOakCharacterMovementComponent* OakCharacterMovement           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Character_AnimFunctionLibrary_C::STATIC_InitCharacterComponents(class APawn* Target, class UObject* __WorldContext, class AOakCharacter** Character, class UGbxCharacterMovementComponent** GbxMoveComp, class UOakCharacterMovementComponent** OakMoveComp, class AOakCharacter** Characteroutput, class UGbxCharacterMovementComponent** GbxCharacterMovement, class UOakCharacterMovementComponent** OakCharacterMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.InitCharacterComponents");

	UBP_Character_AnimFunctionLibrary_C_InitCharacterComponents_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
	if (GbxMoveComp != nullptr)
		*GbxMoveComp = params.GbxMoveComp;
	if (OakMoveComp != nullptr)
		*OakMoveComp = params.OakMoveComp;
	if (Characteroutput != nullptr)
		*Characteroutput = params.Characteroutput;
	if (GbxCharacterMovement != nullptr)
		*GbxCharacterMovement = params.GbxCharacterMovement;
	if (OakCharacterMovement != nullptr)
		*OakCharacterMovement = params.OakCharacterMovement;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
