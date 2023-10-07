#//include <unordered_map>

#include "game/SDK.hpp"
#include "source/orion.h"

using Offsets::GObjects;
using Offsets::ProcessEventIdx;
using orion::core::Game;
using orion::utilities::Memory;
using orion::utilities::String;
using SDK::ABattleCommandMenuActorBP_C;
using SDK::ABattlePlayerBP_C;
// using SDK::AKSSaveDataManagerBP_C;
using SDK::EABILITY_TYPE;
using SDK::EClassCastFlags;
using SDK::EDISEASE_CATEGORY;
using SDK::EPlayableCharacterID;
using SDK::UFunction;
// using SDK::UKSSaveGameBP_C;
using SDK::UObject;

// using SDK::Params::AKSSaveDataManager_SetGameSaveData_BP_Params;

// static std::
//     unordered_map<std::string, std::unordered_map<std::string, std::size_t>>
//         list;

// static std::vector<int> ability;

template <typename T> NODISCARD static constexpr auto cast(UObject* const object) noexcept -> T*
{
    if (object->IsA(T::StaticClass()))
    {
        return static_cast<T*>(object);
    }
    return nullptr;
}

static auto receive_tick(ABattlePlayerBP_C& battle_player) noexcept
{
    if (const auto character_id = battle_player.M_nCharacterID;
        character_id <= 0 || character_id > static_cast<decltype(character_id)>(EPlayableCharacterID::EDANCER))
    {
        return;
    }
    const auto& config = orion::orion.get_config().get_data();
    const auto player_index = battle_player.M_nCharacterID - 1;
    if (config.player[player_index].max_stats)
    {
        constexpr auto max_stats_value = 10000000;
        battle_player.M_cMasterParameter.ACC = max_stats_value;
        battle_player.M_cMasterParameter.AGI = max_stats_value;
        battle_player.M_cMasterParameter.ATK = max_stats_value;
        battle_player.M_cMasterParameter.BP = max_stats_value;
        battle_player.M_cMasterParameter.CON = max_stats_value;
        battle_player.M_cMasterParameter.DEF = max_stats_value;
        battle_player.M_cMasterParameter.EVA = max_stats_value;
        battle_player.M_cMasterParameter.HP = max_stats_value;
        battle_player.M_cMasterParameter.MATK = max_stats_value;
        battle_player.M_cMasterParameter.MDEF = max_stats_value;
        battle_player.M_cMasterParameter.MP = max_stats_value;
        battle_player.M_cMasterParameter.POT = max_stats_value;
        battle_player.M_cMasterParameter.SP = max_stats_value;
        battle_player.EquipmentParameter.ACC = max_stats_value;
        battle_player.EquipmentParameter.AGI = max_stats_value;
        battle_player.EquipmentParameter.ATK = max_stats_value;
        battle_player.EquipmentParameter.BP = max_stats_value;
        battle_player.EquipmentParameter.CON = max_stats_value;
        battle_player.EquipmentParameter.DEF = max_stats_value;
        battle_player.EquipmentParameter.EVA = max_stats_value;
        battle_player.EquipmentParameter.HP = max_stats_value;
        battle_player.EquipmentParameter.MATK = max_stats_value;
        battle_player.EquipmentParameter.MDEF = max_stats_value;
        battle_player.EquipmentParameter.MP = max_stats_value;
        battle_player.EquipmentParameter.POT = max_stats_value;
        battle_player.EquipmentParameter.SP = max_stats_value;
    }
    if (config.player[player_index].resist_disease)
    {
        bool exec_remove;
        battle_player.RemoveDiseaseByCategory(EDISEASE_CATEGORY::EDECONDITION, true, &exec_remove);
        battle_player.RemoveDiseaseByCategory(EDISEASE_CATEGORY::EDEBUFF, true, &exec_remove);
        battle_player.RemoveDiseaseByCategory(EDISEASE_CATEGORY::ESPECIAL, true, &exec_remove);
        battle_player.RemoveDiseaseByCategory(EDISEASE_CATEGORY::ESPECIAL_EDGE, true, &exec_remove);
        battle_player.RemoveDiseaseByCategory(EDISEASE_CATEGORY::ESPECIAL_EX, true, &exec_remove);
    }
    if (config.player[player_index].god_mode)
    {
        battle_player.SetFullBoostPoint();
        battle_player.SetDecreaseHPMax(0);
        int32 value;
        int32 max_value;
        battle_player.GetHP(&value, &max_value);
        battle_player.SetHP(max_value, true, &value);
        if (battle_player.IsCharacterDead())
        {
            battle_player.ExecRevive(&battle_player, max_value, true, false, false);
        }
        battle_player.GetMP(&value, &max_value);
        battle_player.SetMP(max_value, true, &value);
        const auto potential = battle_player.M_cPotentialityActionComponent;
        if (potential != nullptr)
        {
            potential->GetPotentialityActionPoint(&value, &max_value);
            potential->SetPotentialityActionPoint(max_value);
        }
    }
}

static auto receive_tick(ABattleCommandMenuActorBP_C& command_menu_actor) noexcept
{
    const auto player_handle = command_menu_actor.PlayerHandle;
    if (player_handle == nullptr)
    {
        return;
    }
    if (player_handle->M_nCharacterID <= 0)
    {
        return;
    }
    const auto& config = orion::orion.get_config().get_data();
    const auto player_index = player_handle->M_nCharacterID - 1;
    auto& select_command = command_menu_actor.SelectCommand;
    if (config.player[player_index].god_mode)
    {
        select_command.RandomCountMin = select_command.RandomCountMax;
    }
    if (config.player[player_index].hit_ratio > 0.f)
    {
        select_command.HitRatio = static_cast<int>(config.player[player_index].hit_ratio);
    }
    if (select_command.AbilityType == EABILITY_TYPE::EMAGIC && config.player[player_index].ability_ratio > 0.f)
    {
        select_command.AbilityRatio = static_cast<int>(config.player[player_index].ability_ratio);
    }
    else
    {
        if (config.player[player_index].critical_ratio > 0.f)
        {
            select_command.CriticalRatio = static_cast<int>(config.player[player_index].critical_ratio);
        }
        if (config.player[player_index].critical_power > 0.f)
        {
            select_command.CriticalPower = static_cast<int>(config.player[player_index].critical_power);
        }
    }
    if (config.player[player_index].repeat_on_boost && command_menu_actor.BoostLevel > 0)
    {
        player_handle->M_bExecBreakAct = true;
    }
}

// static auto set_game_savedata_bp(
//     AKSSaveDataManagerBP_C& savedata_manager,
//     AKSSaveDataManager_SetGameSaveData_BP_Params& parameters
//) noexcept {
//     const auto savedata = cast<UKSSaveGameBP_C>(parameters.SaveData);
//     if (savedata == nullptr) {
//         return;
//     }
//     auto& player_member = savedata->PlayerMember;
//     for (uint32 i = 0; i < player_member.Num(); ++i) {
//         auto& player = player_member[i];
//         if (player.CharacterID != 1) {
//             continue;
//         }
//         for (uint32 j = 0; j < player.AcquisitionAbilityList.Num(); ++j) {
//             auto& ability = player.AcquisitionAbilityList[j];
//             for (uint32 k = 0; k < ability.AcquisitionFlag.Num(); ++k) {
//                 auto& flag = ability.AcquisitionFlag[k];
//                 flag = true;
//             }
//         }
//         for (uint32 j = 0;
//              j < player.AcquisitionAdvancedAbility.AcquisitionFlag.Num();
//              ++j) {
//             auto& flag = player.AcquisitionAdvancedAbility.AcquisitionFlag[j];
//             flag = true;
//         }
//         break;
//     }
//     auto& ability_list = savedata->LearnAbilityList;
//     ::ability.resize(ability_list.Num());
//     for (uint32 i = 0; i < ability_list.Num(); ++i) {
//         if (ability[i] > 0) {
//             savedata->SetLearnAbility(i, ability[i]);
//         }
//         else {
//             ability[i] = ability_list[i];
//         }
//     }
// }

static auto __fastcall process_event(UObject* const object, UFunction* const function, void* const parameters) noexcept
    -> void
{
    // if (object->Class != nullptr) {
    //     const auto class_name = object->Class->GetName();
    //     const auto function_name = function->GetName();
    //     auto& function_list = list[class_name];
    //     auto& count = function_list[function_name];
    //     count = std::clamp(
    //         count + 1,
    //         std::numeric_limits<std::size_t>::min(),
    //         std::numeric_limits<std::size_t>::max()
    //     );
    // }
    if (static const auto function_name =
            UObject::FindObjectFast(String<"ReceiveTick">().c_str(), EClassCastFlags::Function)->Name;
        function_name == function->Name)
    {
        if (const auto self = cast<ABattlePlayerBP_C>(object); self != nullptr)
        {
            receive_tick(*self);
        }
        else if (const auto self = cast<ABattleCommandMenuActorBP_C>(object); self != nullptr)
        {
            receive_tick(*self);
        }
    }
    // else if (static const auto function_name =
    //                UObject::FindObjectFast(
    //                    String<"SetGameSaveData_BP">().c_str(),
    //                    EClassCastFlags::Function
    //                )
    //                    ->Name;
    //            function_name == function->Name) {
    //     if (const auto self = cast<AKSSaveDataManagerBP_C>(object);
    //         self != nullptr) {
    //         set_game_savedata_bp(
    //             *self,
    //             *static_cast<AKSSaveDataManager_SetGameSaveData_BP_Params*>(
    //                 parameters
    //             )
    //         );
    //     }
    // }
    return orion::orion.get_game().get_object().fastcall<ProcessEventIdx, void>(object, function, parameters);
}

Game::Game() noexcept
{
}

Game::~Game() noexcept
{
}

auto Game::hook() noexcept -> void
{
    const auto handle = orion.get_kernel32().get_module_handle_a(nullptr);
    UObject::GObjects =
        reinterpret_cast<decltype(UObject::GObjects)>(reinterpret_cast<std::uintptr_t>(handle) + GObjects);
    object.emplace(UObject::GetDefaultObj()->Vft, Memory::Pattern<"FF 23">().find(Memory::get_module_bytes(handle)));
    object->hook_at(ProcessEventIdx, &process_event);
}

auto Game::unhook() noexcept -> void
{
    object->restore();
}

auto Game::init() noexcept -> void
{
}

auto Game::draw() noexcept -> void
{
    // ImGui::Begin(String<"Debug">().c_str());
    // if (ImGui::BeginTabBar(String<"Tab">().c_str())) {
    //     if (ImGui::BeginTabItem(String<"Ability">().c_str())) {
    //         for (std::size_t i = 0; i < ability.size(); ++i) {
    //             ImGui::PushID(i);
    //             ImGui::InputInt(String<"Learn Ability">().c_str(), &ability[i]);
    //             ImGui::PopID();
    //         }
    //         ImGui::EndTabItem();
    //     }
    //     if (ImGui::BeginTabItem(String<"Class">().c_str())) {
    //         static std::array<char, 32> search {};
    //         ImGui::InputText(
    //             String<"Search">().c_str(),
    //             search.data(),
    //             search.size()
    //         );
    //         ImGui::BeginChild(String<"Classes">().c_str(), ImVec2(300, 0));
    //         static std::string selected;
    //         for (const auto& [c, f] : list) {
    //             if (search[0] != '\0' && !c.contains(search.data())) {
    //                 continue;
    //             }
    //             const auto is_selected = (c == selected);
    //             const auto select = ImGui::Selectable(
    //                 ImStrv(
    //                     std::to_address(c.cbegin()),
    //                     std::to_address(c.cend())
    //                 ),
    //                 is_selected
    //             );
    //             if (select) {
    //                 selected = c;
    //             }
    //         }
    //         ImGui::EndChild();
    //         ImGui::SameLine();
    //         ImGui::BeginChild(String<"Class Info">().c_str());
    //         if (!selected.empty()) {
    //             for (const auto& [f, i] : list[selected]) {
    //                 ImGui::TextUnformatted(ImStrv(
    //                     std::to_address(f.cbegin()),
    //                     std::to_address(f.cend())
    //                 ));
    //                 ImGui::SameLine();
    //                 ImGui::Text(String<"%d">().c_str(), i);
    //             }
    //         }
    //         ImGui::EndChild();
    //         ImGui::EndTabItem();
    //     }
    //     ImGui::EndTabBar();
    // }
    // ImGui::End();
}

auto Game::validate() noexcept -> void
{
}

auto Game::invalidate() noexcept -> void
{
}
