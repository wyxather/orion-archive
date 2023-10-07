#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass Balloon_00.Balloon_00_C
// (None)

class UClass* UBalloon_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Balloon_00_C");

	return Clss;
}


// Balloon_00_C Balloon_00.Default__Balloon_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalloon_00_C* UBalloon_00_C::GetDefaultObj()
{
	static class UBalloon_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalloon_00_C*>(UBalloon_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Balloon_00.Balloon_00_C.RefreshTalkText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::RefreshTalkText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "RefreshTalkText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.SetBalloonResourceLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::SetBalloonResourceLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "SetBalloonResourceLabel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.UnPausedBalloon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_00_C::UnPausedBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "UnPausedBalloon");

	Params::UBalloon_00_C_UnPausedBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.PauseBalloon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_00_C::PauseBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "PauseBalloon");

	Params::UBalloon_00_C_PauseBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.SetupStretchImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBalloonType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::SetupStretchImage(enum class EBalloonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "SetupStretchImage");

	Params::UBalloon_00_C_SetupStretchImage_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.GetBalloonDirFromFromCharaPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Normalize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventBalloonDir        Dir                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::GetBalloonDirFromFromCharaPos(const struct FVector2D& Normalize, enum class EEventBalloonDir* Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "GetBalloonDirFromFromCharaPos");

	Params::UBalloon_00_C_GetBalloonDirFromFromCharaPos_Params Parms{};

	Parms.Normalize = Normalize;

	UObject::ProcessEvent(Func, &Parms);

	if (Dir != nullptr)
		*Dir = Parms.Dir;

}


// Function Balloon_00.Balloon_00_C.ChangeBalloonDirFromCharaPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   BalloonPos                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::ChangeBalloonDirFromCharaPos(const struct FVector2D& BalloonPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "ChangeBalloonDirFromCharaPos");

	Params::UBalloon_00_C_ChangeBalloonDirFromCharaPos_Params Parms{};

	Parms.BalloonPos = BalloonPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.CheckOutScreenYMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   CheckPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutScreen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::CheckOutScreenYMax(const struct FVector2D& CheckPos, bool* OutScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckOutScreenYMax");

	Params::UBalloon_00_C_CheckOutScreenYMax_Params Parms{};

	Parms.CheckPos = CheckPos;

	UObject::ProcessEvent(Func, &Parms);

	if (OutScreen != nullptr)
		*OutScreen = Parms.OutScreen;

}


// Function Balloon_00.Balloon_00_C.CheckOutScreenYMin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   CheckPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutScreen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::CheckOutScreenYMin(const struct FVector2D& CheckPos, bool* OutScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckOutScreenYMin");

	Params::UBalloon_00_C_CheckOutScreenYMin_Params Parms{};

	Parms.CheckPos = CheckPos;

	UObject::ProcessEvent(Func, &Parms);

	if (OutScreen != nullptr)
		*OutScreen = Parms.OutScreen;

}


// Function Balloon_00.Balloon_00_C.CheckOutScreenXMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   CheckPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutScreen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::CheckOutScreenXMax(const struct FVector2D& CheckPos, bool* OutScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckOutScreenXMax");

	Params::UBalloon_00_C_CheckOutScreenXMax_Params Parms{};

	Parms.CheckPos = CheckPos;

	UObject::ProcessEvent(Func, &Parms);

	if (OutScreen != nullptr)
		*OutScreen = Parms.OutScreen;

}


// Function Balloon_00.Balloon_00_C.CheckOutScreenXMin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   CheckPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutScreen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::CheckOutScreenXMin(const struct FVector2D& CheckPos, bool* OutScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckOutScreenXMin");

	Params::UBalloon_00_C_CheckOutScreenXMin_Params Parms{};

	Parms.CheckPos = CheckPos;

	UObject::ProcessEvent(Func, &Parms);

	if (OutScreen != nullptr)
		*OutScreen = Parms.OutScreen;

}


// Function Balloon_00.Balloon_00_C.GetBalloonOffsetFromChara
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEventBalloonDir        Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UBalloon_00_C::GetBalloonOffsetFromChara(enum class EEventBalloonDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "GetBalloonOffsetFromChara");

	Params::UBalloon_00_C_GetBalloonOffsetFromChara_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.GetBalloonOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEventBalloonDir        Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UBalloon_00_C::GetBalloonOffset(enum class EEventBalloonDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "GetBalloonOffset");

	Params::UBalloon_00_C_GetBalloonOffset_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.CheckTranslation_FromChara
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::CheckTranslation_FromChara(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckTranslation_FromChara");

	Params::UBalloon_00_C_CheckTranslation_FromChara_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Balloon_00.Balloon_00_C.ChangeBalloonDir
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventBalloonDir        Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::ChangeBalloonDir(enum class EEventBalloonDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "ChangeBalloonDir");

	Params::UBalloon_00_C_ChangeBalloonDir_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.Get Target Translation Min Max
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CheckPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Min                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Max                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::Get_Target_Translation_Min_Max(const struct FVector2D& CheckPos, struct FVector2D* Min, struct FVector2D* Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "Get Target Translation Min Max");

	Params::UBalloon_00_C_Get_Target_Translation_Min_Max_Params Parms{};

	Parms.CheckPos = CheckPos;

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = std::move(Parms.Min);

	if (Max != nullptr)
		*Max = std::move(Parms.Max);

}


// Function Balloon_00.Balloon_00_C.CheckTranslation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::CheckTranslation(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckTranslation");

	Params::UBalloon_00_C_CheckTranslation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Balloon_00.Balloon_00_C.CheckOutScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   CheckPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutScreen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::CheckOutScreen(const struct FVector2D& CheckPos, bool* OutScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckOutScreen");

	Params::UBalloon_00_C_CheckOutScreen_Params Parms{};

	Parms.CheckPos = CheckPos;

	UObject::ProcessEvent(Func, &Parms);

	if (OutScreen != nullptr)
		*OutScreen = Parms.OutScreen;

}


// Function Balloon_00.Balloon_00_C.GetPlayedVoice
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_00_C::GetPlayedVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "GetPlayedVoice");

	Params::UBalloon_00_C_GetPlayedVoice_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.CheckDrawTextEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::CheckDrawTextEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CheckDrawTextEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::PlayOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "PlayOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.GetCharacterHeadPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Ret                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::GetCharacterHeadPos(float* Ret)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "GetCharacterHeadPos");

	Params::UBalloon_00_C_GetCharacterHeadPos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;

}


// Function Balloon_00.Balloon_00_C.DebugLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ScreenPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   balloonOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaHeight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   BalloonSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TailOffset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::DebugLog(const struct FVector2D& ScreenPos, const struct FVector2D& balloonOffset, const struct FVector2D& CharaHeight, const struct FVector2D& BalloonSize, const struct FVector2D& TailOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "DebugLog");

	Params::UBalloon_00_C_DebugLog_Params Parms{};

	Parms.ScreenPos = ScreenPos;
	Parms.balloonOffset = balloonOffset;
	Parms.CharaHeight = CharaHeight;
	Parms.BalloonSize = BalloonSize;
	Parms.TailOffset = TailOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.SetupBalloonTair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::SetupBalloonTair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "SetupBalloonTair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.SetTypeImageFromTalkChara
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBalloonType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::SetTypeImageFromTalkChara(int32 Index, enum class EBalloonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "SetTypeImageFromTalkChara");

	Params::UBalloon_00_C_SetTypeImageFromTalkChara_Params Parms{};

	Parms.Index = Index;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.GetPivot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEventBalloonDir        Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::GetPivot(enum class EEventBalloonDir Dir, struct FVector2D* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "GetPivot");

	Params::UBalloon_00_C_GetPivot_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

}


// Function Balloon_00.Balloon_00_C.SetupBalloonDir
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventBalloonDir        BalloonDir                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseTail                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   UnderOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::SetupBalloonDir(enum class EEventBalloonDir BalloonDir, bool UseTail, struct FVector2D* Offset, struct FVector2D* UnderOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "SetupBalloonDir");

	Params::UBalloon_00_C_SetupBalloonDir_Params Parms{};

	Parms.BalloonDir = BalloonDir;
	Parms.UseTail = UseTail;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);

	if (UnderOffset != nullptr)
		*UnderOffset = std::move(Parms.UnderOffset);

}


// Function Balloon_00.Balloon_00_C.SetTranslation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::SetTranslation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "SetTranslation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.CloseBalloon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_00_C::CloseBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CloseBalloon");

	Params::UBalloon_00_C_CloseBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.InitLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::InitLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "InitLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.CbLoaded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBalloon_00_C::CbLoaded(TArray<class UObject*>& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CbLoaded");

	Params::UBalloon_00_C_CbLoaded_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAddBalloonParam            InParam                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bAutoTalk                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_00_C::Init(struct FAddBalloonParam& InParam, bool bAutoTalk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "Init");

	Params::UBalloon_00_C_Init_Params Parms{};

	Parms.InParam = InParam;
	Parms.bAutoTalk = bAutoTalk;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.CallNext
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AutoNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_00_C::CallNext(bool AutoNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "CallNext");

	Params::UBalloon_00_C_CallNext_Params Parms{};

	Parms.AutoNext = AutoNext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_00.Balloon_00_C.UpdateTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::UpdateTranslation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "UpdateTranslation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.InitSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::InitSize(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "InitSize");

	Params::UBalloon_00_C_InitSize_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AutoNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_00_C::Next(bool AutoNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "Next");

	Params::UBalloon_00_C_Next_Params Parms{};

	Parms.AutoNext = AutoNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UBalloon_00_C::WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UBalloon_00_C::WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.OnCloseAnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::OnCloseAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "OnCloseAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBalloon_00_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "Tick");

	Params::UBalloon_00_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.SetTextAnimationWait
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             NewLanguage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::SetTextAnimationWait(enum class EKSLanguage NewLanguage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "SetTextAnimationWait");

	Params::UBalloon_00_C_SetTextAnimationWait_Params Parms{};

	Parms.NewLanguage = NewLanguage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_00.Balloon_00_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_00_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_00.Balloon_00_C.ExecuteUbergraph_Balloon_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_00_C::ExecuteUbergraph_Balloon_00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_00_C", "ExecuteUbergraph_Balloon_00");

	Params::UBalloon_00_C_ExecuteUbergraph_Balloon_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


