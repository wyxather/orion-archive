#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_Pet_Fidgets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARand_Pet_Fidgets.ARand_Pet_Fidgets_C
// 0x0009 (0x0241 - 0x0238)
class UARand_Pet_Fidgets_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	EOakActionAbilityPetType                           PetType;                                                  // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARand_Pet_Fidgets.ARand_Pet_Fidgets_C");
		return ptr;
	}


	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_PetSpawnAmmo();
	void ExecuteUbergraph_ARand_Pet_Fidgets(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
