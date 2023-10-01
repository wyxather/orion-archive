#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_SummonDigiClone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C
// 0x0008 (0x0288 - 0x0280)
class UAction_Operative_SummonDigiClone_C : public UAction_Operative_Digiclone_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C");
		return ptr;
	}


	void Failure_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
	void Success_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
	void OnBegin(class AActor** Actor);
	void AnimNotify_SpawnClones();
	void ExecuteUbergraph_Action_Operative_SummonDigiClone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
