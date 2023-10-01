#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SkagRare01_ThrowProj_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C
// 0x0010 (0x0258 - 0x0248)
class UAction_SkagRare01_ThrowProj_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class APawn*                                       MyPawn;                                                   // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C");
		return ptr;
	}


	void GbxAsyncRequest_Spawned_746AF8DD47170EEDBB80A2B0AC5F5100(class AActor* Actor, int InstanceIndex);
	void Notify_Throw();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_SkagRare01_ThrowProj(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
