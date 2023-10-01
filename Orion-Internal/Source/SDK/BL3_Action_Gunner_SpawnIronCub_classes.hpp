#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Gunner_SpawnIronCub_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C
// 0x0008 (0x0268 - 0x0260)
class UAction_Gunner_SpawnIronCub_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C");
		return ptr;
	}


	void AN_SpawnIronCub();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void AN_EnableDevice();
	void AN_DisableDevice();
	void OnBegin(class AActor** Actor);
	void AN_EnableHologram();
	void AN_DisableHologram();
	void ExecuteUbergraph_Action_Gunner_SpawnIronCub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
