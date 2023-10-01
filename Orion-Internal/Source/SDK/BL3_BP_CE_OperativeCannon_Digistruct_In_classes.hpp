#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_OperativeCannon_Digistruct_In_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_OperativeCannon_Digistruct_In.BP_CE_OperativeCannon_Digistruct_In_C
// 0x0008 (0x0150 - 0x0148)
class UBP_CE_OperativeCannon_Digistruct_In_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_OperativeCannon_Digistruct_In.BP_CE_OperativeCannon_Digistruct_In_C");
		return ptr;
	}


	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_In(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
