#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MJRawInput.RegisteredDeviceInfo
struct FRegisteredDeviceInfo
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VendorID;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProductID;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceName;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MJRawInput.MJRawInputDeviceAxisProperties
struct FMJRawInputDeviceAxisProperties
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_13B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInverted : 1;                                     // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGamepadStick : 1;                                 // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_13C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset;                                            // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MJRawInput.MJRawInputDeviceButtonProperties
struct FMJRawInputDeviceButtonProperties
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_E : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_13D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MJRawInput.MJRawInputDeviceConfiguration
struct FMJRawInputDeviceConfiguration
{
public:
	class FString                                VendorID;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProductID;                                         // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMJRawInputDeviceAxisProperties> AxisProperties;                                    // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMJRawInputDeviceButtonProperties> ButtonProperties;                                  // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


