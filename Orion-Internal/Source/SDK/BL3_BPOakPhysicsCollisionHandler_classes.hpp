#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPOakPhysicsCollisionHandler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPOakPhysicsCollisionHandler.BPOakPhysicsCollisionHandler_C
// 0x0000 (0x0048 - 0x0048)
class UBPOakPhysicsCollisionHandler_C : public UGbxPhysicsCollisionHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPOakPhysicsCollisionHandler.BPOakPhysicsCollisionHandler_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
