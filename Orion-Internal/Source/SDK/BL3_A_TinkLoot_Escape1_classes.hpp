#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkLoot_Escape1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_TinkLoot_Escape1.A_TinkLoot_Escape1_C
// 0x0010 (0x0248 - 0x0238)
class UA_TinkLoot_Escape1_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_TinkLoot_Escape1.A_TinkLoot_Escape1_C");
		return ptr;
	}


	void OnServerBegin(class AActor** Actor);
	void Escaped();
	void TinkLockHitReact();
	void ExecuteUbergraph_A_TinkLoot_Escape1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
