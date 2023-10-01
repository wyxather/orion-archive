#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Cartel_TeleportIn_Thug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C
// 0x0028 (0x0188 - 0x0160)
class UBP_CE_Cartel_TeleportIn_Thug_C : public UBP_CE_Cartel_TeleportIn_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       DesiredTags_Badass;                                       // 0x0168(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C");
		return ptr;
	}


	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
