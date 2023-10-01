#pragma once

#include "Class.h"

class UserCmd;
class ViewSetup;

class ClientMode // ClientModeCSNormal : ClientModeShared, IClientMode, CGameEventListener, IGameEventListener2, IMatchEventsSink
{
public:
	INCONSTRUCTIBLE(ClientMode);

	enum __vftable
	{
		// class IClientMode
		_IClientMode,
		InitViewport,
		Init,
		VGui_Shutdown,
		Shutdown,
		Enable,
		EnableWithRootPanel,
		Disable,
		Layout,
		GetViewport,
		GetPanelFromViewport,
		GetViewportAnimationController,
		ProcessInput,
		ShouldDrawDetailObjects,
		ShouldDrawEntity,
		ShouldDrawLocalPlayer,
		ShouldDrawParticles,
		ShouldDrawFog,
		OverrideView,
		OverrideAudioState,
		KeyInput,
		StartMessageMode,
		GetMessagePanel,
		OverrideMouseInput,
		CreateMove,
		LevelInit,
		LevelShutdown,
		ShouldDrawViewModel,
		ShouldDrawCrosshair,
		AdjustEngineViewport,
		PreRender,
		PostRender,
		PostRenderVGui,
		ActivateInGameVGuiContext,
		DeactivateInGameVGuiContext,
		GetViewModelFOV,
		CanRecordDemo,
		GetServerName,
		SetServerName,
		GetMapName,
		SetMapName,
		OnColorCorrectionWeightsReset,
		GetColorCorrectionScale,
		HudElementKeyInput,
		DoPostScreenSpaceEffects,
		UpdateCameraManUIState,
		ScoreboardOff,
		GraphPageChanged,
		Update,
		SetBlurFade,
		GetBlurFade,
		__vftable = 59
	};

	VIRTUAL_METHOD(__vftable::OverrideView, overrideView, __stdcall, void, (ViewSetup* viewSetup), (this, viewSetup));
	VIRTUAL_METHOD(__vftable::CreateMove, createMove, __stdcall, bool, (float inputSampleTime, UserCmd* cmd), (this, inputSampleTime, cmd));
	VIRTUAL_METHOD(__vftable::GetViewModelFOV, getViewModelFOV, __stdcall, float, (), (this));
	VIRTUAL_METHOD(__vftable::DoPostScreenSpaceEffects, doPostScreenSpaceEffects, __stdcall, void, (ViewSetup* viewSetup), (this, viewSetup));
};