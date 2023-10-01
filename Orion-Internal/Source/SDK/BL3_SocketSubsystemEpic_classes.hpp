#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SocketSubsystemEpic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SocketSubsystemEpic.EpicNetConnection
// 0x0008 (0x19A8 - 0x19A0)
class UEpicNetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x19A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemEpic.EpicNetConnection");
		return ptr;
	}

};


// Class SocketSubsystemEpic.EpicBeaconNetConnection
// 0x0000 (0x19A8 - 0x19A8)
class UEpicBeaconNetConnection : public UEpicNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemEpic.EpicBeaconNetConnection");
		return ptr;
	}

};


// Class SocketSubsystemEpic.EpicNetDriver
// 0x0008 (0x0580 - 0x0578)
class UEpicNetDriver : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                           // 0x0578(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemEpic.EpicNetDriver");
		return ptr;
	}

};


// Class SocketSubsystemEpic.EpicBeaconNetDriver
// 0x0000 (0x0580 - 0x0580)
class UEpicBeaconNetDriver : public UEpicNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemEpic.EpicBeaconNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
