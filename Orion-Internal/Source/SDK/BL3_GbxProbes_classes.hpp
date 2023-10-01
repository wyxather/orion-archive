#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxProbes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxProbes.GbxProbesBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxProbesBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxProbes.GbxProbesBlueprintLibrary");
		return ptr;
	}


	void STATIC_ResolveGbxProbeId(class UObject* InObj, const struct FGameplayTag& InTag, struct FGbxProbeId* OutId, bool* IsValid);
	void STATIC_MakeProbeId(const class FString& Class, const class FString& Type, const class FString& SubType, struct FGbxProbeId* OutId);
	void STATIC_IsValidId(const struct FGbxProbeId& ProbeId, bool* IsValid);
	void STATIC_IsTestProbeEnabled(const struct FGbxProbeId& ProbeId, const struct FName& Test, bool* IsEnabled);
	void STATIC_IsTestEnabled(const struct FName& Test, bool* IsEnabled);
	void STATIC_IsClassEnabled(const struct FName& Class, bool* IsEnabled);
	void STATIC_FlushPendingTestProbes();
	void STATIC_EmitTestProbeResultWithData(const struct FGbxProbeId& ProbeId, const struct FName& Test, EGbxProbeResult Result, TArray<struct FGbxProbeExtraData> ExtraDataArray);
	void STATIC_EmitTestProbeResult(const struct FGbxProbeId& ProbeId, const struct FName& Test, EGbxProbeResult Result, const class FString& ExtraData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
