#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tannis_Loop_ConsoleStruggle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C
// 0x0018 (0x03D0 - 0x03B8)
class UA_Tannis_Loop_ConsoleStruggle_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FXLHandGlow;                                              // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FXRHandGlow;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_A_Tannis_Loop_ConsoleStruggle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
