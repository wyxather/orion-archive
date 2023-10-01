#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Kick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetLoader_Kick.Action_PetLoader_Kick_C
// 0x0010 (0x0228 - 0x0218)
class UAction_PetLoader_Kick_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_Kick.Action_PetLoader_Kick_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void DoDamageNow();
	void ExecuteUbergraph_Action_PetLoader_Kick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
