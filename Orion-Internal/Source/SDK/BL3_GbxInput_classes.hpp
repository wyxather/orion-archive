#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxInput_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxInput.GbxInputAction
// 0x0000 (0x0030 - 0x0030)
class UGbxInputAction : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputAction");
		return ptr;
	}

};


// Class GbxInput.GbxInputAction_ConsoleCommand
// 0x0000 (0x0030 - 0x0030)
class UGbxInputAction_ConsoleCommand : public UGbxInputAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputAction_ConsoleCommand");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionCollection
// 0x0000 (0x0030 - 0x0030)
class UGbxInputActionCollection : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionCollection");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionData
// 0x0008 (0x0038 - 0x0030)
class UGbxInputActionData : public UGbxDataAsset
{
public:
	struct FName                                       ActionName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionData");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionData_Continuous_Vector
// 0x0000 (0x0038 - 0x0038)
class UGbxInputActionData_Continuous_Vector : public UGbxInputActionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionData_Continuous_Vector");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionData_Discrete
// 0x0000 (0x0038 - 0x0038)
class UGbxInputActionData_Discrete : public UGbxInputActionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionData_Discrete");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionEventInterpreter
// 0x0028 (0x0050 - 0x0028)
class UGbxInputActionEventInterpreter : public UObject
{
public:
	TSoftObjectPtr<class UClass>                       InterpreterClass;                                         // 0x0028(0x0028) (Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionEventInterpreter");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionReceiverDelegateBinding
// 0x0000 (0x0028 - 0x0028)
class UGbxInputActionReceiverDelegateBinding : public UDynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverDelegateBinding");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionReceiverDelegateBinding_Continuous_Vector
// 0x0010 (0x0038 - 0x0028)
class UGbxInputActionReceiverDelegateBinding_Continuous_Vector : public UGbxInputActionReceiverDelegateBinding
{
public:
	TArray<struct FBlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector> InputActionReceiverDelegateBindings;                      // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverDelegateBinding_Continuous_Vector");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionReceiverDelegateBinding_Discrete
// 0x0010 (0x0038 - 0x0028)
class UGbxInputActionReceiverDelegateBinding_Discrete : public UGbxInputActionReceiverDelegateBinding
{
public:
	TArray<struct FBlueprintGbxInputActionReceiverDelegateBinding_Discrete> InputActionReceiverDelegateBindings;                      // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverDelegateBinding_Discrete");
		return ptr;
	}

};


// Class GbxInput.GbxInputActionReceiverInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxInputActionReceiverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverInterface");
		return ptr;
	}

};


// Class GbxInput.GbxInputComponent
// 0x00F0 (0x02F0 - 0x0200)
class UGbxInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	TMap<struct FName, class UGbxInputKeyRebindData_Button*> CommonInputMap;                                           // 0x0208(0x0050) (Edit, ZeroConstructor)
	class UGbxInputRebindCategory*                     RebindCategory;                                           // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxInputRebindContext*                      DefaultRebindContext;                                     // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxInputActionEventLookupList              InputActionEventLookupList;                               // 0x0268(0x0010) (DuplicateTransient)
	class UGbxInputRebindContext*                      RebindContext;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0280(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputComponent");
		return ptr;
	}


	void StartInputConsumeKeyImpl();
	void StartInputAction_Discrete_Impl(class UGbxInputActionData_Discrete* DiscreteAction, bool bConsumeEvent);
	void InputAction_Continuous_Vector_Impl(class UGbxInputActionData_Continuous_Vector* AxisAction, const struct FVector& Value);
};


// Class GbxInput.GbxInputDevice
// 0x0008 (0x0038 - 0x0030)
class UGbxInputDevice : public UGbxDataAsset
{
public:
	struct FName                                       DeviceName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputDevice");
		return ptr;
	}

};


// Class GbxInput.GbxInputEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UGbxInputEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputEventHelpers");
		return ptr;
	}


	void SigFunc_Button_PressPulse(float NextPulseDelay);
	void SigFunc_Axis(const struct FVector& Val);
};


// Class GbxInput.GbxInputKeyRebindData
// 0x0010 (0x0040 - 0x0030)
class UGbxInputKeyRebindData : public UDataAsset
{
public:
	struct FName                                       RebindName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxInputRebindPlatformSupportType                 PlatformSupportType;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputKeyRebindData");
		return ptr;
	}

};


// Class GbxInput.GbxInputKeyRebindData_Button
// 0x0000 (0x0040 - 0x0040)
class UGbxInputKeyRebindData_Button : public UGbxInputKeyRebindData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputKeyRebindData_Button");
		return ptr;
	}

};


// Class GbxInput.GbxInputKeyRebindData_Axis
// 0x0000 (0x0040 - 0x0040)
class UGbxInputKeyRebindData_Axis : public UGbxInputKeyRebindData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputKeyRebindData_Axis");
		return ptr;
	}

};


// Class GbxInput.GbxInputRebindCategory
// 0x0040 (0x0070 - 0x0030)
class UGbxInputRebindCategory : public UDataAsset
{
public:
	struct FText                                       CategoryName;                                             // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       CategoryDescription;                                      // 0x0048(0x0028) (Edit, DisableEditOnInstance)
	class UGbxInputRebindCategory*                     ParentCategory;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxInputRebindContext*                      DefaultContext;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputRebindCategory");
		return ptr;
	}

};


// Class GbxInput.GbxInputRebindContext
// 0x0050 (0x0080 - 0x0030)
class UGbxInputRebindContext : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	class UGbxInputRebindContext*                      ParentContext;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxInputRebind_Button>              ButtonBindings;                                           // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGbxInputRebind_Axis>                AxisBindings;                                             // 0x0060(0x0010) (Edit, ZeroConstructor)
	class UGbxInputRebindContext*                      DefaultContext;                                           // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxInputRebindContext");
		return ptr;
	}

};


// Class GbxInput.GbxPlayerInput
// 0x0060 (0x0428 - 0x03C8)
class UGbxPlayerInput : public UPlayerInput
{
public:
	TArray<class UGbxInputRebindCategory*>             Categories;                                               // 0x03C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UGbxInputRebindCategory*, class UGbxInputRebindContext*> RebindCategoryToContext;                                  // 0x03D8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInput.GbxPlayerInput");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
