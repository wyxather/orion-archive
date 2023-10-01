#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldMod.BP_ShieldMod_C
// 0x0018 (0x0600 - 0x05E8)
class ABP_ShieldMod_C : public AShield
{
public:
	float                                              IgnoreManufacturerName;                                   // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAttributeFloat                          ShieldAttribute_ElementalResistance;                      // 0x05EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      ShieldBuddy_MessyBreakup;                                 // 0x05F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldMod.BP_ShieldMod_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
