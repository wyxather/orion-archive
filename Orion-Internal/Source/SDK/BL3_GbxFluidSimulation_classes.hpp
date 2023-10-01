#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxFluidSimulation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxFluidSimulation.VoxelDataProvider
// 0x0000 (0x0028 - 0x0028)
class UVoxelDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxFluidSimulation.VoxelDataProvider");
		return ptr;
	}

};


// Class GbxFluidSimulation.FluidSimDataProvider
// 0x0000 (0x0028 - 0x0028)
class UFluidSimDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxFluidSimulation.FluidSimDataProvider");
		return ptr;
	}

};


// Class GbxFluidSimulation.QuickFluidVelocitySolverDataProvider
// 0x0000 (0x0028 - 0x0028)
class UQuickFluidVelocitySolverDataProvider : public UFluidSimDataProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxFluidSimulation.QuickFluidVelocitySolverDataProvider");
		return ptr;
	}


	void StepSim();
	void RunSim();
	void ResetSim();
	void InitSim();
	void ClearData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
