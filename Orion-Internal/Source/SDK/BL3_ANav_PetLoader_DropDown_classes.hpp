#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_PetLoader_DropDown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C
// 0x0010 (0x01B8 - 0x01A8)
class UANav_PetLoader_DropDown_C : public UGbxAction_NavAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void Loader_JumpEnd();
	void Loader_JumpStart();
	void ExecuteUbergraph_ANav_PetLoader_DropDown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
