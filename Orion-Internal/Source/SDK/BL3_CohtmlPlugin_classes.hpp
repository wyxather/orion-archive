#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CohtmlPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CohtmlPlugin.CohtmlAssetReferencer
// 0x0000 (0x0028 - 0x0028)
class UCohtmlAssetReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAssetReferencer");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlAtlasContainedTextures
// 0x0050 (0x0078 - 0x0028)
class UCohtmlAtlasContainedTextures : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty CohtmlPlugin.CohtmlAtlasContainedTextures.Textures

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAtlasContainedTextures");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlTextureAtlasDetails
// 0x0038 (0x0060 - 0x0028)
class UCohtmlTextureAtlasDetails : public UObject
{
public:
	class FString                                      AtlasPath;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                Width;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Height;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      PixelFormat;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                MaxAtlasWidth;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAtlasHeight;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTextureWidth;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTextureHeight;                                         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlTextureAtlasDetails");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlAudioWrapper
// 0x0308 (0x0330 - 0x0028)
class UCohtmlAudioWrapper : public UObject
{
public:
	class UObject*                                     Owner;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<int, struct FCohtmlSound>                     Sounds;                                                   // 0x0030(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0080(0x02B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAudioWrapper");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlBaseComponent
// 0x00C0 (0x0238 - 0x0178)
class UCohtmlBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ScriptingReady;                                           // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableComplexCSSSupport;                                 // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x01B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // 0x01BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1D];                                      // 0x01BB(0x001D) MISSED OFFSET
	class UCohtmlAudioWrapper*                         AudioWrapper;                                             // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x01E0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlBaseComponent");
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings);
	void Resize(int Width, int Height);
	void Reload();
	void Load(const class FString& Path);
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool HasRequestedView();
	void EndDebugFrameSave();
	void EnableRendering(bool bEnabled);
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCohtmlJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


// Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCohtmlBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_TriggerJSEvent(class UCohtmlBaseComponent* Component, const class FString& EventName, class UCohtmlJSEvent* JSEvent);
	class UCohtmlJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
	void STATIC_AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg);
	void STATIC_AddString(class UCohtmlJSEvent* JSEvent, const class FString& Arg);
	void STATIC_AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg);
	void STATIC_AddInt32(class UCohtmlJSEvent* JSEvent, int Arg);
	void STATIC_AddFloat(class UCohtmlJSEvent* JSEvent, float Arg);
	void STATIC_AddByte(class UCohtmlJSEvent* JSEvent, unsigned char Arg);
	void STATIC_AddBool(class UCohtmlJSEvent* JSEvent, bool Arg);
	void STATIC_AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int> Arg);
	void STATIC_AddArray(class UCohtmlJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
};


// Class CohtmlPlugin.CohtmlComponent
// 0x0038 (0x0270 - 0x0238)
class UCohtmlComponent : public UCohtmlBaseComponent
{
public:
	class FString                                      URL;                                                      // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Width;                                                    // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ManualTexture;                                            // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FName                                       PrimitiveName;                                            // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlComponent");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UCohtmlEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlEventHelpers");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlGameHUD
// 0x00A8 (0x0620 - 0x0578)
class ACohtmlGameHUD : public AHUD
{
public:
	class UCohtmlHUD*                                  CohtmlHUD;                                                // 0x0578(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCohtmlHUD*                                  CohtmlHUDInternal;                                        // 0x0580(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0588(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlGameHUD");
		return ptr;
	}


	void SetupView(const class FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate);
};


// Class CohtmlPlugin.CohtmlHUD
// 0x0030 (0x0268 - 0x0238)
class UCohtmlHUD : public UCohtmlBaseComponent
{
public:
	struct FSoftObjectPath                             HUDMaterialName;                                          // 0x0238(0x0018)
	class UMaterial*                                   HUDMaterial;                                              // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                      // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlHUD");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlInputActor
// 0x0058 (0x04B0 - 0x0458)
class ACohtmlInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCohtmlInputActorMouseButtonDown;                        // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCohtmlInputActorMouseButtonUp;                          // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCohtmlInputActorKeyDown;                                // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCohtmlInputActorKeyUp;                                  // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0498(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlInputActor");
		return ptr;
	}


	void ToggleCohtmlInputFocus();
	void SetLineTraceMode(TEnumAsByte<ECohtmlInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour> Propagation);
	void SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView);
	void SetCohtmlInputFocus(bool FocusUI);
	bool IsCohtmlFocused();
	void Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<ECohtmlInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<ECohtmlInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
};


// Class CohtmlPlugin.CohtmlJSEvent
// 0x0090 (0x00B8 - 0x0028)
class UCohtmlJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	TArray<class UStruct*>                             StructTypes;                                              // 0x00A8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlJSEvent");
		return ptr;
	}


	void AddText(const struct FText& Text);
	void AddStructArg(class UStructProperty* Arg);
	void AddString(const class FString& str);
	void AddObject(class UObject* Object);
	void AddName(const struct FName& Name);
	void AddInt32(int integer);
	void AddFloat(float fl);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
};


// Class CohtmlPlugin.CohtmlSettings
// 0x0060 (0x0088 - 0x0028)
class UCohtmlSettings : public UObject
{
public:
	bool                                               EnableLiveReload;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                DevToolsPort;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableLocalization;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableBreakIterator;                                      // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               HandleInputOnHTMLBody;                                    // 0x0032(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	TArray<class FString>                              InputTransparentCssClasses;                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	float                                              ScrollDelta;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShowWarningsOnScreen;                                     // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ECohtmlSettingsSeverity                            LogSeverity;                                              // 0x004D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectTitleSafeZone;                                    // 0x004E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectLetterboxing;                                     // 0x004F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               TickWhileGameIsPaused;                                    // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseLowerCaseNamesForAutoExposedProperties;               // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ECohtmlMSAA                                        MSAA;                                                     // 0x0052(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	TArray<struct FSingleFormatFallbacks>              FallbacksForAllFormats;                                   // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bUseInputPreprocessor;                                    // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FProtocolPathDef>                    ProtocolPathDefs;                                         // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlSettings");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlSystem
// 0x0040 (0x0498 - 0x0458)
class ACohtmlSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0458(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlSystem");
		return ptr;
	}

};


// Class CohtmlPlugin.CohtmlWidget
// 0x00F0 (0x01F0 - 0x0100)
class UCohtmlWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ScriptingReady;                                           // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableComplexCSSSupport;                                 // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x0152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECohtmlInputPropagationBehaviour>      InputPropagationBehaviour;                                // 0x0153(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGammaCorrectedMaterial;                                  // 0x0154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	float                                              TickPeriodInMinimizedGame;                                // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	class UCohtmlAudioWrapper*                         AudioWrapper;                                             // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x78];                                      // 0x0168(0x0078) MISSED OFFSET
	class FString                                      URL;                                                      // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlWidget");
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings);
	void SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour> Propagation);
	void Reload();
	void Load(const class FString& Path);
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool HasRequestedView();
	class UTextureRenderTarget2D* GetRenderTexture();
	TEnumAsByte<ECohtmlInputPropagationBehaviour> GetInputPropagationBehaviour();
	class UCohtmlJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Struct);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
};


// Class CohtmlPlugin.HummingbirdBaseComponent
// 0x0000 (0x0238 - 0x0238)
class UHummingbirdBaseComponent : public UCohtmlBaseComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdBaseComponent");
		return ptr;
	}

};


// Class CohtmlPlugin.HummingbirdComponent
// 0x0000 (0x0270 - 0x0270)
class UHummingbirdComponent : public UCohtmlComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdComponent");
		return ptr;
	}

};


// Class CohtmlPlugin.HummingbirdGameHUD
// 0x0000 (0x0620 - 0x0620)
class AHummingbirdGameHUD : public ACohtmlGameHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdGameHUD");
		return ptr;
	}

};


// Class CohtmlPlugin.HummingbirdHUD
// 0x0000 (0x0268 - 0x0268)
class UHummingbirdHUD : public UCohtmlHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdHUD");
		return ptr;
	}

};


// Class CohtmlPlugin.HummingbirdInputActor
// 0x0000 (0x04B0 - 0x04B0)
class AHummingbirdInputActor : public ACohtmlInputActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdInputActor");
		return ptr;
	}

};


// Class CohtmlPlugin.HummingbirdSystem
// 0x0000 (0x0498 - 0x0498)
class AHummingbirdSystem : public ACohtmlSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
