#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PunkFemale_Dance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C
// 0x0008 (0x0078 - 0x0070)
class UARandom_PunkFemale_Dance_C : public UGbxAction_RandomContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0070(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_ARandom_PunkFemale_Dance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
