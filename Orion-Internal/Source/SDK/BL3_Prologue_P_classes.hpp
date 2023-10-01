#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_P.Prologue_P_C
// 0x0008 (0x0480 - 0x0478)
class APrologue_P_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_P.Prologue_P_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Prologue_P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
