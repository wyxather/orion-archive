#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_26_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_Console_26.BP_Challenge_Console_25_C
// 0x0018 (0x0278 - 0x0260)
class UBP_Challenge_Console_25_C : public UBP_Challenge_Console_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         KillMailRow;                                              // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Console_26.BP_Challenge_Console_25_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_BP_Challenge_Console_26(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
