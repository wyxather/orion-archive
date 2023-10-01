#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HYP_Shield_Oldridian_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C
// 0x0010 (0x0368 - 0x0358)
class UBP_HYP_Shield_Oldridian_C : public UBP_HYP_Shield_Basic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class ACharacter*                                  PlayerCharacter;                                          // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C");
		return ptr;
	}


	void StartShieldEffect();
	void StopShieldEffect();
	void ExecuteUbergraph_BP_HYP_Shield_Oldridian(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
