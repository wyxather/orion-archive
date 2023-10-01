#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_Teleport_Uncloak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Punk_Anointed_Teleport_Uncloak.A_Punk_Anointed_Teleport_Uncloak_C
// 0x0008 (0x0250 - 0x0248)
class UA_Punk_Anointed_Teleport_Uncloak_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Punk_Anointed_Teleport_Uncloak.A_Punk_Anointed_Teleport_Uncloak_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_A_Punk_Anointed_Teleport_Uncloak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
