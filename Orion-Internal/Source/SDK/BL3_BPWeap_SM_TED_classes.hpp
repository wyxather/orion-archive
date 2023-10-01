#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_TED_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SM_TED.BPWeap_SM_TED_C
// 0x0010 (0x0A68 - 0x0A58)
class ABPWeap_SM_TED_C : public ABPWeap_Tediore_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A58(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      TenGallon;                                                // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SM_TED.BPWeap_SM_TED_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeap_SM_TED(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
