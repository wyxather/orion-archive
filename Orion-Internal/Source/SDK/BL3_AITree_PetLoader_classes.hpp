#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PetLoader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AITree_PetLoader.AITree_PetLoader_C
// 0x0018 (0x0188 - 0x0170)
class UAITree_PetLoader_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	struct FName                                       OwnerKeyName;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               BeastmasterOwner;                                         // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_PetLoader.AITree_PetLoader_C");
		return ptr;
	}


	void BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_PetLoader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
