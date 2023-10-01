#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Achievement_Armor_Set.Achievement_Armor_Set
// 0x0078
struct FAchievement_Armor_Set
{
	TSoftObjectPtr<class UClass>                       Armor_Head_21_3453AC17447FD77A291198902E675DCA;           // 0x0000(0x0028) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Armor_Body_22_2CA41E4A4B70142AC97F3B81A342B5C6;           // 0x0028(0x0028) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       Armor_Legs_23_AB5F3FEB428F235D5B5938B85D804AAF;           // 0x0050(0x0028) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
