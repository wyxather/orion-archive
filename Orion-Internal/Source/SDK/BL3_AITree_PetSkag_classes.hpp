#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PetSkag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITree_PetSkag.AITree_PetSkag_C
// 0x0018 (0x0188 - 0x0170)
class UAITree_PetSkag_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	struct FName                                       OwnerKeyName;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               BeastmasterOwner;                                         // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AITree_PetSkag.AITree_PetSkag_C");
		return ptr;
	}


	void ExecuteUbergraph_AITree_PetSkag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
