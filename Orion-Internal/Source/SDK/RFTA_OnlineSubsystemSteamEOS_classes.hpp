#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_OnlineSubsystemSteamEOS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteamEOS.GunfireCrossplayManager
// 0x0018 (0x0048 - 0x0030)
class UGunfireCrossplayManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamEOS.GunfireCrossplayManager");
		return ptr;
	}


	void LoginPersistenceAuth();
	void LoginEpicFromSteam(bool* bCreateHeadlessAccount);
	void LinkEpicFromSteam();
	class UGunfireCrossplayManager* STATIC_GetGunfireCrossplayManager(class UObject** WorldContextObject);
	void DeletePersistenceAuth();
	void BeginCrossplayLogin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
