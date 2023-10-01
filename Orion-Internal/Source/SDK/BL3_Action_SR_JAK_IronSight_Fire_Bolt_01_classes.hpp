#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_IronSight_Fire_Bolt_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_JAK_IronSight_Fire_Bolt_01.Action_SR_JAK_IronSight_Fire_Bolt_01_C
// 0x0000 (0x0218 - 0x0218)
class UAction_SR_JAK_IronSight_Fire_Bolt_01_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_IronSight_Fire_Bolt_01.Action_SR_JAK_IronSight_Fire_Bolt_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
