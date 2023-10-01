#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StatusEffect_Instant_Corrosive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_StatusEffect_Instant_Corrosive.Action_StatusEffect_Instant_Corrosive_C
// 0x0008 (0x0270 - 0x0268)
class UAction_StatusEffect_Instant_Corrosive_C : public UAction_StatusEffect_Instant_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StatusEffect_Instant_Corrosive.Action_StatusEffect_Instant_Corrosive_C");
		return ptr;
	}


	void OnValueChanged(float* OldValue, float* NewValue);
	void ExecuteUbergraph_Action_StatusEffect_Instant_Corrosive(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
