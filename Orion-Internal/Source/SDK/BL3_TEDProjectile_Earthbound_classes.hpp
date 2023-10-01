#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Earthbound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TEDProjectile_Earthbound.TEDProjectile_Earthbound_C
// 0x0014 (0x08E0 - 0x08CC)
class ATEDProjectile_Earthbound_C : public ATEDProjectile_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (Transient, DuplicateTransient)
	class ABPWeap_SM_TED_C*                            BPWeap;                                                   // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_Earthbound.TEDProjectile_Earthbound_C");
		return ptr;
	}


	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33(class AActor* Actor, int InstanceIndex);
	void ReceiveBeginPlay();
	void OnExplode();
	void ExecuteUbergraph_TEDProjectile_Earthbound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
