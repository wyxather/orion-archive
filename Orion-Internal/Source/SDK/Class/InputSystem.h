#pragma once

#include "Class.h"

#pragma push_macro("LoadCursorFromFile")
#undef LoadCursorFromFile

class InputSystem  // CInputSystem: CTier2AppSystem<IInputSystem,0>, CTier1AppSystem<IInputSystem,0>, CTier0AppSystem<IInputSystem>, CBaseAppSystem<IInputSystem>, IInputSystem, IAppSystem
{
public:
	INCONSTRUCTIBLE(InputSystem);

	enum __vftable
	{
		// class IAppSystem
		Connect,
		Disconnect,
		QueryInterface,
		Init,
		Shutdown,
		GetDependencies,
		GetTier,
		Reconnect,
		IsSingleton,

		// class IInputSystem 
		AttachToWindow,
		DetachFromWindow,
		EnableInput,
		EnableMessagePump,
		PollInputState,
		GetPollTick,
		IsButtonDown,
		GetButtonPressedTick,
		GetButtonReleasedTick,
		GetAnalogValue,
		GetAnalogDelta,
		GetEventCount,
		GetEventData,
		MotionControllerActive,
		GetMotionControllerOrientation,
		GetMotionControllerPosX,
		GetMotionControllerPosY,
		GetMotionControllerDeviceStatus,
		GetMotionControllerDeviceStatusFlags,
		SetMotionControllerDeviceStatus,
		SetMotionControllerCalibrationInvalid,
		StepMotionControllerCalibration,
		ResetMotionControllerScreenCalibration,
		PostUserEvent,
		GetJoystickCount,
		EnableJoystickInput,
		EnableJoystickDiagonalPOV,
		SampleDevices,
		SetRumble,
		StopRumble,
		ResetInputState,
		ButtonCodeToString,
		AnalogCodeToString,
		StringToButtonCode,
		StringToAnalogCode,
		SleepUntilInput,
		VirtualKeyToButtonCode,
		ButtonCodeToVirtualKey,
		ScanCodeToButtonCode,
		GetPollCount,
		SetCursorPosition,
		AddUIEventListener,
		RemoveUIEventListener,
		GetAttachedWindow,
		GetStandardCursor,
		LoadCursorFromFile,
		SetCursorIcon,
		GetCursorPosition,
		EnableMouseCapture,
		DisableMouseCapture,
		SetMouseCursorVisible,
		ResetCursorIcon,
		GetRawMouseAccumulators,
		GetConnectedInputDevices,
		IsInputDeviceConnected,
		SetInputDeviceConnected,
		IsOnlySingleDeviceConnected,
		GetCurrentInputDevice,
		IsDeviceReadingInput,
		SetCurrentInputDevice,
		ResentCurrentInputDevice,
		SampleInputToFindCurrentDevice,
		IsSamplingForCurrentDevice,
		IsSteamControllerActive,
		SetSteamControllerMode,
		__vftable = 91
	};

	VIRTUAL_METHOD(__vftable::EnableInput, enableInput, __stdcall, void, (bool enable), (this, enable));
	VIRTUAL_METHOD(__vftable::ResetInputState, resetInputState, __stdcall, void, (), (this));
};

#pragma pop_macro("LoadCursorFromFile")