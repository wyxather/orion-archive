#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Dodge_PetLoader_Bullet_Idle_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodge_PetLoader_Bullet_Idle_L.Dodge_PetLoader_Bullet_Idle_L_C
// 0x0010 (0x0228 - 0x0218)
class UDodge_PetLoader_Bullet_Idle_L_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_PetLoader_Bullet_Idle_L.Dodge_PetLoader_Bullet_Idle_L_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Loader_JumpStart();
	void Loader_JumpEnd();
	void ExecuteUbergraph_Dodge_PetLoader_Bullet_Idle_L(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
