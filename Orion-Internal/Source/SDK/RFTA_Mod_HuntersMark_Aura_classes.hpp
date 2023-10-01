#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_HuntersMark_Aura_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C
// 0x0065 (0x0328 - 0x02C3)
class UMod_HuntersMark_Aura_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              PlayerRadius;                                             // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              BonusCritChance;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class UActionComponent*, int>                 AppliedActionsMap;                                        // 0x02D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C");
		return ptr;
	}


	void OnActionRemoved(class UActionBase** Action);
	void Bind_and_add_action_id_to_map(class UActionComponent** Action_Component, int* Action_ID);
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Mod_HuntersMark_Aura(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
