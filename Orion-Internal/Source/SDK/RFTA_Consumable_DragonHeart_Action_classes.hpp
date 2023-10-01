#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_DragonHeart_Action_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C
// 0x0010 (0x0238 - 0x0228)
class UConsumable_DragonHeart_Action_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Time;                                                     // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealScalar;                                               // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C");
		return ptr;
	}


	void OnPostComputeStats();
	void OnActionStart();
	void ExecuteUbergraph_Consumable_DragonHeart_Action(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
