#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_EchoDevice_InsertCartridge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C
// 0x0008 (0x0220 - 0x0218)
class UAction_EchoDevice_InsertCartridge_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void PlayEchoDeviceScreen();
	void ExecuteUbergraph_Action_EchoDevice_InsertCartridge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
