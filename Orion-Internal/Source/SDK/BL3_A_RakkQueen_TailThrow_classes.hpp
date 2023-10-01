#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_RakkQueen_TailThrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C
// 0x001C (0x0234 - 0x0218)
class UA_RakkQueen_TailThrow_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       MyPawn;                                                   // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityScale;                                            // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C");
		return ptr;
	}


	void GbxAsyncRequest_Spawned_948ADA844A527CBC8EFFFF8AD5E604D1(class AActor* Actor, int InstanceIndex);
	void OnBegin(class AActor** Actor);
	void Notify_ThrowProjectile();
	void ExecuteUbergraph_A_RakkQueen_TailThrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
