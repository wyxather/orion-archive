#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_Reload_M3B1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_JAK_Reload_M3B1.Action_SR_JAK_Reload_M3B1_C
// 0x0008 (0x0228 - 0x0220)
class UAction_SR_JAK_Reload_M3B1_C : public UAction_Weapon_Reload_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_Reload_M3B1.Action_SR_JAK_Reload_M3B1_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_SR_JAK_Reload_M3B1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
