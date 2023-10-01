#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_ThrowRunning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C
// 0x0008 (0x0250 - 0x0248)
class UA_PsychoMale_Shared_ThrowRunning_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ThrowAndRespawnMelee_Begin();
	void ThrowAndRespawnMelee_End();
	void ThrowAndRespawnMelee_Abort();
	void ExecuteUbergraph_A_PsychoMale_Shared_ThrowRunning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
