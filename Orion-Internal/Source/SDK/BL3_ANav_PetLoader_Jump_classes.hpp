#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_PetLoader_Jump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_PetLoader_Jump.ANav_PetLoader_Jump_C
// 0x0010 (0x02F8 - 0x02E8)
class UANav_PetLoader_Jump_C : public UGbxAction_NavJump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_PetLoader_Jump.ANav_PetLoader_Jump_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void Loader_JumpEnd();
	void Loader_JumpStart();
	void ExecuteUbergraph_ANav_PetLoader_Jump(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
