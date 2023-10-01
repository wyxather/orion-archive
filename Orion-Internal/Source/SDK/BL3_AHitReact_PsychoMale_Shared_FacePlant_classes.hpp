#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_PsychoMale_Shared_FacePlant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C
// 0x0010 (0x0258 - 0x0248)
class UAHitReact_PsychoMale_Shared_FacePlant_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UDamageCauserComponent*                      MyDamageCausingComponent;                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Faceplant();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_AHitReact_PsychoMale_Shared_FacePlant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
