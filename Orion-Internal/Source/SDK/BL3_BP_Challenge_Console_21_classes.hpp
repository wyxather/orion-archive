#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_21_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_Console_21.BP_Challenge_Console_20_C
// 0x0010 (0x0270 - 0x0260)
class UBP_Challenge_Console_20_C : public UBP_Challenge_Console_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class AOakPlayerController*                        PlayerController;                                         // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Console_21.BP_Challenge_Console_20_C");
		return ptr;
	}


	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void AreaDiscovered(const struct FText& DisplayText, class UWwiseEvent* DiscoverySound);
	void ExecuteUbergraph_BP_Challenge_Console_21(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
