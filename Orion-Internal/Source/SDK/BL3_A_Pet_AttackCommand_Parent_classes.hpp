#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_AttackCommand_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C
// 0x0010 (0x0228 - 0x0218)
class UA_Pet_AttackCommand_Parent_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UBPEventHub_Beastmaster_C*                   EventHubOwner;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C");
		return ptr;
	}


	void AttackCommandUsed();
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_A_Pet_AttackCommand_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
