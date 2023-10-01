#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAnimRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxAnimRuntime.AnimNotify_Delegate
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_Delegate : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAnimRuntime.AnimNotify_Delegate");
		return ptr;
	}

};


// Class GbxAnimRuntime.AnimNotify_GbxCustomEvent
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_GbxCustomEvent : public UAnimNotify
{
public:
	struct FName                                       EventName;                                                // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGbxCustomEventContext                             EventContext;                                             // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRunOnServer : 1;                                         // 0x0041(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bRunOnClient : 1;                                         // 0x0041(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bRunIfLocalPlayer : 1;                                    // 0x0041(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      bTriggerOnFirstPersonMesh : 1;                            // 0x0041(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAnimRuntime.AnimNotify_GbxCustomEvent");
		return ptr;
	}

};


// Class GbxAnimRuntime.AnimNotify_GbxClosedCaptionEvent
// 0x0018 (0x0060 - 0x0048)
class UAnimNotify_GbxClosedCaptionEvent : public UAnimNotify_GbxCustomEvent
{
public:
	struct FText                                       ClosedCaption;                                            // 0x0048(0x0028) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAnimRuntime.AnimNotify_GbxClosedCaptionEvent");
		return ptr;
	}

};


// Class GbxAnimRuntime.AnimNotify_ToggleClothEnvironmentCollision
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_ToggleClothEnvironmentCollision : public UAnimNotify
{
public:
	bool                                               bEnable;                                                  // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAnimRuntime.AnimNotify_ToggleClothEnvironmentCollision");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
