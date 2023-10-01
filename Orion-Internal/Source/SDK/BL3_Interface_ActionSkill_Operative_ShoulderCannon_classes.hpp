#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_ActionSkill_Operative_ShoulderCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_ActionSkill_Operative_ShoulderCannon_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C");
		return ptr;
	}


	void StartShoulderCannonMod3Timer(bool* res);
	void GetCannonRef(class AActor** Ref);
	void IsShouldCannonModSlotted(TEnumAsByte<EShoulderCannonMods> Mod, bool* res);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
