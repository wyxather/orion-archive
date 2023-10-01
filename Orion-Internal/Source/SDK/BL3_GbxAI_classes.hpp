#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxAI.AIActionBase
// 0x00D0 (0x00F8 - 0x0028)
class UAIActionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInitializeInstanceEventBP;                              // 0x0030(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCleanupInstanceEventBP;                                 // 0x0058(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartedEventBP;                                         // 0x0080(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStoppedEventBP;                                         // 0x00A8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET
	struct FAIActionExecutionSettings                  ExecutionSettings;                                        // 0x00D0(0x0008) (Edit)
	unsigned char                                      UnknownData05[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	unsigned char                                      BaseVersion;                                              // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	uint32_t                                           Version;                                                  // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	EAIActionCreationMethod                            CreationMethod;                                           // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIActionBase");
		return ptr;
	}


	void STATIC_StopBP(class UAIActionBase* Action, const struct FAIActionBlueprintContext& Context, bool bSucceeded);
	class UObject* CreateSubobjectNoName(class UClass* Class);
};


// Class GbxAI.AIAction
// 0x0050 (0x0148 - 0x00F8)
class UAIAction : public UAIActionBase
{
public:
	class UBlackboardData*                             Blackboard;                                               // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForAllAspects;                                       // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<class UAIAspect*>                           Aspects;                                                  // 0x0108(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UAIAspect*>                           BuiltInAspects;                                           // 0x0118(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bIsChildAction;                                           // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	TArray<class UAIAction*>                           SubActions;                                               // 0x0130(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0140(0x0001) MISSED OFFSET
	unsigned char                                      ActionVersion;                                            // 0x0141(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0142(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction");
		return ptr;
	}


	class UAIAction* CreateSubAction(class UClass* ActionClass, const struct FName& Name);
};


// Class GbxAI.AIAction_Composite
// 0x0018 (0x0160 - 0x0148)
class UAIAction_Composite : public UAIAction
{
public:
	TArray<class UAIAction_CompositeChild*>            Children;                                                 // 0x0148(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      CompositeVersion;                                         // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Composite");
		return ptr;
	}


	class UAIAction_CompositeChild* CreateChild(const struct FName& ChildName);
};


// Class GbxAI.AIAction_Selector
// 0x0000 (0x0160 - 0x0160)
class UAIAction_Selector : public UAIAction_Composite
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Selector");
		return ptr;
	}

};


// Class GbxAI.AIAction_Sequence
// 0x0088 (0x01E8 - 0x0160)
class UAIAction_Sequence : public UAIAction_Selector
{
public:
	EAIActionSequenceCanStartCheck                     CanStartChecks;                                           // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	struct FGbxParam                                   CanBeInterrupted;                                         // 0x0168(0x0080) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Sequence");
		return ptr;
	}

};


// Class GbxAI.AIAction_GoToPoint
// 0x0DB8 (0x0FA0 - 0x01E8)
class UAIAction_GoToPoint : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_Location                  LocationSettings;                                         // 0x01E8(0x01E0)
	struct FGbxBlackboardKeySelector                   GoalKey;                                                  // 0x03C8(0x0010) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x03D8(0x0140) (Edit)
	bool                                               bUseNavSettings;                                          // 0x0518(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class UAITicketDataAsset*                          MoveTicket;                                               // 0x0520(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   MoveTicketHoldDuration;                                   // 0x0528(0x0080) (Edit)
	struct FGbxParam                                   MoveFailTimeLimit;                                        // 0x05A8(0x0080) (Edit)
	bool                                               bUseMoveFailTimeLimit;                                    // 0x0628(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   QueryKey;                                                 // 0x0630(0x0010)
	struct FAIAspectSettings_EnvQuery                  QuerySettings;                                            // 0x0640(0x03A0) (Edit)
	bool                                               bUseQuery;                                                // 0x09E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09E1(0x0003) MISSED OFFSET
	float                                              MinOffsetInFrontOfTarget;                                 // 0x09E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOffsetInFrontOfTarget;                                 // 0x09E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetAngle;                                              // 0x09EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOffsetInFrontOfTarget;                                // 0x09F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09F1(0x0003) MISSED OFFSET
	float                                              CirclingDistance;                                         // 0x09F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECircleDirection                                   Direction;                                                // 0x09F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateAroundTarget;                                      // 0x09F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x09FA(0x0006) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   CustomRotationTarget;                                     // 0x0A00(0x0010) (Edit)
	bool                                               bUseCustomRotationTarget;                                 // 0x0A10(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	struct FAIAspectSettings_Rotation                  RotationSettings;                                         // 0x0A18(0x0550) (Edit)
	bool                                               bUseRotation;                                             // 0x0F68(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTestDirectPath;                                          // 0x0F69(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugTestDirectPath;                                     // 0x0F6A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0F6B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnArrivedEventBP;                                         // 0x0F70(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0F80(0x0018) MISSED OFFSET
	unsigned char                                      GoToPointVersion;                                         // 0x0F98(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0F99(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_GoToPoint");
		return ptr;
	}

};


// Class GbxAI.AIAction_ActionAtPoint
// 0x0798 (0x1738 - 0x0FA0)
class UAIAction_ActionAtPoint : public UAIAction_GoToPoint
{
public:
	struct FAIAspectSettings_GbxAction                 ActionSettings;                                           // 0x0FA0(0x0238) (Edit)
	bool                                               bCheckLocationDuringAction;                               // 0x11D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRotationDuringAction;                                 // 0x11D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRotationTargetDuringAction;                           // 0x11DA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x11DB(0x0005) MISSED OFFSET
	struct FAIAspectSettings_Rotation                  ActionRotationSettings;                                   // 0x11E0(0x0550) (Edit)
	bool                                               bUseActionRotation;                                       // 0x1730(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActionAtPointVersion;                                     // 0x1731(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x1732(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_ActionAtPoint");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction
// 0x0008 (0x0078 - 0x0070)
class UBTTask_AIAction : public UBTTaskNode
{
public:
	class UBTDecorator_AIAction*                       ActionDecorator;                                          // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_ActionAtPoint
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_ActionAtPoint : public UBTTask_AIAction
{
public:
	class UAIAction_ActionAtPoint*                     Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_ActionAtPoint");
		return ptr;
	}

};


// Class GbxAI.AIAction_Priority
// 0x0010 (0x0170 - 0x0160)
class UAIAction_Priority : public UAIAction_Selector
{
public:
	float                                              TryInterruptPeriod;                                       // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TryInterruptInsignificantPeriod;                          // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInterruptWhileInsignificant;                             // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Priority");
		return ptr;
	}

};


// Class GbxAI.AIAction_AITree
// 0x0000 (0x0170 - 0x0170)
class UAIAction_AITree : public UAIAction_Priority
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_AITree");
		return ptr;
	}

};


// Class GbxAI.AIAction_Charge
// 0x0018 (0x0FB8 - 0x0FA0)
class UAIAction_Charge : public UAIAction_GoToPoint
{
public:
	struct FAIAspectSettings_Charge                    ChargeSettings;                                           // 0x0FA0(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Charge");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_Charge
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_Charge : public UBTTask_AIAction
{
public:
	class UAIAction_Charge*                            Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Charge");
		return ptr;
	}

};


// Class GbxAI.AIAction_CompositeChild
// 0x0010 (0x0158 - 0x0148)
class UAIAction_CompositeChild : public UAIAction
{
public:
	class UAIAction*                                   Action;                                                   // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanCauseParentToStop;                                    // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_CompositeChild");
		return ptr;
	}


	class UAIAction* CreateAction(class UClass* ActionClass);
};


// Class GbxAI.AIAction_Decorator
// 0x0000 (0x0148 - 0x0148)
class UAIAction_Decorator : public UAIAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Decorator");
		return ptr;
	}

};


// Class GbxAI.AIAction_MoveNode
// 0x0158 (0x02C8 - 0x0170)
class UAIAction_MoveNode : public UAIAction_Priority
{
public:
	struct FGbxBlackboardKeySelector                   NodeKey;                                                  // 0x0170(0x0010) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0180(0x0140) (Edit)
	unsigned char                                      MoveNodeVersion;                                          // 0x02C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_MoveNode");
		return ptr;
	}

};


// Class GbxAI.AIAction_Dropship
// 0x0000 (0x02C8 - 0x02C8)
class UAIAction_Dropship : public UAIAction_MoveNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Dropship");
		return ptr;
	}

};


// Class GbxAI.AIAction_Follow
// 0x01E8 (0x0358 - 0x0170)
class UAIAction_Follow : public UAIAction_Priority
{
public:
	struct FAIAspectSettings_Follow                    Settings;                                                 // 0x0170(0x0038) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x01A8(0x0140) (Edit)
	struct FAIAspectSettings_FindClosestPlayer         FindClosestPlayerSettings;                                // 0x02E8(0x0020) (Edit)
	bool                                               bFindClosestPlayer;                                       // 0x0308(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   TeleportTarget;                                           // 0x0310(0x0010)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x0320(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x0330(0x0010)
	struct FGbxBlackboardKeySelector                   BodyDirection;                                            // 0x0340(0x0010)
	unsigned char                                      FollowVersion;                                            // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Follow");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_GoToPoint
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_GoToPoint : public UBTTask_AIAction
{
public:
	class UAIAction_GoToPoint*                         Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_GoToPoint");
		return ptr;
	}

};


// Class GbxAI.AIAction_Land
// 0x0388 (0x0570 - 0x01E8)
class UAIAction_Land : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_FlyToNavMesh              FlyToNavMeshSettings;                                     // 0x01E8(0x0010) (Edit)
	struct FAIAspectSettings_GbxAction                 AnimSettings;                                             // 0x01F8(0x0238) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0430(0x0140) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Land");
		return ptr;
	}

};


// Class GbxAI.AIAction_LeadRoute
// 0x01F8 (0x0368 - 0x0170)
class UAIAction_LeadRoute : public UAIAction_Priority
{
public:
	struct FAIAspectSettings_LeadRoute                 LeadSettings;                                             // 0x0170(0x0050) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x01C0(0x0140) (Edit)
	struct FAIAspectSettings_FindClosestPlayer         FindClosestPlayerSettings;                                // 0x0300(0x0020) (Edit)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x0320(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x0330(0x0010)
	struct FGbxBlackboardKeySelector                   TeleportTarget;                                           // 0x0340(0x0010)
	struct FGbxBlackboardKeySelector                   UnusedKey;                                                // 0x0350(0x0010)
	unsigned char                                      LeadRouteVersion;                                         // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_LeadRoute");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_LeadRoute
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_LeadRoute : public UBTTask_AIAction
{
public:
	class UAIAction_LeadRoute*                         Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_LeadRoute");
		return ptr;
	}

};


// Class GbxAI.AIAction_Leap
// 0x0058 (0x0FF8 - 0x0FA0)
class UAIAction_Leap : public UAIAction_GoToPoint
{
public:
	struct FAIAspectSettings_Leap                      LeapSettings;                                             // 0x0FA0(0x0058) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Leap");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_Leap
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_Leap : public UBTTask_AIAction
{
public:
	class UAIAction_Leap*                              Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Leap");
		return ptr;
	}

};


// Class GbxAI.AIAction_LeapDirect
// 0x0400 (0x0548 - 0x0148)
class UAIAction_LeapDirect : public UAIAction
{
public:
	struct FAIAspectSettings_Leap                      LeapSettings;                                             // 0x0148(0x0058) (Edit)
	struct FAIAspectSettings_EnvQuery                  QuerySettings;                                            // 0x01A0(0x03A0) (Edit)
	bool                                               bUseQuery;                                                // 0x0540(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0541(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_LeapDirect");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_LeapDirect
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_LeapDirect : public UBTTask_AIAction
{
public:
	class UAIAction_LeapDirect*                        Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_LeapDirect");
		return ptr;
	}

};


// Class GbxAI.AIAction_LookAroundRandomly
// 0x0020 (0x0168 - 0x0148)
class UAIAction_LookAroundRandomly : public UAIAction
{
public:
	struct FLookAroundRandomlySettings                 Settings;                                                 // 0x0148(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0154(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_LookAroundRandomly");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_MoveNode
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_MoveNode : public UBTTask_AIAction
{
public:
	class UAIAction_MoveNode*                          Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_MoveNode");
		return ptr;
	}

};


// Class GbxAI.AIAction_MoveSpline
// 0x0190 (0x02D8 - 0x0148)
class UAIAction_MoveSpline : public UAIAction
{
public:
	struct FAIAspectSettings_MoveSpline                MoveSplineSettings;                                       // 0x0148(0x0050) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0198(0x0140) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_MoveSpline");
		return ptr;
	}


	bool STATIC_SetupMoveSpline(class AActor* TargetActor, class UObject* TargetSpline, float Offset, bool bIsReverse);
	bool STATIC_ChangeSplineOffset(class AActor* TargetActor, float Offset);
};


// Class GbxAI.AIAction_OnAggro
// 0x0478 (0x0660 - 0x01E8)
class UAIAction_OnAggro : public UAIAction_Sequence
{
public:
	bool                                               bRotateBeforeAction;                                      // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateDuringAction;                                      // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01EA(0x0006) MISSED OFFSET
	struct FAIAspectSettings_GbxAction                 ActionWhenFirstNoticer;                                   // 0x01F0(0x0238) (Edit)
	struct FAIAspectSettings_GbxAction                 ActionWhenSecondNoticer;                                  // 0x0428(0x0238) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_OnAggro");
		return ptr;
	}

};


// Class GbxAI.AIAction_Orbit
// 0x08B0 (0x09F8 - 0x0148)
class UAIAction_Orbit : public UAIAction
{
public:
	struct FAIAspectSettings_Orbit                     OrbitSettings;                                            // 0x0148(0x0220) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0368(0x0140) (Edit)
	struct FAIAspectSettings_Rotation                  RotationSettings;                                         // 0x04A8(0x0550) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Orbit");
		return ptr;
	}

};


// Class GbxAI.AIAction_Parallel
// 0x0008 (0x0168 - 0x0160)
class UAIAction_Parallel : public UAIAction_Composite
{
public:
	bool                                               bWaitForAllChildren;                                      // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Parallel");
		return ptr;
	}

};


// Class GbxAI.AIAction_ParallelChild
// 0x0008 (0x0160 - 0x0158)
class UAIAction_ParallelChild : public UAIAction_CompositeChild
{
public:
	bool                                               bCanPreventActionFromStarting;                            // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCauseActionToSucceed;                                 // 0x0159(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCauseActionToFail;                                    // 0x015A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMustFinish;                                              // 0x015B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_ParallelChild");
		return ptr;
	}

};


// Class GbxAI.AIAction_Plan
// 0x0020 (0x0208 - 0x01E8)
class UAIAction_Plan : public UAIAction_Sequence
{
public:
	struct FAIActionSettings_Plan                      Settings;                                                 // 0x01E8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Plan");
		return ptr;
	}

};


// Class GbxAI.AIAction_PlayGbxAction
// 0x0238 (0x0380 - 0x0148)
class UAIAction_PlayGbxAction : public UAIAction
{
public:
	struct FAIAspectSettings_GbxAction                 ActionSettings;                                           // 0x0148(0x0238) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_PlayGbxAction");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_PlayGbxAction
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_PlayGbxAction : public UBTTask_AIAction
{
public:
	class UAIAction_PlayGbxAction*                     Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_PlayGbxAction");
		return ptr;
	}

};


// Class GbxAI.AIAction_Random
// 0x0008 (0x0168 - 0x0160)
class UAIAction_Random : public UAIAction_Selector
{
public:
	bool                                               bUseCumulativeInverseWeight;                              // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              ResetRunCountTime;                                        // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Random");
		return ptr;
	}

};


// Class GbxAI.AIAction_RandomChild
// 0x0010 (0x0168 - 0x0158)
class UAIAction_RandomChild : public UAIAction_CompositeChild
{
public:
	float                                              Weight;                                                   // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRunCount;                                              // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaxRunCount;                                          // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0161(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_RandomChild");
		return ptr;
	}

};


// Class GbxAI.AIAction_Route
// 0x01E0 (0x03C8 - 0x01E8)
class UAIAction_Route : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_Route                     RouteSettings;                                            // 0x01E8(0x0028) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0210(0x0140) (Edit)
	struct FGbxBlackboardKeySelector                   SmartAction;                                              // 0x0350(0x0010)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x0360(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x0370(0x0010)
	struct FGbxBlackboardKeySelector                   BodyEnable;                                               // 0x0380(0x0010)
	struct FGbxBlackboardKeySelector                   BodyTarget;                                               // 0x0390(0x0010)
	struct FGbxBlackboardKeySelector                   LookEnable;                                               // 0x03A0(0x0010)
	struct FGbxBlackboardKeySelector                   LookTarget;                                               // 0x03B0(0x0010)
	unsigned char                                      RouteVersion;                                             // 0x03C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Route");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_Route
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_Route : public UBTTask_AIAction
{
public:
	class UAIAction_Route*                             Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Route");
		return ptr;
	}

};


// Class GbxAI.AIAction_UseCover
// 0x0E98 (0x1008 - 0x0170)
class UAIAction_UseCover : public UAIAction_Priority
{
public:
	bool                                               bCanShootWhileMoving;                                     // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseCoverVersion;                                          // 0x0171(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
	struct FAIAspectSettings_UseCover                  CoverSettings;                                            // 0x0178(0x0138) (Edit)
	struct FEnvQueryParams                             CoverQuery;                                               // 0x02B0(0x00B8) (Edit)
	struct FGbxQueryOptions                            CoverQueryOptions;                                        // 0x0368(0x0238) (Edit)
	struct FAIAspectSettings_Weapon                    WeaponSettings;                                           // 0x05A0(0x03D0) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0970(0x0140) (Edit)
	struct FAIAspectSettings_Rotation                  MovingRotationSettings;                                   // 0x0AB0(0x0550) (Edit)
	bool                                               bRotateDuringMovement;                                    // 0x1000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1001(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_UseCover");
		return ptr;
	}

};


// Class GbxAI.AIAction_SimpleCover
// 0x01B8 (0x11C0 - 0x1008)
class UAIAction_SimpleCover : public UAIAction_UseCover
{
public:
	bool                                               bTakeRangesFromWeapon;                                    // 0x1008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1009(0x0007) MISSED OFFSET
	struct FGbxParam                                   MinRange;                                                 // 0x1010(0x0080) (Edit)
	struct FGbxParam                                   IdealRange;                                               // 0x1090(0x0080) (Edit)
	struct FGbxParam                                   MaxRange;                                                 // 0x1110(0x0080) (Edit)
	TArray<class UEnvQueryTestAsset*>                  AdditionalTests;                                          // 0x1190(0x0010) (Edit, ZeroConstructor)
	struct FSoftObjectPath                             DefaultEnvQuery;                                          // 0x11A0(0x0018) (Config, GlobalConfig)
	unsigned char                                      SimpleCoverVersion;                                       // 0x11B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x11B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleCover");
		return ptr;
	}

};


// Class GbxAI.AIAction_WeaponAtPoint
// 0x0460 (0x1400 - 0x0FA0)
class UAIAction_WeaponAtPoint : public UAIAction_GoToPoint
{
public:
	bool                                               bCanShootWhileMoving;                                     // 0x0FA0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0FA1(0x0007) MISSED OFFSET
	struct FAIAspectSettings_Weapon                    WeaponSettings;                                           // 0x0FA8(0x03D0) (Edit)
	struct FGbxParam                                   HoldDuration;                                             // 0x1378(0x0080) (Edit)
	bool                                               bUseHoldDuration;                                         // 0x13F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeaponAtPointVersion;                                     // 0x13F9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x13FA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_WeaponAtPoint");
		return ptr;
	}

};


// Class GbxAI.AIAction_SimpleHide
// 0x05F8 (0x19F8 - 0x1400)
class UAIAction_SimpleHide : public UAIAction_WeaponAtPoint
{
public:
	struct FGbxParam                                   MinRange;                                                 // 0x1400(0x0080) (Edit)
	struct FGbxParam                                   IdealRange;                                               // 0x1480(0x0080) (Edit)
	struct FGbxParam                                   MaxRange;                                                 // 0x1500(0x0080) (Edit)
	struct FGbxParam                                   FaceTarget;                                               // 0x1580(0x0080) (Edit)
	struct FGbxParam                                   CanUseWeaponWhileMoving;                                  // 0x1600(0x0080) (Edit)
	TArray<class UGbxWeaponSlotData*>                  WeaponSlots;                                              // 0x1680(0x0010) (Edit, ZeroConstructor)
	struct FGbxParam                                   WeaponUseModeIndex;                                       // 0x1690(0x0080) (Edit)
	struct FGbxParam                                   HideDuration;                                             // 0x1710(0x0080) (Edit)
	struct FAIAspectSettings_GbxAction                 HideActionSettings;                                       // 0x1790(0x0238) (Edit)
	bool                                               bUseHideAction;                                           // 0x19C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x19C9(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             DefaultEnvQuery;                                          // 0x19D0(0x0018) (Config, GlobalConfig)
	class UEnvQuery*                                   DefaultEnvQueryAsset;                                     // 0x19E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SimpleHideVersion;                                        // 0x19F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x19F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleHide");
		return ptr;
	}

};


// Class GbxAI.AIAction_SimpleMelee
// 0x04E0 (0x1C18 - 0x1738)
class UAIAction_SimpleMelee : public UAIAction_ActionAtPoint
{
public:
	class UClass*                                      MeleeAction;                                              // 0x1738(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIAspectSettings_GbxAction                 MeleeActionSettings;                                      // 0x1740(0x0238) (Edit)
	bool                                               bCanMove;                                                 // 0x1978(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1979(0x0007) MISSED OFFSET
	struct FGbxParam                                   ReachedHeight;                                            // 0x1980(0x0080) (Edit)
	struct FGbxParam                                   ReachedDistance;                                          // 0x1A00(0x0080) (Edit)
	EMeleeRotationOption                               FacingPolicyDuringAction;                                 // 0x1A80(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1A81(0x0007) MISSED OFFSET
	struct FGbxParam                                   OverrideAngle;                                            // 0x1A88(0x0080) (Edit)
	bool                                               bUseOverrideAngle;                                        // 0x1B08(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignBodyWithTarget;                                     // 0x1B09(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepFacingTargetOnStop;                                  // 0x1B0A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenReached;                                         // 0x1B0B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStartWhenGoalIsUncertain;                             // 0x1B0C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1B0D(0x0003) MISSED OFFSET
	struct FGbxParam                                   Count;                                                    // 0x1B10(0x0080) (Edit)
	struct FGbxParam                                   PlayRate;                                                 // 0x1B90(0x0080) (Edit)
	bool                                               bCanBeInterrupted;                                        // 0x1C10(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MeleeActionVersion;                                       // 0x1C11(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x1C12(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleMelee");
		return ptr;
	}

};


// Class GbxAI.AIAction_SimpleRangedAttack
// 0x03F0 (0x1B28 - 0x1738)
class UAIAction_SimpleRangedAttack : public UAIAction_ActionAtPoint
{
public:
	struct FGbxParam                                   MinRange;                                                 // 0x1738(0x0080) (Edit)
	struct FGbxParam                                   IdealRange;                                               // 0x17B8(0x0080) (Edit)
	struct FGbxParam                                   MaxRange;                                                 // 0x1838(0x0080) (Edit)
	struct FGbxParam                                   MinRepositionDistance;                                    // 0x18B8(0x0080) (Edit)
	TArray<class UEnvQueryTestAsset*>                  AdditionalTests;                                          // 0x1938(0x0010) (Edit, ZeroConstructor)
	float                                              SphereTraceExtent;                                        // 0x1948(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoArcTrace;                                              // 0x194C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x194D(0x0003) MISSED OFFSET
	struct FGbxParam                                   ArcSpeed;                                                 // 0x1950(0x0080) (Edit)
	struct FGbxParam                                   ArcAnglePercent;                                          // 0x19D0(0x0080) (Edit)
	struct FGbxParam                                   OverrideAngle;                                            // 0x1A50(0x0080) (Edit)
	bool                                               bUseOverrideAngle;                                        // 0x1AD0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMeleeRotationOption                               FacingPolicyDuringAction;                                 // 0x1AD1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignBodyWithTarget;                                     // 0x1AD2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepFacingTargetOnStop;                                  // 0x1AD3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDistanceToTargetTestShouldFilterOnly;                    // 0x1AD4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1AD5(0x0003) MISSED OFFSET
	struct FSoftObjectPath                             DefaultEnvQuery;                                          // 0x1AD8(0x0018) (Config, GlobalConfig)
	struct FSoftObjectPath                             DefaultTraceTests;                                        // 0x1AF0(0x0018) (Config, GlobalConfig)
	class UEnvQuery*                                   DefaultEnvQueryAsset;                                     // 0x1B08(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   DefaultTraceTestsAsset;                                   // 0x1B10(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnvQueryTest_Trace*                         TraceTestInstance;                                        // 0x1B18(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SimpleRangedAttackVersion;                                // 0x1B20(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1B21(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleRangedAttack");
		return ptr;
	}

};


// Class GbxAI.AIAction_SimpleWeapon
// 0x0620 (0x1A20 - 0x1400)
class UAIAction_SimpleWeapon : public UAIAction_WeaponAtPoint
{
public:
	struct FGbxParam                                   CanUseWeaponWhileMoving;                                  // 0x1400(0x0080) (Edit)
	bool                                               bTakeRangesFromWeapon;                                    // 0x1480(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1481(0x0007) MISSED OFFSET
	struct FGbxParam                                   MinRange;                                                 // 0x1488(0x0080) (Edit)
	struct FGbxParam                                   IdealRange;                                               // 0x1508(0x0080) (Edit)
	struct FGbxParam                                   MaxRange;                                                 // 0x1588(0x0080) (Edit)
	TArray<class UEnvQueryTestAsset*>                  AdditionalTests;                                          // 0x1608(0x0010) (Edit, ZeroConstructor)
	TArray<class UGbxWeaponSlotData*>                  WeaponSlots;                                              // 0x1618(0x0010) (Edit, ZeroConstructor)
	struct FGbxParam                                   WeaponUseModeIndex;                                       // 0x1628(0x0080) (Edit)
	struct FGbxParam                                   BurstCountOverride;                                       // 0x16A8(0x0080) (Edit)
	bool                                               bOverrideBurstCount;                                      // 0x1728(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1729(0x0007) MISSED OFFSET
	struct FGbxParam                                   BurstDelayOverride;                                       // 0x1730(0x0080) (Edit)
	bool                                               bOverrideBurstDelay;                                      // 0x17B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x17B1(0x0007) MISSED OFFSET
	struct FGbxParam                                   AccuracyOverride;                                         // 0x17B8(0x0080) (Edit)
	bool                                               bOverrideAccuracy;                                        // 0x1838(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1839(0x0007) MISSED OFFSET
	struct FGbxParam                                   SuppressingFireTime;                                      // 0x1840(0x0080) (Edit)
	bool                                               bUseSuppressingFireTime;                                  // 0x18C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRepositionTicket;                                     // 0x18C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x18C2(0x0006) MISSED OFFSET
	struct FGbxParam                                   MinRepositionDistance;                                    // 0x18C8(0x0080) (Edit)
	class UAITicketDataAsset*                          RepositionTicket;                                         // 0x1948(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   TimeToStayAtSpotWhileShooting;                            // 0x1950(0x0080) (Edit)
	bool                                               bDistanceToTargetTestShouldFilterOnly;                    // 0x19D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x19D1(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             DefaultEnvQuery;                                          // 0x19D8(0x0018) (Config, GlobalConfig)
	struct FSoftObjectPath                             DefaultRepositionTicket;                                  // 0x19F0(0x0018) (Config, GlobalConfig)
	class UEnvQuery*                                   DefaultEnvQueryAsset;                                     // 0x1A08(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAITicketDataAsset*                          DefaultRepositionTicketAsset;                             // 0x1A10(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SimpleWeaponVersion;                                      // 0x1A18(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1A19(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleWeapon");
		return ptr;
	}

};


// Class GbxAI.AIAction_StateMachine
// 0x0000 (0x0160 - 0x0160)
class UAIAction_StateMachine : public UAIAction_Selector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_StateMachine");
		return ptr;
	}

};


// Class GbxAI.AIAction_StateMachineChild
// 0x0010 (0x0168 - 0x0158)
class UAIAction_StateMachineChild : public UAIAction_CompositeChild
{
public:
	class UAIAction_StateMachineChild*                 OnSuccess;                                                // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIAction_StateMachineChild*                 OnFailure;                                                // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_StateMachineChild");
		return ptr;
	}


	void GetAvailableStates(TArray<class UAIAction_StateMachineChild*>* Array);
};


// Class GbxAI.AIAction_Sweep
// 0x00A8 (0x0AA0 - 0x09F8)
class UAIAction_Sweep : public UAIAction_Orbit
{
public:
	struct FAIAspectSettings_Sweep                     SweepSettings;                                            // 0x09F8(0x00A8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Sweep");
		return ptr;
	}

};


// Class GbxAI.AIAction_Swoop
// 0x1468 (0x1650 - 0x01E8)
class UAIAction_Swoop : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_Swoop                     SwoopSettings;                                            // 0x01E8(0x0320) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0508(0x0140) (Edit)
	struct FAIAspectSettings_Rotation                  MoveFarRotationSettings;                                  // 0x0648(0x0550) (Edit)
	bool                                               bUseFarRotation;                                          // 0x0B98(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B99(0x0007) MISSED OFFSET
	struct FAIAspectSettings_Rotation                  MoveNearRotationSettings;                                 // 0x0BA0(0x0550) (Edit)
	bool                                               bUseNearRotation;                                         // 0x10F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x10F1(0x0007) MISSED OFFSET
	struct FAIAspectSettings_Rotation                  MovePassRotationSettings;                                 // 0x10F8(0x0550) (Edit)
	bool                                               bUsePassRotation;                                         // 0x1648(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1649(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Swoop");
		return ptr;
	}

};


// Class GbxAI.AIAction_TargetSequence
// 0x0198 (0x0380 - 0x01E8)
class UAIAction_TargetSequence : public UAIAction_Sequence
{
public:
	struct FGbxParam                                   TargetCountMin;                                           // 0x01E8(0x0080) (Edit)
	bool                                               bUseTargetCountMin;                                       // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FGbxParam                                   TargetCountMax;                                           // 0x0270(0x0080) (Edit)
	bool                                               bUseTargetCountMax;                                       // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FGbxParam                                   TargetDistance;                                           // 0x02F8(0x0080) (Edit)
	bool                                               bUseTargetDistance;                                       // 0x0378(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayersOnly;                                             // 0x0379(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x037A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_TargetSequence");
		return ptr;
	}

};


// Class GbxAI.AIAction_Teleport
// 0x04F0 (0x0638 - 0x0148)
class UAIAction_Teleport : public UAIAction
{
public:
	struct FGbxBlackboardKeySelector                   GoalKey;                                                  // 0x0148(0x0010) (Edit)
	struct FAIAspectSettings_Teleport                  TeleportSettings;                                         // 0x0158(0x0138) (Edit)
	struct FAIAspectSettings_EnvQuery                  QuerySettings;                                            // 0x0290(0x03A0) (Edit)
	bool                                               bUseQuery;                                                // 0x0630(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0631(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_Teleport");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_Teleport
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_Teleport : public UBTTask_AIAction
{
public:
	class UAIAction_Teleport*                          Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Teleport");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_UseCover
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_UseCover : public UBTTask_AIAction
{
public:
	class UAIAction_UseCover*                          Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_UseCover");
		return ptr;
	}

};


// Class GbxAI.AIAction_UseSmartObject
// 0x0FD8 (0x11C0 - 0x01E8)
class UAIAction_UseSmartObject : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_UseSmartObject            SmartObjectSettings;                                      // 0x01E8(0x0478) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0660(0x0140) (Edit)
	struct FAIAspectSettings_Rotation                  MoveToRotationSettings;                                   // 0x07A0(0x0550) (Edit)
	struct FAIAspectSettings_EnvQuery                  QuerySettings;                                            // 0x0CF0(0x03A0) (Edit)
	bool                                               bUseQuery;                                                // 0x1090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1091(0x0007) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   SmartAction;                                              // 0x1098(0x0010)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x10A8(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x10B8(0x0010)
	struct FGbxBlackboardKeySelector                   BodyTarget;                                               // 0x10C8(0x0010)
	struct FGbxBlackboardKeySelector                   LookTarget;                                               // 0x10D8(0x0010)
	struct FGbxBlackboardKeySelector                   LookEnabled;                                              // 0x10E8(0x0010)
	struct FAIAspectSettings_Move                      MoveSettings;                                             // 0x10F8(0x0008)
	struct FEnvQueryParams                             SmartObjectQuery;                                         // 0x1100(0x00B8)
	unsigned char                                      UseSmartObjectVersion;                                    // 0x11B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x11B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_UseSmartObject");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_UseSmartObject
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_UseSmartObject : public UBTTask_AIAction
{
public:
	class UAIAction_UseSmartObject*                    Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_UseSmartObject");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_WeaponAtPoint
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_WeaponAtPoint : public UBTTask_AIAction
{
public:
	class UAIAction_WeaponAtPoint*                     Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_WeaponAtPoint");
		return ptr;
	}

};


// Class GbxAI.AIAction_WeaponIdle
// 0x0920 (0x0A68 - 0x0148)
class UAIAction_WeaponIdle : public UAIAction
{
public:
	struct FAIAspectSettings_Weapon                    WeaponSettings;                                           // 0x0148(0x03D0) (Edit)
	struct FAIAspectSettings_Rotation                  RotationSettings;                                         // 0x0518(0x0550) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_WeaponIdle");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_WeaponIdle
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_WeaponIdle : public UBTTask_AIAction
{
public:
	class UAIAction_WeaponIdle*                        Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_WeaponIdle");
		return ptr;
	}

};


// Class GbxAI.AIActionBlueprint
// 0x0018 (0x0100 - 0x00E8)
class UAIActionBlueprint : public UBlueprint
{
public:
	class UAIActionBlueprint*                          ParentBlueprint;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             Blackboard;                                               // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIActionBlueprint");
		return ptr;
	}


	bool STATIC_ShouldSkipBlackboardProperty(class UProperty* Property);
};


// Class GbxAI.AIActionBlueprintGeneratedClass
// 0x0000 (0x02E0 - 0x02E0)
class UAIActionBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIActionBlueprintGeneratedClass");
		return ptr;
	}

};


// Class GbxAI.GameplayTask_RunScriptedAIAction
// 0x0040 (0x00A8 - 0x0068)
class UGameplayTask_RunScriptedAIAction : public UGameplayTask
{
public:
	class UAIActionComponent*                          ActionComponent;                                          // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ActionToRun;                                              // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    Succeeded;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Failed;                                                   // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Aborted;                                                  // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_RunScriptedAIAction");
		return ptr;
	}


	class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_Object(class UObject* Object, class UClass* Action);
	class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_Controller(class AGbxAIController* Controller, class UClass* Action);
	class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_AIActionComponent(class UAIActionComponent* AIActionComponent, class UClass* Action);
	class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_Actor(class AActor* Actor, class UClass* Action);
};


// Class GbxAI.AIActionComponent
// 0x0338 (0x0510 - 0x01D8)
class UAIActionComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01D8(0x0048) MISSED OFFSET
	class UClass*                                      MainAction;                                               // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedMoveAction;                                       // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedMoveSplineAction;                                 // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedMoveToLevelSequenceAction;                        // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedLookAction;                                       // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedWaitAction;                                       // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedUseAction;                                        // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedCoverAction;                                      // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedFollowAction;                                     // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedRouteAction;                                      // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedLeadAction;                                       // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScriptedLandAction;                                       // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, class UClass*>           TaggedActionTable;                                        // 0x0280(0x0050) (Edit, ZeroConstructor)
	struct FAIActionInstance                           ActionStack[0x2];                                         // 0x02D0(0x0030) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E0];                                     // 0x0330(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIActionComponent");
		return ptr;
	}


	void ReplaceMainAIAction(class UClass* Action);
	class UBlackboardData* GetBlackboardData();
	void AbortScriptedAIAction(bool bStopImmediately);
};


// Class GbxAI.AIActionManager
// 0x0030 (0x0058 - 0x0028)
class UAIActionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              MaxTickTimeMs;                                            // 0x0030(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0034(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIActionManager");
		return ptr;
	}

};


// Class GbxAI.AIAspect
// 0x0008 (0x0100 - 0x00F8)
class UAIAspect : public UAIActionBase
{
public:
	struct FAIAspectExecutionSettings                  AspectExecutionSettings;                                  // 0x00F8(0x0005) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect");
		return ptr;
	}

};


// Class GbxAI.AIAspect_ActorCollision
// 0x0018 (0x0118 - 0x0100)
class UAIAspect_ActorCollision : public UAIAspect
{
public:
	struct FAIAspectSettings_ActorCollision            Settings;                                                 // 0x0100(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_ActorCollision");
		return ptr;
	}


	void OnPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void STATIC_GetOnCollisionOptions(TArray<struct FName>* Options);
};


// Class GbxAI.AIAspect_Condition
// 0x0248 (0x0348 - 0x0100)
class UAIAspect_Condition : public UAIAspect
{
public:
	struct FAIAspectSettings_Condition                 Settings;                                                 // 0x0100(0x0248) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Condition");
		return ptr;
	}


	class FString STATIC_GetConditionDataDescription(const struct FAIAspectSettings_ConditionData& ConditionData);
};


// Class GbxAI.AIAspect_AIGroupCondition
// 0x0008 (0x0350 - 0x0348)
class UAIAspect_AIGroupCondition : public UAIAspect_Condition
{
public:
	struct FAIAspectSettings_AIGroupCondition          GroupSettings;                                            // 0x0348(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_AIGroupCondition");
		return ptr;
	}

};


// Class GbxAI.AIAspect_AvoidWhileIdle
// 0x0008 (0x0108 - 0x0100)
class UAIAspect_AvoidWhileIdle : public UAIAspect
{
public:
	bool                                               bAvoidWhileIdle;                                          // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_AvoidWhileIdle");
		return ptr;
	}

};


// Class GbxAI.AIAspect_BlackboardKey
// 0x0018 (0x0118 - 0x0100)
class UAIAspect_BlackboardKey : public UAIAspect
{
public:
	struct FAIAspectSettings_BlackboardKey             Settings;                                                 // 0x0100(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_BlackboardKey");
		return ptr;
	}


	class FString STATIC_GetSettingsDescription(const struct FAIAspectSettings_BlackboardKey& BBKeySettings);
};


// Class GbxAI.AIAspect_Charge
// 0x0018 (0x0118 - 0x0100)
class UAIAspect_Charge : public UAIAspect
{
public:
	struct FAIAspectSettings_Charge                    Settings;                                                 // 0x0100(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Charge");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Navigation
// 0x0140 (0x0240 - 0x0100)
class UAIAspect_Navigation : public UAIAspect
{
public:
	struct FAIAspectSettings_Navigation                Settings;                                                 // 0x0100(0x0140) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Navigation");
		return ptr;
	}


	class FString STATIC_GetNavSettingsDescription(const struct FAIAspectSettings_Navigation& NavSettings, class UProperty* Property);
};


// Class GbxAI.AIAspect_Circle
// 0x0030 (0x0270 - 0x0240)
class UAIAspect_Circle : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector                   GoalKey;                                                  // 0x0240(0x0010) (Edit)
	float                                              Distance;                                                 // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECircleDirection                                   Direction;                                                // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	float                                              MinOffsetInFrontOfTarget;                                 // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOffsetInFrontOfTarget;                                 // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetAngle;                                              // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GoalUpdateDistance;                                       // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTestDirectPath;                                          // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugTestDirectPath;                                     // 0x0269(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxNavGoalReach                                   Reach;                                                    // 0x026A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x026B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Circle");
		return ptr;
	}

};


// Class GbxAI.AIAspect_ClaimSmartObject
// 0x04D8 (0x05D8 - 0x0100)
class UAIAspect_ClaimSmartObject : public UAIAspect
{
public:
	struct FAIAspectSettings_UseSmartObject            SmartObjectSettings;                                      // 0x0100(0x0478) (Edit)
	struct FGbxBlackboardKeySelector                   SmartAction;                                              // 0x0578(0x0010)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x0588(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x0598(0x0010)
	struct FGbxBlackboardKeySelector                   BodyTarget;                                               // 0x05A8(0x0010)
	struct FGbxBlackboardKeySelector                   LookTarget;                                               // 0x05B8(0x0010)
	struct FGbxBlackboardKeySelector                   LookEnabled;                                              // 0x05C8(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_ClaimSmartObject");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Cooldown
// 0x0220 (0x0320 - 0x0100)
class UAIAspect_Cooldown : public UAIAspect
{
public:
	struct FAIAspectSettings_Cooldown                  Settings;                                                 // 0x0100(0x0220) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Cooldown");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Crouch
// 0x0108 (0x0208 - 0x0100)
class UAIAspect_Crouch : public UAIAspect
{
public:
	struct FAIAspectSettings_Crouch                    Settings;                                                 // 0x0100(0x0108) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Crouch");
		return ptr;
	}

};


// Class GbxAI.AIAspect_DisableAvoidance
// 0x0000 (0x0100 - 0x0100)
class UAIAspect_DisableAvoidance : public UAIAspect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_DisableAvoidance");
		return ptr;
	}

};


// Class GbxAI.AIAspect_MoveNode
// 0x0010 (0x0250 - 0x0240)
class UAIAspect_MoveNode : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector                   NodeKey;                                                  // 0x0240(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_MoveNode");
		return ptr;
	}

};


// Class GbxAI.AIAspect_UseNode
// 0x0000 (0x0250 - 0x0250)
class UAIAspect_UseNode : public UAIAspect_MoveNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_UseNode");
		return ptr;
	}

};


// Class GbxAI.AIAspect_DropshipSpawn
// 0x0010 (0x0260 - 0x0250)
class UAIAspect_DropshipSpawn : public UAIAspect_UseNode
{
public:
	struct FAIAspectSettings_DropshipSpawn             DropshipSettings;                                         // 0x0250(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_DropshipSpawn");
		return ptr;
	}

};


// Class GbxAI.AIAspect_EnvQuery
// 0x03C0 (0x04C0 - 0x0100)
class UAIAspect_EnvQuery : public UAIAspect
{
public:
	struct FAIAspectSettings_EnvQuery                  Settings;                                                 // 0x0100(0x03A0) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnValueUpdatedBP;                                         // 0x04B0(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_EnvQuery");
		return ptr;
	}


	class FString STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_EnvQuery& QuerySettings, class UProperty* Property);
};


// Class GbxAI.AIAspect_FaceNearbyCover
// 0x0010 (0x0110 - 0x0100)
class UAIAspect_FaceNearbyCover : public UAIAspect
{
public:
	struct FGbxBlackboardKeySelector                   CoverKey;                                                 // 0x0100(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_FaceNearbyCover");
		return ptr;
	}

};


// Class GbxAI.AIAspect_GbxAction
// 0x0238 (0x0338 - 0x0100)
class UAIAspect_GbxAction : public UAIAspect
{
public:
	struct FAIAspectSettings_GbxAction                 Settings;                                                 // 0x0100(0x0238) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_GbxAction");
		return ptr;
	}

};


// Class GbxAI.AIAspect_FallToGround
// 0x0000 (0x0338 - 0x0338)
class UAIAspect_FallToGround : public UAIAspect_GbxAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_FallToGround");
		return ptr;
	}

};


// Class GbxAI.AIAspect_FindClosestPlayer
// 0x0020 (0x0120 - 0x0100)
class UAIAspect_FindClosestPlayer : public UAIAspect
{
public:
	struct FAIAspectSettings_FindClosestPlayer         Settings;                                                 // 0x0100(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_FindClosestPlayer");
		return ptr;
	}

};


// Class GbxAI.AIAspect_FindCover
// 0x0008 (0x04C8 - 0x04C0)
class UAIAspect_FindCover : public UAIAspect_EnvQuery
{
public:
	bool                                               bCheckFlanking;                                           // 0x04C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_FindCover");
		return ptr;
	}

};


// Class GbxAI.AIAspect_FlyToNavMesh
// 0x0010 (0x0250 - 0x0240)
class UAIAspect_FlyToNavMesh : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_FlyToNavMesh              FlyToNavMeshSettings;                                     // 0x0240(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_FlyToNavMesh");
		return ptr;
	}

};


// Class GbxAI.AIAspect_FollowUpdate
// 0x01A8 (0x02A8 - 0x0100)
class UAIAspect_FollowUpdate : public UAIAspect
{
public:
	struct FAIAspectSettings_Follow                    Settings;                                                 // 0x0100(0x0038) (Edit)
	struct FAIAspectSettings_Navigation                NavSettings;                                              // 0x0138(0x0140)
	struct FGbxBlackboardKeySelector                   TeleportTarget;                                           // 0x0278(0x0010)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x0288(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x0298(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_FollowUpdate");
		return ptr;
	}

};


// Class GbxAI.AIAspect_GroupLocation
// 0x0098 (0x0198 - 0x0100)
class UAIAspect_GroupLocation : public UAIAspect
{
public:
	struct FAIAspectSettings_GroupLocation             Settings;                                                 // 0x0100(0x0098) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_GroupLocation");
		return ptr;
	}

};


// Class GbxAI.AIAspect_IntCompare
// 0x00A0 (0x01A0 - 0x0100)
class UAIAspect_IntCompare : public UAIAspect
{
public:
	struct FAIAspectSettings_IntCompare                Settings;                                                 // 0x0100(0x00A0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_IntCompare");
		return ptr;
	}

};


// Class GbxAI.AIAspect_IsInRange
// 0x0248 (0x0348 - 0x0100)
class UAIAspect_IsInRange : public UAIAspect
{
public:
	struct FAIAspectSettings_IsInRange                 Settings;                                                 // 0x0100(0x0248) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_IsInRange");
		return ptr;
	}

};


// Class GbxAI.AIAspect_IsInTerritory
// 0x0018 (0x0118 - 0x0100)
class UAIAspect_IsInTerritory : public UAIAspect
{
public:
	struct FAIAspectSettings_IsInTerritory             Settings;                                                 // 0x0100(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_IsInTerritory");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Land
// 0x0010 (0x0250 - 0x0240)
class UAIAspect_Land : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_Land                      LandSettings;                                             // 0x0240(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Land");
		return ptr;
	}

};


// Class GbxAI.AIAspect_LeadUpdate
// 0x0080 (0x0180 - 0x0100)
class UAIAspect_LeadUpdate : public UAIAspect
{
public:
	struct FAIAspectSettings_LeadRoute                 LeadSettings;                                             // 0x0100(0x0050) (Edit)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x0150(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x0160(0x0010)
	struct FGbxBlackboardKeySelector                   TeleportTarget;                                           // 0x0170(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_LeadUpdate");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Leap
// 0x0058 (0x0158 - 0x0100)
class UAIAspect_Leap : public UAIAspect
{
public:
	struct FAIAspectSettings_Leap                      Settings;                                                 // 0x0100(0x0058) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Leap");
		return ptr;
	}


	class FString STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_Leap& LeapSettings, class UProperty* Property);
};


// Class GbxAI.AIAspect_Location
// 0x01E0 (0x02E0 - 0x0100)
class UAIAspect_Location : public UAIAspect
{
public:
	struct FAIAspectSettings_Location                  Settings;                                                 // 0x0100(0x01E0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Location");
		return ptr;
	}

};


// Class GbxAI.AIAspect_LockTarget
// 0x0008 (0x0108 - 0x0100)
class UAIAspect_LockTarget : public UAIAspect
{
public:
	bool                                               bFailOnTargetChange;                                      // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_LockTarget");
		return ptr;
	}

};


// Class GbxAI.AIAspect_LookAroundRandomly
// 0x0050 (0x0150 - 0x0100)
class UAIAspect_LookAroundRandomly : public UAIAspect
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_LookAroundRandomly");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Loop
// 0x0198 (0x0298 - 0x0100)
class UAIAspect_Loop : public UAIAspect
{
public:
	struct FAIAspectSettings_Loop                      Settings;                                                 // 0x0100(0x0198) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Loop");
		return ptr;
	}


	class FString STATIC_GetSettingsDescription(const struct FAIAspectSettings_Loop& LoopSettings);
};


// Class GbxAI.AIAspect_MoveSpline
// 0x0050 (0x0290 - 0x0240)
class UAIAspect_MoveSpline : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_MoveSpline                MoveSplineSettings;                                       // 0x0240(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_MoveSpline");
		return ptr;
	}

};


// Class GbxAI.AIAspect_NavBlackboard
// 0x0020 (0x0260 - 0x0240)
class UAIAspect_NavBlackboard : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector                   GoalKey;                                                  // 0x0240(0x0010) (Edit)
	float                                              MinOffsetInFrontOfTarget;                                 // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOffsetInFrontOfTarget;                                 // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetAngle;                                              // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxNavGoalReach                                   Reach;                                                    // 0x025C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_NavBlackboard");
		return ptr;
	}

};


// Class GbxAI.AIAspect_NavCover
// 0x0010 (0x0250 - 0x0240)
class UAIAspect_NavCover : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector                   GoalKey;                                                  // 0x0240(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_NavCover");
		return ptr;
	}

};


// Class GbxAI.AIAspect_NavFlyOffset
// 0x0120 (0x0360 - 0x0240)
class UAIAspect_NavFlyOffset : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_NavFlyOffset              OffsetSettings;                                           // 0x0240(0x0120) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_NavFlyOffset");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Orbit
// 0x0220 (0x0460 - 0x0240)
class UAIAspect_Orbit : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_Orbit                     OrbitSettings;                                            // 0x0240(0x0220) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Orbit");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Plan
// 0x0020 (0x0120 - 0x0100)
class UAIAspect_Plan : public UAIAspect
{
public:
	struct FAIAspectSettings_Plan                      Settings;                                                 // 0x0100(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Plan");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Rotation
// 0x0550 (0x0650 - 0x0100)
class UAIAspect_Rotation : public UAIAspect
{
public:
	struct FAIAspectSettings_Rotation                  Settings;                                                 // 0x0100(0x0550) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Rotation");
		return ptr;
	}


	class FString STATIC_GetRotationSettingsDescription(const struct FAIAspectSettings_Rotation& RotationSettings, class UProperty* Property);
	class FString STATIC_GetRotationChannelSettingsDescription(const struct FAIAspectSettings_RotationChannel& RotationChannelSettings, class UProperty* Property);
};


// Class GbxAI.AIAspect_Route
// 0x0098 (0x0198 - 0x0100)
class UAIAspect_Route : public UAIAspect
{
public:
	struct FAIAspectSettings_Route                     RouteSettings;                                            // 0x0100(0x0028) (Edit)
	struct FGbxBlackboardKeySelector                   MoveTarget;                                               // 0x0128(0x0010)
	struct FGbxBlackboardKeySelector                   Distance;                                                 // 0x0138(0x0010)
	struct FGbxBlackboardKeySelector                   SmartAction;                                              // 0x0148(0x0010)
	struct FGbxBlackboardKeySelector                   BodyEnable;                                               // 0x0158(0x0010)
	struct FGbxBlackboardKeySelector                   BodyTarget;                                               // 0x0168(0x0010)
	struct FGbxBlackboardKeySelector                   LookEnable;                                               // 0x0178(0x0010)
	struct FGbxBlackboardKeySelector                   LookTarget;                                               // 0x0188(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Route");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Stance
// 0x0010 (0x0110 - 0x0100)
class UAIAspect_Stance : public UAIAspect
{
public:
	struct FAIAspectSettings_Stance                    Settings;                                                 // 0x0100(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Stance");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Sweep
// 0x00A8 (0x0508 - 0x0460)
class UAIAspect_Sweep : public UAIAspect_Orbit
{
public:
	struct FAIAspectSettings_Sweep                     SweepSettings;                                            // 0x0460(0x00A8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Sweep");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Swoop
// 0x0340 (0x0580 - 0x0240)
class UAIAspect_Swoop : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_Swoop                     SwoopSettings;                                            // 0x0240(0x0320) (Edit)
	struct FScriptMulticastDelegate                    OnReachedFarBP;                                           // 0x0560(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReachedNearBP;                                          // 0x0570(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Swoop");
		return ptr;
	}

};


// Class GbxAI.AIAspect_TakeOff
// 0x0008 (0x0340 - 0x0338)
class UAIAspect_TakeOff : public UAIAspect_GbxAction
{
public:
	float                                              NearFlightDistance;                                       // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_TakeOff");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Teleport
// 0x0138 (0x0238 - 0x0100)
class UAIAspect_Teleport : public UAIAspect
{
public:
	struct FAIAspectSettings_Teleport                  Settings;                                                 // 0x0100(0x0138) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Teleport");
		return ptr;
	}


	class FString STATIC_GetTeleportSettingsDescription(const struct FAIAspectSettings_Teleport& TeleportSettings, class UProperty* Property);
};


// Class GbxAI.AIAspect_Territory
// 0x0010 (0x0110 - 0x0100)
class UAIAspect_Territory : public UAIAspect
{
public:
	TArray<struct FGbxBlackboardKeySelector>           TerritoryKeys;                                            // 0x0100(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Territory");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Ticket
// 0x0128 (0x0228 - 0x0100)
class UAIAspect_Ticket : public UAIAspect
{
public:
	struct FAIAspectSettings_Ticket                    Settings;                                                 // 0x0100(0x0128) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Ticket");
		return ptr;
	}

};


// Class GbxAI.AIAspect_TimedCondition
// 0x0118 (0x0218 - 0x0100)
class UAIAspect_TimedCondition : public UAIAspect
{
public:
	struct FAIAspectSettings_TimedCondition            Settings;                                                 // 0x0100(0x0118) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_TimedCondition");
		return ptr;
	}

};


// Class GbxAI.AIAspect_TimeLimit
// 0x0108 (0x0208 - 0x0100)
class UAIAspect_TimeLimit : public UAIAspect
{
public:
	struct FAIAspectSettings_TimeLimit                 Settings;                                                 // 0x0100(0x0108) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_TimeLimit");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Timer
// 0x04C8 (0x05C8 - 0x0100)
class UAIAspect_Timer : public UAIAspect
{
public:
	struct FAIAspectSettings_Timer                     Settings;                                                 // 0x0100(0x04C8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Timer");
		return ptr;
	}

};


// Class GbxAI.AIAspect_UseCover
// 0x0138 (0x0238 - 0x0100)
class UAIAspect_UseCover : public UAIAspect
{
public:
	struct FAIAspectSettings_UseCover                  Settings;                                                 // 0x0100(0x0138) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_UseCover");
		return ptr;
	}

};


// Class GbxAI.AIAspect_UseSmartObject
// 0x0000 (0x0338 - 0x0338)
class UAIAspect_UseSmartObject : public UAIAspect_GbxAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_UseSmartObject");
		return ptr;
	}

};


// Class GbxAI.AIAspect_Weapon
// 0x03D0 (0x04D0 - 0x0100)
class UAIAspect_Weapon : public UAIAspect
{
public:
	struct FAIAspectSettings_Weapon                    Settings;                                                 // 0x0100(0x03D0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_Weapon");
		return ptr;
	}


	class FString STATIC_GetWeaponSettingsDescription(const struct FAIAspectSettings_Weapon& WeaponSettings, class UProperty* Property);
};


// Class GbxAI.AIAspect_ZeroRotation
// 0x0010 (0x0110 - 0x0100)
class UAIAspect_ZeroRotation : public UAIAspect
{
public:
	struct FAIAspectSettings_ZeroRotation              Settings;                                                 // 0x0100(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspect_ZeroRotation");
		return ptr;
	}

};


// Class GbxAI.AIAspectBlueprint
// 0x0008 (0x00F0 - 0x00E8)
class UAIAspectBlueprint : public UBlueprint
{
public:
	class UAIAspectBlueprint*                          ParentBlueprint;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAspectBlueprint");
		return ptr;
	}

};


// Class GbxAI.AICloakData
// 0x0018 (0x0048 - 0x0030)
class UAICloakData : public UDataAsset
{
public:
	TArray<struct FCloakCondition>                     CloakPriorities;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	bool                                               bDefaultCloaked;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AICloakData");
		return ptr;
	}

};


// Class GbxAI.AICloakComponent
// 0x00F8 (0x0270 - 0x0178)
class UAICloakComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnCloaked;                                                // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUncloaked;                                              // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAICloakData*                                DefaultCloakData;                                         // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRender;                                                  // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCollide;                                                 // 0x01A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // 0x01A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetable;                                              // 0x01A3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGodMode;                                                 // 0x01A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDemigodMode;                                             // 0x01A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHitReactions;                                       // 0x01A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyMoveWhileCloaked;                                    // 0x01A7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCloakWithMovementHold;                                // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCloakedOnSpawn;                                          // 0x01A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	TArray<struct FName>                               RenderExceptions;                                         // 0x01B0(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumTransitionTime;                                    // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	class UStanceDataProvider*                         CloakedStance;                                            // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionCloak;                                              // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionUncloak;                                            // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCloakAfterAction;                                        // 0x01E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUncloakAfterAction;                                      // 0x01E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanInterruptActions;                                     // 0x01E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockActions;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	class UAICloakData*                                OverrideData;                                             // 0x01E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxActionComponent*                         ActionComp;                                               // 0x01F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        TargetableComp;                                           // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxNavComponent*                            NavComp;                                                  // 0x0200(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxCharacterMovementComponent*              MoveComp;                                                 // 0x0208(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStanceComponent*                            StanceComp;                                               // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            DamageComp;                                               // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	struct FSavedCollision                             SavedCollision;                                           // 0x0230(0x0020) (Transient)
	struct FCloakRepData                               RepData;                                                  // 0x0250(0x0002) (Net, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0252(0x0006) MISSED OFFSET
	TArray<struct FCloakPrimData>                      PrimCompData;                                             // 0x0258(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AICloakComponent");
		return ptr;
	}


	void SetCloakData(class UAICloakData* NewCloakData);
	void OnRep_Cloaked();
	bool IsPlayingAction();
	bool IsCloakStateForced();
	bool IsCloaked();
	void InterruptCloakAction();
	class UAICloakData* GetCloakData();
	void ForceUncloak(bool bInCanPlayActions);
	void ForceCloak(bool bInCanPlayActions);
	void ClearForcedState();
	void ClearCloakData();
};


// Class GbxAI.AIConstraint
// 0x0000 (0x0100 - 0x0100)
class UAIConstraint : public UAIAspect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIConstraint");
		return ptr;
	}

};


// Class GbxAI.AIGroupBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIGroupBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIGroupBlueprintLibrary");
		return ptr;
	}


	bool STATIC_IsUsingAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, bool bInterruptible);
	bool STATIC_IsTicketValid(struct FAITicketHandle* TicketHandle);
	void STATIC_ClearTicket(float HoldDuration, struct FAITicketHandle* TicketHandle);
	void STATIC_ClearAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float HoldDuration);
	bool STATIC_CanUseAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, bool bInterruptible);
	bool STATIC_AddAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible, struct FAITicketHandle* OutTicketHandle);
};


// Class GbxAI.AIGroupState
// 0x2818 (0x2840 - 0x0028)
class UAIGroupState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class USpawnerLinkComponent*                       LinkComponent;                                            // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	struct FAITicketManager                            TicketManager;                                            // 0x0048(0x2718) (Edit, EditConst)
	struct FAICommunicationManager                     CommunicationManager;                                     // 0x2760(0x0048) (Edit, EditConst)
	struct FAIPlanManager                              PlanManager;                                              // 0x27A8(0x0080) (Edit, EditConst)
	TArray<struct FTargetPersistentNotes>              TargetPersistentNotes;                                    // 0x2828(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x2838(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIGroupState");
		return ptr;
	}


	void OnThreatActorDied(class AActor* DamageReceiver, class AActor* DamageCauser);
};


// Class GbxAI.AINode
// 0x0040 (0x0498 - 0x0458)
class AAINode : public AActor
{
public:
	class UAINodeComponent*                            AINodeComponent;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPawnArrivedNode;                                        // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnDepartedNode;                                       // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0480(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AINode");
		return ptr;
	}


	void OnPawnDepartedNodeCB(class AActor* NodeActor, class APawn* DepartedPawn);
	void OnPawnArrivedNodeCB(class AActor* NodeActor, class APawn* ArrivedPawn);
};


// Class GbxAI.AINodeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAINodeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AINodeBlueprintLibrary");
		return ptr;
	}


	class AActor* STATIC_FindNearestNode(class UObject* WorldContextObject, const struct FVector& Location, bool bIncludeDisabled);
	void STATIC_FindAllNodes(class UObject* WorldContextObject, bool bIncludeDisabled, TArray<class AActor*>* OutputNodes);
	class AActor* STATIC_ChooseRandomNode(class UObject* WorldContextObject, bool bIncludeDisabled);
};


// Class GbxAI.AINodeComponent
// 0x00A0 (0x0790 - 0x06F0)
class UAINodeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET
	bool                                               bEnabled;                                                 // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRouteSystem;                                          // 0x06F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x06FA(0x0002) MISSED OFFSET
	float                                              RouteFindNavHeight;                                       // 0x06FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawRouteFindNavHeight;                                  // 0x0700(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	float                                              ArrivalThreshold;                                         // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArrivalHeightThreshold;                                   // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToGround;                                            // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	float                                              MaxSnapDistance;                                          // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	TArray<struct FAINodeLink>                         LinksTo;                                                  // 0x0718(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              EditCache;                                                // 0x0728(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAINodeComponent*>                    LinksFrom;                                                // 0x0738(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnPawnArrivedNode;                                        // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnDepartedNode;                                       // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bLinkOnAltDrag;                                           // 0x0768(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVisualizeWhileUnlinked;                                  // 0x0769(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRouteSelected;                                           // 0x076A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSelected;                                                // 0x076B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x076C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AINodeComponent");
		return ptr;
	}


	class AActor* SelectNextNode();
	bool HasLinkTo(class AActor* Node);
	bool HasLinkFrom(class AActor* Node);
	bool HasArrived(const struct FVector& Point, float Error);
	int GetLinkedNodeNum();
	class AActor* GetLinkedNode(int I);
	void CreateLinkTo(class AActor* Node, float Weight);
	bool BreakLinkTo(class AActor* Node);
};


// Class GbxAI.AIPlanData
// 0x0090 (0x00C0 - 0x0030)
class UAIPlanData : public UGbxDataAsset
{
public:
	struct FGbxParam                                   MaxNumberOfInstances;                                     // 0x0030(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FPlanRoleRequirements>               RoleRequirements;                                         // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIPlanData");
		return ptr;
	}

};


// Class GbxAI.AISense_Proximity
// 0x0068 (0x0100 - 0x0098)
class UAISense_Proximity : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0098(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AISense_Proximity");
		return ptr;
	}

};


// Class GbxAI.AISense_Threat
// 0x0088 (0x0120 - 0x0098)
class UAISense_Threat : public UAISense
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0098(0x0070) MISSED OFFSET
	TArray<class UTargetingComponent*>                 TargetingComponents;                                      // 0x0108(0x0010) (ExportObject, ZeroConstructor, Transient)
	float                                              UpdatePeriod;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AISense_Threat");
		return ptr;
	}

};


// Class GbxAI.AISenseConfig_Proximity
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Proximity : public UAISenseConfig
{
public:
	float                                              SenseEnemyDistance;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AISenseConfig_Proximity");
		return ptr;
	}

};


// Class GbxAI.AISenseConfig_Threat
// 0x0010 (0x0058 - 0x0048)
class UAISenseConfig_Threat : public UAISenseConfig
{
public:
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UClass*                                      Implementation;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AISenseConfig_Threat");
		return ptr;
	}

};


// Class GbxAI.AIStanceData
// 0x0010 (0x00B8 - 0x00A8)
class UAIStanceData : public UStanceData
{
public:
	class UHavokPathFindingData*                       AIPathFindData;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxStrafeType                                     AIStrafeType;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIStanceData");
		return ptr;
	}

};


// Class GbxAI.AITargetingBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAITargetingBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AITargetingBlueprintLibrary");
		return ptr;
	}


	bool STATIC_IsThreatenedByInfo(class AActor* AIActor, const struct FTargetActorInfo& TargetInfo);
	bool STATIC_IsThreatenedBy(class AActor* AIActor, class AActor* Target);
	float STATIC_GetTargetSenseAge(const struct FTargetActorInfo& TargetInfo, class UClass* Sense);
	int STATIC_GetNumTargetsInRange(class AActor* AIActor, float Radius);
	struct FVector STATIC_GetBestKnownLocation(class AActor* AIActor, class AActor* TargetActor, const struct FName& Socket);
	bool STATIC_CalcTargetGroupLocation(class AActor* AIActor, float GroupDistance, struct FVector* Result);
	void STATIC_ApplyTargetScoringBoost(class AActor* TargetActor, const struct FName& BoostName, EAITargetScoringBoost ScoringBoost, float DurationInSeconds);
	void STATIC_AISetTargetInBlackboard(class AActor* AIActor, const struct FGbxBlackboardKeySelector& Key, int TargetIndex);
	void STATIC_AISetScriptedTarget(class AActor* AIActor, class AActor* TargetActor);
	void STATIC_AISendCommunication(class AActor* AIActor, float Radius);
	void STATIC_AIProvokeSpecificSense(class AActor* AITarget, class AActor* Source, class UClass* SenseType, const struct FVector& StimulusLocation);
	void STATIC_AIProvoke(class AActor* AITarget, class AActor* Source);
	void STATIC_AIPlayerProvoke(class AActor* AITarget);
	class AActor* STATIC_AIGetScriptedTarget(class AActor* AIActor);
	bool STATIC_AICanCommunicate(class AActor* AIActor, float Radius, float MinSenseAgeDelta);
};


// Class GbxAI.AITask_UseLookAtPoint
// 0x0040 (0x00B0 - 0x0070)
class UAITask_UseLookAtPoint : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	class ULookAtPointComponent*                       LookAtPointComponent;                                     // 0x0080(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ULookAtPointTag*                             Tag;                                                      // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAITask_MoveTo*                              MoveToTask;                                               // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	ESmartObjectTaskState                              State;                                                    // 0x00A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AITask_UseLookAtPoint");
		return ptr;
	}

};


// Class GbxAI.AITask_UsePerch
// 0x0040 (0x00B0 - 0x0070)
class UAITask_UsePerch : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	class UPerchComponent*                             PerchComponent;                                           // 0x0080(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPerchTag*                                   Tag;                                                      // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
	class UAITask_MoveTo*                              MoveToTask;                                               // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	ESmartObjectTaskState                              State;                                                    // 0x00A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AITask_UsePerch");
		return ptr;
	}

};


// Class GbxAI.AITask_UseSmartObject
// 0x0000 (0x0070 - 0x0070)
class UAITask_UseSmartObject : public UAITask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AITask_UseSmartObject");
		return ptr;
	}

};


// Class GbxAI.AITicketDataAsset
// 0x0110 (0x0140 - 0x0030)
class UAITicketDataAsset : public UGbxDataAsset
{
public:
	struct FGbxParam                                   MaxValue;                                                 // 0x0030(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGbxParam                                   DefaultMaxHoldTime;                                       // 0x00B0(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bPerActor;                                                // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FName                                       ActorBlackboardKeyName;                                   // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AITicketDataAsset");
		return ptr;
	}

};


// Class GbxAI.AIUsableComponent
// 0x0038 (0x01B0 - 0x0178)
class UAIUsableComponent : public UActorComponent
{
public:
	bool                                               bEnabled;                                                 // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class USmartObjectComponent*                       SmartObjectComponent;                                     // 0x0180(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UAIUseSlotComponent*>                 UseSlots;                                                 // 0x0188(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0198(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIUsableComponent");
		return ptr;
	}

};


// Class GbxAI.AIUseComponent
// 0x0160 (0x02D8 - 0x0178)
class UAIUseComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ReserveEvent;                                             // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnreserveEvent;                                           // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BeginEvent;                                               // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InterruptEvent;                                           // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SuccessEvent;                                             // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class APawn*                                       CachedPawn;                                               // 0x01D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGbxAIController*                            CachedController;                                         // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxActionComponent*                         CachedActionComponent;                                    // 0x01E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FActionUseState                             UseState;                                                 // 0x01E8(0x00C0) (Transient)
	bool                                               bInitializingAction;                                      // 0x02A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	TArray<struct FActionCooldownInfo>                 GlobalCooldowns;                                          // 0x02B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x02C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIUseComponent");
		return ptr;
	}


	void StopUse(bool bSucceeded);
	bool RequestUse(class AActor* SmartObject, const struct FGameplayTag& ActionName, bool bAbortExisting, bool bUntilInterrupted);
	void OnUseCompleted(class UAITask* Task, ESmartObjectTaskResult Result);
	class AActor* GetCurrentObject();
};


// Class GbxAI.AIUseSlotComponent
// 0x0060 (0x0750 - 0x06F0)
class UAIUseSlotComponent : public UPrimitiveComponent
{
public:
	bool                                               bEnabled;                                                 // 0x06F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToGround;                                            // 0x06F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlotAlignRule                                     AlignRule;                                                // 0x06F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpOnArrival;                                         // 0x06F3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpRotationOnArrival;                                 // 0x06F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	float                                              InterpOnArrivalTime;                                      // 0x06F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESmartObjectLookAtRule                             LookAtRule;                                               // 0x06FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLookAtRule;                                      // 0x06FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x06FE(0x0002) MISSED OFFSET
	struct FName                                       LookAtSocket;                                             // 0x0700(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ActionTypes;                                              // 0x0708(0x0020) (Edit)
	float                                              Radius;                                                   // 0x0728(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaxUsers;                                                // 0x072C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x072D(0x0003) MISSED OFFSET
	int                                                MaxUsers;                                                 // 0x0730(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUsePhysNoneWithRootMotion;                          // 0x0734(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0735(0x0003) MISSED OFFSET
	TArray<class AController*>                         Users;                                                    // 0x0738(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0748(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIUseSlotComponent");
		return ptr;
	}


	void GetAvailableSocketNames(TArray<struct FName>* Array);
};


// Class GbxAI.AIWeaponUserComponent
// 0x0738 (0x08B0 - 0x0178)
class UAIWeaponUserComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ReloadEvent;                                              // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BeginFiringEvent;                                         // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AGbxAIController*                            AIController;                                             // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGbxCharacter*                               GbxCharacter;                                             // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	float                                              FireConeAngle;                                            // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x01C4(0x002C) MISSED OFFSET
	TScriptInterface<class UWeaponUserInterface>       WeaponUser;                                               // 0x01F0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UWeaponInterface>           Weapon;                                                   // 0x0200(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class UDamageComponent*                            DamageComponent;                                          // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCoverUserComponent*                         CoverUserComponent;                                       // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComponent;                                      // 0x0220(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetingComponent*                         TargetingComponent;                                       // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               CanFireIf;                                                // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAIWeaponUseSettings                        Settings;                                                 // 0x0240(0x0238) (Edit)
	struct FAIWeaponUseSettings                        SettingsOverride;                                         // 0x0478(0x0238)
	bool                                               bSuppressingFireTimeExpired;                              // 0x06B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FGbxParam                                   BurstCountOverride;                                       // 0x06B8(0x0080)
	bool                                               bOverrideBurstCount;                                      // 0x0738(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
	struct FGbxParam                                   BurstDelayOverride;                                       // 0x0740(0x0080)
	bool                                               bOverrideBurstDelay;                                      // 0x07C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	struct FGbxParam                                   AccuracyOverride;                                         // 0x07C8(0x0080)
	bool                                               bOverrideAccuracy;                                        // 0x0848(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	struct FNumericRange                               DesiredRangeOverride;                                     // 0x084C(0x0008)
	bool                                               bOverrideDesiredRange;                                    // 0x0854(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5B];                                      // 0x0855(0x005B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIWeaponUserComponent");
		return ptr;
	}


	bool WantsToFire();
	void OnWeaponUsed();
};


// Class GbxAI.AnimNotify_SmartObject
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_SmartObject : public UAnimNotifyState
{
public:
	ESmartObjectNotify                                 Action;                                                   // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AnimNotify_SmartObject");
		return ptr;
	}

};


// Class GbxAI.AnimNotify_UseSmartAction
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_UseSmartAction : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AnimNotify_UseSmartAction");
		return ptr;
	}

};


// Class GbxAI.BlackboardKeyType_SmartAction
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_SmartAction : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BlackboardKeyType_SmartAction");
		return ptr;
	}

};


// Class GbxAI.BTComposite_Random
// 0x0010 (0x00A0 - 0x0090)
class UBTComposite_Random : public UBTComposite_Selector
{
public:
	TArray<struct FBTRandomEntrySettings>              Entries;                                                  // 0x0090(0x0010) (Edit, EditFixedSize, ZeroConstructor, NoClear)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTComposite_Random");
		return ptr;
	}

};


// Class GbxAI.BTDecorator_AIAction
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_AIAction : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTDecorator_AIAction");
		return ptr;
	}

};


// Class GbxAI.UBTDecorator_AITicket
// 0x0000 (0x0068 - 0x0068)
class UUBTDecorator_AITicket : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.UBTDecorator_AITicket");
		return ptr;
	}

};


// Class GbxAI.BTDecorator_GbxLoop
// 0x0128 (0x0190 - 0x0068)
class UBTDecorator_GbxLoop : public UBTDecorator
{
public:
	struct FGbxParam                                   LoopCount;                                                // 0x0068(0x0080) (Edit)
	bool                                               bUseLoopCount;                                            // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FGbxParam                                   LoopTime;                                                 // 0x00F0(0x0080) (Edit)
	bool                                               bUseLoopTime;                                             // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	struct FBTGbxLoopConditionData                     LoopCondition;                                            // 0x0178(0x0010) (Edit, IsPlainOldData)
	bool                                               bUseLoopCondition;                                        // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0189(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTDecorator_GbxLoop");
		return ptr;
	}

};


// Class GbxAI.BTDecorator_IsInRange
// 0x0080 (0x0110 - 0x0090)
class UBTDecorator_IsInRange : public UBTDecorator_BlackboardBase
{
public:
	struct FGbxParam                                   Range;                                                    // 0x0090(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTDecorator_IsInRange");
		return ptr;
	}

};


// Class GbxAI.BTService_GameFocus
// 0x0000 (0x00A0 - 0x00A0)
class UBTService_GameFocus : public UBTService_DefaultFocus
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTService_GameFocus");
		return ptr;
	}

};


// Class GbxAI.BTService_GbxRunEQS
// 0x0000 (0x00F8 - 0x00F8)
class UBTService_GbxRunEQS : public UBTService_RunEQS
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTService_GbxRunEQS");
		return ptr;
	}

};


// Class GbxAI.BTTask_AIAction_Custom
// 0x0008 (0x0080 - 0x0078)
class UBTTask_AIAction_Custom : public UBTTask_AIAction
{
public:
	class UAIAction*                                   Action;                                                   // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Custom");
		return ptr;
	}

};


// Class GbxAI.BTTask_LookAt
// 0x0058 (0x00C8 - 0x0070)
class UBTTask_LookAt : public UBTTaskNode
{
public:
	float                                              AngleThresholdDegrees;                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetActorKey;                                           // 0x0078(0x0028) (Edit)
	struct FBlackboardKeySelector                      TurnSpeedKey;                                             // 0x00A0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_LookAt");
		return ptr;
	}

};


// Class GbxAI.BTTask_MoveToComponent
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_MoveToComponent : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStrafe;                                             // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // 0x009E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectGoalLocation;                                     // 0x009F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_MoveToComponent");
		return ptr;
	}

};


// Class GbxAI.BTTask_MoveToNode
// 0x0000 (0x00B0 - 0x00B0)
class UBTTask_MoveToNode : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_MoveToNode");
		return ptr;
	}

};


// Class GbxAI.BTTask_UseCover
// 0x0000 (0x0070 - 0x0070)
class UBTTask_UseCover : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_UseCover");
		return ptr;
	}

};


// Class GbxAI.BTTask_UseSmartObject
// 0x0000 (0x0070 - 0x0070)
class UBTTask_UseSmartObject : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.BTTask_UseSmartObject");
		return ptr;
	}

};


// Class GbxAI.Cover
// 0x00B8 (0x0510 - 0x0458)
class ACover : public AActor
{
public:
	struct FSoftObjectPath                             DefaultCoverSlotName;                                     // 0x0458(0x0018) (Config, GlobalConfig)
	class UCoverSlotData*                              SlotType;                                                 // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlotInterval;                                             // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TotalWidth;                                               // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSlotsAlwaysVisible;                                      // 0x0480(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDrawLineOfSight;                                         // 0x0481(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawAreas;                                               // 0x0482(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawInvalidViews;                                        // 0x0483(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawLocationTests;                                       // 0x0484(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	TArray<class UCoverSlotComponent*>                 Slots;                                                    // 0x0488(0x0010) (Edit, ExportObject, ZeroConstructor)
	bool                                               bOverrideAutoAdjust;                                      // 0x0498(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	struct FCoverAdjustParams                          AutoAdjustParamsOverride;                                 // 0x049C(0x0040) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class AActor*                                      TargetTestActor;                                          // 0x04E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HostileTestActor;                                         // 0x04E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAdjust;                                              // 0x04F0(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1F];                                      // 0x04F1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.Cover");
		return ptr;
	}


	void SetEnabled(bool bEnabled);
	bool IsEnabled();
};


// Class GbxAI.CoverSlotComponent
// 0x0150 (0x0840 - 0x06F0)
class UCoverSlotComponent : public UPrimitiveComponent
{
public:
	class UCoverSlotData*                              SlotType;                                                 // 0x06F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x06F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDetect;                                              // 0x06F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // 0x06FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x06FB(0x0005) MISSED OFFSET
	TArray<struct FCoverSlotViewData>                  Views;                                                    // 0x0700(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCoverSlotViewFailData>              FailedViews;                                              // 0x0710(0x0010) (Edit, ZeroConstructor, EditConst)
	ECoverSlotHeight                                   SlotHeight;                                               // 0x0720(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	TArray<class UCoverSlotComponent*>                 OverlappingSlots;                                         // 0x0728(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0738(0x0008) MISSED OFFSET
	struct FCoverLineOfSightData                       ExposedLosData;                                           // 0x0740(0x00B0)
	class APawn*                                       SlotOwnerUsing;                                           // 0x07F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       SlotOwnerClaimed;                                         // 0x07F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0800(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.CoverSlotComponent");
		return ptr;
	}


	void SetEnabled(bool bNewEnabled);
	bool IsEnabled();
};


// Class GbxAI.CoverSlotData
// 0x0098 (0x00C8 - 0x0030)
class UCoverSlotData : public UGbxDataAsset
{
public:
	float                                              SlotWidth;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlotHeightLow;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlotHeightHigh;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOffGroundCover;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FCoverLineOfSightParams                     ExposedParams;                                            // 0x0040(0x0028) (Edit)
	bool                                               bCheckExposure;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FCoverAdjustParams                          AutoAdjustParams;                                         // 0x006C(0x0040) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<class UCoverViewData*>                      Views;                                                    // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FColor                                      ValidColor;                                               // 0x00C0(0x0004) (Edit, IsPlainOldData)
	float                                              NavSearchRadius;                                          // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.CoverSlotData");
		return ptr;
	}

};


// Class GbxAI.CoverStyleData
// 0x0018 (0x0048 - 0x0030)
class UCoverStyleData : public UGbxDataAsset
{
public:
	ECoverStyleAnimType                                AnimType;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UCoverViewData*                              View;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	bool                                               bAllowLookAts;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowAimOffsets;                                         // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFiring;                                             // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0043(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.CoverStyleData");
		return ptr;
	}

};


// Class GbxAI.GbxCoverTransitionTable
// 0x0060 (0x00A8 - 0x0048)
class UGbxCoverTransitionTable : public UGbxAnimTable
{
public:
	class UGbxAnimSet*                                 AnimSet;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCoverTransitionFilters                     Filters;                                                  // 0x0050(0x0050) (Edit)
	float                                              DefaultHeight;                                            // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCoverTransitionTable");
		return ptr;
	}

};


// Class GbxAI.CoverUserComponent
// 0x0798 (0x0910 - 0x0178)
class UCoverUserComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCoverStateChanged;                                      // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0190(0x0050) MISSED OFFSET
	struct FCoverAction                                DesiredAction;                                            // 0x01E0(0x0130) (Transient)
	struct FCoverAction                                CurrentAction;                                            // 0x0310(0x0130) (Transient)
	struct FCoverAction                                PreviousAction;                                           // 0x0440(0x0130) (Transient)
	ECoverUserState                                    State;                                                    // 0x0570(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	ECoverUserState                                    DesiredState;                                             // 0x0571(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0572(0x0006) MISSED OFFSET
	struct FName                                       TransitionName;                                           // 0x0578(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelMeshComponent;                                        // 0x0580(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AGbxCharacter*                               GbxCharacter;                                             // 0x0588(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGbxAIController*                            GbxAIController;                                          // 0x0590(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDamageComponent*                            DamageComponent;                                          // 0x0598(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxNavComponent*                            GbxNavComponent;                                          // 0x05A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStanceComponent*                            StanceComponent;                                          // 0x05A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetingComponent*                         TargetingComponent;                                       // 0x05B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAIWeaponUserComponent*                      WeaponUserComponent;                                      // 0x05B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxNavCharacterMovementComponent*           MovementComponent;                                        // 0x05C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSavedCollision                             SavedCollision;                                           // 0x05C8(0x0020) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x05E8(0x0008) MISSED OFFSET
	struct FCoverClientData                            ClientData;                                               // 0x05F0(0x0028) (Net, Transient)
	bool                                               bFlanked;                                                 // 0x0618(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	float                                              MaxVerticalNavDistance;                                   // 0x061C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHorizontalNavDistance;                                 // 0x0620(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeltaLocationThreshold;                                // 0x0624(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeltaRotationThreshold;                                // 0x0628(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExitInterpSearchDistance;                                 // 0x062C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionBetweenTraceHeight;                             // 0x0630(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WidthAdjustment;                                          // 0x0634(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightAdjustment;                                         // 0x0638(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableFootIk;                                           // 0x063C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	TArray<struct FCoverStyleUserData>                 Styles;                                                   // 0x0640(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              FireToIdleStates;                                         // 0x0650(0x0010) (Edit, ZeroConstructor)
	struct FGbxParam                                   DefaultIdleTime;                                          // 0x0660(0x0080) (Edit)
	struct FGbxParam                                   DefaultFireTime;                                          // 0x06E0(0x0080) (Edit)
	struct FGbxParam                                   DefaultWaitTimeBeforeSeekingBetterCover;                  // 0x0760(0x0080) (Edit)
	struct FAITicketUseData                            TicketForAdvancingToBetterCover;                          // 0x07E0(0x0108) (Edit)
	struct FCoverFaceDirections                        FaceDirections;                                           // 0x08E8(0x0003) (Edit)
	unsigned char                                      UnknownData06[0x5];                                       // 0x08EB(0x0005) MISSED OFFSET
	class UClass*                                      HitReactionLayer;                                         // 0x08F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionBlendTime;                                      // 0x08F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearCoverDistance;                                        // 0x08FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCoverTransitionTable*                    EnterTransitionTable;                                     // 0x0900(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCoverTransitionTable*                    BetweenTransitionTable;                                   // 0x0908(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.CoverUserComponent");
		return ptr;
	}


	void SetEnterTransitionTable(class UGbxCoverTransitionTable* NewTable);
	void OnRep_ClientData();
	void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	class UCoverStyleData* GetStyle();
};


// Class GbxAI.CoverViewData
// 0x0048 (0x0078 - 0x0030)
class UCoverViewData : public UGbxDataAsset
{
public:
	ECoverSlotHeight                                   SlotHeight;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     ViewOffset;                                               // 0x0034(0x000C) (Edit, IsPlainOldData)
	struct FCoverLineOfSightParams                     TargetParams;                                             // 0x0040(0x0028) (Edit)
	float                                              ForwardCheckDistance;                                     // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ForwardCheckExtent;                                       // 0x006C(0x000C) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.CoverViewData");
		return ptr;
	}

};


// Class GbxAI.EnvQueryContext_AllTargets
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllTargets : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_AllTargets");
		return ptr;
	}

};


// Class GbxAI.EnvQueryContext_Friendlies
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Friendlies : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_Friendlies");
		return ptr;
	}

};


// Class GbxAI.EnvQueryContext_Target
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Target : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_Target");
		return ptr;
	}

};


// Class GbxAI.EnvQueryContext_TargetActualLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActualLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_TargetActualLocation");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_AINodes
// 0x00A0 (0x0100 - 0x0060)
class UEnvQueryGenerator_AINodes : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchCenter;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0068(0x0030) (Edit)
	struct FActorTagCompositeQuery                     TagQuery;                                                 // 0x0098(0x0010) (Edit)
	TArray<TSoftObjectPtr<class UClass>>               AllowedTypes;                                             // 0x00A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bUseAllowedTypes : 1;                                     // 0x00B8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               DisallowedTypes;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bUseDisallowedTypes : 1;                                  // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              AllowedTypesCache;                                        // 0x00D8(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              DisallowedTypesCache;                                     // 0x00E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_AINodes");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_Cover
// 0x0050 (0x00B0 - 0x0060)
class UEnvQueryGenerator_Cover : public UEnvQueryGenerator
{
public:
	TArray<class UCoverSlotData*>                      SlotTypes;                                                // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0070(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCoverSlotData*                              SlotType;                                                 // 0x00A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_Cover");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_DynamicPoints
// 0x0160 (0x01F8 - 0x0098)
class UEnvQueryGenerator_DynamicPoints : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00C8(0x0030) (Edit, DisableEditOnInstance)
	struct FEQSDynamicPointRange                       PointsPerRing;                                            // 0x00F8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FEQSDynamicPointRange                       NumberOfRings;                                            // 0x0108(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FEQSDynamicPointRange                       NumberOfLayers;                                           // 0x0118(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   TopLayerHeight;                                           // 0x0128(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   BottomLayerHeight;                                        // 0x0158(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseLayers : 1;                                           // 0x0188(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	int                                                NumberOfPointsMin;                                        // 0x018C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                NumberOfPointsMax;                                        // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0198(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x01B8(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E8(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_DynamicPoints");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_FindLookAtPoint
// 0x0040 (0x00A0 - 0x0060)
class UEnvQueryGenerator_FindLookAtPoint : public UEnvQueryGenerator
{
public:
	ELookAtPointType                                   LookAtPointType;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_FindLookAtPoint");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_FindPerch
// 0x0040 (0x00A0 - 0x0060)
class UEnvQueryGenerator_FindPerch : public UEnvQueryGenerator
{
public:
	class UPerchType*                                  PerchType;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_FindPerch");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_SmartAction
// 0x00E8 (0x0148 - 0x0060)
class UEnvQueryGenerator_SmartAction : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderBoolValue                    CombatActions;                                            // 0x0060(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    PassiveActions;                                           // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UClass>>               ActorTypes;                                               // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              ActorTypesCache;                                          // 0x00D0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	struct FGameplayTagContainer                       ActionNames;                                              // 0x00E8(0x0020) (Edit)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0108(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETerritoryType                                     TerritoryArea;                                            // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTerritoryArea;                                        // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0142(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_SmartAction");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_SmartGrid
// 0x0010 (0x00A8 - 0x0098)
class UEnvQueryGenerator_SmartGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TArray<struct FSmartGridSearchSet>                 SearchSets;                                               // 0x0098(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_SmartGrid");
		return ptr;
	}

};


// Class GbxAI.EnvQueryGenerator_Territory
// 0x0070 (0x0108 - 0x0098)
class UEnvQueryGenerator_Territory : public UEnvQueryGenerator_ProjectedPoints
{
public:
	ETerritoryType                                     TerritoryArea;                                            // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00A0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   EverywhereRadius;                                         // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	ETerritoryMovementType                             MovementType;                                             // 0x0100(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_Territory");
		return ptr;
	}

};


// Class GbxAI.EnvQueryItemType_SmartAction
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_SmartAction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryItemType_SmartAction");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_ActorHealth
// 0x0008 (0x01E0 - 0x01D8)
class UEnvQueryTest_ActorHealth : public UEnvQueryTest
{
public:
	bool                                               bHealthPercentage;                                        // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHealthConsumed;                                          // 0x01D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_ActorHealth");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_AITicket
// 0x0038 (0x0210 - 0x01D8)
class UEnvQueryTest_AITicket : public UEnvQueryTest
{
public:
	class UAITicketDataAsset*                          AITicket;                                                 // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   Value;                                                    // 0x01E0(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_AITicket");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_Angle
// 0x0108 (0x02E0 - 0x01D8)
class UEnvQueryTest_Angle : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x01D8(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   LineAHeadingOffset;                                       // 0x01F8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   LineAPitchOffset;                                         // 0x0228(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x0258(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   LineBHeadingOffset;                                       // 0x0278(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   LineBPitchOffset;                                         // 0x02A8(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bTestHeading;                                             // 0x02D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTestPitch;                                               // 0x02D9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_Angle");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_ArcTrace
// 0x0068 (0x0308 - 0x02A0)
class UEnvQueryTest_ArcTrace : public UEnvQueryTest_Trace
{
public:
	struct FAIDataProviderFloatValue                   ArcSpeed;                                                 // 0x02A0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAnglePercent;                                          // 0x02D0(0x0030) (Edit, DisableEditOnInstance)
	int                                                NumSegments;                                              // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_ArcTrace");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_AttackerCountAgainstTarget
// 0x0000 (0x01D8 - 0x01D8)
class UEnvQueryTest_AttackerCountAgainstTarget : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_AttackerCountAgainstTarget");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_BlackboardKey
// 0x0010 (0x01E8 - 0x01D8)
class UEnvQueryTest_BlackboardKey : public UEnvQueryTest
{
public:
	struct FGbxBlackboardKeySelector                   BlackboardKey;                                            // 0x01D8(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_BlackboardKey");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_Boundary
// 0x0030 (0x0208 - 0x01D8)
class UEnvQueryTest_Boundary : public UEnvQueryTest
{
public:
	struct FAIDataProviderFloatValue                   Distance;                                                 // 0x01D8(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_Boundary");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_CoverCurrent
// 0x0000 (0x01D8 - 0x01D8)
class UEnvQueryTest_CoverCurrent : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CoverCurrent");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_CoverExposure
// 0x0038 (0x0210 - 0x01D8)
class UEnvQueryTest_CoverExposure : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    DoExposureTest;                                           // 0x01E0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CoverExposure");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_CoverView
// 0x0038 (0x0210 - 0x01D8)
class UEnvQueryTest_CoverView : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    DoViewTest;                                               // 0x01E0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CoverView");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_CurrentTarget
// 0x0000 (0x01D8 - 0x01D8)
class UEnvQueryTest_CurrentTarget : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CurrentTarget");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_CustomScoringBoost
// 0x0020 (0x01F8 - 0x01D8)
class UEnvQueryTest_CustomScoringBoost : public UEnvQueryTest
{
public:
	float                                              ReductionExtreme;                                         // 0x01D8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ReductionModerate;                                        // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReductionLight;                                           // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoBoostWeighting;                                         // 0x01E4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AmplificationLight;                                       // 0x01E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmplificationModerate;                                    // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmplificationExtreme;                                     // 0x01F0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CustomScoringBoost");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_DirectPath
// 0x0010 (0x01E8 - 0x01D8)
class UEnvQueryTest_DirectPath : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseEnoughDistance;                                      // 0x01E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_DirectPath");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_GbxPath
// 0x0008 (0x01E0 - 0x01D8)
class UEnvQueryTest_GbxPath : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_GbxPath");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_IsInGodMode
// 0x0000 (0x01D8 - 0x01D8)
class UEnvQueryTest_IsInGodMode : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_IsInGodMode");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_MyMasterIsAttackingTarget
// 0x0028 (0x0200 - 0x01D8)
class UEnvQueryTest_MyMasterIsAttackingTarget : public UEnvQueryTest
{
public:
	float                                              DecayRate;                                                // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x01DC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_MyMasterIsAttackingTarget");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_PetModifier
// 0x0010 (0x01E8 - 0x01D8)
class UEnvQueryTest_PetModifier : public UEnvQueryTest
{
public:
	struct FGameplayTag                                PetTag;                                                   // 0x01D8(0x0008) (Edit)
	struct FGameplayTag                                BossTag;                                                  // 0x01E0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_PetModifier");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_PetOwnerDistance
// 0x0038 (0x0210 - 0x01D8)
class UEnvQueryTest_PetOwnerDistance : public UEnvQueryTest
{
public:
	struct FAIDataProviderFloatValue                   MaxDistanceToOwner;                                       // 0x01D8(0x0030) (Edit)
	struct FGameplayTag                                AnyDistanceTag;                                           // 0x0208(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_PetOwnerDistance");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_StandardCover
// 0x0158 (0x0330 - 0x01D8)
class UEnvQueryTest_StandardCover : public UEnvQueryTest
{
public:
	class UClass*                                      FriendliesContext;                                        // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TargetContext;                                            // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExposureContext;                                          // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   TargetDistanceMinPriorToTakingCover;                      // 0x01F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   TargetDistanceMaxPriorToTakingCover;                      // 0x0220(0x0030) (Edit, DisableEditOnInstance)
	float                                              TargetDistanceMinMultiplierAfterTakingCover;              // 0x0250(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDistanceMaxMultiplierAfterTakingCover;              // 0x0254(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   QuerierMaxDistance;                                       // 0x0258(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    DoViewTest;                                               // 0x0288(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    DoExposureTest;                                           // 0x02B8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FriendlyDistance;                                         // 0x02E8(0x0030) (Edit, DisableEditOnInstance)
	float                                              ScoringWeight_AlreadyAtCover;                             // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoringWeight_DistanceToQuerier;                          // 0x031C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoringWeight_DistanceToTarget;                           // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoringWeight_DistanceToFriendlies;                       // 0x0324(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoringWeight_CoverView;                                  // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoringWeight_CoverExposure;                              // 0x032C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_StandardCover");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_TacticalCover
// 0x0008 (0x01E0 - 0x01D8)
class UEnvQueryTest_TacticalCover : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TacticalCover");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_TargetIsAttackingMyMaster
// 0x0008 (0x01E0 - 0x01D8)
class UEnvQueryTest_TargetIsAttackingMyMaster : public UEnvQueryTest
{
public:
	float                                              DecayRate;                                                // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsAttackingMyMaster");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_TargetIsCloseToMyMaster
// 0x0080 (0x0258 - 0x01D8)
class UEnvQueryTest_TargetIsCloseToMyMaster : public UEnvQueryTest
{
public:
	struct FGbxParam                                   DistanceThreshold;                                        // 0x01D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsCloseToMyMaster");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_TargetIsExposed
// 0x0000 (0x01D8 - 0x01D8)
class UEnvQueryTest_TargetIsExposed : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsExposed");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_TargetIsHurtingMe
// 0x0008 (0x01E0 - 0x01D8)
class UEnvQueryTest_TargetIsHurtingMe : public UEnvQueryTest
{
public:
	float                                              DecayRate;                                                // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsHurtingMe");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_TargetIsThreat
// 0x0000 (0x01D8 - 0x01D8)
class UEnvQueryTest_TargetIsThreat : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsThreat");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_TargetSensed
// 0x0028 (0x0200 - 0x01D8)
class UEnvQueryTest_TargetSensed : public UEnvQueryTest
{
public:
	class FString                                      DevLabel;                                                 // 0x01D8(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              SensesToTestFor;                                          // 0x01E8(0x0010) (Edit, ZeroConstructor)
	float                                              TimeToCareAboutStimuli;                                   // 0x01F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetSensed");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_UberTrace
// 0x0018 (0x02B8 - 0x02A0)
class UEnvQueryTest_UberTrace : public UEnvQueryTest_Trace
{
public:
	TArray<struct FExtendedTraceInfo>                  TracesToPerform;                                          // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWantsTracesToHit;                                        // 0x02B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_UberTrace");
		return ptr;
	}

};


// Class GbxAI.EnvQueryTest_WithinTerritory
// 0x0008 (0x01E0 - 0x01D8)
class UEnvQueryTest_WithinTerritory : public UEnvQueryTest
{
public:
	ETerritoryType                                     TerritoryArea;                                            // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_WithinTerritory");
		return ptr;
	}

};


// Class GbxAI.AIResource_ScriptedAction
// 0x0000 (0x0038 - 0x0038)
class UAIResource_ScriptedAction : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIResource_ScriptedAction");
		return ptr;
	}

};


// Class GbxAI.GameplayTask_ScriptedAction
// 0x0058 (0x00C0 - 0x0068)
class UGameplayTask_ScriptedAction : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
	TArray<class AGbxAIController*>                    Controllers;                                              // 0x0080(0x0010) (ZeroConstructor, Transient)
	TArray<class AGbxAIController*>                    AbortingControllers;                                      // 0x0090(0x0010) (ZeroConstructor, Transient)
	class UAIAction*                                   ScriptedAIAction;                                         // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedAction");
		return ptr;
	}


	void OnActorSpawned(class ASpawner* Spawner, class AActor* Actor);
};


// Class GbxAI.GameplayTask_ScriptedCover
// 0x0028 (0x00E8 - 0x00C0)
class UGameplayTask_ScriptedCover : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnArrived;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCoverSlotComponent*                         CoverSlot;                                                // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCoverUserComponent*                         CoverUser;                                                // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedCover");
		return ptr;
	}


	void TaskScriptedCoverDelegate__DelegateSignature();
	void STATIC_EndScriptedCover(class AActor* User);
	class UGameplayTask_ScriptedCover* STATIC_BeginScriptedCover(class AActor* User, class ACover* Cover);
};


// Class GbxAI.GameplayTask_ScriptedFollow
// 0x0020 (0x00E0 - 0x00C0)
class UGameplayTask_ScriptedFollow : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnStopped;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      ActorToFollow;                                            // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         StanceProvider;                                           // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedFollow");
		return ptr;
	}


	void TaskScriptedMoveDelegate__DelegateSignature();
	class UGameplayTask_ScriptedFollow* STATIC_BeginScriptedFollow(class AActor* Follower, class AActor* ActorToFollow, class UStanceDataProvider* OptionalStance);
};


// Class GbxAI.GameplayTask_ScriptedLand
// 0x0020 (0x00E0 - 0x00C0)
class UGameplayTask_ScriptedLand : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnAborted;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedLand");
		return ptr;
	}


	void TaskScriptedLandDelegate__DelegateSignature();
	class UGameplayTask_ScriptedLand* STATIC_BeginScriptedLand(class AActor* Lander);
};


// Class GbxAI.GameplayTask_ScriptedLead
// 0x0038 (0x00F8 - 0x00C0)
class UGameplayTask_ScriptedLead : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnAborted;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      DestNode;                                                 // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToLead;                                              // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         StanceProvider;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedLead");
		return ptr;
	}


	void TaskScriptedLeadDelegate__DelegateSignature();
	class UGameplayTask_ScriptedLead* STATIC_BeginScriptedLead(class AActor* Leader, class AActor* DestAINode, class AActor* ActorToLead, class UStanceDataProvider* OptionalStance);
};


// Class GbxAI.GameplayTask_ScriptedMove
// 0x0040 (0x0100 - 0x00C0)
class UGameplayTask_ScriptedMove : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnAborted;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      AINode;                                                   // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         StanceProvider;                                           // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtActor;                                              // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportOnFail;                                          // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedMove");
		return ptr;
	}


	void TaskScriptedMoveDelegate__DelegateSignature();
	class UGameplayTask_ScriptedMove* STATIC_BeginScriptedMoveActor(class AAIController* Target, class AActor* StartNode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor);
	class UGameplayTask_ScriptedMove* STATIC_BeginScriptedMove2(class AActor* User, class AActor* StartAINode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor);
	class UGameplayTask_ScriptedMove* STATIC_BeginScriptedMove(class AActor* Target, class AActor* StartNode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, bool bTeleportOnFail);
};


// Class GbxAI.GameplayTask_ScriptedMoveSpline
// 0x0060 (0x0120 - 0x00C0)
class UGameplayTask_ScriptedMoveSpline : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnAborted;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      Target;                                                   // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStanceDataProvider*                         StanceProvider;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtActor;                                              // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      OptionalAIAction;                                         // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGbxSpawner*                                 DropOffSpawner;                                           // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      NextSpline;                                               // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedMoveSpline");
		return ptr;
	}


	void TaskScriptedMoveDelegate__DelegateSignature(class AActor* Targeted);
	class UGameplayTask_ScriptedMoveSpline* STATIC_BeginScriptedMoveOnSpline(class AActor* Target, class AActor* StartSpline, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, class UClass* OptionalAIAction);
};


// Class GbxAI.AIAction_MoveToLevelSequence
// 0x0000 (0x0FA0 - 0x0FA0)
class UAIAction_MoveToLevelSequence : public UAIAction_GoToPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIAction_MoveToLevelSequence");
		return ptr;
	}

};


// Class GbxAI.GameplayTask_ScriptedMoveToLevelSequence
// 0x00A0 (0x0160 - 0x00C0)
class UGameplayTask_ScriptedMoveToLevelSequence : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnActorArrived;                                           // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorFailedToArrive;                                    // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllActorsArrived;                                       // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	class AGbxLevelSequenceActor*                      LevelSequenceActor;                                       // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0120(0x0038) MISSED OFFSET
	class UStanceDataProvider*                         StanceProvider;                                           // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedMoveToLevelSequence");
		return ptr;
	}


	void TaskScriptedMoveDelegate__DelegateSignature();
	void TaskScriptedMoveActorsDelegate__DelegateSignature();
	void TaskScriptedMoveActorDelegate__DelegateSignature(class AActor* Actor);
	void OnLevelSequenceStopped();
	void OnLevelSequenceFinished();
	class UGameplayTask_ScriptedMoveToLevelSequence* STATIC_BeginScriptedMoveToLevelSequenceMulti(TArray<class AActor*> Targets, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance);
	class UGameplayTask_ScriptedMoveToLevelSequence* STATIC_BeginScriptedMoveToLevelSequence(class AActor* Target, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance);
};


// Class GbxAI.GameplayTask_ScriptedRoute
// 0x0030 (0x00F0 - 0x00C0)
class UGameplayTask_ScriptedRoute : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnAborted;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      AINode;                                                   // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStanceDataProvider*                         StanceProvider;                                           // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedRoute");
		return ptr;
	}


	void TaskScriptedMoveDelegate__DelegateSignature();
	class UGameplayTask_ScriptedRoute* STATIC_BeginScriptedRoute2(class AActor* Target, class AActor* FirstAINode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance);
	class UGameplayTask_ScriptedRoute* STATIC_BeginScriptedRoute(class AActor* User, class AActor* FirstAINode, class UStanceDataProvider* OptionalStance);
};


// Class GbxAI.GameplayTask_SmartAction
// 0x0080 (0x0140 - 0x00C0)
class UGameplayTask_SmartAction : public UGameplayTask_ScriptedAction
{
public:
	struct FScriptMulticastDelegate                    OnReserve;                                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnreserve;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBegin;                                                  // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupt;                                              // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FSmartActionInfoContext                     Action;                                                   // 0x0110(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GameplayTask_SmartAction");
		return ptr;
	}


	void UnreserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void SuccessCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void ReserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void InterruptCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void STATIC_EndSmartAction(class AActor* User);
	class UGameplayTask_SmartAction* STATIC_BeginSmartAction(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void BeginCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void AITaskEvent__DelegateSignature();
};


// Class GbxAI.GbxAction_CoverHitReaction
// 0x0018 (0x00D0 - 0x00B8)
class UGbxAction_CoverHitReaction : public UGbxAction_SimpleAnim
{
public:
	TArray<struct FCoverHitReactionItem>               Styles;                                                   // 0x00B8(0x0010) (Edit, ZeroConstructor)
	float                                              BlendInTime;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAction_CoverHitReaction");
		return ptr;
	}

};


// Class GbxAI.GbxAction_CoverTransition
// 0x0000 (0x0060 - 0x0060)
class UGbxAction_CoverTransition : public UGbxAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAction_CoverTransition");
		return ptr;
	}

};


// Class GbxAI.GbxAction_Navigation
// 0x0008 (0x00C0 - 0x00B8)
class UGbxAction_Navigation : public UGbxAction_SimpleAnim
{
public:
	bool                                               bMaintainRootVelocity;                                    // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAction_Navigation");
		return ptr;
	}


	struct FVector K2_GetExitLocation();
	struct FVector K2_GetEntryLocation();
};


// Class GbxAI.GbxAction_NavAnim
// 0x00E8 (0x01A8 - 0x00C0)
class UGbxAction_NavAnim : public UGbxAction_Navigation
{
public:
	float                                              EntryTime;                                                // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FName                                       AnimSlot;                                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimMeshList                               NavAnimations;                                            // 0x00D8(0x0078) (Edit)
	bool                                               bLerpLocation;                                            // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLerpRotation;                                            // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStretchy;                                             // 0x0152(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0153(0x0005) MISSED OFFSET
	struct FStretchBonesSettings                       StretchBonesSettings;                                     // 0x0158(0x0030) (Edit, DisableEditOnInstance)
	class UAnimSequenceBase*                           NavAnim;                                                  // 0x0188(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FAnimActionDef                              NavAnimation;                                             // 0x0190(0x0018) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAction_NavAnim");
		return ptr;
	}

};


// Class GbxAI.GbxAction_NavJump
// 0x0228 (0x02E8 - 0x00C0)
class UGbxAction_NavJump : public UGbxAction_Navigation
{
public:
	struct FStretchBonesSettings                       StretchBonesSettings;                                     // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	float                                              RotationTime;                                             // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCancelRotationOnActionStop;                              // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyRotationOnStart;                                    // 0x00F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimSlot;                                                 // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimMeshList                               JumpEnterAnims;                                           // 0x0108(0x0078) (Edit)
	struct FAnimMeshList                               JumpExitAnims;                                            // 0x0180(0x0078) (Edit)
	struct FAnimMeshList                               JumpIdleAnims;                                            // 0x01F8(0x0078) (Edit)
	ENavJumpRotation                                   RotationDirective;                                        // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockRotation;                                            // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENavJumpStage                                      DisablePhysicsStage;                                      // 0x0272(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENavJumpStage                                      EnablePhysicsStage;                                       // 0x0273(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArcSpeed;                                                 // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArcAnglePercent;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPrediction;                                            // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArcTimeScale;                                             // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitHitReactions;                                       // 0x0284(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           JumpEnter;                                                // 0x0288(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           JumpExit;                                                 // 0x0290(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           JumpIdle;                                                 // 0x0298(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FAnimActionDef                              JumpEnterAnim;                                            // 0x02A0(0x0018) (Deprecated)
	struct FAnimActionDef                              JumpExitAnim;                                             // 0x02B8(0x0018) (Deprecated)
	struct FAnimActionDef                              JumpIdleAnim;                                             // 0x02D0(0x0018) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAction_NavJump");
		return ptr;
	}


	void OnIdle(class AActor* Actor);
	void OnExit(class AActor* Actor);
};


// Class GbxAI.GbxAction_NavHomingJump
// 0x0008 (0x02F0 - 0x02E8)
class UGbxAction_NavHomingJump : public UGbxAction_NavJump
{
public:
	float                                              MaxHomingDistance;                                        // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAction_NavHomingJump");
		return ptr;
	}

};


// Class GbxAI.GbxAction_NavLerp
// 0x0028 (0x00E8 - 0x00C0)
class UGbxAction_NavLerp : public UGbxAction_Navigation
{
public:
	bool                                               bWaitForDistance;                                         // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              MaxHorizontalDistance;                                    // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVerticalDistance;                                      // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForVelocity;                                         // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              MaxVelocity;                                              // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCallAlmostDone;                                          // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              AlmostedDoneTime;                                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecifyLerpTime;                                         // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	float                                              LerpTime;                                                 // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAction_NavLerp");
		return ptr;
	}


	void OnAlmostDone(class AActor* Actor);
};


// Class GbxAI.GbxAIBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAIBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetPerceivableToAllAI(class AActor* Actor, bool bPerceivable);
	void STATIC_SetAIPathFindingData(class AActor* InActor, class UHavokPathFindingData* PathFindingData);
	void STATIC_SetAINavAreaData(class AActor* InActor, class UGbxNavAreaData* NavAreaData);
	void STATIC_ResetTeamForAllAIChildren(class AActor* Actor);
	bool STATIC_IsActorThreatened(class AActor* InActor);
	bool STATIC_GetValueAsActorAndLocation(class UBlackboardComponent* Blackboard, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location);
	bool STATIC_GetBlackboardValueAsActorAndLocation(class UBTNode* BTNode, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location);
	void STATIC_AIScriptedUseWeapon(class AActor* Actor, bool bUseWeapon);
	void STATIC_AIScriptedAction(class AActor* Actor, class UClass* Action);
	bool STATIC_AIIsWithinTerritory(class AActor* AIActor, ETerritoryType Zone);
};


// Class GbxAI.GbxAIController
// 0x0128 (0x06C0 - 0x0598)
class AGbxAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0598(0x0030) MISSED OFFSET
	class AGbxCharacter*                               GbxCharacter;                                             // 0x05C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x05D0(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	class UGbxCharacterMovementComponent*              MovementComponent;                                        // 0x05E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetingComponent*                         TargetingComponent;                                       // 0x05E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        TargetableComponent;                                      // 0x05F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTeamComponent*                              TeamComponent;                                            // 0x05F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0600(0x0008) MISSED OFFSET
	class UAIActionComponent*                          AIActionComponent;                                        // 0x0608(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTerritoryComponent*                         DefaultTerritory;                                         // 0x0610(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTerritoryComponent*                         CurrentTerritory;                                         // 0x0618(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxSpawnerComponent*                        SpawnerComponent;                                         // 0x0620(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxNavComponent*                            GbxNavComponent;                                          // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIUseComponent*                             AIUseComponent;                                           // 0x0630(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UAIWeaponUserComponent*>              WeaponUserComponents;                                     // 0x0638(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UGbxActionComponent*                         GbxActionComponent;                                       // 0x0648(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              ChildActors;                                              // 0x0650(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0660(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAggro;                                                  // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeAggro;                                                // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0688(0x0030) MISSED OFFSET
	class UGbxLevelSequencePlayer*                     LevelSequencePlayerController;                            // 0x06B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAIController");
		return ptr;
	}


	void SetTerritory(class UTerritoryComponent* Territory);
	void SetTeam(class UTeam* Team);
	void SetObstacleAvoidanceLock(bool bDisable, const struct FName& Reason);
	void ResetTerritoryToDefault();
	void OnMyWeaponHitSomething(class AActor* HitActor, const struct FVector& HitLocation);
	class UAIWeaponUserComponent* GetWeaponUserComponent();
	class UAIUseComponent* GetUseComponent();
	class UTerritoryComponent* GetTerritory();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	class USpawnerComponent* GetSpawnerComponent();
	class ASpawner* GetSpawner();
	class UAIPerceptionComponent* GetPerceptionComponent();
	int GetNumChildActors();
	class UGbxNavComponent* GetNavComponent();
	class UGbxCharacterMovementComponent* GetMovementComponent();
	class UAIGroupState* GetGroupState();
	class AGbxCharacter* GetGbxCharacter();
	class UGbxActionComponent* GetGbxActionComponent();
	TArray<class AActor*> GetChildActors();
	class UBlackboardComponent* GetBlackboardComponent();
	class UBlackboardData* GetBlackboardAsset();
	int GetAIGroupSize();
	void GetAIGroupList(bool bIncludeSelf, float InRadius, TArray<class AActor*>* AIGroupList);
	class UAIActionComponent* GetAIActionComponent();
	void ChildDestroyed(class AActor* DestroyedActor);
	void CheckPauseWhileFalling(class ACharacter* TheCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void AddChildActors(TArray<class AActor*> NewChildren);
	void AddChildActor(class AActor* NewChild);
};


// Class GbxAI.GbxAINavSystem
// 0x0000 (0x0438 - 0x0438)
class UGbxAINavSystem : public UGbxNavSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAINavSystem");
		return ptr;
	}

};


// Class GbxAI.GbxAISystem
// 0x0010 (0x0140 - 0x0130)
class UGbxAISystem : public UGbxAISystemBase
{
public:
	class UAIActionManager*                            AIActionManager;                                          // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIGroupState*                               PlayerAIGroupState;                                       // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAISystem");
		return ptr;
	}

};


// Class GbxAI.GbxAnimStateManager_Cover
// 0x0048 (0x0080 - 0x0038)
class UGbxAnimStateManager_Cover : public UGbxAnimStateManager
{
public:
	ECoverUserAnimState                                Type;                                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UCoverStyleData*                             Style;                                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UCoverViewData*>                      Views;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor)
	class UGbxCoverTransitionTable*                    TransitionTable;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCoverUserComponent*                         CoverUser;                                                // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxCharacterAnimInstance*                   GbxCharAnimInstance;                                      // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxCharMoveComponent;                                     // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAnimSequence*                               AnimSequence;                                             // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxAnimStateManager_Cover");
		return ptr;
	}


	void Owner_PostBeginPlay();
};


// Class GbxAI.GbxBehaviorTreeComponent
// 0x0000 (0x0328 - 0x0328)
class UGbxBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxBehaviorTreeComponent");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_AI_IsInRange
// 0x0098 (0x0120 - 0x0088)
class UGbxCondition_AI_IsInRange : public UGbxCondition
{
public:
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGbxParam                                   Range;                                                    // 0x0098(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bInvertRange;                                             // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_AI_IsInRange");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_AI_IsMoving
// 0x0008 (0x0090 - 0x0088)
class UGbxCondition_AI_IsMoving : public UGbxCondition
{
public:
	float                                              SpeedThreshold;                                           // 0x0088(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_AI_IsMoving");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_AIHasNearbyAllies
// 0x0108 (0x0190 - 0x0088)
class UGbxCondition_AIHasNearbyAllies : public UGbxCondition
{
public:
	struct FGbxParam                                   AllyCount;                                                // 0x0088(0x0080) (Edit, BlueprintReadOnly)
	struct FGbxParam                                   Distance;                                                 // 0x0108(0x0080) (Edit, BlueprintReadOnly)
	bool                                               bUseDistance;                                             // 0x0188(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_AIHasNearbyAllies");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_BlackboardKey
// 0x0018 (0x00A0 - 0x0088)
class UGbxCondition_BlackboardKey : public UGbxCondition
{
public:
	struct FGbxBlackboardKeySelector                   Key;                                                      // 0x0088(0x0010) (Edit, BlueprintReadOnly)
	bool                                               bInvertResult;                                            // 0x0098(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_BlackboardKey");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_CanFidgetNow
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_CanFidgetNow : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_CanFidgetNow");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_HasEnemyTarget
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_HasEnemyTarget : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasEnemyTarget");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_HasFriendlyTarget
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_HasFriendlyTarget : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasFriendlyTarget");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_HasPlayerTarget
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_HasPlayerTarget : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasPlayerTarget");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_HasTargetsInRange
// 0x0100 (0x0188 - 0x0088)
class UGbxCondition_HasTargetsInRange : public UGbxCondition
{
public:
	struct FGbxParam                                   Range;                                                    // 0x0088(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGbxParam                                   NumTargets;                                               // 0x0108(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasTargetsInRange");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_IsActorThreatened
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_IsActorThreatened : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsActorThreatened");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_IsAttachedToOtherActor
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_IsAttachedToOtherActor : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsAttachedToOtherActor");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_IsCloaked
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_IsCloaked : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsCloaked");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_IsInCover
// 0x0000 (0x0088 - 0x0088)
class UGbxCondition_IsInCover : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsInCover");
		return ptr;
	}

};


// Class GbxAI.GbxCondition_IsInStance
// 0x0010 (0x0098 - 0x0088)
class UGbxCondition_IsInStance : public UGbxCondition
{
public:
	class UStanceType*                                 StanceToMatch;                                            // 0x0088(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OptionalSpeedThreshold;                                   // 0x0090(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsInStance");
		return ptr;
	}

};


// Class GbxAI.GbxEqsTestingPawn
// 0x0030 (0x09D0 - 0x09A0)
class AGbxEqsTestingPawn : public AEQSTestingPawn
{
public:
	class UGbxCharacterMovementComponent*              GbxCharacterMovement;                                     // 0x09A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        TargetableComponent;                                      // 0x09A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            DamageComponent;                                          // 0x09B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauserComponent;                                    // 0x09B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGameplayTagContainerComponent*              GameplayTagContainerComponent;                            // 0x09C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              BaseAimHeight;                                            // 0x09C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AimHeightFromGround;                                      // 0x09CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxEqsTestingPawn");
		return ptr;
	}

};


// Class GbxAI.SmartObject
// 0x0010 (0x0468 - 0x0458)
class ASmartObject : public AActor
{
public:
	class USmartObjectComponent*                       SmartObjectComponent;                                     // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxActionComponent;                                       // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SmartObject");
		return ptr;
	}


	class USmartObjectComponent* GetSmartObjectComponent();
	class UGbxActionComponent* GetGbxActionComponent();
};


// Class GbxAI.GbxSmartObject
// 0x0000 (0x0468 - 0x0468)
class AGbxSmartObject : public ASmartObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxSmartObject");
		return ptr;
	}

};


// Class GbxAI.GbxSpawner
// 0x0048 (0x0630 - 0x05E8)
class AGbxSpawner : public ASpawner
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x05E8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnThreatened;                                             // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGbxSpawnerComponent*                        GbxSpawnerComponent;                                      // 0x0610(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USpawnNodeComponent*                         SpawnNodeComponent;                                       // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBalanceStateComponent*                      BalanceStateComponent;                                    // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     GameplayTasksComponent;                                   // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxSpawner");
		return ptr;
	}


	class UGameplayTasksComponent* GetGameplayTasksComponent();
	class UAINodeComponent* GetAINodeComponent();
	class UAIGroupState* GetAIGroupState();
	bool DEPRECATED_IsThreatened();
};


// Class GbxAI.GbxSpawnerComponent
// 0x0030 (0x09C0 - 0x0990)
class UGbxSpawnerComponent : public USpawnerComponent
{
public:
	class AGbxSpawner*                                 GbxSpawner;                                               // 0x0990(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGbxSpawner*                                 GroupGbxSpawner;                                          // 0x0998(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTagContainer                       AdditionalGameplayTags;                                   // 0x09A0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxSpawnerComponent");
		return ptr;
	}

};


// Class GbxAI.GbxSpawnPoint
// 0x0008 (0x04C8 - 0x04C0)
class AGbxSpawnPoint : public ASpawnPoint
{
public:
	class USpawnNodeComponent*                         SpawnNodeComponent;                                       // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.GbxSpawnPoint");
		return ptr;
	}


	bool STATIC_HasNavNearSpawnPointFor(class USpawnPointComponent* SpawnPointComp, class USpawnOptionData* SpawnOptions);
};


// Class GbxAI.LookAtPoint
// 0x0008 (0x0460 - 0x0458)
class ALookAtPoint : public AActor
{
public:
	class ULookAtPointComponent*                       LookAtPointComponent;                                     // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.LookAtPoint");
		return ptr;
	}

};


// Class GbxAI.LookAtPointComponent
// 0x01A0 (0x0890 - 0x06F0)
class ULookAtPointComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET
	class ULookAtPointTag*                             LookAtPointTag;                                           // 0x06F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0700(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchDataOverride;                                      // 0x0701(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0702(0x0002) MISSED OFFSET
	float                                              SearchHeightOverride;                                     // 0x0704(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadiusOverride;                                     // 0x0708(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsageTimeOverride;                                       // 0x070C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	struct FGbxParam                                   UsageTimeOverride;                                        // 0x0710(0x0080) (Edit)
	bool                                               bUserCooldownTimeOverride;                                // 0x0790(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0791(0x0007) MISSED OFFSET
	struct FGbxParam                                   UserCooldownTimeOverride;                                 // 0x0798(0x0080) (Edit)
	TMap<class AController*, float>                    CooldownMap;                                              // 0x0818(0x0050) (ZeroConstructor, Transient)
	TArray<struct FSmartObjectUseRequest>              UserList;                                                 // 0x0868(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0878(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.LookAtPointComponent");
		return ptr;
	}

};


// Class GbxAI.LookAtPointTag
// 0x01B0 (0x01E0 - 0x0030)
class ULookAtPointTag : public UGbxDataAsset
{
public:
	ELookAtPointType                                   LookAtPointType;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFacingChannel                                     FacingStyle;                                              // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FGameplayTag                                ActionType;                                               // 0x0038(0x0008) (Edit)
	float                                              SearchHeight;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   UseChance;                                                // 0x0048(0x0080) (Edit)
	class UGbxCondition*                               UseCondition;                                             // 0x00C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGetInCloser;                                             // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              UseRadius;                                                // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   UsageTime;                                                // 0x00D8(0x0080) (Edit)
	struct FGbxParam                                   UserCooldownTime;                                         // 0x0158(0x0080) (Edit)
	bool                                               bMaxUsers;                                                // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	int                                                MaxUsers;                                                 // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.LookAtPointTag");
		return ptr;
	}

};


// Class GbxAI.Perch
// 0x0008 (0x0460 - 0x0458)
class APerch : public AActor
{
public:
	class UPerchComponent*                             PerchComponent;                                           // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.Perch");
		return ptr;
	}

};


// Class GbxAI.PerchComponent
// 0x0250 (0x0940 - 0x06F0)
class UPerchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET
	class UPerchTag*                                   PerchTag;                                                 // 0x06F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0700(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	float                                              SearchRadius;                                             // 0x0704(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchHeight;                                             // 0x0708(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UseRadius;                                                // 0x070C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsageTimeOverride;                                       // 0x0710(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	struct FGbxParam                                   UsageTimeOverride;                                        // 0x0718(0x0080) (Edit)
	bool                                               bCooldownTimeOverride;                                    // 0x0798(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0799(0x0007) MISSED OFFSET
	struct FGbxParam                                   CooldownTimeOverride;                                     // 0x07A0(0x0080) (Edit)
	bool                                               bUserCooldownTimeOverride;                                // 0x0820(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	struct FGbxParam                                   UserCooldownTimeOverride;                                 // 0x0828(0x0080) (Edit)
	struct FSmartObjectUseRequest                      Claimant;                                                 // 0x08A8(0x0028) (Transient)
	float                                              CooldownTime;                                             // 0x08D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	TMap<class AAIController*, float>                  CooldownMap;                                              // 0x08D8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0928(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.PerchComponent");
		return ptr;
	}

};


// Class GbxAI.PerchTag
// 0x0190 (0x01C0 - 0x0030)
class UPerchTag : public UGbxDataAsset
{
public:
	class UPerchType*                                  PerchType;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionType;                                               // 0x0038(0x0008) (Edit)
	struct FGbxParam                                   UsageTime;                                                // 0x0040(0x0080) (Edit)
	struct FGbxParam                                   CooldownTime;                                             // 0x00C0(0x0080) (Edit)
	struct FGbxParam                                   UserCooldownTime;                                         // 0x0140(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.PerchTag");
		return ptr;
	}

};


// Class GbxAI.PerchType
// 0x0000 (0x0030 - 0x0030)
class UPerchType : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.PerchType");
		return ptr;
	}

};


// Class GbxAI.ScriptedBehaviorTreeLibrary
// 0x0000 (0x0028 - 0x0028)
class UScriptedBehaviorTreeLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.ScriptedBehaviorTreeLibrary");
		return ptr;
	}


	void STATIC_PerformScriptedAbort(class AActor* Target, bool bStopImmediately);
	void STATIC_BeginScriptedWait(class AActor* Target, class UStanceDataProvider* OptionalStance);
	void STATIC_BeginScriptedLook(class AActor* Target, class AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, class UStanceDataProvider* OptionalStance);
};


// Class GbxAI.SmartObjectAction
// 0x02A0 (0x02D0 - 0x0030)
class USmartObjectAction : public UGbxDataAsset
{
public:
	bool                                               bPassiveAction;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCombatAction;                                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FGbxParam                                   UseChance;                                                // 0x0038(0x0080) (Edit)
	class UGbxCondition*                               UseCondition;                                             // 0x00B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUsageTime;                                               // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FGbxParam                                   UsageTime;                                                // 0x00C8(0x0080) (Edit)
	bool                                               bMaxUsers;                                                // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                MaxUsers;                                                 // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   ActionCooldownTime;                                       // 0x0150(0x0080) (Edit)
	struct FGbxParam                                   LocalUserCooldownTime;                                    // 0x01D0(0x0080) (Edit)
	struct FGbxParam                                   GlobalUserCooldownTime;                                   // 0x0250(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SmartObjectAction");
		return ptr;
	}

};


// Class GbxAI.AIResource_SmartObject
// 0x0000 (0x0038 - 0x0038)
class UAIResource_SmartObject : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.AIResource_SmartObject");
		return ptr;
	}

};


// Class GbxAI.SmartObjectInterface
// 0x0000 (0x0028 - 0x0028)
class USmartObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SmartObjectInterface");
		return ptr;
	}

};


// Class GbxAI.SmartObjectBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USmartObjectBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SmartObjectBlueprintLibrary");
		return ptr;
	}


	bool STATIC_UseSmartObject(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag, bool bAbortExisting, bool bUntilInterrupted);
	void STATIC_AbortSmartObjectUse(class AActor* User);
};


// Class GbxAI.SmartObjectComponent
// 0x0350 (0x04C8 - 0x0178)
class USmartObjectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActionReserved;                                         // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActionUsageBegan;                                       // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnObjectActionEnded;                                      // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActionUsageEnded;                                       // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseInRoutes;                                             // 0x01C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESmartObjectLookAtRule                             LookAtRule;                                               // 0x01C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
	struct FName                                       LookAtSocket;                                             // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   UseLookAtQuery;                                           // 0x01D8(0x0080) (Edit)
	struct FGbxParam                                   LookAtQueryDuration;                                      // 0x0258(0x0080) (Edit)
	struct FGbxParam                                   LookAtQueryForgetDuration;                                // 0x02D8(0x0080) (Edit)
	struct FGbxParam                                   LookAtQueryPeriod;                                        // 0x0358(0x0080) (Edit)
	struct FEnvQueryParams                             LookAtQuery;                                              // 0x03D8(0x00B8) (Edit)
	TArray<struct FSmartObjectActionState>             Actions;                                                  // 0x0490(0x0010) (Edit, ZeroConstructor)
	TArray<class UAIUseSlotComponent*>                 UseSlots;                                                 // 0x04A0(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SmartObjectComponent");
		return ptr;
	}


	void UnreserveEventSignature(class APawn* User);
	void ToggleActionSet(const struct FSmartObjectActionSet& ActionSet);
	void SuccessEventSignature(class APawn* User);
	void ReserveEventSignature(class APawn* User);
	void OnActionEnded(EGbxActionEndState EndState, const struct FGameplayTag& ActionName, class AController* User);
	void InterruptEventSignature(class APawn* User);
	void GetAvailableSocketNames(TArray<struct FName>* Array);
	void GetActionUsers(const struct FGameplayTag& ActionTag, TArray<class APawn*>* OutUsers);
	void EnableAllActions();
	void EnableAction(const struct FGameplayTag& ActionTag);
	void DisableAllActions();
	void DisableAction(const struct FGameplayTag& ActionTag);
	void BeginEventSignature(class APawn* User);
};


// Class GbxAI.SmartObjectPreviewComponent
// 0x0040 (0x0830 - 0x07F0)
class USmartObjectPreviewComponent : public UPreviewComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07F0(0x0008) MISSED OFFSET
	int                                                ActiveAISlotIdx;                                          // 0x07F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	class UClass*                                      PreviewAction;                                            // 0x0800(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bAutoCycle;                                               // 0x0808(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         CycleActor;                                               // 0x0809(0x0001) (Edit, Transient, IsPlainOldData)
	bool                                               bShowAction;                                              // 0x080A(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRepeatAction;                                            // 0x080B(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         ReplayAction;                                             // 0x080C(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UGbxActionComponent>          ActionComponent;                                          // 0x0810(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0818(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SmartObjectPreviewComponent");
		return ptr;
	}


	void OnReplayAction();
	void OnCycleActor(ECycleDirection Direction);
};


// Class GbxAI.SmartObjectUser
// 0x0000 (0x0028 - 0x0028)
class USmartObjectUser : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SmartObjectUser");
		return ptr;
	}

};


// Class GbxAI.SpawnBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USpawnBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SpawnBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetSpawnOptions(class AActor* SpawnerActor, class USpawnOptionData* SpawnOptions);
	class ASpawner* STATIC_GenerateSpawnerByRadius(class AActor* Instigator, class USpawnerStyle* Style, float Radius, TEnumAsByte<ETeamAttitude> MinRequiredAttitude);
	class ASpawner* STATIC_GenerateSpawnerByOwningSpawner(class AActor* Instigator, class USpawnerStyle* Style);
};


// Class GbxAI.SpawnNodeComponent
// 0x0000 (0x0790 - 0x0790)
class USpawnNodeComponent : public UAINodeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.SpawnNodeComponent");
		return ptr;
	}

};


// Class GbxAI.Territory
// 0x0008 (0x0460 - 0x0458)
class ATerritory : public AInfo
{
public:
	class UTerritoryComponent*                         TerritoryComponent;                                       // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAI.Territory");
		return ptr;
	}


	class UTerritoryComponent* GetTerritoryComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
