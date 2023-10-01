#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_ClassMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C
// 0x0017 (0x0280 - 0x0269)
class UBP_Challenge_CharacterSpecific_ClassMod_C : public UBP_Challenge_CharacterSpecific_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               PlayerCharacter;                                          // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C");
		return ptr;
	}


	void CheckClassMod(class AActor* EquippedActor, class UInventorySlotData* SlotData);
	void SetBinds(class AOakCharacter** Character, bool* BindSet);
	void ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
