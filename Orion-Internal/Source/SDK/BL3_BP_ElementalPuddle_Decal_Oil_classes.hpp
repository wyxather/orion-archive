#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ElementalPuddle_Decal_Oil_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElementalPuddle_Decal_Oil.BP_ElementalPuddle_Decal_Oil_C
// 0x0008 (0x0630 - 0x0628)
class ABP_ElementalPuddle_Decal_Oil_C : public AElementalPuddle_Decal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0628(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalPuddle_Decal_Oil.BP_ElementalPuddle_Decal_Oil_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil(class UElementalInteractionData* State, bool bIsInitialState);
	void ExecuteUbergraph_BP_ElementalPuddle_Decal_Oil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
