#pragma once

class UserCmd;

namespace EnginePrediction
{
	auto run(UserCmd& cmd) noexcept -> void;
}