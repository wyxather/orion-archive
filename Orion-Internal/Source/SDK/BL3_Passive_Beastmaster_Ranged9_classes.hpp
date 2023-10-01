#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged9_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C
// 0x0008 (0x01B8 - 0x01B0)
class UPassive_Beastmaster_Ranged9_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C");
		return ptr;
	}


	void OnActivated();
	void OnPaused();
	void OnDeactivated();
	void OnResumed();
	void ExecuteUbergraph_Passive_Beastmaster_Ranged9(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
