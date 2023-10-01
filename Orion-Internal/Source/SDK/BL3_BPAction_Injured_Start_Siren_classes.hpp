#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAction_Injured_Start_Siren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C
// 0x0008 (0x0228 - 0x0220)
class UBPAction_Injured_Start_Siren_C : public UBPAction_Injured_Start_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C");
		return ptr;
	}


	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void FadeOutArms();
	void ExecuteUbergraph_BPAction_Injured_Start_Siren(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
