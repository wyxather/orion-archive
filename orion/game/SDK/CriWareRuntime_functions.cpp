#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// Class CriWareRuntime.Atom3dRegionHandle
// (None)

class UClass* UAtom3dRegionHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Atom3dRegionHandle");

	return Clss;
}


// Atom3dRegionHandle CriWareRuntime.Default__Atom3dRegionHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtom3dRegionHandle* UAtom3dRegionHandle::GetDefaultObj()
{
	static class UAtom3dRegionHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtom3dRegionHandle*>(UAtom3dRegionHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.Atom3dRegion
// (None)

class UClass* UAtom3dRegion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Atom3dRegion");

	return Clss;
}


// Atom3dRegion CriWareRuntime.Default__Atom3dRegion
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtom3dRegion* UAtom3dRegion::GetDefaultObj()
{
	static class UAtom3dRegion* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtom3dRegion*>(UAtom3dRegion::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.Atom3dRegion.SetHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAtom3dRegionHandle*         InHandle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtom3dRegion::SetHandle(class UAtom3dRegionHandle* InHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Atom3dRegion", "SetHandle");

	Params::UAtom3dRegion_SetHandle_Params Parms{};

	Parms.InHandle = InHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.Atom3dRegion.GetHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAtom3dRegionHandle*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtom3dRegionHandle* UAtom3dRegion::GetHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Atom3dRegion", "GetHandle");

	Params::UAtom3dRegion_GetHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.Atom3dSourceBaseComponent
// (SceneComponent)

class UClass* UAtom3dSourceBaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Atom3dSourceBaseComponent");

	return Clss;
}


// Atom3dSourceBaseComponent CriWareRuntime.Default__Atom3dSourceBaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtom3dSourceBaseComponent* UAtom3dSourceBaseComponent::GetDefaultObj()
{
	static class UAtom3dSourceBaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtom3dSourceBaseComponent*>(UAtom3dSourceBaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.Atom3dSourceBaseComponent.SetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAtom3dRegion*               InRegion                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtom3dSourceBaseComponent::SetRegion(class UAtom3dRegion* InRegion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Atom3dSourceBaseComponent", "SetRegion");

	Params::UAtom3dSourceBaseComponent_SetRegion_Params Parms{};

	Parms.InRegion = InRegion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.Atom3dTransceiverComponent
// (SceneComponent)

class UClass* UAtom3dTransceiverComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Atom3dTransceiverComponent");

	return Clss;
}


// Atom3dTransceiverComponent CriWareRuntime.Default__Atom3dTransceiverComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtom3dTransceiverComponent* UAtom3dTransceiverComponent::GetDefaultObj()
{
	static class UAtom3dTransceiverComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtom3dTransceiverComponent*>(UAtom3dTransceiverComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomAreaSoundVolume
// (Actor)

class UClass* AAtomAreaSoundVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomAreaSoundVolume");

	return Clss;
}


// AtomAreaSoundVolume CriWareRuntime.Default__AtomAreaSoundVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomAreaSoundVolume* AAtomAreaSoundVolume::GetDefaultObj()
{
	static class AAtomAreaSoundVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomAreaSoundVolume*>(AAtomAreaSoundVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomAreaSoundVolume.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAtomAreaSoundVolume::SetPriority(float NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAreaSoundVolume", "SetPriority");

	Params::AAtomAreaSoundVolume_SetPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAreaSoundVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAtomAreaSoundVolume::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAreaSoundVolume", "SetEnabled");

	Params::AAtomAreaSoundVolume_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAreaSoundVolume.OnRep_bEnabled
// (Final, Native, Private)
// Parameters:

void AAtomAreaSoundVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAreaSoundVolume", "OnRep_bEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAreaSoundVolume.GetPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AAtomAreaSoundVolume::GetPriority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAreaSoundVolume", "GetPriority");

	Params::AAtomAreaSoundVolume_GetPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAreaSoundVolume.GetEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAtomAreaSoundVolume::GetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAreaSoundVolume", "GetEnabled");

	Params::AAtomAreaSoundVolume_GetEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAreaSoundVolume.DestroySounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAtomAreaSoundVolume::DestroySounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAreaSoundVolume", "DestroySounds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAreaSoundVolume.CreateSounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Listener_location                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAtomComponent*>      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UAtomComponent*> AAtomAreaSoundVolume::CreateSounds(const struct FVector& Listener_location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAreaSoundVolume", "CreateSounds");

	Params::AAtomAreaSoundVolume_CreateSounds_Params Parms{};

	Parms.Listener_location = Listener_location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomAsrRack
// (None)

class UClass* UAtomAsrRack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomAsrRack");

	return Clss;
}


// AtomAsrRack CriWareRuntime.Default__AtomAsrRack
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomAsrRack* UAtomAsrRack::GetDefaultObj()
{
	static class UAtomAsrRack* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomAsrRack*>(UAtomAsrRack::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomAsrRack.SetEffectBypass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EffectName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bypasses                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::SetEffectBypass(const class FString& BusName, const class FString& EffectName, bool Bypasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "SetEffectBypass");

	Params::UAtomAsrRack_SetEffectBypass_Params Parms{};

	Parms.BusName = BusName;
	Parms.EffectName = EffectName;
	Parms.Bypasses = Bypasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.SetBusVolumeByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::SetBusVolumeByName(const class FString& BusName, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "SetBusVolumeByName");

	Params::UAtomAsrRack_SetBusVolumeByName_Params Parms{};

	Parms.BusName = BusName;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.SetBusSendLevelByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceBusName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DestBusName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::SetBusSendLevelByName(const class FString& SourceBusName, const class FString& DestBusName, float Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "SetBusSendLevelByName");

	Params::UAtomAsrRack_SetBusSendLevelByName_Params Parms{};

	Parms.SourceBusName = SourceBusName;
	Parms.DestBusName = DestBusName;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.GetDefaultAsrRack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAtomAsrRack*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomAsrRack* UAtomAsrRack::GetDefaultAsrRack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "GetDefaultAsrRack");

	Params::UAtomAsrRack_GetDefaultAsrRack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAsrRack.GetCurrentAppliedSnapshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              AsrRackID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAtomAsrRack::GetCurrentAppliedSnapshot(int32 AsrRackID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "GetCurrentAppliedSnapshot");

	Params::UAtomAsrRack_GetCurrentAppliedSnapshot_Params Parms{};

	Parms.AsrRackID = AsrRackID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAsrRack.GetBusAnalyzerInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      DspBusName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Num_channels                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Rms_levels                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      Peak_levels                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      Peak_hold_levels                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomAsrRack::GetBusAnalyzerInfo(const class FString& DspBusName, int32* Num_channels, TArray<float>* Rms_levels, TArray<float>* Peak_levels, TArray<float>* Peak_hold_levels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "GetBusAnalyzerInfo");

	Params::UAtomAsrRack_GetBusAnalyzerInfo_Params Parms{};

	Parms.DspBusName = DspBusName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Num_channels != nullptr)
		*Num_channels = Parms.Num_channels;

	if (Rms_levels != nullptr)
		*Rms_levels = std::move(Parms.Rms_levels);

	if (Peak_levels != nullptr)
		*Peak_levels = std::move(Parms.Peak_levels);

	if (Peak_hold_levels != nullptr)
		*Peak_hold_levels = std::move(Parms.Peak_hold_levels);

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAsrRack.GetAsrRack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AsrRackID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomAsrRack*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomAsrRack* UAtomAsrRack::GetAsrRack(int32 AsrRackID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "GetAsrRack");

	Params::UAtomAsrRack_GetAsrRack_Params Parms{};

	Parms.AsrRackID = AsrRackID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAsrRack.DetachDspBusSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomAsrRack::DetachDspBusSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "DetachDspBusSetting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.ConnectToPadVibrator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              UserIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::ConnectToPadVibrator(int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "ConnectToPadVibrator");

	Params::UAtomAsrRack_ConnectToPadVibrator_Params Parms{};

	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.ConnectToPadSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              UserIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::ConnectToPadSpeaker(int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "ConnectToPadSpeaker");

	Params::UAtomAsrRack_ConnectToPadSpeaker_Params Parms{};

	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.AttachDspBusSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SettingName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::AttachDspBusSetting(const class FString& SettingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "AttachDspBusSetting");

	Params::UAtomAsrRack_AttachDspBusSetting_Params Parms{};

	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SnapshotName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Milliseconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAsrRack", "ApplyDspBusSnapshot");

	Params::UAtomAsrRack_ApplyDspBusSnapshot_Params Parms{};

	Parms.SnapshotName = SnapshotName;
	Parms.Milliseconds = Milliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomEntranceVolume
// (Actor)

class UClass* AAtomEntranceVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomEntranceVolume");

	return Clss;
}


// AtomEntranceVolume CriWareRuntime.Default__AtomEntranceVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomEntranceVolume* AAtomEntranceVolume::GetDefaultObj()
{
	static class AAtomEntranceVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomEntranceVolume*>(AAtomEntranceVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomEntranceVolume.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAtomEntranceVolume::SetPriority(float NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomEntranceVolume", "SetPriority");

	Params::AAtomEntranceVolume_SetPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomEntranceVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAtomEntranceVolume::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomEntranceVolume", "SetEnabled");

	Params::AAtomEntranceVolume_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomEntranceVolume.OnRep_bEnabled
// (Final, Native, Private)
// Parameters:

void AAtomEntranceVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomEntranceVolume", "OnRep_bEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomEntranceVolume.GetPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AAtomEntranceVolume::GetPriority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomEntranceVolume", "GetPriority");

	Params::AAtomEntranceVolume_GetPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomEntranceVolume.GetEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAtomEntranceVolume::GetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomEntranceVolume", "GetEnabled");

	Params::AAtomEntranceVolume_GetEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomAudioVolume
// (Actor)

class UClass* AAtomAudioVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomAudioVolume");

	return Clss;
}


// AtomAudioVolume CriWareRuntime.Default__AtomAudioVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomAudioVolume* AAtomAudioVolume::GetDefaultObj()
{
	static class AAtomAudioVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomAudioVolume*>(AAtomAudioVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomAudioVolume.SetReverbSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSnapshotSwitchSettings     NewReverbSettings                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AAtomAudioVolume::SetReverbSettings(struct FSnapshotSwitchSettings& NewReverbSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAudioVolume", "SetReverbSettings");

	Params::AAtomAudioVolume_SetReverbSettings_Params Parms{};

	Parms.NewReverbSettings = NewReverbSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAudioVolume.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAtomAudioVolume::SetPriority(float NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAudioVolume", "SetPriority");

	Params::AAtomAudioVolume_SetPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAudioVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAtomAudioVolume::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAudioVolume", "SetEnabled");

	Params::AAtomAudioVolume_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAudioVolume.OnRep_bEnabled
// (Final, Native, Private)
// Parameters:

void AAtomAudioVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAudioVolume", "OnRep_bEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAudioVolume.GetPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AAtomAudioVolume::GetPriority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAudioVolume", "GetPriority");

	Params::AAtomAudioVolume_GetPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAudioVolume.GetEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAtomAudioVolume::GetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAudioVolume", "GetEnabled");

	Params::AAtomAudioVolume_GetEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAudioVolume.EnableAllAudioVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAtomAudioVolume::EnableAllAudioVolume(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomAudioVolume", "EnableAllAudioVolume");

	Params::AAtomAudioVolume_EnableAllAudioVolume_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomAudioVolumeSettings
// (None)

class UClass* UAtomAudioVolumeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomAudioVolumeSettings");

	return Clss;
}


// AtomAudioVolumeSettings CriWareRuntime.Default__AtomAudioVolumeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomAudioVolumeSettings* UAtomAudioVolumeSettings::GetDefaultObj()
{
	static class UAtomAudioVolumeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomAudioVolumeSettings*>(UAtomAudioVolumeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomBusSampler
// (None)

class UClass* UAtomBusSampler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomBusSampler");

	return Clss;
}


// AtomBusSampler CriWareRuntime.Default__AtomBusSampler
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomBusSampler* UAtomBusSampler::GetDefaultObj()
{
	static class UAtomBusSampler* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomBusSampler*>(UAtomBusSampler::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomBusSampler.StopRecordedSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomBusSampler::StopRecordedSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "StopRecordedSound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomBusSampler.StartRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InExpectedDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InAsrRack                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InBusName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               BusOutput                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomBusSampler::StartRecording(float InExpectedDuration, int32 InAsrRack, const class FString& InBusName, bool BusOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "StartRecording");

	Params::UAtomBusSampler_StartRecording_Params Parms{};

	Parms.InExpectedDuration = InExpectedDuration;
	Parms.InAsrRack = InAsrRack;
	Parms.InBusName = InBusName;
	Parms.BusOutput = BusOutput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomBusSampler.PlayRecordedSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomBusSampler::PlayRecordedSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "PlayRecordedSound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomBusSampler.PauseRecordedSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomBusSampler::PauseRecordedSound(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "PauseRecordedSound");

	Params::UAtomBusSampler_PauseRecordedSound_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.AtomBusSampler.OnRecordingStarted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomBusSampler::OnRecordingStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "OnRecordingStarted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.AtomBusSampler.OnRecordingFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomBusSampler::OnRecordingFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "OnRecordingFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.AtomBusSampler.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomBusSampler::IsRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "IsRecording");

	Params::UAtomBusSampler_IsRecording_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomBusSampler.IsPlayingRecordedSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomBusSampler::IsPlayingRecordedSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "IsPlayingRecordedSound");

	Params::UAtomBusSampler_IsPlayingRecordedSound_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomBusSampler.IsPausedRecordedSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomBusSampler::IsPausedRecordedSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "IsPausedRecordedSound");

	Params::UAtomBusSampler_IsPausedRecordedSound_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomBusSampler.FinishRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomBusSampler::FinishRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "FinishRecording");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomBusSampler.CanRecord
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomBusSampler::CanRecord()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "CanRecord");

	Params::UAtomBusSampler_CanRecord_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomBusSampler.CanPlayRecordedSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomBusSampler::CanPlayRecordedSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomBusSampler", "CanPlayRecordedSound");

	Params::UAtomBusSampler_CanPlayRecordedSound_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomCallback
// (None)

class UClass* IAtomCallback::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomCallback");

	return Clss;
}


// AtomCallback CriWareRuntime.Default__AtomCallback
// (Public, ClassDefaultObject, ArchetypeObject)

class IAtomCallback* IAtomCallback::GetDefaultObj()
{
	static class IAtomCallback* Default = nullptr;

	if (!Default)
		Default = static_cast<IAtomCallback*>(IAtomCallback::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomCallbackManager
// (None)

class UClass* UAtomCallbackManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomCallbackManager");

	return Clss;
}


// AtomCallbackManager CriWareRuntime.Default__AtomCallbackManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomCallbackManager* UAtomCallbackManager::GetDefaultObj()
{
	static class UAtomCallbackManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomCallbackManager*>(UAtomCallbackManager::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomCallbackManager.NativeBreakAtomSequenceInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAtomSequenceInfo           SequenceInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TagName                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAtomSequenceEventType  EventType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCallbackManager::NativeBreakAtomSequenceInfo(struct FAtomSequenceInfo& SequenceInfo, float* Time, class FString* TagName, enum class EAtomSequenceEventType* EventType, int32* CallbackID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCallbackManager", "NativeBreakAtomSequenceInfo");

	Params::UAtomCallbackManager_NativeBreakAtomSequenceInfo_Params Parms{};

	Parms.SequenceInfo = SequenceInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Time != nullptr)
		*Time = Parms.Time;

	if (TagName != nullptr)
		*TagName = std::move(Parms.TagName);

	if (EventType != nullptr)
		*EventType = Parms.EventType;

	if (CallbackID != nullptr)
		*CallbackID = Parms.CallbackID;

}


// Function CriWareRuntime.AtomCallbackManager.NativeBreakAtomBeatSyncInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAtomBeatSyncInfo           BeatSyncInfo                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              BarCnt                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BeatCnt                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BeatProgress                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Bpm                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumBeats                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCallbackManager::NativeBreakAtomBeatSyncInfo(struct FAtomBeatSyncInfo& BeatSyncInfo, int32* BarCnt, int32* BeatCnt, float* BeatProgress, float* Bpm, int32* Offset, int32* NumBeats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCallbackManager", "NativeBreakAtomBeatSyncInfo");

	Params::UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Params Parms{};

	Parms.BeatSyncInfo = BeatSyncInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BarCnt != nullptr)
		*BarCnt = Parms.BarCnt;

	if (BeatCnt != nullptr)
		*BeatCnt = Parms.BeatCnt;

	if (BeatProgress != nullptr)
		*BeatProgress = Parms.BeatProgress;

	if (Bpm != nullptr)
		*Bpm = Parms.Bpm;

	if (Offset != nullptr)
		*Offset = Parms.Offset;

	if (NumBeats != nullptr)
		*NumBeats = Parms.NumBeats;

}


// Class CriWareRuntime.AtomCategory
// (None)

class UClass* UAtomCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomCategory");

	return Clss;
}


// AtomCategory CriWareRuntime.Default__AtomCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomCategory* UAtomCategory::GetDefaultObj()
{
	static class UAtomCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomCategory*>(UAtomCategory::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomCategory.StopByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::StopByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "StopByName");

	Params::UAtomCategory_StopByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.SetVolumeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::SetVolumeByName(const class FString& CategoryName, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "SetVolumeByName");

	Params::UAtomCategory_SetVolumeByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.SetAisacControlByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AISACName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::SetAisacControlByName(const class FString& CategoryName, const class FString& AISACName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "SetAisacControlByName");

	Params::UAtomCategory_SetAisacControlByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.AISACName = AISACName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.ResetAllAisacControlByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomCategory::ResetAllAisacControlByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "ResetAllAisacControlByName");

	Params::UAtomCategory_ResetAllAisacControlByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.ResetAllAisacControlById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomCategory::ResetAllAisacControlById(int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "ResetAllAisacControlById");

	Params::UAtomCategory_ResetAllAisacControlById_Params Parms{};

	Parms.CategoryId = CategoryId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.PauseByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::PauseByName(const class FString& CategoryName, bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "PauseByName");

	Params::UAtomCategory_PauseByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.IsPausedByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomCategory::IsPausedByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "IsPausedByName");

	Params::UAtomCategory_IsPausedByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetVolumeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomCategory::GetVolumeByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "GetVolumeByName");

	Params::UAtomCategory_GetVolumeByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomCategory::GetNumAttachedAisacsByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "GetNumAttachedAisacsByName");

	Params::UAtomCategory_GetNumAttachedAisacsByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomCategory::GetNumAttachedAisacsById(int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "GetNumAttachedAisacsById");

	Params::UAtomCategory_GetNumAttachedAisacsById_Params Parms{};

	Parms.CategoryId = CategoryId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AisacControlName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomCategory::GetCurrentAisacControlValueByName(const class FString& CategoryName, const class FString& AisacControlName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "GetCurrentAisacControlValueByName");

	Params::UAtomCategory_GetCurrentAisacControlValueByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.AisacControlName = AisacControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AisacControlID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomCategory::GetCurrentAisacControlValueById(int32 CategoryId, int32 AisacControlID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "GetCurrentAisacControlValueById");

	Params::UAtomCategory_GetCurrentAisacControlValueById_Params Parms{};

	Parms.CategoryId = CategoryId;
	Parms.AisacControlID = AisacControlID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AisacAttachedIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomAisacInfo              AisacInfo                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UAtomCategory::GetAttachedAisacInfoByName(const class FString& CategoryName, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "GetAttachedAisacInfoByName");

	Params::UAtomCategory_GetAttachedAisacInfoByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.AisacAttachedIndex = AisacAttachedIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

	if (AisacInfo != nullptr)
		*AisacInfo = std::move(Parms.AisacInfo);

}


// Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoById
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AisacAttachedIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomAisacInfo              AisacInfo                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UAtomCategory::GetAttachedAisacInfoById(int32 CategoryId, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCategory", "GetAttachedAisacInfoById");

	Params::UAtomCategory_GetAttachedAisacInfoById_Params Parms{};

	Parms.CategoryId = CategoryId;
	Parms.AisacAttachedIndex = AisacAttachedIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

	if (AisacInfo != nullptr)
		*AisacInfo = std::move(Parms.AisacInfo);

}


// Class CriWareRuntime.AtomComponent
// (SceneComponent)

class UClass* UAtomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomComponent");

	return Clss;
}


// AtomComponent CriWareRuntime.Default__AtomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomComponent* UAtomComponent::GetDefaultObj()
{
	static class UAtomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomComponent*>(UAtomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomComponent.StopWithoutReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomComponent::StopWithoutReleaseTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "StopWithoutReleaseTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetVolume");

	Params::UAtomComponent_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetSoundObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAtomSoundObject*            InSoundObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetSoundObject(class UAtomSoundObject* InSoundObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetSoundObject");

	Params::UAtomComponent_SetSoundObject_Params Parms{};

	Parms.InSoundObject = InSoundObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               NewSound                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetSound(class USoundAtomCue* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetSound");

	Params::UAtomComponent_SetSound_Params Parms{};

	Parms.NewSound = NewSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetSelectorLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Selector                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Label                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetSelectorLabel(const class FString& Selector, const class FString& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetSelectorLabel");

	Params::UAtomComponent_SetSelectorLabel_Params Parms{};

	Parms.Selector = Selector;
	Parms.Label = Label;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAtom3dRegion*               InRegion                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetRegion(class UAtom3dRegion* InRegion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetRegion");

	Params::UAtomComponent_SetRegion_Params Parms{};

	Parms.InRegion = InRegion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetPitchMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPitchMultiplier                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetPitchMultiplier");

	Params::UAtomComponent_SetPitchMultiplier_Params Parms{};

	Parms.NewPitchMultiplier = NewPitchMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetPitch(float Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetPitch");

	Params::UAtomComponent_SetPitch_Params Parms{};

	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetNextBlockIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BlockIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetNextBlockIndex(int32 BlockIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetNextBlockIndex");

	Params::UAtomComponent_SetNextBlockIndex_Params Parms{};

	Parms.BlockIndex = BlockIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetDefaultAttenuationEnable
// (Final, Native, Static, Public)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetDefaultAttenuationEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetDefaultAttenuationEnable");

	Params::UAtomComponent_SetDefaultAttenuationEnable_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LevelOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevelOffsetByName(const class FString& BusName, float LevelOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetBusSendLevelOffsetByName");

	Params::UAtomComponent_SetBusSendLevelOffsetByName_Params Parms{};

	Parms.BusName = BusName;
	Parms.LevelOffset = LevelOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BusId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LevelOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevelOffset(int32 BusId, float LevelOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetBusSendLevelOffset");

	Params::UAtomComponent_SetBusSendLevelOffset_Params Parms{};

	Parms.BusId = BusId;
	Parms.LevelOffset = LevelOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevelByName(const class FString& BusName, float Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetBusSendLevelByName");

	Params::UAtomComponent_SetBusSendLevelByName_Params Parms{};

	Parms.BusName = BusName;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BusId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevel(int32 BusId, float Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetBusSendLevel");

	Params::UAtomComponent_SetBusSendLevel_Params Parms{};

	Parms.BusId = BusId;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetAsrRackIdArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      AsrRackIDs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAtomComponent::SetAsrRackIdArray(const TArray<int32>& AsrRackIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetAsrRackIdArray");

	Params::UAtomComponent_SetAsrRackIdArray_Params Parms{};

	Parms.AsrRackIDs = AsrRackIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetAsrRackID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Asr_rack_id                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetAsrRackID(int32 Asr_rack_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetAsrRackID");

	Params::UAtomComponent_SetAsrRackID_Params Parms{};

	Parms.Asr_rack_id = Asr_rack_id;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetAisacByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ControlName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ControlValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetAisacByName(const class FString& ControlName, float ControlValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "SetAisacByName");

	Params::UAtomComponent_SetAisacByName_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ControlValue = ControlValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::Play(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "Play");

	Params::UAtomComponent_Play_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::Pause(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "Pause");

	Params::UAtomComponent_Pause_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.AtomComponent.OnStatusChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EAtomComponentStatus    Status                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              AtomComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::OnStatusChanged__DelegateSignature(enum class EAtomComponentStatus Status, class UAtomComponent* AtomComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "OnStatusChanged__DelegateSignature");

	Params::UAtomComponent_OnStatusChanged__DelegateSignature_Params Parms{};

	Parms.Status = Status;
	Parms.AtomComponent = AtomComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.AtomComponent.OnAudioVolumeChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EAtomAudioVolumeType    Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAtomAudioVolume*            AtomAudioVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCalledFromTick                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::OnAudioVolumeChanged__DelegateSignature(enum class EAtomAudioVolumeType Type, class AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "OnAudioVolumeChanged__DelegateSignature");

	Params::UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Params Parms{};

	Parms.Type = Type;
	Parms.AtomAudioVolume = AtomAudioVolume;
	Parms.bIsCalledFromTick = bIsCalledFromTick;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomComponent::OnAudioFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "OnAudioFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.AtomComponent.IsReducingTickFrequency
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::IsReducingTickFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "IsReducingTickFrequency");

	Params::UAtomComponent_IsReducingTickFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "IsPlaying");

	Params::UAtomComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "IsPaused");

	Params::UAtomComponent_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.IsLoop
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::IsLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "IsLoop");

	Params::UAtomComponent_IsLoop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.HasBeenEconomicTick
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::HasBeenEconomicTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "HasBeenEconomicTick");

	Params::UAtomComponent_HasBeenEconomicTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetVolume");

	Params::UAtomComponent_GetVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAtomComponent::GetVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetVelocity");

	Params::UAtomComponent_GetVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetTime");

	Params::UAtomComponent_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAtomComponentStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAtomComponentStatus UAtomComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetStatus");

	Params::UAtomComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetSequencePosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetSequencePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetSequencePosition");

	Params::UAtomComponent_GetSequencePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetNumQueuedSounds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomComponent::GetNumQueuedSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetNumQueuedSounds");

	Params::UAtomComponent_GetNumQueuedSounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetMaxAttenuationDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetMaxAttenuationDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetMaxAttenuationDistance");

	Params::UAtomComponent_GetMaxAttenuationDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetEconomicTickFrequency
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetEconomicTickFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetEconomicTickFrequency");

	Params::UAtomComponent_GetEconomicTickFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetEconomicTickDistanceMargin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetEconomicTickDistanceMargin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetEconomicTickDistanceMargin");

	Params::UAtomComponent_GetEconomicTickDistanceMargin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetEconomicTickDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetEconomicTickDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetEconomicTickDistance");

	Params::UAtomComponent_GetEconomicTickDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetDefaultAttenuationEnable
// (Final, Native, Static, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::GetDefaultAttenuationEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetDefaultAttenuationEnable");

	Params::UAtomComponent_GetDefaultAttenuationEnable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCurrentMaxAttenuationDistance
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCurrentMaxAttenuationDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCurrentMaxAttenuationDistance");

	Params::UAtomComponent_GetCurrentMaxAttenuationDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCurrentEconomicTickMarginDistance
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCurrentEconomicTickMarginDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCurrentEconomicTickMarginDistance");

	Params::UAtomComponent_GetCurrentEconomicTickMarginDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCurrentEconomicTickFrequency
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCurrentEconomicTickFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCurrentEconomicTickFrequency");

	Params::UAtomComponent_GetCurrentEconomicTickFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCurrentEconomicTickBoundaryDistance
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCurrentEconomicTickBoundaryDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCurrentEconomicTickBoundaryDistance");

	Params::UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCurrentCullingMarginDistance
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCurrentCullingMarginDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCurrentCullingMarginDistance");

	Params::UAtomComponent_GetCurrentCullingMarginDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCurrentCullingBoundaryDistance
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCurrentCullingBoundaryDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCurrentCullingBoundaryDistance");

	Params::UAtomComponent_GetCurrentCullingBoundaryDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCurrentBelongingAudioVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAtomAudioVolumeType    Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsNeighbor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAtomAudioVolume*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AAtomAudioVolume* UAtomComponent::GetCurrentBelongingAudioVolume(enum class EAtomAudioVolumeType Type, bool IsNeighbor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCurrentBelongingAudioVolume");

	Params::UAtomComponent_GetCurrentBelongingAudioVolume_Params Parms{};

	Parms.Type = Type;
	Parms.IsNeighbor = IsNeighbor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCullDistanceMargin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCullDistanceMargin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCullDistanceMargin");

	Params::UAtomComponent_GetCullDistanceMargin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCullDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetCullDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCullDistance");

	Params::UAtomComponent_GetCullDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCueName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAtomComponent::GetCueName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetCueName");

	Params::UAtomComponent_GetCueName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetAudioVolumeValueMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAtomAudioVolumeType    Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, float>         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, float> UAtomComponent::GetAudioVolumeValueMap(enum class EAtomAudioVolumeType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetAudioVolumeValueMap");

	Params::UAtomComponent_GetAudioVolumeValueMap_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetAtomComponentID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomComponent::GetAtomComponentID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetAtomComponentID");

	Params::UAtomComponent_GetAtomComponentID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetAtomComponentFromID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              TargetID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomComponent::GetAtomComponentFromID(int32 TargetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "GetAtomComponentFromID");

	Params::UAtomComponent_GetAtomComponentFromID_Params Parms{};

	Parms.TargetID = TargetID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.FadeOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FadeOutDuration                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeVolumeLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "FadeOut");

	Params::UAtomComponent_FadeOut_Params Parms{};

	Parms.FadeOutDuration = FadeOutDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.FadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FadeInDuration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeVolumeLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "FadeIn");

	Params::UAtomComponent_FadeIn_Params Parms{};

	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;
	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.EnqueueSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               NewSound                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::EnqueueSound(class USoundAtomCue* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "EnqueueSound");

	Params::UAtomComponent_EnqueueSound_Params Parms{};

	Parms.NewSound = NewSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.DestroyComponentByID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              TargetID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::DestroyComponentByID(int32 TargetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "DestroyComponentByID");

	Params::UAtomComponent_DestroyComponentByID_Params Parms{};

	Parms.TargetID = TargetID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.ClearSelectorLabels
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomComponent::ClearSelectorLabels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "ClearSelectorLabels");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.BP_GetAttenuationSettingsToApply
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings   OutAttenuationSettings                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "BP_GetAttenuationSettingsToApply");

	Params::UAtomComponent_BP_GetAttenuationSettingsToApply_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttenuationSettings != nullptr)
		*OutAttenuationSettings = std::move(Parms.OutAttenuationSettings);

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.AttachAreaSoundVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAtomAreaSoundVolume*        Sound_shape_volume                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::AttachAreaSoundVolume(class AAtomAreaSoundVolume* Sound_shape_volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "AttachAreaSoundVolume");

	Params::UAtomComponent_AttachAreaSoundVolume_Params Parms{};

	Parms.Sound_shape_volume = Sound_shape_volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.AtomComponent.AtomSequenceCallbackDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UAtomComponent*              AtomComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomSequenceInfo           SequenceInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAtomComponent::AtomSequenceCallbackDelegate__DelegateSignature(class UAtomComponent* AtomComponent, struct FAtomSequenceInfo& SequenceInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "AtomSequenceCallbackDelegate__DelegateSignature");

	Params::UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Params Parms{};

	Parms.AtomComponent = AtomComponent;
	Parms.SequenceInfo = SequenceInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.AtomComponent.AtomBeatSyncCallbackDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UAtomComponent*              AtomComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomBeatSyncInfo           BeatSyncInfo                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UAtomComponent::AtomBeatSyncCallbackDelegate__DelegateSignature(class UAtomComponent* AtomComponent, struct FAtomBeatSyncInfo& BeatSyncInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "AtomBeatSyncCallbackDelegate__DelegateSignature");

	Params::UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Params Parms{};

	Parms.AtomComponent = AtomComponent;
	Parms.BeatSyncInfo = BeatSyncInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriWareRuntime.AtomComponent.AdjustAttenuation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings   InAttenuationSettings                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAtomComponent::AdjustAttenuation(struct FSoundAttenuationSettings& InAttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomComponent", "AdjustAttenuation");

	Params::UAtomComponent_AdjustAttenuation_Params Parms{};

	Parms.InAttenuationSettings = InAttenuationSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomComponentPool
// (None)

class UClass* UAtomComponentPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomComponentPool");

	return Clss;
}


// AtomComponentPool CriWareRuntime.Default__AtomComponentPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomComponentPool* UAtomComponentPool::GetDefaultObj()
{
	static class UAtomComponentPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomComponentPool*>(UAtomComponentPool::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomCueSheetLoaderComponent
// (SceneComponent)

class UClass* UAtomCueSheetLoaderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomCueSheetLoaderComponent");

	return Clss;
}


// AtomCueSheetLoaderComponent CriWareRuntime.Default__AtomCueSheetLoaderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomCueSheetLoaderComponent* UAtomCueSheetLoaderComponent::GetDefaultObj()
{
	static class UAtomCueSheetLoaderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomCueSheetLoaderComponent*>(UAtomCueSheetLoaderComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadError__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomCueSheetLoaderComponent::OnLoadError__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCueSheetLoaderComponent", "OnLoadError__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomCueSheetLoaderComponent::OnLoadCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCueSheetLoaderComponent", "OnLoadCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnAtomCueSheetLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class USoundAtomCueSheet*          Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCueSheetLoaderComponent::OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCueSheetLoaderComponent", "OnAtomCueSheetLoaded__DelegateSignature");

	Params::UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.LoadAtomCueSheet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class USoundAtomCueSheet>Asset                                                            (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnLoaded                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAtomCueSheetLoaderComponent::LoadAtomCueSheet(class UObject* WorldContextObject, TSoftObjectPtr<class USoundAtomCueSheet> Asset, FDelegateProperty_ OnLoaded, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCueSheetLoaderComponent", "LoadAtomCueSheet");

	Params::UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Asset = Asset;
	Parms.OnLoaded = OnLoaded;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomCueSheetLoaderComponent::Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCueSheetLoaderComponent", "Load");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAtomCueSheetLoaderComponentStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAtomCueSheetLoaderComponentStatus UAtomCueSheetLoaderComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCueSheetLoaderComponent", "GetStatus");

	Params::UAtomCueSheetLoaderComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.GetAtomCueSheet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCueSheet*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCueSheet* UAtomCueSheetLoaderComponent::GetAtomCueSheet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomCueSheetLoaderComponent", "GetAtomCueSheet");

	Params::UAtomCueSheetLoaderComponent_GetAtomCueSheet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomDeviceWatcher
// (None)

class UClass* UAtomDeviceWatcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomDeviceWatcher");

	return Clss;
}


// AtomDeviceWatcher CriWareRuntime.Default__AtomDeviceWatcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomDeviceWatcher* UAtomDeviceWatcher::GetDefaultObj()
{
	static class UAtomDeviceWatcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomDeviceWatcher*>(UAtomDeviceWatcher::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CriWareRuntime.AtomDeviceWatcher.OnDeviceUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomDeviceWatcher::OnDeviceUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomDeviceWatcher", "OnDeviceUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.AtomDeviceWatcher.GetDeviceName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAtomDeviceWatcher::GetDeviceName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomDeviceWatcher", "GetDeviceName");

	Params::UAtomDeviceWatcher_GetDeviceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomDeviceWatcher.GetDeviceChannelCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomDeviceWatcher::GetDeviceChannelCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomDeviceWatcher", "GetDeviceChannelCount");

	Params::UAtomDeviceWatcher_GetDeviceChannelCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomDisposer
// (Actor)

class UClass* AAtomDisposer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomDisposer");

	return Clss;
}


// AtomDisposer CriWareRuntime.Default__AtomDisposer
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomDisposer* AAtomDisposer::GetDefaultObj()
{
	static class AAtomDisposer* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomDisposer*>(AAtomDisposer::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomListenerFocusPoint
// (SceneComponent)

class UClass* UAtomListenerFocusPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomListenerFocusPoint");

	return Clss;
}


// AtomListenerFocusPoint CriWareRuntime.Default__AtomListenerFocusPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomListenerFocusPoint* UAtomListenerFocusPoint::GetDefaultObj()
{
	static class UAtomListenerFocusPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomListenerFocusPoint*>(UAtomListenerFocusPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomParameterComponent
// (None)

class UClass* UAtomParameterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomParameterComponent");

	return Clss;
}


// AtomParameterComponent CriWareRuntime.Default__AtomParameterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomParameterComponent* UAtomParameterComponent::GetDefaultObj()
{
	static class UAtomParameterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomParameterComponent*>(UAtomParameterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomProfileData
// (None)

class UClass* UAtomProfileData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomProfileData");

	return Clss;
}


// AtomProfileData CriWareRuntime.Default__AtomProfileData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomProfileData* UAtomProfileData::GetDefaultObj()
{
	static class UAtomProfileData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomProfileData*>(UAtomProfileData::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAtomProfileItem>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAtomProfileItem> UAtomProfileData::CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomProfileData", "CriWareAdx2ProfileDataUpdate");

	Params::UAtomProfileData_CriWareAdx2ProfileDataUpdate_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataSort
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAtomProfileItem>    Original_item                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAtomProfileSortType    Sort_type                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAtomSortOrderType      Order_type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAtomProfileItem>    Sorted_item                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAtomProfileData::CriWareAdx2ProfileDataSort(const TArray<struct FAtomProfileItem>& Original_item, enum class EAtomProfileSortType Sort_type, enum class EAtomSortOrderType Order_type, TArray<struct FAtomProfileItem>* Sorted_item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomProfileData", "CriWareAdx2ProfileDataSort");

	Params::UAtomProfileData_CriWareAdx2ProfileDataSort_Params Parms{};

	Parms.Original_item = Original_item;
	Parms.Sort_type = Sort_type;
	Parms.Order_type = Order_type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sorted_item != nullptr)
		*Sorted_item = std::move(Parms.Sorted_item);

}


// Class CriWareRuntime.AtomSound
// (Actor)

class UClass* AAtomSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSound");

	return Clss;
}


// AtomSound CriWareRuntime.Default__AtomSound
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomSound* AAtomSound::GetDefaultObj()
{
	static class AAtomSound* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomSound*>(AAtomSound::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomSoundData
// (Actor)

class UClass* AAtomSoundData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSoundData");

	return Clss;
}


// AtomSoundData CriWareRuntime.Default__AtomSoundData
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomSoundData* AAtomSoundData::GetDefaultObj()
{
	static class AAtomSoundData* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomSoundData*>(AAtomSoundData::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomSoundObject
// (None)

class UClass* UAtomSoundObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSoundObject");

	return Clss;
}


// AtomSoundObject CriWareRuntime.Default__AtomSoundObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomSoundObject* UAtomSoundObject::GetDefaultObj()
{
	static class UAtomSoundObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomSoundObject*>(UAtomSoundObject::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomSpectrumAnalyzer
// (None)

class UClass* UAtomSpectrumAnalyzer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSpectrumAnalyzer");

	return Clss;
}


// AtomSpectrumAnalyzer CriWareRuntime.Default__AtomSpectrumAnalyzer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomSpectrumAnalyzer* UAtomSpectrumAnalyzer::GetDefaultObj()
{
	static class UAtomSpectrumAnalyzer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomSpectrumAnalyzer*>(UAtomSpectrumAnalyzer::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevelsDB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Display_range                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Spectra                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAtomSpectrumAnalyzer::GetLevelsDB(float Display_range, TArray<float>* Spectra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomSpectrumAnalyzer", "GetLevelsDB");

	Params::UAtomSpectrumAnalyzer_GetLevelsDB_Params Parms{};

	Parms.Display_range = Display_range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spectra != nullptr)
		*Spectra = std::move(Parms.Spectra);

}


// Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Spectra                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAtomSpectrumAnalyzer::GetLevels(TArray<float>* Spectra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomSpectrumAnalyzer", "GetLevels");

	Params::UAtomSpectrumAnalyzer_GetLevels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spectra != nullptr)
		*Spectra = std::move(Parms.Spectra);

}


// Function CriWareRuntime.AtomSpectrumAnalyzer.CreateDspSpectra
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAtomAsrRack*                Asr_rack                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      bus_name                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Num_bands                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomSpectrumAnalyzer::CreateDspSpectra(class UAtomAsrRack* Asr_rack, const class FString& bus_name, int32 Num_bands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomSpectrumAnalyzer", "CreateDspSpectra");

	Params::UAtomSpectrumAnalyzer_CreateDspSpectra_Params Parms{};

	Parms.Asr_rack = Asr_rack;
	Parms.bus_name = bus_name;
	Parms.Num_bands = Num_bands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomStatics
// (None)

class UClass* UAtomStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomStatics");

	return Clss;
}


// AtomStatics CriWareRuntime.Default__AtomStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomStatics* UAtomStatics::GetDefaultObj()
{
	static class UAtomStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomStatics*>(UAtomStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomStatics.UpdateDistanceFactorForAllSounds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ArgDistanceFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::UpdateDistanceFactorForAllSounds(float ArgDistanceFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "UpdateDistanceFactorForAllSounds");

	Params::UAtomStatics_UpdateDistanceFactorForAllSounds_Params Parms{};

	Parms.ArgDistanceFactor = ArgDistanceFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.StopAllSoundsForKeyFromAtomComponentIds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     AtomPlayGateRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SkeltalMeshComponentRef                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::StopAllSoundsForKeyFromAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "StopAllSoundsForKeyFromAtomComponentIds");

	Params::UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Params Parms{};

	Parms.AtomPlayGateRef = AtomPlayGateRef;
	Parms.SkeltalMeshComponentRef = SkeltalMeshComponentRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.StopAllSounds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAtomStatics::StopAllSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "StopAllSounds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SpawnSoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*           ConcurrencySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnSoundAttached");

	Params::UAtomStatics_SpawnSoundAttached_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnSoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*           ConcurrencySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnSoundAtLocation");

	Params::UAtomStatics_SpawnSoundAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnSound2D
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistAcrossLevelTransition                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnSound2D");

	Params::UAtomStatics_SpawnSound2D_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnAtomSoundAttachedByName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCueSheet*          CueSheet                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CueName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnAtomSoundAttachedByName(class USoundAtomCueSheet* CueSheet, const class FString& CueName, class USceneComponent* AttachToComponent, struct FAtomComponentParams& Params, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnAtomSoundAttachedByName");

	Params::UAtomStatics_SpawnAtomSoundAttachedByName_Params Parms{};

	Parms.CueSheet = CueSheet;
	Parms.CueName = CueName;
	Parms.AttachToComponent = AttachToComponent;
	Parms.Params = Params;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.LocationType = LocationType;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnAtomSoundAttached
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnAtomSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, struct FAtomComponentParams& Params, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnAtomSoundAttached");

	Params::UAtomStatics_SpawnAtomSoundAttached_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.Params = Params;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.LocationType = LocationType;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnAtomSoundAtLocationByName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCueSheet*          CueSheet                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CueName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnAtomSoundAtLocationByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, const class FString& CueName, const struct FVector& Location, struct FAtomComponentParams& Params, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnAtomSoundAtLocationByName");

	Params::UAtomStatics_SpawnAtomSoundAtLocationByName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CueSheet = CueSheet;
	Parms.CueName = CueName;
	Parms.Location = Location;
	Parms.Params = Params;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnAtomSoundAtLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnAtomSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, struct FAtomComponentParams& Params, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnAtomSoundAtLocation");

	Params::UAtomStatics_SpawnAtomSoundAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;
	Parms.Params = Params;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnAtomSound2DByName
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCueSheet*          CueSheet                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CueName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bPersistAcrossLevelTransition                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnAtomSound2DByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, const class FString& CueName, struct FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnAtomSound2DByName");

	Params::UAtomStatics_SpawnAtomSound2DByName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CueSheet = CueSheet;
	Parms.CueName = CueName;
	Parms.Params = Params;
	Parms.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnAtomSound2D
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bPersistAcrossLevelTransition                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnAtomSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, struct FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SpawnAtomSound2D");

	Params::UAtomStatics_SpawnAtomSound2D_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Params = Params;
	Parms.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SetListenerRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAtom3dRegion*               Region                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::SetListenerRegion(class UAtom3dRegion* Region, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SetListenerRegion");

	Params::UAtomStatics_SetListenerRegion_Params Parms{};

	Parms.Region = Region;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SetListenerFocusPointTargetComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             TargetComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::SetListenerFocusPointTargetComponent(class USceneComponent* TargetComponent, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SetListenerFocusPointTargetComponent");

	Params::UAtomStatics_SetListenerFocusPointTargetComponent_Params Parms{};

	Parms.TargetComponent = TargetComponent;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SetListenerFocusPointTargetActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::SetListenerFocusPointTargetActor(class AActor* TargetActor, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SetListenerFocusPointTargetActor");

	Params::UAtomStatics_SetListenerFocusPointTargetActor_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SetListenerFocusPointInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAtomListenerFocusPointInfo FocusPointInfo                                                   (ConstParm, Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::SetListenerFocusPointInfo(const struct FAtomListenerFocusPointInfo& FocusPointInfo, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SetListenerFocusPointInfo");

	Params::UAtomStatics_SetListenerFocusPointInfo_Params Parms{};

	Parms.FocusPointInfo = FocusPointInfo;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SetListenerFocusPointDistanceLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              DistanceLevel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::SetListenerFocusPointDistanceLevel(float DistanceLevel, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SetListenerFocusPointDistanceLevel");

	Params::UAtomStatics_SetListenerFocusPointDistanceLevel_Params Parms{};

	Parms.DistanceLevel = DistanceLevel;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SetListenerFocusPointDirectionLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              DirectionLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::SetListenerFocusPointDirectionLevel(float DirectionLevel, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SetListenerFocusPointDirectionLevel");

	Params::UAtomStatics_SetListenerFocusPointDirectionLevel_Params Parms{};

	Parms.DirectionLevel = DirectionLevel;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SetAtomGameVariable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameVariableName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::SetAtomGameVariable(const class FString& GameVariableName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "SetAtomGameVariable");

	Params::UAtomStatics_SetAtomGameVariable_Params Parms{};

	Parms.GameVariableName = GameVariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.PlaySoundForAnimNotify
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFollow                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bFollow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "PlaySoundForAnimNotify");

	Params::UAtomStatics_PlaySoundForAnimNotify_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.bFollow = bFollow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.PlaySoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "PlaySoundAttached");

	Params::UAtomStatics_PlaySoundAttached_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*           ConcurrencySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "PlaySoundAtLocation");

	Params::UAtomStatics_PlaySoundAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.ConcurrencySettings = ConcurrencySettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.PlayAtomSoundAtLocationByName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCueSheet*          CueSheet                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CueName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAtomStatics::PlayAtomSoundAtLocationByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, const class FString& CueName, const struct FVector& Location, struct FAtomComponentParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "PlayAtomSoundAtLocationByName");

	Params::UAtomStatics_PlayAtomSoundAtLocationByName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CueSheet = CueSheet;
	Parms.CueName = CueName;
	Parms.Location = Location;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.PlayAtomSoundAtLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomComponentParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAtomStatics::PlayAtomSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, struct FAtomComponentParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "PlayAtomSoundAtLocation");

	Params::UAtomStatics_PlayAtomSoundAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.PauseAudioOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::PauseAudioOutput(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "PauseAudioOutput");

	Params::UAtomStatics_PauseAudioOutput_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.LoadAtomConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundAtomConfig*            AcfObject                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomStatics::LoadAtomConfig(class USoundAtomConfig* AcfObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "LoadAtomConfig");

	Params::UAtomStatics_LoadAtomConfig_Params Parms{};

	Parms.AcfObject = AcfObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.GetListeningPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAtomStatics::GetListeningPoint(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "GetListeningPoint");

	Params::UAtomStatics_GetListeningPoint_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.GetListenerRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtom3dRegion*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtom3dRegion* UAtomStatics::GetListenerRegion(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "GetListenerRegion");

	Params::UAtomStatics_GetListenerRegion_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.GetListenerFocusPointInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomListenerFocusPointInfo ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FAtomListenerFocusPointInfo UAtomStatics::GetListenerFocusPointInfo(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "GetListenerFocusPointInfo");

	Params::UAtomStatics_GetListenerFocusPointInfo_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.GetAudioVolumeAffectingListener
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAtomAudioVolumeType    TypeNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAtomAudioVolume*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AAtomAudioVolume* UAtomStatics::GetAudioVolumeAffectingListener(int32 PlayerIndex, enum class EAtomAudioVolumeType TypeNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "GetAudioVolumeAffectingListener");

	Params::UAtomStatics_GetAudioVolumeAffectingListener_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.TypeNum = TypeNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.GetAtomGameVariable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameVariableName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomStatics::GetAtomGameVariable(const class FString& GameVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "GetAtomGameVariable");

	Params::UAtomStatics_GetAtomGameVariable_Params Parms{};

	Parms.GameVariableName = GameVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.CreateRootedAtomComponent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "CreateRootedAtomComponent");

	Params::UAtomStatics_CreateRootedAtomComponent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.AddToAtomComponentIds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     AtomPlayGateRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SkeltalMeshComponentRef                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AtomComponentID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::AddToAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef, int32 AtomComponentID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomStatics", "AddToAtomComponentIds");

	Params::UAtomStatics_AddToAtomComponentIds_Params Parms{};

	Parms.AtomPlayGateRef = AtomPlayGateRef;
	Parms.SkeltalMeshComponentRef = SkeltalMeshComponentRef;
	Parms.AtomComponentID = AtomComponentID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
// (None)

class UClass* UAtomTriggerTableFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomTriggerTableFunctionLibrary");

	return Clss;
}


// AtomTriggerTableFunctionLibrary CriWareRuntime.Default__AtomTriggerTableFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomTriggerTableFunctionLibrary* UAtomTriggerTableFunctionLibrary::GetDefaultObj()
{
	static class UAtomTriggerTableFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomTriggerTableFunctionLibrary*>(UAtomTriggerTableFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  Table                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomTriggerRow             OutRow                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(class UDataTable* Table, class FName RowName, struct FAtomTriggerRow* OutRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomTriggerTableFunctionLibrary", "GetDataTableRowFromName");

	Params::UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Params Parms{};

	Parms.Table = Table;
	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomUnrealSoundRenderer
// (None)

class UClass* UAtomUnrealSoundRenderer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomUnrealSoundRenderer");

	return Clss;
}


// AtomUnrealSoundRenderer CriWareRuntime.Default__AtomUnrealSoundRenderer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomUnrealSoundRenderer* UAtomUnrealSoundRenderer::GetDefaultObj()
{
	static class UAtomUnrealSoundRenderer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomUnrealSoundRenderer*>(UAtomUnrealSoundRenderer::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomWavePlayer
// (None)

class UClass* UAtomWavePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomWavePlayer");

	return Clss;
}


// AtomWavePlayer CriWareRuntime.Default__AtomWavePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomWavePlayer* UAtomWavePlayer::GetDefaultObj()
{
	static class UAtomWavePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomWavePlayer*>(UAtomWavePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomWavePlayer.StopDelayed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomWavePlayer::StopDelayed(float DelayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "StopDelayed");

	Params::UAtomWavePlayer_StopDelayed_Params Parms{};

	Parms.DelayTime = DelayTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomWavePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomWavePlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomWavePlayer.SetWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               InCue                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomWavePlayer::SetWave(class USoundAtomCue* InCue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "SetWave");

	Params::UAtomWavePlayer_SetWave_Params Parms{};

	Parms.InCue = InCue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomWavePlayer.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomWavePlayer::SetPaused(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "SetPaused");

	Params::UAtomWavePlayer_SetPaused_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomWavePlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Looping                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomWavePlayer::SetLooping(bool Looping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "SetLooping");

	Params::UAtomWavePlayer_SetLooping_Params Parms{};

	Parms.Looping = Looping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomWavePlayer::Play(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "Play");

	Params::UAtomWavePlayer_Play_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomWavePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomWavePlayer::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "IsPlaying");

	Params::UAtomWavePlayer_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomWavePlayer::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "IsPaused");

	Params::UAtomWavePlayer_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomWavePlayer::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "IsLooping");

	Params::UAtomWavePlayer_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomWavePlayer::HasError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "HasError");

	Params::UAtomWavePlayer_HasError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.GetWaveInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAtomWaveInfo               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FAtomWaveInfo UAtomWavePlayer::GetWaveInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "GetWaveInfo");

	Params::UAtomWavePlayer_GetWaveInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UAtomWavePlayer::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "GetTime");

	Params::UAtomWavePlayer_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.GetPlayState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAtomWavePlayState      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAtomWavePlayState UAtomWavePlayer::GetPlayState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "GetPlayState");

	Params::UAtomWavePlayer_GetPlayState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.GetCue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundAtomCue*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCue* UAtomWavePlayer::GetCue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "GetCue");

	Params::UAtomWavePlayer_GetCue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomWavePlayer.AdjustVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AdjustVolumeDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AdjustVolumeLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomWavePlayer::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("AtomWavePlayer", "AdjustVolume");

	Params::UAtomWavePlayer_AdjustVolume_Params Parms{};

	Parms.AdjustVolumeDuration = AdjustVolumeDuration;
	Parms.AdjustVolumeLevel = AdjustVolumeLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.CriFsBinderComponent
// (SceneComponent)

class UClass* UCriFsBinderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriFsBinderComponent");

	return Clss;
}


// CriFsBinderComponent CriWareRuntime.Default__CriFsBinderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriFsBinderComponent* UCriFsBinderComponent::GetDefaultObj()
{
	static class UCriFsBinderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriFsBinderComponent*>(UCriFsBinderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.CriFsBinderComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCriFsBinderComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsBinderComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindError__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsBinderComponent::OnBindError__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsBinderComponent", "OnBindError__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsBinderComponent::OnBindCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsBinderComponent", "OnBindCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.CriFsBinderComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECriFsBinderStatus      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECriFsBinderStatus UCriFsBinderComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsBinderComponent", "GetStatus");

	Params::UCriFsBinderComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.CriFsBinderComponent.Bind
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCriFsBinderComponent::Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsBinderComponent", "Bind");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.CriFsLoader
// (Actor)

class UClass* ACriFsLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriFsLoader");

	return Clss;
}


// CriFsLoader CriWareRuntime.Default__CriFsLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class ACriFsLoader* ACriFsLoader::GetDefaultObj()
{
	static class ACriFsLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<ACriFsLoader*>(ACriFsLoader::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.CriFsLoaderComponent
// (SceneComponent)

class UClass* UCriFsLoaderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriFsLoaderComponent");

	return Clss;
}


// CriFsLoaderComponent CriWareRuntime.Default__CriFsLoaderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriFsLoaderComponent* UCriFsLoaderComponent::GetDefaultObj()
{
	static class UCriFsLoaderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriFsLoaderComponent*>(UCriFsLoaderComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsLoaderComponent::OnLoadError__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsLoaderComponent", "OnLoadError__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsLoaderComponent::OnLoadCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsLoaderComponent", "OnLoadCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.CriFsLoaderComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCriFsLoaderComponent::Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsLoaderComponent", "Load");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.CriFsLoaderComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECriFsLoaderStatus      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECriFsLoaderStatus UCriFsLoaderComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsLoaderComponent", "GetStatus");

	Params::UCriFsLoaderComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.CriFsLoaderComponent.GetDataArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<uint8> UCriFsLoaderComponent::GetDataArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriFsLoaderComponent", "GetDataArray");

	Params::UCriFsLoaderComponent_GetDataArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.CriWareError
// (None)

class UClass* UCriWareError::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriWareError");

	return Clss;
}


// CriWareError CriWareRuntime.Default__CriWareError
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriWareError* UCriWareError::GetDefaultObj()
{
	static class UCriWareError* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriWareError*>(UCriWareError::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CriWareRuntime.CriWareError.OnCriWareError__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FCriWareErrorInfo           ErrorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCriWareError::OnCriWareError__DelegateSignature(struct FCriWareErrorInfo& ErrorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriWareError", "OnCriWareError__DelegateSignature");

	Params::UCriWareError_OnCriWareError__DelegateSignature_Params Parms{};

	Parms.ErrorInfo = ErrorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriWareRuntime.CriWareError.GetCriWareError
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCriWareError*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCriWareError* UCriWareError::GetCriWareError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriWareError", "GetCriWareError");

	Params::UCriWareError_GetCriWareError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.CriWareFunctionLibrary
// (None)

class UClass* UCriWareFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriWareFunctionLibrary");

	return Clss;
}


// CriWareFunctionLibrary CriWareRuntime.Default__CriWareFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriWareFunctionLibrary* UCriWareFunctionLibrary::GetDefaultObj()
{
	static class UCriWareFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriWareFunctionLibrary*>(UCriWareFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.CriWareFunctionLibrary.SetSpeakerAngleArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECriWareSpeakerSystem   SpeakerSystem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Angles                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCriWareFunctionLibrary::SetSpeakerAngleArray(enum class ECriWareSpeakerSystem SpeakerSystem, TArray<float>& Angles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriWareFunctionLibrary", "SetSpeakerAngleArray");

	Params::UCriWareFunctionLibrary_SetSpeakerAngleArray_Params Parms{};

	Parms.SpeakerSystem = SpeakerSystem;
	Parms.Angles = Angles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SelectorName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LabelName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(const class FString& SelectorName, const class FString& LabelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriWareFunctionLibrary", "SetGlobalLabelToSelectorByName");

	Params::UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Params Parms{};

	Parms.SelectorName = SelectorName;
	Parms.LabelName = LabelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameVariableName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCriWareFunctionLibrary::SetGameVariableByName(const class FString& GameVariableName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CriWareFunctionLibrary", "SetGameVariableByName");

	Params::UCriWareFunctionLibrary_SetGameVariableByName_Params Parms{};

	Parms.GameVariableName = GameVariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.CriWareInitializer
// (None)

class UClass* UCriWareInitializer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriWareInitializer");

	return Clss;
}


// CriWareInitializer CriWareRuntime.Default__CriWareInitializer
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriWareInitializer* UCriWareInitializer::GetDefaultObj()
{
	static class UCriWareInitializer* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriWareInitializer*>(UCriWareInitializer::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.CriWarePluginSettings
// (None)

class UClass* UCriWarePluginSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriWarePluginSettings");

	return Clss;
}


// CriWarePluginSettings CriWareRuntime.Default__CriWarePluginSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriWarePluginSettings* UCriWarePluginSettings::GetDefaultObj()
{
	static class UCriWarePluginSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriWarePluginSettings*>(UCriWarePluginSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.ManaComponent
// (None)

class UClass* UManaComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaComponent");

	return Clss;
}


// ManaComponent CriWareRuntime.Default__ManaComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaComponent* UManaComponent::GetDefaultObj()
{
	static class UManaComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaComponent*>(UManaComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaComponent.ToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::ToIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "ToIndex");

	Params::UManaComponent_ToIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetVolume");

	Params::UManaComponent_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaTexture*                Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetTexture(class UManaTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetTexture");

	Params::UManaComponent_SetTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetSubVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetSubVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetSubVolume");

	Params::UManaComponent_SetSubVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetSubAudioTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Track                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetSubAudioTrack(int32 Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetSubAudioTrack");

	Params::UManaComponent_SetSubAudioTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetSubAudioSendLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAtomSpeakerID          SpeakerId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetSubAudioSendLevel(int32 Channel, enum class EAtomSpeakerID SpeakerId, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetSubAudioSendLevel");

	Params::UManaComponent_SetSubAudioSendLevel_Params Parms{};

	Parms.Channel = Channel;
	Parms.SpeakerId = SpeakerId;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetSubAudioCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetSubAudioCategory(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetSubAudioCategory");

	Params::UManaComponent_SetSubAudioCategory_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetPlaybackTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaPlaybackTimer      InPlaybackTimer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetPlaybackTimer(enum class EManaPlaybackTimer InPlaybackTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetPlaybackTimer");

	Params::UManaComponent_SetPlaybackTimer_Params Parms{};

	Parms.InPlaybackTimer = InPlaybackTimer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetMovie
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  InMovie                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetMovie(class UManaMovie* InMovie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetMovie");

	Params::UManaComponent_SetMovie_Params Parms{};

	Parms.InMovie = InMovie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetMaxDropFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaMaxFrameDrop       InMaxDropFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetMaxDropFrames(enum class EManaMaxFrameDrop InMaxDropFrames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetMaxDropFrames");

	Params::UManaComponent_SetMaxDropFrames_Params Parms{};

	Parms.InMaxDropFrames = InMaxDropFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MovieFilePath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetFile(const class FString& MovieFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetFile");

	Params::UManaComponent_SetFile_Params Parms{};

	Parms.MovieFilePath = MovieFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetExtraVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetExtraVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetExtraVolume");

	Params::UManaComponent_SetExtraVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetExtraAudioTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Track                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetExtraAudioTrack(int32 Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetExtraAudioTrack");

	Params::UManaComponent_SetExtraAudioTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetExtraAudioCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetExtraAudioCategory(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetExtraAudioCategory");

	Params::UManaComponent_SetExtraAudioCategory_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetEndFrameAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaFrameAction        InFrameAction                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetEndFrameAction(enum class EManaFrameAction InFrameAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetEndFrameAction");

	Params::UManaComponent_SetEndFrameAction_Params Parms{};

	Parms.InFrameAction = InFrameAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetAudioTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Track                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetAudioTrack(int32 Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetAudioTrack");

	Params::UManaComponent_SetAudioTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetAudioCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetAudioCategory(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetAudioCategory");

	Params::UManaComponent_SetAudioCategory_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetAlphaTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Track                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetAlphaTrack(int32 Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SetAlphaTrack");

	Params::UManaComponent_SetAlphaTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SeekToPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SeekToPosition(int32 FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "SeekToPosition");

	Params::UManaComponent_SeekToPosition_Params Parms{};

	Parms.FrameNumber = FrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Seek
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   Time                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::Seek(const struct FTimespan& Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Seek");

	Params::UManaComponent_Seek_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.RemoveSubAudioCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::RemoveSubAudioCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "RemoveSubAudioCategory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.RemoveExtraAudioCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::RemoveExtraAudioCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "RemoveExtraAudioCategory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.RemoveAudioCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::RemoveAudioCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "RemoveAudioCategory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Previous");

	Params::UManaComponent_Previous_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.PreparePlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::PreparePlaylistIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "PreparePlaylistIndex");

	Params::UManaComponent_PreparePlaylistIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Prepare
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::Prepare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Prepare");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::Pause(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Pause");

	Params::UManaComponent_Pause_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.ManaComponent.OnTrackChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              TrackNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnTrackChanged__DelegateSignature(int32 TrackNumber, class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnTrackChanged__DelegateSignature");

	Params::UManaComponent_OnTrackChanged__DelegateSignature_Params Parms{};

	Parms.TrackNumber = TrackNumber;
	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FText                        Subtitle                                                         (Parm, NativeAccessSpecifierPublic)

void UManaComponent::OnSubtitleChanged__DelegateSignature(class FText Subtitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnSubtitleChanged__DelegateSignature");

	Params::UManaComponent_OnSubtitleChanged__DelegateSignature_Params Parms{};

	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EManaComponentStatus    Status                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnStatusChanged__DelegateSignature(enum class EManaComponentStatus Status, class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnStatusChanged__DelegateSignature");

	Params::UManaComponent_OnStatusChanged__DelegateSignature_Params Parms{};

	Parms.Status = Status;
	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnSeekCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnSeekCompleted__DelegateSignature(int32 FrameNumber, class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnSeekCompleted__DelegateSignature");

	Params::UManaComponent_OnSeekCompleted__DelegateSignature_Params Parms{};

	Parms.FrameNumber = FrameNumber;
	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnRequestData__DelegateSignature(class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnRequestData__DelegateSignature");

	Params::UManaComponent_OnRequestData__DelegateSignature_Params Parms{};

	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnPlayerDestroyed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnPlayerDestroyed__DelegateSignature(class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnPlayerDestroyed__DelegateSignature");

	Params::UManaComponent_OnPlayerDestroyed__DelegateSignature_Params Parms{};

	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnMovieChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UManaMovie*                  Movie                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnMovieChanged__DelegateSignature(class UManaMovie* Movie, class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnMovieChanged__DelegateSignature");

	Params::UManaComponent_OnMovieChanged__DelegateSignature_Params Parms{};

	Parms.Movie = Movie;
	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnFrameOnTime__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnFrameOnTime__DelegateSignature(int32 FrameNumber, class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnFrameOnTime__DelegateSignature");

	Params::UManaComponent_OnFrameOnTime__DelegateSignature_Params Parms{};

	Parms.FrameNumber = FrameNumber;
	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FManaEventPointInfo         EventPointInfo                                                   (Parm, NativeAccessSpecifierPublic)

void UManaComponent::OnEventPoint__DelegateSignature(const struct FManaEventPointInfo& EventPointInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "OnEventPoint__DelegateSignature");

	Params::UManaComponent_OnEventPoint__DelegateSignature_Params Parms{};

	Parms.EventPointInfo = EventPointInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriWareRuntime.ManaComponent.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Next");

	Params::UManaComponent_Next_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.Loop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLoop                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::Loop(bool bInLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "Loop");

	Params::UManaComponent_Loop_Params Parms{};

	Parms.bInLoop = bInLoop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "IsReady");

	Params::UManaComponent_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsPreparing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "IsPreparing");

	Params::UManaComponent_IsPreparing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "IsPlaying");

	Params::UManaComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "IsPaused");

	Params::UManaComponent_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "IsLooping");

	Params::UManaComponent_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaComponent::GetVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetVolume");

	Params::UManaComponent_GetVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UManaComponent::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetTime");

	Params::UManaComponent_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManaTexture*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaTexture* UManaComponent::GetTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetTexture");

	Params::UManaComponent_GetTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetSubVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaComponent::GetSubVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetSubVolume");

	Params::UManaComponent_GetSubVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EManaComponentStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EManaComponentStatus UManaComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetStatus");

	Params::UManaComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaComponent::GetSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetSource");

	Params::UManaComponent_GetSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaComponent::GetPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetPosition");

	Params::UManaComponent_GetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetMovieTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UManaComponent::GetMovieTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetMovieTime");

	Params::UManaComponent_GetMovieTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaComponent::GetFrameNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetFrameNumber");

	Params::UManaComponent_GetFrameNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetExtraVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaComponent::GetExtraVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "GetExtraVolume");

	Params::UManaComponent_GetExtraVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.EnableSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::EnableSubtitles(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "EnableSubtitles");

	Params::UManaComponent_EnableSubtitles_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.EnableSeamless
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::EnableSeamless(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "EnableSeamless");

	Params::UManaComponent_EnableSeamless_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.ChangeSubtitlesEncoding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaSubtitlesEncoding  Encoding                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::ChangeSubtitlesEncoding(enum class EManaSubtitlesEncoding Encoding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "ChangeSubtitlesEncoding");

	Params::UManaComponent_ChangeSubtitlesEncoding_Params Parms{};

	Parms.Encoding = Encoding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.ChangeSubtitlesChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::ChangeSubtitlesChannel(int32 Channel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "ChangeSubtitlesChannel");

	Params::UManaComponent_ChangeSubtitlesChannel_Params Parms{};

	Parms.Channel = Channel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.AdvanceTime
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   DeltaTime                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::AdvanceTime(const struct FTimespan& DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaComponent", "AdvanceTime");

	Params::UManaComponent_AdvanceTime_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.ManaComponentTexture
// (None)

class UClass* UManaComponentTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaComponentTexture");

	return Clss;
}


// ManaComponentTexture CriWareRuntime.Default__ManaComponentTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaComponentTexture* UManaComponentTexture::GetDefaultObj()
{
	static class UManaComponentTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaComponentTexture*>(UManaComponentTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.ManaSource
// (None)

class UClass* UManaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaSource");

	return Clss;
}


// ManaSource CriWareRuntime.Default__ManaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaSource* UManaSource::GetDefaultObj()
{
	static class UManaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaSource*>(UManaSource::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.ManaMovie
// (None)

class UClass* UManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaMovie");

	return Clss;
}


// ManaMovie CriWareRuntime.Default__ManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaMovie* UManaMovie::GetDefaultObj()
{
	static class UManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaMovie*>(UManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaMovie.Validate
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaMovie::Validate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaMovie", "Validate");

	Params::UManaMovie_Validate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaMovie.GetUrl
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UManaMovie::GetUrl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaMovie", "GetUrl");

	Params::UManaMovie_GetUrl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.FileManaMovie
// (None)

class UClass* UFileManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FileManaMovie");

	return Clss;
}


// FileManaMovie CriWareRuntime.Default__FileManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UFileManaMovie* UFileManaMovie::GetDefaultObj()
{
	static class UFileManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UFileManaMovie*>(UFileManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.FileManaMovie.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFileManaMovie::SetFilePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FileManaMovie", "SetFilePath");

	Params::UFileManaMovie_SetFilePath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.DataManaMovie
// (None)

class UClass* UDataManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataManaMovie");

	return Clss;
}


// DataManaMovie CriWareRuntime.Default__DataManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataManaMovie* UDataManaMovie::GetDefaultObj()
{
	static class UDataManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataManaMovie*>(UDataManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.DataManaMovie.SetDataArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      InDataArray                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UDataManaMovie::SetDataArray(TArray<uint8>& InDataArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DataManaMovie", "SetDataArray");

	Params::UDataManaMovie_SetDataArray_Params Parms{};

	Parms.InDataArray = InDataArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.DataManaMovie.GetDataArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> UDataManaMovie::GetDataArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DataManaMovie", "GetDataArray");

	Params::UDataManaMovie_GetDataArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.StreamManaMovie
// (None)

class UClass* UStreamManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamManaMovie");

	return Clss;
}


// StreamManaMovie CriWareRuntime.Default__StreamManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamManaMovie* UStreamManaMovie::GetDefaultObj()
{
	static class UStreamManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamManaMovie*>(UStreamManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.ManaPlayer
// (None)

class UClass* UManaPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaPlayer");

	return Clss;
}


// ManaPlayer CriWareRuntime.Default__ManaPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaPlayer* UManaPlayer::GetDefaultObj()
{
	static class UManaPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaPlayer*>(UManaPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaPlayer.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EManaPlayerTrack        TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::SetVolume(float Volume, enum class EManaPlayerTrack TrackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "SetVolume");

	Params::UManaPlayer_SetVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.SetTimeSyncedSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAtomComponent*              SyncedSource                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::SetTimeSyncedSource(class UAtomComponent* SyncedSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "SetTimeSyncedSource");

	Params::UManaPlayer_SetTimeSyncedSource_Params Parms{};

	Parms.SyncedSource = SyncedSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.SetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaTexture*                InManaTexture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::SetTexture(class UManaTexture* InManaTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "SetTexture");

	Params::UManaPlayer_SetTexture_Params Parms{};

	Parms.InManaTexture = InManaTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::SetRate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "SetRate");

	Params::UManaPlayer_SetRate_Params Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Looping                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::SetLooping(bool Looping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "SetLooping");

	Params::UManaPlayer_SetLooping_Params Parms{};

	Parms.Looping = Looping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.SelectTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaPlayerTrack        TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TrackIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::SelectTrack(enum class EManaPlayerTrack TrackType, int32 TrackIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "SelectTrack");

	Params::UManaPlayer_SelectTrack_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.Seek
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   Time                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::Seek(const struct FTimespan& Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "Seek");

	Params::UManaPlayer_Seek_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::Rewind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "Rewind");

	Params::UManaPlayer_Rewind_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.ReOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::ReOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "ReOpen");

	Params::UManaPlayer_ReOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "Previous");

	Params::UManaPlayer_Previous_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.PlayAndSeek
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaPlayer::PlayAndSeek()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "PlayAndSeek");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "Play");

	Params::UManaPlayer_Play_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "Pause");

	Params::UManaPlayer_Pause_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.OpenSourceWithOptions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UManaSource*                 ManaSource                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FManaPlayerOptions          PlayerOptions                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::OpenSourceWithOptions(class UManaSource* ManaSource, struct FManaPlayerOptions& PlayerOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "OpenSourceWithOptions");

	Params::UManaPlayer_OpenSourceWithOptions_Params Parms{};

	Parms.ManaSource = ManaSource;
	Parms.PlayerOptions = PlayerOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.OpenPlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaPlaylist*               InPlaylist                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::OpenPlaylistIndex(class UManaPlaylist* InPlaylist, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "OpenPlaylistIndex");

	Params::UManaPlayer_OpenPlaylistIndex_Params Parms{};

	Parms.InPlaylist = InPlaylist;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.OpenPlaylist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaPlaylist*               InPlaylist                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::OpenPlaylist(class UManaPlaylist* InPlaylist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "OpenPlaylist");

	Params::UManaPlayer_OpenPlaylist_Params Parms{};

	Parms.InPlaylist = InPlaylist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.OpenMovieSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  InManaMovie                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::OpenMovieSource(class UManaMovie* InManaMovie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "OpenMovieSource");

	Params::UManaPlayer_OpenMovieSource_Params Parms{};

	Parms.InManaMovie = InManaMovie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.ManaPlayer.OnFrameUpdatedDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::OnFrameUpdatedDelegate__DelegateSignature(int32 FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "OnFrameUpdatedDelegate__DelegateSignature");

	Params::UManaPlayer_OnFrameUpdatedDelegate__DelegateSignature_Params Parms{};

	Parms.FrameNumber = FrameNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriWareRuntime.ManaPlayer.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "Next");

	Params::UManaPlayer_Next_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.IsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::IsSeeking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "IsSeeking");

	Params::UManaPlayer_IsSeeking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "IsReady");

	Params::UManaPlayer_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::IsPreparing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "IsPreparing");

	Params::UManaPlayer_IsPreparing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "IsPlaying");

	Params::UManaPlayer_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "IsPaused");

	Params::UManaPlayer_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "IsLooping");

	Params::UManaPlayer_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.IsClosed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::IsClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "IsClosed");

	Params::UManaPlayer_IsClosed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::HasError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "HasError");

	Params::UManaPlayer_HasError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.HandleManaComponentStatusChanged
// (Final, Native, Private)
// Parameters:
// enum class EManaComponentStatus    Status                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              InManaComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::HandleManaComponentStatusChanged(enum class EManaComponentStatus Status, class UManaComponent* InManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "HandleManaComponentStatusChanged");

	Params::UManaPlayer_HandleManaComponentStatusChanged_Params Parms{};

	Parms.Status = Status;
	Parms.InManaComponent = InManaComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.HandleManaComponentSeekCompleted
// (Final, Native, Private)
// Parameters:
// int32                              InFrameNumber                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              InManaComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::HandleManaComponentSeekCompleted(int32 InFrameNumber, class UManaComponent* InManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "HandleManaComponentSeekCompleted");

	Params::UManaPlayer_HandleManaComponentSeekCompleted_Params Parms{};

	Parms.InFrameNumber = InFrameNumber;
	Parms.InManaComponent = InManaComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.HandleManaComponentPlayerDestroyed
// (Final, Native, Private)
// Parameters:
// class UManaComponent*              InManaComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::HandleManaComponentPlayerDestroyed(class UManaComponent* InManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "HandleManaComponentPlayerDestroyed");

	Params::UManaPlayer_HandleManaComponentPlayerDestroyed_Params Parms{};

	Parms.InManaComponent = InManaComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.HandleManaComponentMovieChanged
// (Final, Native, Private)
// Parameters:
// class UManaMovie*                  InManaMovie                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              InManaComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::HandleManaComponentMovieChanged(class UManaMovie* InManaMovie, class UManaComponent* InManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "HandleManaComponentMovieChanged");

	Params::UManaPlayer_HandleManaComponentMovieChanged_Params Parms{};

	Parms.InManaMovie = InManaMovie;
	Parms.InManaComponent = InManaComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.HandleManaComponentFrameOnTime
// (Final, Native, Private)
// Parameters:
// int32                              InFrameNumber                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              InManaComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlayer::HandleManaComponentFrameOnTime(int32 InFrameNumber, class UManaComponent* InManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "HandleManaComponentFrameOnTime");

	Params::UManaPlayer_HandleManaComponentFrameOnTime_Params Parms{};

	Parms.InFrameNumber = InFrameNumber;
	Parms.InManaComponent = InManaComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.GetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaPlayerTrack        TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaPlayer::GetVolume(enum class EManaPlayerTrack TrackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetVolume");

	Params::UManaPlayer_GetVolume_Params Parms{};

	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UManaPlayer::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetTime");

	Params::UManaPlayer_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManaTexture*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaTexture* UManaPlayer::GetTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetTexture");

	Params::UManaPlayer_GetTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EManaComponentStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EManaComponentStatus UManaPlayer::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetStatus");

	Params::UManaPlayer_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaPlayer::GetRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetRate");

	Params::UManaPlayer_GetRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetPlaylistIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaPlayer::GetPlaylistIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetPlaylistIndex");

	Params::UManaPlayer_GetPlaylistIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetMovieTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UManaPlayer::GetMovieTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetMovieTime");

	Params::UManaPlayer_GetMovieTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetMovieSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlayer::GetMovieSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetMovieSource");

	Params::UManaPlayer_GetMovieSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetMovieFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaPlayer::GetMovieFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetMovieFrames");

	Params::UManaPlayer_GetMovieFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaPlayer::GetFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetFrames");

	Params::UManaPlayer_GetFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UManaPlayer::GetDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "GetDuration");

	Params::UManaPlayer_GetDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.DisableTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaPlayerTrack        TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlayer::DisableTrack(enum class EManaPlayerTrack TrackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "DisableTrack");

	Params::UManaPlayer_DisableTrack_Params Parms{};

	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlayer.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaPlayer::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlayer.BindOnFrameUpdated
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UManaPlayer::BindOnFrameUpdated(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlayer", "BindOnFrameUpdated");

	Params::UManaPlayer_BindOnFrameUpdated_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.ManaPlaylist
// (None)

class UClass* UManaPlaylist::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaPlaylist");

	return Clss;
}


// ManaPlaylist CriWareRuntime.Default__ManaPlaylist
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaPlaylist* UManaPlaylist::GetDefaultObj()
{
	static class UManaPlaylist* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaPlaylist*>(UManaPlaylist::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::RemoveAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "RemoveAt");

	Params::UManaPlaylist_RemoveAt_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  ManaMovie                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::Remove(class UManaMovie* ManaMovie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "Remove");

	Params::UManaPlaylist_Remove_Params Parms{};

	Parms.ManaMovie = ManaMovie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaPlaylist::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "Num");

	Params::UManaPlaylist_Num_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.IsSeamless
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlaylist::IsSeamless()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "IsSeamless");

	Params::UManaPlaylist_IsSeamless_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.IsMixedTypes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlaylist::IsMixedTypes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "IsMixedTypes");

	Params::UManaPlaylist_IsMixedTypes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.IsAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlaylist::IsAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "IsAlpha");

	Params::UManaPlaylist_IsAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  ManaMovie                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::Insert(class UManaMovie* ManaMovie, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "Insert");

	Params::UManaPlaylist_Insert_Params Parms{};

	Parms.ManaMovie = ManaMovie;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlaylist.GetRandom
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::GetRandom(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "GetRandom");

	Params::UManaPlaylist_GetRandom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::GetPrevious(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "GetPrevious");

	Params::UManaPlaylist_GetPrevious_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.GetNext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::GetNext(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "GetNext");

	Params::UManaPlaylist_GetNext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::Get(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "Get");

	Params::UManaPlaylist_Get_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  ManaMovie                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::Add(class UManaMovie* ManaMovie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaPlaylist", "Add");

	Params::UManaPlaylist_Add_Params Parms{};

	Parms.ManaMovie = ManaMovie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.ManaTexture
// (None)

class UClass* UManaTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaTexture");

	return Clss;
}


// ManaTexture CriWareRuntime.Default__ManaTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaTexture* UManaTexture::GetDefaultObj()
{
	static class UManaTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaTexture*>(UManaTexture::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaTexture.SetMovieSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaSource*                 InSource                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaTexture::SetMovieSource(class UManaSource* InSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaTexture", "SetMovieSource");

	Params::UManaTexture_SetMovieSource_Params Parms{};

	Parms.InSource = InSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.ManaTexture.OnTextureUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UManaTexture*                ManaTexture                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaTexture::OnTextureUpdated__DelegateSignature(class UManaTexture* ManaTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ManaTexture", "OnTextureUpdated__DelegateSignature");

	Params::UManaTexture_OnTextureUpdated__DelegateSignature_Params Parms{};

	Parms.ManaTexture = ManaTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
// (None)

class UClass* UMaterialExpressionManaColorSpaceConverter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionManaColorSpaceConverter");

	return Clss;
}


// MaterialExpressionManaColorSpaceConverter CriWareRuntime.Default__MaterialExpressionManaColorSpaceConverter
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionManaColorSpaceConverter* UMaterialExpressionManaColorSpaceConverter::GetDefaultObj()
{
	static class UMaterialExpressionManaColorSpaceConverter* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionManaColorSpaceConverter*>(UMaterialExpressionManaColorSpaceConverter::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
// (None)

class UClass* UMaterialExpressionManaMovieFormatSwitch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionManaMovieFormatSwitch");

	return Clss;
}


// MaterialExpressionManaMovieFormatSwitch CriWareRuntime.Default__MaterialExpressionManaMovieFormatSwitch
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionManaMovieFormatSwitch* UMaterialExpressionManaMovieFormatSwitch::GetDefaultObj()
{
	static class UMaterialExpressionManaMovieFormatSwitch* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionManaMovieFormatSwitch*>(UMaterialExpressionManaMovieFormatSwitch::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.PlatformManaMovie
// (None)

class UClass* UPlatformManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformManaMovie");

	return Clss;
}


// PlatformManaMovie CriWareRuntime.Default__PlatformManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformManaMovie* UPlatformManaMovie::GetDefaultObj()
{
	static class UPlatformManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformManaMovie*>(UPlatformManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.SoundAtomConfig
// (None)

class UClass* USoundAtomConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundAtomConfig");

	return Clss;
}


// SoundAtomConfig CriWareRuntime.Default__SoundAtomConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundAtomConfig* USoundAtomConfig::GetDefaultObj()
{
	static class USoundAtomConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundAtomConfig*>(USoundAtomConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.SoundAtomConfig.GetCategoryInfoArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FAtomCategoryInfoParam>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAtomCategoryInfoParam> USoundAtomConfig::GetCategoryInfoArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomConfig", "GetCategoryInfoArray");

	Params::USoundAtomConfig_GetCategoryInfoArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.SoundAtomCue
// (None)

class UClass* USoundAtomCue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundAtomCue");

	return Clss;
}


// SoundAtomCue CriWareRuntime.Default__SoundAtomCue
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundAtomCue* USoundAtomCue::GetDefaultObj()
{
	static class USoundAtomCue* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundAtomCue*>(USoundAtomCue::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.SoundAtomCue.Validate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCue::Validate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "Validate");

	Params::USoundAtomCue_Validate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCue::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "IsLooping");

	Params::USoundAtomCue_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.IsEconomicTickEnabled
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCue::IsEconomicTickEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "IsEconomicTickEnabled");

	Params::USoundAtomCue_IsEconomicTickEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToUse
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetMaxAttenuationDistanceToUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetMaxAttenuationDistanceToUse");

	Params::USoundAtomCue_GetMaxAttenuationDistanceToUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToApply
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetMaxAttenuationDistanceToApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetMaxAttenuationDistanceToApply");

	Params::USoundAtomCue_GetMaxAttenuationDistanceToApply_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetEconomicTickMarginDistanceToUse
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetEconomicTickMarginDistanceToUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetEconomicTickMarginDistanceToUse");

	Params::USoundAtomCue_GetEconomicTickMarginDistanceToUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToUse
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetEconomicTickFrequencyToUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetEconomicTickFrequencyToUse");

	Params::USoundAtomCue_GetEconomicTickFrequencyToUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToApply
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetEconomicTickFrequencyToApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetEconomicTickFrequencyToApply");

	Params::USoundAtomCue_GetEconomicTickFrequencyToApply_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetEconomicTickDistanceMarginToApply
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetEconomicTickDistanceMarginToApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetEconomicTickDistanceMarginToApply");

	Params::USoundAtomCue_GetEconomicTickDistanceMarginToApply_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetEconomicTickDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetEconomicTickDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetEconomicTickDistance");

	Params::USoundAtomCue_GetEconomicTickDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetEconomicTickBoundaryDistanceToUse
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetEconomicTickBoundaryDistanceToUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetEconomicTickBoundaryDistanceToUse");

	Params::USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetCullingMarginDistanceToUse
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetCullingMarginDistanceToUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetCullingMarginDistanceToUse");

	Params::USoundAtomCue_GetCullingMarginDistanceToUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetCullingBoundaryDistanceToUse
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetCullingBoundaryDistanceToUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetCullingBoundaryDistanceToUse");

	Params::USoundAtomCue_GetCullingBoundaryDistanceToUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetCullDistanceMarginToApply
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetCullDistanceMarginToApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetCullDistanceMarginToApply");

	Params::USoundAtomCue_GetCullDistanceMarginToApply_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetCullDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundAtomCue::GetCullDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "GetCullDistance");

	Params::USoundAtomCue_GetCullDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.BP_GetCueInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAtomCueInfo                CueInfo                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCue::BP_GetCueInfo(struct FAtomCueInfo& CueInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCue", "BP_GetCueInfo");

	Params::USoundAtomCue_BP_GetCueInfo_Params Parms{};

	Parms.CueInfo = CueInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.SoundAtomCueSheet
// (None)

class UClass* USoundAtomCueSheet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundAtomCueSheet");

	return Clss;
}


// SoundAtomCueSheet CriWareRuntime.Default__SoundAtomCueSheet
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundAtomCueSheet* USoundAtomCueSheet::GetDefaultObj()
{
	static class USoundAtomCueSheet* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundAtomCueSheet*>(USoundAtomCueSheet::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.SoundAtomCueSheet.ReleaseAcb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        AcbName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundAtomCueSheet::ReleaseAcb(class FName AcbName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "ReleaseAcb");

	Params::USoundAtomCueSheet_ReleaseAcb_Params Parms{};

	Parms.AcbName = AcbName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.SoundAtomCueSheet.LoadAtomCueSheet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCueSheet*          CueSheet                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddToLevel                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCueSheet*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCueSheet* USoundAtomCueSheet::LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet, bool bAddToLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "LoadAtomCueSheet");

	Params::USoundAtomCueSheet_LoadAtomCueSheet_Params Parms{};

	Parms.CueSheet = CueSheet;
	Parms.bAddToLevel = bAddToLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.LoadAcb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        AcbName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddToLevel                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCueSheet*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCueSheet* USoundAtomCueSheet::LoadAcb(class FName AcbName, bool bAddToLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "LoadAcb");

	Params::USoundAtomCueSheet_LoadAcb_Params Parms{};

	Parms.AcbName = AcbName;
	Parms.bAddToLevel = bAddToLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCueSheet::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "IsLoaded");

	Params::USoundAtomCueSheet_IsLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.GetNumCues
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USoundAtomCueSheet::GetNumCues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "GetNumCues");

	Params::USoundAtomCueSheet_GetNumCues_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CueName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCue* USoundAtomCueSheet::GetAtomCueByName(const class FString& CueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "GetAtomCueByName");

	Params::USoundAtomCueSheet_GetAtomCueByName_Params Parms{};

	Parms.CueName = CueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              CueIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCue* USoundAtomCueSheet::GetAtomCueByIndex(int32 CueIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "GetAtomCueByIndex");

	Params::USoundAtomCueSheet_GetAtomCueByIndex_Params Parms{};

	Parms.CueIndex = CueIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              CueId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCue* USoundAtomCueSheet::GetAtomCueById(int32 CueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "GetAtomCueById");

	Params::USoundAtomCueSheet_GetAtomCueById_Params Parms{};

	Parms.CueId = CueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void USoundAtomCueSheet::DetachDspBusSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "DetachDspBusSetting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomCueInfo                CueInfo                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCueSheet::BP_GetCueInfoFromName(const class FString& Name, struct FAtomCueInfo& CueInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "BP_GetCueInfoFromName");

	Params::USoundAtomCueSheet_BP_GetCueInfoFromName_Params Parms{};

	Parms.Name = Name;
	Parms.CueInfo = CueInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomCueInfo                CueInfo                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCueSheet::BP_GetCueInfoFromIndex(int32 Index, struct FAtomCueInfo& CueInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "BP_GetCueInfoFromIndex");

	Params::USoundAtomCueSheet_BP_GetCueInfoFromIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CueInfo = CueInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromId
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomCueInfo                CueInfo                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCueSheet::BP_GetCueInfoFromId(int32 ID, struct FAtomCueInfo& CueInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "BP_GetCueInfoFromId");

	Params::USoundAtomCueSheet_BP_GetCueInfoFromId_Params Parms{};

	Parms.ID = ID;
	Parms.CueInfo = CueInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SettingName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundAtomCueSheet::AttachDspBusSetting(const class FString& SettingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "AttachDspBusSetting");

	Params::USoundAtomCueSheet_AttachDspBusSetting_Params Parms{};

	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SnapshotName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Milliseconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundAtomCueSheet::ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SoundAtomCueSheet", "ApplyDspBusSnapshot");

	Params::USoundAtomCueSheet_ApplyDspBusSnapshot_Params Parms{};

	Parms.SnapshotName = SnapshotName;
	Parms.Milliseconds = Milliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


