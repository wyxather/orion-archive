#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CharacterMod_Bruiser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterMod_Bruiser.CharacterMod_Bruiser_C
// 0x0168 (0x0390 - 0x0228)
class UCharacterMod_Bruiser_C : public UCharacterMod_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDamageInfo                                 NewVar_1;                                                 // 0x0230(0x0160) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterMod_Bruiser.CharacterMod_Bruiser_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void ExecuteUbergraph_CharacterMod_Bruiser(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
