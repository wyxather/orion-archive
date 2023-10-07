#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibArea.LibArea_C
class ULibArea_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibArea_C* GetDefaultObj();

	void GetAreaNameForMissionRecord(enum class EAreaID AreaID, class UObject* __WorldContext, class FName* AreaNameID);
	void ConvertAreaIDToAreaLowName(enum class EAreaID NewParam, class UObject* __WorldContext, class FName* RowName);
	void GetAreaEmblem(enum class EAreaID AreaID, class UObject* __WorldContext, class UTexture2D** Symbol);
	void GetMTownByAreaID(enum class EAreaID AreaID, class UObject* __WorldContext, class FName* MTownIconID);
	void GetAreaName(enum class EAreaID AreaID, class UObject* __WorldContext, class FName* AreaNameID);
};

}


