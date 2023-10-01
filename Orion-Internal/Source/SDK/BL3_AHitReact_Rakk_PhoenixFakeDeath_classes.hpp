#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Rakk_PhoenixFakeDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C
// 0x0010 (0x01E0 - 0x01D0)
class UAHitReact_Rakk_PhoenixFakeDeath_C : public UGbxAction_PhysicalAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Rakk_PhoenixFakeDeath.AHitReact_Rakk_PhoenixFakeDeath_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void ExecuteUbergraph_AHitReact_Rakk_PhoenixFakeDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
