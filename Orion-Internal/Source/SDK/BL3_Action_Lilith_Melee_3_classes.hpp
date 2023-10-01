#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Lilith_Melee_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Lilith_Melee_3.Action_Lilith_Melee_2_C
// 0x0010 (0x0258 - 0x0248)
class UAction_Lilith_Melee_2_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               Char;                                                     // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Lilith_Melee_3.Action_Lilith_Melee_2_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void LilithMelee();
	void ExecuteUbergraph_Action_Lilith_Melee_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
