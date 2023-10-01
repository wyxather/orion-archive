#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_SporeShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_SporeShot.Action_Mod_SporeShot_C
// 0x0008 (0x0230 - 0x0228)
class UAction_Mod_SporeShot_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_SporeShot.Action_Mod_SporeShot_C");
		return ptr;
	}


	void GetPlayerAsCause(class AActor** Cause);
	void GetDamage(float* Damage);
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_SporeShot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
