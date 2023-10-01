#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_Fling_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetJabbermon_Fling.A_PetJabbermon_Fling_C
// 0x0018 (0x0230 - 0x0218)
class UA_PetJabbermon_Fling_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Target;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       PetOwnerPawn;                                             // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_Fling.A_PetJabbermon_Fling_C");
		return ptr;
	}


	void BeginFling();
	void OnServerBegin(class AActor** Actor);
	void Notify_ShowPoop();
	void ExecuteUbergraph_A_PetJabbermon_Fling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
