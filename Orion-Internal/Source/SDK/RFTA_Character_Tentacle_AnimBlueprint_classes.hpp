#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Tentacle_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Tentacle_AnimBlueprint.Character_Tentacle_AnimBlueprint_C
// 0x0430 (0x0EE0 - 0x0AB0)
class UCharacter_Tentacle_AnimBlueprint_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_74A37CC34B253DB06B17DF91A78CF698;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_C646A3DA42218ACFA63354A2B94F4A30;// 0x0AD8(0x03C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_186607AA473DF2FE5B10F3ACE6D72E3D;      // 0x0E98(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Tentacle_AnimBlueprint.Character_Tentacle_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Tentacle_AnimBlueprint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
