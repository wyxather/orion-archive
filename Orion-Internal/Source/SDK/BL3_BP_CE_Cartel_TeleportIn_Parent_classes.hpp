#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Cartel_TeleportIn_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C
// 0x0018 (0x0160 - 0x0148)
class UBP_CE_Cartel_TeleportIn_Parent_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)
	int                                                LootPoolTypeByTag;                                        // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UClass*                                      CurrentCE;                                                // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C");
		return ptr;
	}


	void OnDeath_CartelThugCE(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
