#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAC (0x3B4 - 0x308)
// BlueprintGeneratedClass BP_MJLinePlace.BP_MJLinePlace_C
class ABP_MJLinePlace_C : public AProceduralLinePlace
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndPos;                                            // 0x318(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExtendX;                                           // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ExtendZ;                                           // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseMeshBoundingBox;                                // 0x326(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ManualPartsSizeSt;                                 // 0x328(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ManualPartsSizeLpX;                                // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ManualPartsSizeLpY;                                // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ManualPartsSizeLpZ;                                // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Bounds_Scale_for_Editing;                          // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ObjectMaterial;                                    // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   RandomPartsRootLp;                                 // 0x350(0x10)(Edit, BlueprintVisible)
	int32                                        RandomSeed;                                        // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   MeshSet;                                           // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               PutOffset;                                         // 0x378(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartPartsSize;                                    // 0x384(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoopPartsSizeX;                                    // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoopPartsSizeY;                                    // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoopPartsSizeZ;                                    // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMultiRootLp;                                    // 0x39C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRandomStream                         RandomStream;                                      // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	struct FVector                               TotalPartsSize;                                    // 0x3A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MJLinePlace_C* GetDefaultObj();

	void Release();
	void GetPartsMesh(int32 IndexX, int32 IndexY, int32 IndexZ, bool NotUseRandom, class UStaticMesh** NewParam);
	void CreateLinePlaceY(int32& PartsCountX, int32& PartsCountY, int32& PartsCountZ);
	void GeneratePartsMesh(const struct FRotator& Rot, int32 IndexX, int32 IndexY, int32 IndexZ, bool* Success);
	void CreateLinePlace();
	void PrepareMeshLoopSize();
	void CreateMeshTable();
	void CheckInputControl();
	void UserConstructionScript();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_MJLinePlace(int32 EntryPoint);
};

}


