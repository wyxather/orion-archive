#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C
// 0x0090 (0x02F0 - 0x0260)
class UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         MailTable;                                                // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UInventoryPartData>           OutrunnerPart;                                            // 0x0278(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UInventoryPartData>           RevolverPart;                                             // 0x02A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UInventoryPartData>           TechnicalPart;                                            // 0x02C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
