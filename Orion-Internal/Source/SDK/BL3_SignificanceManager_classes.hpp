#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SignificanceManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SignificanceManager.SignificanceManager
// 0x0108 (0x0130 - 0x0028)
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET
	struct FSoftClassPath                              SignificanceManagerClassName;                             // 0x0118(0x0018) (Edit, Config, GlobalConfig, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}


	void UnregisterForTickOptim(class AActor* TickOptimActor);
	void OnTickActorEndPlay(class AActor* TickOptimActor, TEnumAsByte<EEndPlayReason> EndPlayReason);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
