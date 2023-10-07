#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xBF (0xBF - 0x0)
// UserDefinedStruct CommandMenuItem.CommandMenuItem
struct FCommandMenuItem
{
public:
	class FName                                  DisplayName_40_05A545CA41E80876B3D969BAED8FF6DA;   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DetailText_41_7D3D8E5042031DCAA102B29E4C514AFF;    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_MENU_TYPE                Type_61_FEB62AD241C0EC0A6E8C49980FACA778;          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECOMMAND_SUB_MENU_TYPE            SubType_62_C9A7B0B64740312219BC538C5DC7F099;       // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_126F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilitySetDataBase                   CommandSet_71_C4C29D854213EE706EE1C0B795A51702;    // 0x18(0x68)(Edit, BlueprintVisible)
	class FName                                  Option_36_5B93C83B4E5BE75527D870BDABE265AF;        // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  AddInfoText_44_959AAD0D4677AC56DD1051A29F848306;   // 0x88(0x18)(Edit, BlueprintVisible)
	bool                                         Enable_47_6D577581492EB280CCCC7DAD8CFD63B3;        // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NormalAttack_49_734E72C246BBF33FA9A4E3AD6D195835;  // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1270[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SortKey_52_81B8175E450E4086E9245DB8F462F1F8;       // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CommandSeal_63_F8CBB4F5429B5785A73EECBA54A049E2;   // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1271[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CommandID_57_918214544A04F21E8FCEBB9D9084FD2D;     // 0xAC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LearningAbility_60_8608E1EC45EADFECA8230D9E1F5D990F; // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         BoostMaxOnly_65_765DEC34493E9D36DA542BB60CAFC782;  // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PotentialityActionAbility_67_682E68ED49A798DCD9FB88A59693A5DD; // 0xB6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1272[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count_70_BBFA5C09441658BE1CADF6B71D238DE1;         // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AwakingInvadeMonster_73_C0458D194C7D3456AF49DFA4E68C5379; // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InventorMenu_75_ECF0CBD84BF0E16647276C86E738304D;  // 0xBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseGrowMagicBuff_77_8E091289430877085B41E88FC018FF7F; // 0xBE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


