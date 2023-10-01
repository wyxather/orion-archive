#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Dodge_Ape_Bullet_IdleR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C
// 0x0008 (0x0220 - 0x0218)
class UDodge_Ape_Bullet_IdleR_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Dodge_Ape_Bullet_IdleR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
