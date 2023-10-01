#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Trinket_StormAmulet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Trinket_StormAmulet.Action_Trinket_StormAmulet_C
// 0x0001 (0x02C4 - 0x02C3)
class UAction_Trinket_StormAmulet_C : public UAction_Buff_C
{
public:
	bool                                               NewVar_1;                                                 // 0x02C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Trinket_StormAmulet.Action_Trinket_StormAmulet_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
