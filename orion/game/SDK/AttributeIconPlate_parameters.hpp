#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x49 (0x49 - 0x0)
// Function AttributeIconPlate.AttributeIconPlate_C.OverrideAttributeColor
struct UAttributeIconPlate_C_OverrideAttributeColor_Params
{
public:
	enum class EBATTLE_COMMAND_ATTRIBUTE_ICON    BaseAttributeIcon;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   OverrideAttributeColor;                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AttributeIconPlate.AttributeIconPlate_C.SetEnchantAttribute
struct UAttributeIconPlate_C_SetEnchantAttribute_Params
{
public:
	enum class EATTRIBUTE_TYPE                   AttributeType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function AttributeIconPlate.AttributeIconPlate_C.ChangeCommandAttribute
struct UAttributeIconPlate_C_ChangeCommandAttribute_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Instant;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DirNext;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SwitchAnimation;                                   // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF4 (0xF4 - 0x0)
// Function AttributeIconPlate.AttributeIconPlate_C.SetCommandAttribute
struct UAttributeIconPlate_C_SetCommandAttribute_Params
{
public:
	TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON> Attibute;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         AutoScroll;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SwitchAttribute;                                   // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CommandDisable;                                    // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AttributeIconPlate.AttributeIconPlate_C.SetVisibilityArrow
struct UAttributeIconPlate_C_SetVisibilityArrow_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function AttributeIconPlate.AttributeIconPlate_C.ExecuteUbergraph_AttributeIconPlate
struct UAttributeIconPlate_C_ExecuteUbergraph_AttributeIconPlate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


