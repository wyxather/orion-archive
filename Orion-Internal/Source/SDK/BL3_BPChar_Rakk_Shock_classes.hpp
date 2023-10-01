#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Rakk_Shock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Rakk_Shock.BPChar_Rakk_Shock_C
// 0x000C (0x2484 - 0x2478)
class ABPChar_Rakk_Shock_C : public ABPChar_Rakk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2478(0x0008) (Transient, DuplicateTransient)
	float                                              ContagiousShockRange;                                     // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Rakk_Shock.BPChar_Rakk_Shock_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SpreadDamageAura(class AActor** SpreadToActor);
	void ExecuteUbergraph_BPChar_Rakk_Shock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
