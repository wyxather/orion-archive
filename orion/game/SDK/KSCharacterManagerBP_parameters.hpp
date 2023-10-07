#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.IsReady
struct AKSCharacterManagerBP_C_IsReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetVisibilityHunterPartner
struct AKSCharacterManagerBP_C_SetVisibilityHunterPartner_Params
{
public:
	class AKSCharacterBase*                      HunterChara;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSPartnerCharacter_C*                 PartnerChara;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPartnerCharaVisibility;                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.InitAfterLoadSaveData
struct AKSCharacterManagerBP_C_InitAfterLoadSaveData_Params
{
public:
	class UMJSaveData*                           SaveData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x259 (0x259 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.EquipItem
struct AKSCharacterManagerBP_C_EquipItem_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EFB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemLabel;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2D9 (0x2D9 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshEpilogueParty
struct AKSCharacterManagerBP_C_RefreshEpilogueParty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.FullRecoveryCharacter
struct AKSCharacterManagerBP_C_FullRecoveryCharacter_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RemoveAllEquipment
struct AKSCharacterManagerBP_C_RemoveAllEquipment_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RegisterNpcToFollowNPCList
struct AKSCharacterManagerBP_C_RegisterNpcToFollowNPCList_Params
{
public:
	enum class EMJFieldCommandType               FCType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshPartnerCharacters
struct AKSCharacterManagerBP_C_RefreshPartnerCharacters_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddPartnerCharacter
struct AKSCharacterManagerBP_C_AddPartnerCharacter_Params
{
public:
	class AKSCharacterBase*                      Follow;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.BeginPlayers
struct AKSCharacterManagerBP_C_BeginPlayers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetPlayerCurrentArea
struct AKSCharacterManagerBP_C_GetPlayerCurrentArea_Params
{
public:
	enum class ELEVEL_AREA_TYPE                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xEFC (0xEFC - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetResidentResourceLabelList
struct AKSCharacterManagerBP_C_GetResidentResourceLabelList_Params
{
public:
	TArray<class FName>                          LabelList;                                         // 0x0(0x10)(Parm, OutParm)
	bool                                         ContainNpcResource;                                // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.InitParams
struct AKSCharacterManagerBP_C_InitParams_Params
{
public:
	struct FVector                               MovePoint;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Dir;                                               // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetBarCharacterEnable
struct AKSCharacterManagerBP_C_SetBarCharacterEnable_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnable;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x26 (0x26 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RemoveBarCharacterAll
struct AKSCharacterManagerBP_C_RemoveBarCharacterAll_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetBarCharacterEnable_OLD
struct AKSCharacterManagerBP_C_SetBarCharacterEnable_OLD_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnable;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddBarCharacter
struct AKSCharacterManagerBP_C_AddBarCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x8(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Dir;                                               // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F04[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharIndex;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F05[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetupPlayableCharacterData
struct AKSCharacterManagerBP_C_SetupPlayableCharacterData_Params
{
public:
	enum class EPlayableCharacterID              PlayerID;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5D (0x5D - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetPartyCharacter
struct AKSCharacterManagerBP_C_GetPartyCharacter_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F06[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshFollowCharacters
struct AKSCharacterManagerBP_C_RefreshFollowCharacters_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x27C (0x27C - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshFollowCharacter
struct AKSCharacterManagerBP_C_RefreshFollowCharacter_Params
{
public:
	class AKSCharacterBase*                      Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x92 (0x92 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SetPartyHouseIn
struct AKSCharacterManagerBP_C_SetPartyHouseIn_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OffsetHeight;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HouseOut;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bNotPartyRefresh;                                  // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x371 (0x371 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.RefreshPartyCharacter
struct AKSCharacterManagerBP_C_RefreshPartyCharacter_Params
{
public:
	bool                                         bSkipLoadResource;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddPartyCharacter
struct AKSCharacterManagerBP_C_AddPartyCharacter_Params
{
public:
	class AKSCharacterBase*                      Follow;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PartyIndex;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddEventCharacter
struct AKSCharacterManagerBP_C_AddEventCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x8(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Dir;                                               // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.Callback Player Load DEPRICATED
struct AKSCharacterManagerBP_C_Callback_Player_Load_DEPRICATED_Params
{
public:
	TArray<class UObject*>                       Loaded;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x41 (0x41 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddFieldCharacter
struct AKSCharacterManagerBP_C_AddFieldCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x8(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Dir;                                               // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F10[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.AddPlayerCharacter
struct AKSCharacterManagerBP_C_AddPlayerCharacter_Params
{
public:
	enum class EPlayableCharacterID              PlayerID;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Dir;                                               // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F12[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.SpawnChara
struct AKSCharacterManagerBP_C_SpawnChara_Params
{
public:
	enum class EKSCharacterCategory              Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F13[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Class;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Animation;                                         // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   Dir;                                               // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F14[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      Character;                                         // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.GetPlayer
struct AKSCharacterManagerBP_C_GetPlayer_Params
{
public:
	class AKSPlayerCharacter_C*                  Player;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.ReceiveTick
struct AKSCharacterManagerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function KSCharacterManagerBP.KSCharacterManagerBP_C.ExecuteUbergraph_KSCharacterManagerBP
struct AKSCharacterManagerBP_C_ExecuteUbergraph_KSCharacterManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


