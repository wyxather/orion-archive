#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Crew_AllComplete_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C
// 0x0018 (0x0278 - 0x0260)
class UALI_Challenge_Crew_AllComplete_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         DataTableRow;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_ALI_Challenge_Crew_AllComplete(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
