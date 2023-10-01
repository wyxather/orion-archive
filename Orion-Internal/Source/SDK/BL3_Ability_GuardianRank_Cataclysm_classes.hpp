#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Cataclysm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_Cataclysm.Ability_GuardianRank_Cataclysm_C
// 0x0010 (0x01C0 - 0x01B0)
class UAbility_GuardianRank_Cataclysm_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	class UDamageCauserComponent*                      DamageCauser;                                             // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_Cataclysm.Ability_GuardianRank_Cataclysm_C");
		return ptr;
	}


	void ExecuteUbergraph_Ability_GuardianRank_Cataclysm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
