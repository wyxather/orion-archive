#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_NPC_Combat_Lilith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C
// 0x0009 (0x10CC9 - 0x10CC0)
class UBPAnim_NPC_Combat_Lilith_C : public UBPAnim_NPC_Combat_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10CC0(0x0008) (Transient, DuplicateTransient)
	bool                                               RnR_Stance;                                               // 0x10CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_NPC_Combat_Lilith.BPAnim_NPC_Combat_Lilith_C");
		return ptr;
	}


	void OnStanceChanged();
	void AnimNotify_InjuredLoop();
	void ExecuteUbergraph_BPAnim_NPC_Combat_Lilith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
