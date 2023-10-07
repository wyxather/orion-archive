#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FBPart.WBP_FBPart_C
// (None)

class UClass* UWBP_FBPart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FBPart_C");

	return Clss;
}


// WBP_FBPart_C WBP_FBPart.Default__WBP_FBPart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FBPart_C* UWBP_FBPart_C::GetDefaultObj()
{
	static class UWBP_FBPart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FBPart_C*>(UWBP_FBPart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FBPart.WBP_FBPart_C.OnLoadedNormalFlipbook
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FBPart_C::OnLoadedNormalFlipbook(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "OnLoadedNormalFlipbook");

	Params::UWBP_FBPart_C_OnLoadedNormalFlipbook_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetFBParam_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FBPart_C::SetFBParam_Normal(class FName Label, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, const struct FVector2D& DrawSize, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetFBParam_Normal");

	Params::UWBP_FBPart_C_SetFBParam_Normal_Params Parms{};

	Parms.Label = Label;
	Parms.ActionType = ActionType;
	Parms.Dir = Dir;
	Parms.DrawSize = DrawSize;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.OnLoadedMonsterFlipbook
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FBPart_C::OnLoadedMonsterFlipbook(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "OnLoadedMonsterFlipbook");

	Params::UWBP_FBPart_C_OnLoadedMonsterFlipbook_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetFBParam_FromJobCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPLAYER_JOB_FB_TYPE     ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJOB_TYPE               JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FBPart_C::SetFBParam_FromJobCharacter(int32 CharaID, enum class EPLAYER_JOB_FB_TYPE ActionType, enum class EJOB_TYPE JobID, bool IsLoop, const struct FVector2D& DrawSize, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetFBParam_FromJobCharacter");

	Params::UWBP_FBPart_C_SetFBParam_FromJobCharacter_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.ActionType = ActionType;
	Parms.JobID = JobID;
	Parms.IsLoop = IsLoop;
	Parms.DrawSize = DrawSize;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function WBP_FBPart.WBP_FBPart_C.SetCharacterColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                SetColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::SetCharacterColor(const struct FLinearColor& SetColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetCharacterColor");

	Params::UWBP_FBPart_C_SetCharacterColor_Params Parms{};

	Parms.SetColor = SetColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.OnLoadedNpcFlipbook
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FBPart_C::OnLoadedNpcFlipbook(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "OnLoadedNpcFlipbook");

	Params::UWBP_FBPart_C_OnLoadedNpcFlipbook_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.PreSetFlipbook
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::PreSetFlipbook(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "PreSetFlipbook");

	Params::UWBP_FBPart_C_PreSetFlipbook_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetIsUpdateFlipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateFlipBook                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FBPart_C::SetIsUpdateFlipbook(bool UpdateFlipBook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetIsUpdateFlipbook");

	Params::UWBP_FBPart_C_SetIsUpdateFlipbook_Params Parms{};

	Parms.UpdateFlipBook = UpdateFlipBook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DefaultSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::SetPosition(const struct FVector2D& DefaultSize, const struct FVector2D& DrawSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetPosition");

	Params::UWBP_FBPart_C_SetPosition_Params Parms{};

	Parms.DefaultSize = DefaultSize;
	Parms.DrawSize = DrawSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetFBIconTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::SetFBIconTranslation(float Scale, const struct FVector2D& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetFBIconTranslation");

	Params::UWBP_FBPart_C_SetFBIconTranslation_Params Parms{};

	Parms.Scale = Scale;
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetFBParam_FromMonsterList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DefaultSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FBPart_C::SetFBParam_FromMonsterList(class FName Label, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, const struct FVector2D& DefaultSize, const struct FVector2D& DrawSize, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetFBParam_FromMonsterList");

	Params::UWBP_FBPart_C_SetFBParam_FromMonsterList_Params Parms{};

	Parms.Label = Label;
	Parms.ActionType = ActionType;
	Parms.Dir = Dir;
	Parms.DefaultSize = DefaultSize;
	Parms.DrawSize = DrawSize;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.Set FBParam from Select Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FBLabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::Set_FBParam_from_Select_Character(class FName FBLabel, bool IsLoop, const struct FVector2D& DrawSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "Set FBParam from Select Character");

	Params::UWBP_FBPart_C_Set_FBParam_from_Select_Character_Params Parms{};

	Parms.FBLabel = FBLabel;
	Parms.IsLoop = IsLoop;
	Parms.DrawSize = DrawSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetDrawSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::SetDrawSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetDrawSize");

	Params::UWBP_FBPart_C_SetDrawSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetBaseScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::SetBaseScale(const struct FVector2D& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetBaseScale");

	Params::UWBP_FBPart_C_SetBaseScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.SetMaxSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FBPart_C::SetMaxSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetMaxSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FBPart.WBP_FBPart_C.SetFBParam_FromCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJOB_TYPE               JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FBPart_C::SetFBParam_FromCharacter(int32 CharaID, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, enum class EJOB_TYPE JobID, bool IsLoop, const struct FVector2D& DrawSize, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetFBParam_FromCharacter");

	Params::UWBP_FBPart_C_SetFBParam_FromCharacter_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.ActionType = ActionType;
	Parms.Dir = Dir;
	Parms.JobID = JobID;
	Parms.IsLoop = IsLoop;
	Parms.DrawSize = DrawSize;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function WBP_FBPart.WBP_FBPart_C.SetFBParam_FromNPC
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FBPart_C::SetFBParam_FromNPC(class FName Label, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, const struct FVector2D& DrawSize, bool IsLoop, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "SetFBParam_FromNPC");

	Params::UWBP_FBPart_C_SetFBParam_FromNPC_Params Parms{};

	Parms.Label = Label;
	Parms.ActionType = ActionType;
	Parms.Dir = Dir;
	Parms.DrawSize = DrawSize;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function WBP_FBPart.WBP_FBPart_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "Tick");

	Params::UWBP_FBPart_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FBPart.WBP_FBPart_C.ExecuteUbergraph_WBP_FBPart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FBPart_C::ExecuteUbergraph_WBP_FBPart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FBPart_C", "ExecuteUbergraph_WBP_FBPart");

	Params::UWBP_FBPart_C_ExecuteUbergraph_WBP_FBPart_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


