#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_ResourceLock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAspect_ResourceLock.AIAspect_ResourceLock_C
// 0x0017 (0x0117 - 0x0100)
class UAIAspect_ResourceLock_C : public UAIAspect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)
	struct FName                                       Reason;                                                   // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               God;                                                      // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Demigod;                                                  // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AIThinking;                                               // 0x0112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Movement;                                                 // 0x0113(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Rotation;                                                 // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitReactions;                                             // 0x0115(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Dodging;                                                  // 0x0116(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAspect_ResourceLock.AIAspect_ResourceLock_C");
		return ptr;
	}


	void BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_ResourceLock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_ResourceLock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void ExecuteUbergraph_AIAspect_ResourceLock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
