#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PunkFemale_Dance1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C
// 0x0008 (0x0220 - 0x0218)
class UAction_PunkFemale_Dance1_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_PunkFemale_Dance1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
