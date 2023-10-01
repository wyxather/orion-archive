#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Throw360_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Punk_Throw360.A_Punk_Throw360_C
// 0x0018 (0x0230 - 0x0218)
class UA_Punk_Throw360_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AGbxCharacter*                               MyCharacter;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MySelf;                                                   // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Punk_Throw360.A_Punk_Throw360_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Melee180Strike();
	void ExecuteUbergraph_A_Punk_Throw360(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
