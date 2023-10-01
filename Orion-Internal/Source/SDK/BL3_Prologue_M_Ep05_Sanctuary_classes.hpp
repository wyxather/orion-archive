#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_Ep05_Sanctuary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_M_Ep05_Sanctuary.Prologue_M_Ep05_Sanctuary_C
// 0x0008 (0x0480 - 0x0478)
class APrologue_M_Ep05_Sanctuary_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_M_Ep05_Sanctuary.Prologue_M_Ep05_Sanctuary_C");
		return ptr;
	}


	void MRE_04LeavePandora();
	void ExecuteUbergraph_Prologue_M_Ep05_Sanctuary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
