#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_Tenacious_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C
// 0x0038 (0x01E8 - 0x01B0)
class UPassive_Gunner_Tenacious_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	bool                                               bShieldsRefilled;                                         // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Passive_Gunner_Tenacious;// 0x01C0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C");
		return ptr;
	}


	void OnActivated();
	void ShieldDepleted_TencaiousDefense(const struct FGameResourcePoolReference& ResourcePool);
	void OnDeactivated();
	void OnFilled_TencaciousDefense(const struct FGameResourcePoolReference& ResourcePool);
	void SetTriggerStateByShieldAmount();
	void ExecuteUbergraph_Passive_Gunner_Tenacious(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
