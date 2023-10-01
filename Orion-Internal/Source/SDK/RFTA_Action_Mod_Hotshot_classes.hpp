#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Hotshot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_Hotshot.Action_Mod_Hotshot_C
// 0x000D (0x02D0 - 0x02C3)
class UAction_Mod_Hotshot_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Hotshot.Action_Mod_Hotshot_C");
		return ptr;
	}


	void EvocationTraitDamageMod(float* ModDamage);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void OnPostComputeStats();
	void OnActionStart();
	void OnCharacterEvent(struct FName* EventName);
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_Hotshot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
