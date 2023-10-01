#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_16_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_OperativeDLC_16.Passive_OperativeDLC_15_C
// 0x0008 (0x01B8 - 0x01B0)
class UPassive_OperativeDLC_15_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_16.Passive_OperativeDLC_15_C");
		return ptr;
	}


	void OnActivated();
	void OnResumed();
	void OnPaused();
	void OnDeactivated();
	void ExecuteUbergraph_Passive_OperativeDLC_16(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
