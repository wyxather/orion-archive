#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxPerfAnalytics_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxPerfAnalytics.GbxTelemetryBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxTelemetryBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxPerfAnalytics.GbxTelemetryBlueprintLibrary");
		return ptr;
	}


	struct FK2TelemetryValues STATIC_SetNamedTelemetryVector(const class FString& Key, const struct FVector& Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray);
	struct FK2TelemetryValues STATIC_SetNamedTelemetryString(const class FString& Key, const class FString& Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray);
	struct FK2TelemetryValues STATIC_SetNamedTelemetryRotator(const class FString& Key, const struct FRotator& Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray);
	struct FK2TelemetryValues STATIC_SetNamedTelemetryInt(const class FString& Key, int Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray);
	struct FK2TelemetryValues STATIC_SetNamedTelemetryFloat(const class FString& Key, float Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray);
	struct FK2TelemetryValues STATIC_SetNamedTelemetryByte(const class FString& Key, unsigned char Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray);
	struct FK2TelemetryValues STATIC_SetNamedTelemetryBool(const class FString& Key, bool Value, ESetTelemetryValue Opt, struct FK2TelemetryValues* StatArray);
	struct FK2EventRef STATIC_MakeTelemetryEventRef(const class FString& EventName);
	bool STATIC_IsValid(const struct FK2EventRef& EventRef);
	bool STATIC_EmitTelemetryValues(const class FString& EventContext, const struct FK2TelemetryValues& Values, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient);
	bool STATIC_EmitTelemetryEvent(const struct FK2EventRef& Event, const class FString& EventContext, class UObject* EventContextObject, class UObject* EventInstigatorObject, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient);
	struct FK2EventRef STATIC_DefineTelemetryEventRef(const class FString& EventName, const class FString& TableDesc);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
