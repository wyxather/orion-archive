#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_MissileBarrage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C
// 0x00B0 (0x02D8 - 0x0228)
class UAction_PetLoader_MissileBarrage_C : public UA_Pet_AttackCommand_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	struct FName                                       SpawnSocket;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       Damage;                                                   // 0x0238(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakCharacter*                               Pet;                                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PetTarget;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeFloatCurve                          AngleCurve;                                               // 0x0260(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C");
		return ptr;
	}


	void AN_FireLeftShot();
	void AN_FireRightShot();
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_PetLoader_MissileBarrage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
