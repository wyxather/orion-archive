#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function MenuHeader.MenuHeader_C.IsUIPartsRunning
struct UMenuHeader_C_IsUIPartsRunning_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MenuHeader.MenuHeader_C.IsPlayingAnim
struct UMenuHeader_C_IsPlayingAnim_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MenuHeader.MenuHeader_C.SetGameText_FormatText
struct UMenuHeader_C_SetGameText_FormatText_Params
{
public:
	class FName                                  FormatTextLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TextLabel;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MenuHeader.MenuHeader_C.Set Game TextLabel
struct UMenuHeader_C_Set_Game_TextLabel_Params
{
public:
	class FName                                  In_Label;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function MenuHeader.MenuHeader_C.SetText
struct UMenuHeader_C_SetText_Params
{
public:
	class FText                                  In_Text;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function MenuHeader.MenuHeader_C.ExecuteUbergraph_MenuHeader
struct UMenuHeader_C_ExecuteUbergraph_MenuHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


