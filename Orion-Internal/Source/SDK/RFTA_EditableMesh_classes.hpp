#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EditableMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EditableMesh.EditableMeshAdapter
// 0x0000 (0x0028 - 0x0028)
class UEditableMeshAdapter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		return ptr;
	}

};


// Class EditableMesh.EditableGeometryCollectionAdapter
// 0x00B0 (0x00D8 - 0x0028)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{
public:
	class UGeometryCollection*                         GeometryCollection;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGeometryCollection*                         OriginalGeometryCollection;                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                GeometryCollectionLODIndex;                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x003C(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableGeometryCollectionAdapter");
		return ptr;
	}

};


// Class EditableMesh.EditableMesh
// 0x0650 (0x0678 - 0x0028)
class UEditableMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0028(0x0300) MISSED OFFSET
	TArray<class UEditableMeshAdapter*>                Adapters;                                                 // 0x0328(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	int                                                TextureCoordinateCount;                                   // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x148];                                     // 0x0344(0x0148) MISSED OFFSET
	int                                                PendingCompactCounter;                                    // 0x048C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubdivisionCount;                                         // 0x0490(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x1E4];                                     // 0x0494(0x01E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		return ptr;
	}


	void WeldVertices(TArray<struct FVertexID>* VertexIDs, struct FVertexID* OutNewVertexID);
	void TryToRemoveVertex(struct FVertexID* VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID);
	void TryToRemovePolygonEdge(struct FEdgeID* EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID);
	void TriangulatePolygons(TArray<struct FPolygonID>* PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons);
	void TessellatePolygons(TArray<struct FPolygonID>* PolygonIDs, ETriangleTessellationMode* TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs);
	void StartModification(EMeshModificationType* MeshModificationType, EMeshTopologyChange* MeshTopologyChange);
	void SplitPolygons(TArray<struct FPolygonToSplit>* PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void SplitPolygonalMesh(struct FPlane* InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs);
	void SplitEdge(struct FEdgeID* EdgeID, TArray<float>* Splits, TArray<struct FVertexID>* OutNewVertexIDs);
	void SetVerticesCornerSharpness(TArray<struct FVertexID>* VertexIDs, TArray<float>* VerticesNewCornerSharpness);
	void SetVerticesAttributes(TArray<struct FAttributesForVertex>* AttributesForVertices);
	void SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance>* AttributesForVertexInstances);
	void SetTextureCoordinateCount(int* NumTexCoords);
	void SetSubdivisionCount(int* NewSubdivisionCount);
	void SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon>* VertexAttributesForPolygons);
	void SetEdgesVertices(TArray<struct FVerticesForEdge>* VerticesForEdges);
	void SetEdgesHardnessAutomatically(TArray<struct FEdgeID>* EdgeIDs, float* MaxDotProductForSoftEdge);
	void SetEdgesHardness(TArray<struct FEdgeID>* EdgeIDs, TArray<bool>* EdgesNewIsHard);
	void SetEdgesCreaseSharpness(TArray<struct FEdgeID>* EdgeIDs, TArray<float>* EdgesNewCreaseSharpness);
	void SetEdgesAttributes(TArray<struct FAttributesForEdge>* AttributesForEdges);
	void SetAllowUndo(bool* bInAllowUndo);
	void SetAllowSpatialDatabase(bool* bInAllowSpatialDatabase);
	void SetAllowCompact(bool* bInAllowCompact);
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane* InPlane, TArray<struct FPolygonID>* OutPolygons);
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector* LineSegmentStart, struct FVector* LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons);
	void SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane>* Planes, TArray<struct FPolygonID>* OutPolygons);
	class UEditableMesh* RevertInstance();
	void Revert();
	void RemovePolygonPerimeterVertices(struct FPolygonID* PolygonID, int* FirstVertexNumberToRemove, int* NumVerticesToRemove, bool* bDeleteOrphanedVertexInstances);
	void RebuildRenderMesh();
	void QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs);
	void PropagateInstanceChanges();
	void MoveVertices(TArray<struct FVertexToMove>* VerticesToMove);
	struct FVertexID STATIC_MakeVertexID(int* VertexIndex);
	struct FPolygonID STATIC_MakePolygonID(int* PolygonIndex);
	struct FPolygonGroupID STATIC_MakePolygonGroupID(int* PolygonGroupIndex);
	struct FEdgeID STATIC_MakeEdgeID(int* EdgeIndex);
	bool IsValidVertex(struct FVertexID* VertexID);
	bool IsValidPolygonGroup(struct FPolygonGroupID* PolygonGroupID);
	bool IsValidPolygon(struct FPolygonID* PolygonID);
	bool IsValidEdge(struct FEdgeID* EdgeID);
	bool IsUndoAllowed();
	bool IsSpatialDatabaseAllowed();
	bool IsPreviewingSubdivisions();
	bool IsOrphanedVertex(struct FVertexID* VertexID);
	bool IsCompactAllowed();
	bool IsCommittedAsInstance();
	bool IsCommitted();
	bool IsBeingModified();
	struct FVertexID STATIC_InvalidVertexID();
	struct FPolygonID STATIC_InvalidPolygonID();
	struct FPolygonGroupID STATIC_InvalidPolygonGroupID();
	struct FEdgeID STATIC_InvalidEdgeID();
	void InsetPolygons(TArray<struct FPolygonID>* PolygonIDs, float* InsetFixedDistance, float* InsetProgressTowardCenter, EInsetPolygonsMode* Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	void InsertPolygonPerimeterVertices(struct FPolygonID* PolygonID, int* InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes>* VerticesToInsert);
	void InsertEdgeLoop(struct FEdgeID* EdgeID, TArray<float>* Splits, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void InitializeAdapters();
	struct FEdgeID GetVertexPairEdge(struct FVertexID* VertexID, struct FVertexID* NextVertexID, bool* bOutEdgeWindingIsReversed);
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID* VertexInstanceID);
	int GetVertexInstanceCount();
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	int GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID* VertexInstanceID);
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID* VertexInstanceID, int* ConnectedPolygonNumber);
	int GetVertexCount();
	void GetVertexConnectedPolygons(struct FVertexID* VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(struct FVertexID* VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs);
	int GetVertexConnectedEdgeCount(struct FVertexID* VertexID);
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID* VertexID, int* ConnectedEdgeNumber);
	void GetVertexAdjacentVertices(struct FVertexID* VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
	int GetTextureCoordinateCount();
	struct FSubdivisionLimitData GetSubdivisionLimitData();
	int GetSubdivisionCount();
	int GetPolygonTriangulatedTriangleCount(struct FPolygonID* PolygonID);
	struct FMeshTriangle GetPolygonTriangulatedTriangle(struct FPolygonID* PolygonID, int* PolygonTriangleNumber);
	void GetPolygonPerimeterVertices(struct FPolygonID* PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs);
	void GetPolygonPerimeterVertexInstances(struct FPolygonID* PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs);
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID* PolygonID, int* PolygonVertexNumber);
	int GetPolygonPerimeterVertexCount(struct FPolygonID* PolygonID);
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID* PolygonID, int* PolygonVertexNumber);
	void GetPolygonPerimeterEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs);
	int GetPolygonPerimeterEdgeCount(struct FPolygonID* PolygonID);
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID* PolygonID, int* PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon);
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID* PolygonGroupID, int* PolygonNumber);
	int GetPolygonGroupCount();
	int GetPolygonCountInGroup(struct FPolygonGroupID* PolygonGroupID);
	int GetPolygonCount();
	void GetPolygonAdjacentPolygons(struct FPolygonID* PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons);
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID* PolygonID);
	struct FPolygonGroupID GetFirstValidPolygonGroup();
	void GetEdgeVertices(struct FEdgeID* EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1);
	struct FVertexID GetEdgeVertex(struct FEdgeID* EdgeID, int* EdgeVertexNumber);
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	void GetEdgeLoopElements(struct FEdgeID* EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs);
	int GetEdgeCount();
	void GetEdgeConnectedPolygons(struct FEdgeID* EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	int GetEdgeConnectedPolygonCount(struct FEdgeID* EdgeID);
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID* EdgeID, int* ConnectedPolygonNumber);
	void GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID>* PolygonIDs);
	void FlipPolygons(TArray<struct FPolygonID>* PolygonIDs);
	int FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID* PolygonID, struct FVertexID* VertexID);
	int FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID* PolygonID, struct FVertexID* EdgeVertexID0, struct FVertexID* EdgeVertexID1);
	void FindPolygonLoop(struct FEdgeID* EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit);
	void ExtrudePolygons(TArray<struct FPolygonID>* Polygons, float* ExtrudeDistance, bool* bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons);
	void ExtendVertices(TArray<struct FVertexID>* VertexIDs, bool* bOnlyExtendClosestEdge, struct FVector* ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs);
	void ExtendEdges(TArray<struct FEdgeID>* EdgeIDs, bool* bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs);
	void EndModification(bool* bFromUndo);
	void DeleteVertexInstances(TArray<struct FVertexInstanceID>* VertexInstanceIDsToDelete, bool* bDeleteOrphanedVertices);
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID* VertexID, bool* bDeleteOrphanedEdges, bool* bDeleteOrphanedVertices, bool* bDeleteOrphanedVertexInstances, bool* bDeleteEmptyPolygonGroups);
	void DeletePolygons(TArray<struct FPolygonID>* PolygonIDsToDelete, bool* bDeleteOrphanedEdges, bool* bDeleteOrphanedVertices, bool* bDeleteOrphanedVertexInstances, bool* bDeleteEmptyPolygonGroups);
	void DeletePolygonGroups(TArray<struct FPolygonGroupID>* PolygonGroupIDs);
	void DeleteOrphanVertices(TArray<struct FVertexID>* VertexIDsToDelete);
	void DeleteEdges(TArray<struct FEdgeID>* EdgeIDsToDelete, bool* bDeleteOrphanedVertices);
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID* EdgeID, bool* bDeleteOrphanedEdges, bool* bDeleteOrphanedVertices, bool* bDeleteOrphanedVertexInstances, bool* bDeleteEmptyPolygonGroups);
	void CreateVertices(TArray<struct FVertexToCreate>* VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	void CreateVertexInstances(TArray<struct FVertexInstanceToCreate>* VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs);
	void CreatePolygons(TArray<struct FPolygonToCreate>* PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void CreatePolygonGroups(TArray<struct FPolygonGroupToCreate>* PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs);
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void CreateEmptyVertexRange(int* NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	void CreateEdges(TArray<struct FEdgeToCreate>* EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void ComputePolygonTriangulation(struct FPolygonID* PolygonID, TArray<struct FMeshTriangle>* OutTriangles);
	void ComputePolygonsSharedEdges(TArray<struct FPolygonID>* PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs);
	struct FPlane ComputePolygonPlane(struct FPolygonID* PolygonID);
	struct FVector ComputePolygonNormal(struct FPolygonID* PolygonID);
	struct FVector ComputePolygonCenter(struct FPolygonID* PolygonID);
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere();
	struct FBox ComputeBoundingBox();
	bool ComputeBarycentricWeightForPointOnPolygon(struct FPolygonID* PolygonID, struct FVector* PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights);
	class UEditableMesh* CommitInstance(class UPrimitiveComponent** ComponentToInstanceTo);
	void Commit();
	void ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon>* VertexInstancesForPolygons);
	void BevelPolygons(TArray<struct FPolygonID>* PolygonIDs, float* BevelFixedDistance, float* BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	void AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon>* PolygonGroupForPolygons, bool* bDeleteOrphanedPolygonGroups);
	bool AnyChangesToUndo();
};


// Class EditableMesh.EditableMeshFactory
// 0x0000 (0x0028 - 0x0028)
class UEditableMeshFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		return ptr;
	}


	class UEditableMesh* STATIC_MakeEditableMesh(class UPrimitiveComponent** PrimitiveComponent, int* LODIndex);
};


// Class EditableMesh.EditableStaticMeshAdapter
// 0x00B8 (0x00E0 - 0x0028)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                                 OriginalStaticMesh;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                StaticMeshLODIndex;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x003C(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
