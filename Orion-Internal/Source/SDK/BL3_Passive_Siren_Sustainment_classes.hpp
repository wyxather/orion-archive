#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_Sustainment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_Sustainment.Passive_Siren_Sustainment_C
// 0x0030 (0x0218 - 0x01E8)
class UPassive_Siren_Sustainment_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Siren_Sustainment;// 0x01F0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_Sustainment.Passive_Siren_Sustainment_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Passive_Siren_Sustainment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
