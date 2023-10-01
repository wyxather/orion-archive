#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Mus_Prologue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mus_Prologue.BP_Mus_Prologue_C
// 0x0008 (0x0508 - 0x0500)
class ABP_Mus_Prologue_C : public AOakMusicProvider
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mus_Prologue.BP_Mus_Prologue_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void StopLevelMusic();
	void StartLevelMusic();
	void ExecuteUbergraph_BP_Mus_Prologue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
