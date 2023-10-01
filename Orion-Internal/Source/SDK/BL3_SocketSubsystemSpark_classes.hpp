#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SocketSubsystemSpark_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SocketSubsystemSpark.SparkNetConnection
// 0x0000 (0x19A0 - 0x19A0)
class USparkNetConnection : public UIpConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkNetConnection");
		return ptr;
	}

};


// Class SocketSubsystemSpark.SparkBeaconNetConnection
// 0x0000 (0x19A0 - 0x19A0)
class USparkBeaconNetConnection : public USparkNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkBeaconNetConnection");
		return ptr;
	}

};


// Class SocketSubsystemSpark.SparkNetDriver
// 0x0018 (0x0590 - 0x0578)
class USparkNetDriver : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                           // 0x0578(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0579(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkNetDriver");
		return ptr;
	}

};


// Class SocketSubsystemSpark.SparkBeaconNetDriver
// 0x0000 (0x0590 - 0x0590)
class USparkBeaconNetDriver : public USparkNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocketSubsystemSpark.SparkBeaconNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
