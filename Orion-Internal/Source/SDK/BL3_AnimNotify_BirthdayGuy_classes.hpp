#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AnimNotify_BirthdayGuy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_BirthdayGuy.AnimNotify_BirthdayGuy_C
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_BirthdayGuy_C : public UAnimNotify
{
public:
	struct FScriptMulticastDelegate                    BirthdayGuyHasDied;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_BirthdayGuy.AnimNotify_BirthdayGuy_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	void BirthdayGuyHasDied__DelegateSignature(class USkeletalMeshComponent* NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
