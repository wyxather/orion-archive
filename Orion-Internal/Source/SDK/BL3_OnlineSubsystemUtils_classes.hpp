#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OnlineSubsystemUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.BeaconChannel
// 0x0008 (0x0070 - 0x0068)
class UBeaconChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.BeaconChannel");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.DownloadableContentData
// 0x0048 (0x0078 - 0x0030)
class UDownloadableContentData : public UGbxDataAsset
{
public:
	class UDownloadablePackageData*                    PackageData;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDownloadableContentLicenseData*             LicenseData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           ContentId;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FText                                       ContentDisplayName;                                       // 0x0048(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       NewDLCDisplayName;                                        // 0x0060(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadableContentData");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.DownloadableContentLicenseData
// 0x0030 (0x0060 - 0x0030)
class UDownloadableContentLicenseData : public UGbxDataAsset
{
public:
	class UDownloadablePackageData*                    PackageData;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LicenseName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0040(0x0028) (Edit, DisableEditOnInstance)
	uint32_t                                           LicenseId;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadableContentLicenseData");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.DownloadablePackageData
// 0x0040 (0x0070 - 0x0030)
class UDownloadablePackageData : public UPrimaryDataAsset
{
public:
	uint32_t                                           PackageId;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class FString                                      PackageDisplayName;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DLCName;                                                  // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDownloadableContentLicenseData*>     Licenses;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadablePackageData");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.DownloadablePackageLicenseItem
// 0x0008 (0x0038 - 0x0030)
class UDownloadablePackageLicenseItem : public UDataAsset
{
public:
	uint32_t                                           LicenseMask;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DownloadablePackageLicenseItem");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.IpNetDriver
// 0x0038 (0x0578 - 0x0540)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	unsigned char                                      LogPortUnreach : 1;                                       // 0x0548(0x0001) (Config)
	unsigned char                                      AllowPlayerPortUnreach : 1;                               // 0x0548(0x0001) (Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	uint32_t                                           MaxPortCountToTry;                                        // 0x054C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0550(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.IpBeaconNetDriver
// 0x0000 (0x0578 - 0x0578)
class UIpBeaconNetDriver : public UIpNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpBeaconNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.IpConnection
// 0x0030 (0x19A0 - 0x1970)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x1970(0x0028) MISSED OFFSET
	float                                              TravelTimeout;                                            // 0x1998(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x199C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x00A0 (0x00C8 - 0x0028)
class UOnlineBeacon : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	float                                              BeaconConnectionInitialTimeout;                           // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BeaconConnectionTimeout;                                  // 0x003C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       NetDriverName;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0050(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x00D0 (0x0198 - 0x00C8)
class UOnlineBeaconClient : public UOnlineBeacon
{
public:
	class UNetConnection*                              BeaconConnection;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	EBeaconConnectionState                             ConnectionState;                                          // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC7];                                      // 0x00D1(0x00C7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00A8 (0x0170 - 0x00C8)
class UOnlineBeaconHost : public UOnlineBeacon
{
public:
	int                                                ListenPort;                                               // 0x00C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAllowedRemotePlayers;                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x00B8 (0x00E0 - 0x0028)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (0x0050 - 0x0038)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0170 (0x0198 - 0x0028)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0028(0x0168) MISSED OFFSET
	bool                                               bIsFromInvite;                                            // 0x0190(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHandlingDisconnect;                                      // 0x0191(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0192(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0010 (0x0660 - 0x0650)
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0650(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}


	bool IsIdling();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
