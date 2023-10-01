// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Nog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Nog.BPI_Nog_C.Nog_BuffDrone_NotifyDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NogBuff                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_Nog_C::Nog_BuffDrone_NotifyDestroyed(const struct FDataTableRowHandle& NogBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_BuffDrone_NotifyDestroyed");

	UBPI_Nog_C_Nog_BuffDrone_NotifyDestroyed_Params params;
	params.NogBuff = NogBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_SpawnBuffDrone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NogBuff                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromDroneMesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_SpawnBuffDrone(const struct FDataTableRowHandle& NogBuff, bool FromDroneMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_SpawnBuffDrone");

	UBPI_Nog_C_Nog_SpawnBuffDrone_Params params;
	params.NogBuff = NogBuff;
	params.FromDroneMesh = FromDroneMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Interrupt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHandL                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_DroneThrow_Interrupt(bool IsHandL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Interrupt");

	UBPI_Nog_C_Nog_DroneThrow_Interrupt_Params params;
	params.IsHandL = IsHandL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Launch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHandL                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_DroneThrow_Launch(class AActor* MyTarget, bool IsHandL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Launch");

	UBPI_Nog_C_Nog_DroneThrow_Launch_Params params;
	params.MyTarget = MyTarget;
	params.IsHandL = IsHandL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_InHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHandL                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_DroneThrow_InHand(bool IsHandL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_InHand");

	UBPI_Nog_C_Nog_DroneThrow_InHand_Params params;
	params.IsHandL = IsHandL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_ToggleStaticDroneBoard
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableStaticBoard              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_ToggleStaticDroneBoard(bool EnableStaticBoard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_ToggleStaticDroneBoard");

	UBPI_Nog_C_Nog_ToggleStaticDroneBoard_Params params;
	params.EnableStaticBoard = EnableStaticBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_SetImmuneToVehicleImpact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_SetImmuneToVehicleImpact(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_SetImmuneToVehicleImpact");

	UBPI_Nog_C_Nog_SetImmuneToVehicleImpact_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_MindControlled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_MindControlled(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_MindControlled");

	UBPI_Nog_C_Nog_MindControlled_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_GetMultiTargetAttackList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          TargetList                     (Parm, OutParm, ZeroConstructor)

void UBPI_Nog_C::Nog_GetMultiTargetAttackList(TArray<class AActor*>* TargetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetMultiTargetAttackList");

	UBPI_Nog_C_Nog_GetMultiTargetAttackList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetList != nullptr)
		*TargetList = params.TargetList;
}


// Function BPI_Nog.BPI_Nog_C.Nog_GetDroneMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      DroneMaterial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_GetDroneMaterial(class UMaterialInterface** DroneMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetDroneMaterial");

	UBPI_Nog_C_Nog_GetDroneMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DroneMaterial != nullptr)
		*DroneMaterial = params.DroneMaterial;
}


// Function BPI_Nog.BPI_Nog_C.Nog_GetDroneHealthPctOfNog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPctOfNog                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_GetDroneHealthPctOfNog(float* HealthPctOfNog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetDroneHealthPctOfNog");

	UBPI_Nog_C_Nog_GetDroneHealthPctOfNog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPctOfNog != nullptr)
		*HealthPctOfNog = params.HealthPctOfNog;
}


// Function BPI_Nog.BPI_Nog_C.Nog_GetDroneContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakNogDroneContainerComponent* DroneContainer                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_Nog_C::Nog_GetDroneContainer(class UOakNogDroneContainerComponent** DroneContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetDroneContainer");

	UBPI_Nog_C_Nog_GetDroneContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DroneContainer != nullptr)
		*DroneContainer = params.DroneContainer;
}


// Function BPI_Nog.BPI_Nog_C.Nog_BuildMultiTargetAttackList
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Nog_C::Nog_BuildMultiTargetAttackList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_BuildMultiTargetAttackList");

	UBPI_Nog_C_Nog_BuildMultiTargetAttackList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Nog.BPI_Nog_C.Nog_MultiTargetAttack_GetTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalDefaultTarget          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  MyTarget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_MultiTargetAttack_GetTarget(int TargetIndex, class AActor* OptionalDefaultTarget, class AActor** MyTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_MultiTargetAttack_GetTarget");

	UBPI_Nog_C_Nog_MultiTargetAttack_GetTarget_Params params;
	params.TargetIndex = TargetIndex;
	params.OptionalDefaultTarget = OptionalDefaultTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyTarget != nullptr)
		*MyTarget = params.MyTarget;
}


// Function BPI_Nog.BPI_Nog_C.Nog_DeployLaserWire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WhichWave                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Nog_C::Nog_DeployLaserWire(int WhichWave, class AActor* MyTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DeployLaserWire");

	UBPI_Nog_C_Nog_DeployLaserWire_Params params;
	params.WhichWave = WhichWave;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
