#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPGameMode_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPGameMode_Default.BPGameMode_Default_C
// 0x0008 (0x05F8 - 0x05F0)
class ABPGameMode_Default_C : public AOakGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPGameMode_Default.BPGameMode_Default_C");
		return ptr;
	}


	class AActor* FindPlayerStart(class AController** Player, class FString* IncomingName);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
