// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxFluidSimulation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.StepSim
// (Final, Native, Public)

void UQuickFluidVelocitySolverDataProvider::StepSim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.StepSim");

	UQuickFluidVelocitySolverDataProvider_StepSim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.RunSim
// (Final, Native, Public)

void UQuickFluidVelocitySolverDataProvider::RunSim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.RunSim");

	UQuickFluidVelocitySolverDataProvider_RunSim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ResetSim
// (Final, Native, Public)

void UQuickFluidVelocitySolverDataProvider::ResetSim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ResetSim");

	UQuickFluidVelocitySolverDataProvider_ResetSim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.InitSim
// (Final, Native, Public)

void UQuickFluidVelocitySolverDataProvider::InitSim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.InitSim");

	UQuickFluidVelocitySolverDataProvider_InitSim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ClearData
// (Final, Native, Public)

void UQuickFluidVelocitySolverDataProvider::ClearData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ClearData");

	UQuickFluidVelocitySolverDataProvider_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
