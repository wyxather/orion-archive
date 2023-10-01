#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_Ingenuity_BarrelGrab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C
// 0x0010 (0x0248 - 0x0238)
class UA_PetJabbermon_Ingenuity_BarrelGrab_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Barrel;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C");
		return ptr;
	}


	void Notify_Barrel_Attach();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_Barrel_Align();
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
