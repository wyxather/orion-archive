#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxFluidSurface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxFluidSurface.FluidSurface
// 0x0048 (0x04A0 - 0x0458)
class AFluidSurface : public AActor
{
public:
	int                                                NumberOfFluidParticlesX;                                  // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfFluidParticlesY;                                  // 0x045C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetHeight;                                             // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FluidStiffness;                                           // 0x0464(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FluidPropagation;                                         // 0x0468(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IterationCount;                                           // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UProceduralMeshComponent*                    RenderComponent;                                          // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0478(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxFluidSurface.FluidSurface");
		return ptr;
	}


	void PerturbSurface(const struct FVector& Position, float Radius, float Force);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
