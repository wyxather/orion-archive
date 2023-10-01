#pragma once

enum class FrameStage
{
	UNDEFINED = -1,                     // Haven't run any frames yet
	START,
	NET_UPDATE_START,                   // A network packet is being recieved
	NET_UPDATE_POSTDATAUPDATE_START,    // Data has been received and we're going to start calling PostDataUpdate
	NET_UPDATE_POSTDATAUPDATE_END,      // Data has been received and we've called PostDataUpdate on all data recipients
	NET_UPDATE_END,                     // We've received all packets, we can now do interpolation, prediction, etc..
	RENDER_START,                       // We're about to start rendering the scene
	RENDER_END,                         // We've finished rendering the scene.
	NET_FULL_FRAME_UPDATE_ON_REMOVE
};