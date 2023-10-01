#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Summoned_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_DigiClone_Summoned.Action_DigiClone_Summoned_C
// 0x0010 (0x0258 - 0x0248)
class UAction_DigiClone_Summoned_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               My_Owner;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DigiClone_Summoned.Action_DigiClone_Summoned_C");
		return ptr;
	}


	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_DigiClone_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
