#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DA_AttributeEffectSet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DA_AttributeEffectSet.DA_AttributeEffectSet_C
// 0x0010 (0x0040 - 0x0030)
class UDA_AttributeEffectSet_C : public UGbxDataAssetBlueprintable
{
public:
	TArray<struct FAttributeEffectData>                AttributeEffects;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_AttributeEffectSet.DA_AttributeEffectSet_C");
		return ptr;
	}


	void ApplyAttributeEffectSet(class AActor* ModifierContext, class AActor* ModifierTarget, TArray<struct FGbxAttributeModifierHandle>* AppliedAttributeEffects);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
