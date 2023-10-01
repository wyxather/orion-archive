#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Resonator_Success_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C
// 0x0018 (0x0250 - 0x0238)
class UAction_Melee_Resonator_Success_C : public UAction_Melee_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class ABP_Eridian_Resonator_C*                     ResonatorMesh;                                            // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Eridian_Resonator_C*                     ResonatorMesh3;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Resonator_Success.Action_Melee_Resonator_Success_C");
		return ptr;
	}


	void OnBeginBringUpWeapon(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Resonator_Start();
	void Resonator_Stop();
	void ExecuteUbergraph_Action_Melee_Resonator_Success(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
