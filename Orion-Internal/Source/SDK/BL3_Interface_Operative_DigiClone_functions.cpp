// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_DigiClone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.StartSeperationAnxietyNova
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UInterface_Operative_DigiClone_C::StartSeperationAnxietyNova(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.StartSeperationAnxietyNova");

	UInterface_Operative_DigiClone_C_StartSeperationAnxietyNova_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.NotifyPanicButtonTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Operative_DigiClone_C::NotifyPanicButtonTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.NotifyPanicButtonTriggered");

	UInterface_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.GetDigiCloneReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Digiclone                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DigiClone_C::GetDigiCloneReference(class AActor** Digiclone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.GetDigiCloneReference");

	UInterface_Operative_DigiClone_C_GetDigiCloneReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Digiclone != nullptr)
		*Digiclone = params.Digiclone;
}


// Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.Is DigiClone Active
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DigiClone_C::Is_DigiClone_Active(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.Is DigiClone Active");

	UInterface_Operative_DigiClone_C_Is_DigiClone_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
