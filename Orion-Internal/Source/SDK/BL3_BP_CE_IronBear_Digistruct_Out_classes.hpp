#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_IronBear_Digistruct_Out_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_IronBear_Digistruct_Out.BP_CE_IronBear_Digistruct_Out_C
// 0x0010 (0x0158 - 0x0148)
class UBP_CE_IronBear_Digistruct_Out_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               OakCharacter;                                             // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_IronBear_Digistruct_Out.BP_CE_IronBear_Digistruct_Out_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_BP_CE_IronBear_Digistruct_Out(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
