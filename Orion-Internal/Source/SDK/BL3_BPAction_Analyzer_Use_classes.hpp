#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAction_Analyzer_Use_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPAction_Analyzer_Use.BPAction_Analyzer_Use_C
// 0x0018 (0x0230 - 0x0218)
class UBPAction_Analyzer_Use_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AGbxSkeletalMeshActor*                       AnalyzerMesh;                                             // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGbxSkeletalMeshActor*                       AnalyzerMesh3;                                            // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPAction_Analyzer_Use.BPAction_Analyzer_Use_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Analyzer_Start();
	void Analyzer_Stop();
	void ExecuteUbergraph_BPAction_Analyzer_Use(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
