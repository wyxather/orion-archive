#pragma once

#include "Class.h"
#include "SDK/Struct/Vector3.h"

class Model;

constexpr auto MAXSTUDIOBONES = 256;
constexpr auto BONE_USED_BY_HITBOX = 0x100;

enum class Hitbox
{
    Head,
    Neck,
    Pelvis,
    Belly,
    Thorax,
    LowerChest,
    UpperChest,
    RightThigh,
    LeftThigh,
    RightCalf,
    LeftCalf,
    RightFoot,
    LeftFoot,
    RightHand,
    LeftHand,
    RightUpperArm,
    RightForearm,
    LeftUpperArm,
    LeftForearm,
    Max
};

class StudioBbox
{
public:
    INCONSTRUCTIBLE(StudioBbox);

    int bone;
    int group;
    Vector3 bbMin;
    Vector3 bbMax;
    int hitboxNameIndex;
    Vector3 offsetOrientation;
    float capsuleRadius;
    int	unused[4];
};

class StudioHitboxSet
{
public:
    INCONSTRUCTIBLE(StudioHitboxSet);

    int nameIndex;
    int numHitboxes;
    int hitboxIndex;

    [[nodiscard]] constexpr auto getName() const noexcept
    {
        return nameIndex ? reinterpret_cast<const char*>(reinterpret_cast<uintptr_t>(this) + nameIndex) : nullptr;
    }

    [[nodiscard]] constexpr auto getHitbox(int i) const noexcept
    {
        return i >= 0 && i < numHitboxes ? reinterpret_cast<StudioBbox*>(reinterpret_cast<uintptr_t>(this) + hitboxIndex) + i : nullptr;
    }

    [[nodiscard]] constexpr auto getHitbox(Hitbox i) const noexcept
    {
        return static_cast<int>(i) < numHitboxes ? reinterpret_cast<StudioBbox*>(reinterpret_cast<uintptr_t>(this) + hitboxIndex) + static_cast<int>(i) : nullptr;
    }
};

class StudioBone
{
public:
    INCONSTRUCTIBLE(StudioBone);

    int nameIndex;
    int	parent;
    const char _pad1[152];
    int flags;
    const char _pad2[52];

    [[nodiscard]] constexpr auto getName() const noexcept
    {
        return nameIndex ? reinterpret_cast<const char*>(reinterpret_cast<uintptr_t>(this) + nameIndex) : nullptr;
    }
};

class StudioHdr
{
public:
	INCONSTRUCTIBLE(StudioHdr);

    int id;
    int version;
    int checksum;
    char name[64];
    int length;
    Vector3 eyePosition;
    Vector3 illumPosition;
    Vector3 hullMin;
    Vector3 hullMax;
    Vector3 bbMin;
    Vector3 bbMax;
    int flags;
    int numBones;
    int boneIndex;
    int numBoneControllers;
    int boneControllerIndex;
    int numHitboxSets;
    int hitboxSetIndex;

    [[nodiscard]] constexpr auto getBone(int i) const noexcept
    {
        return i >= 0 && i < numBones ? reinterpret_cast<StudioBone*>(reinterpret_cast<uintptr_t>(this) + boneIndex) + i : nullptr;
    }

    [[nodiscard]] constexpr auto getHitboxSet(int i) const noexcept
    {
        return i >= 0 && i < numHitboxSets ? reinterpret_cast<StudioHitboxSet*>(reinterpret_cast<uintptr_t>(this) + hitboxSetIndex) + i : nullptr;
    }
};

class ModelInfo // class CModelInfoClient : CModelInfo, IVModelInfoClient, IVModelInfo
{
public:
	INCONSTRUCTIBLE(ModelInfo);

	enum __vftable
	{
		_ModelInfo,
		GetModel,
		GetModelIndex,
        GetModelName,
        GetVCollide,
        GetVCollide2,
        GetModelBounds,
        GetModelRenderBounds,
        GetModelFrameCount,
        GetModelType,
        GetModelExtraData,
        ModelHasMaterialProxy,
        IsTranslucent,
        IsTranslucentTwoPass,
        Unused0,
        ComputeTranslucencyType,
        GetModelMaterialCount,
        GetModelMaterials,
        IsModelVertexLit,
        GetModelKeyValueText,
        GetModelKeyValue,
        GetModelRadius,
        FindModel,
        FindModel2,
        GetVirtualModel,
        GetAnimBlock,
        HasAnimBlockBeenPreloaded,
        GetModelMaterialColorAndLighting,
        GetIlluminationPoint,
        GetModelContents,
		GetStudioModel = 32
	};

    VIRTUAL_METHOD(__vftable::GetModel, getModel, __stdcall, Model*, (int index), (this, index));
    VIRTUAL_METHOD(__vftable::GetModelIndex, getModelIndex, __stdcall, int, (const char* name), (this, name));
	VIRTUAL_METHOD(__vftable::GetStudioModel, getStudioModel, __stdcall, StudioHdr*, (const Model* model), (this, model));
};