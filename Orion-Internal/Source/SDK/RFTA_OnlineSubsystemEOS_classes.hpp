#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_OnlineSubsystemEOS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemEOS.NetConnectionEOS
// 0x0008 (0x18F0 - 0x18E8)
class UNetConnectionEOS : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x18E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetConnectionEOS");
		return ptr;
	}

};


// Class OnlineSubsystemEOS.NetDriverEOS
// 0x0008 (0x0770 - 0x0768)
class UNetDriverEOS : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                           // 0x0768(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsUsingP2PSockets;                                       // 0x0769(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x076A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetDriverEOS");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
