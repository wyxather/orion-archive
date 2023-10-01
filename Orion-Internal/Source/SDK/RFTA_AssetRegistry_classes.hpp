#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_AssetRegistry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AssetRegistry.AssetRegistryImpl
// 0x0750 (0x0778 - 0x0028)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x750];                                     // 0x0028(0x0750) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}


	struct FSoftObjectPath STATIC_ToSoftObjectPath(struct FAssetData* InAssetData);
	struct FARFilter STATIC_SetFilterTagsAndValues(struct FARFilter* InFilter, TArray<struct FTagAndValue>* InTagsAndValues);
	bool STATIC_IsValid(struct FAssetData* InAssetData);
	bool STATIC_IsUAsset(struct FAssetData* InAssetData);
	bool STATIC_IsRedirector(struct FAssetData* InAssetData);
	bool STATIC_IsAssetLoaded(struct FAssetData* InAssetData);
	bool STATIC_GetTagValue(struct FAssetData* InAssetData, struct FName* InTagName, class FString* OutTagValue);
	class FString STATIC_GetFullName(struct FAssetData* InAssetData);
	class FString STATIC_GetExportTextName(struct FAssetData* InAssetData);
	class UClass* STATIC_GetClass(struct FAssetData* InAssetData);
	TScriptInterface<class UAssetRegistry> STATIC_GetAssetRegistry();
	class UObject* STATIC_GetAsset(struct FAssetData* InAssetData);
	struct FAssetData STATIC_CreateAssetData(class UObject** InAsset, bool* bAllowBlueprintClass);
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return ptr;
	}


	void UseFilterToExcludeAssets(struct FARFilter* Filter, TArray<struct FAssetData>* AssetDataList);
	void SearchAllAssets(bool* bSynchronousSearch);
	void ScanPathsSynchronous(TArray<class FString>* InPaths, bool* bForceRescan);
	void ScanModifiedAssetFiles(TArray<class FString>* InFilePaths);
	void ScanFilesSynchronous(TArray<class FString>* InFilePaths, bool* bForceRescan);
	void RunAssetsThroughFilter(struct FARFilter* Filter, TArray<struct FAssetData>* AssetDataList);
	void PrioritizeSearchPath(class FString* PathToPrioritize);
	bool IsLoadingAssets();
	bool HasAssets(struct FName* PackagePath, bool* bRecursive);
	void GetSubPaths(class FString* InBasePath, bool* bInRecurse, TArray<class FString>* OutPathList);
	bool GetAssetsByPath(struct FName* PackagePath, bool* bRecursive, bool* bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByPackageName(struct FName* PackageName, bool* bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByClass(struct FName* ClassName, bool* bSearchSubClasses, TArray<struct FAssetData>* OutAssetData);
	bool GetAssets(struct FARFilter* Filter, TArray<struct FAssetData>* OutAssetData);
	struct FAssetData GetAssetByObjectPath(struct FName* ObjectPath, bool* bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<class FString>* OutPathList);
	bool GetAllAssets(bool* bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
