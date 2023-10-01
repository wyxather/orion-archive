#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CotV_Male_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CotV_Male.BPAnim_CotV_Male_C
// 0x144D0 (0x14FC0 - 0x0AF0)
class UBPAnim_CotV_Male_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E945162640E629D797E98EA07A970A4B;      // 0x0AF8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C57A51F94E581EA13DB42CB644DE14C3;// 0x0B40(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_54FA909E435DC53AC9E2F2ABADBA6E86;// 0x0C60(0x00E0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_1519C61E40907FC8A56F8389961FBB87;// 0x0D40(0x00D0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3DCB398451353EF337C79AE5EB13A29;// 0x0E10(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D978740453F0540EBA806AF4E648D1A;// 0x0E60(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0ACBD84E49E4DF9A144184AC492121F0;// 0x0EB0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F96ECA8A4C67FF7D07CD87A46A8386E6;// 0x0F00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EEF2C2943A13B97045134A7786CF535;// 0x0F50(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D2022764FBCFD25D75827A081E44B3B;// 0x0FA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD089B39417297B4D23DBEAA99042181;// 0x0FF0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A4D661946D2C42E2B14BCAC64A351AB;// 0x1040(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_016E3F6949C7F195D50A389974BF0F5D;// 0x1130(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F88D17449AA29A6E6BE2EA56208753F;// 0x1178(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD7E88774FEBD979149A36A109975F1A;// 0x11C8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_507F5787425453645C40FAA8AD586AFC;// 0x12B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24A8A66D4BDE89B6AD0DF9A4DDE3E66F;// 0x1300(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DC558EA74D38D89DB040209FE72B1141;// 0x13F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4DC4CD994DFBE99FD25C1284148541E2;// 0x1438(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D78BB7B48B92643EB75E4932D5A92B4;// 0x15C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0FF22F404612971629B0CCAF716EB3E1;// 0x1608(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C73C2484A88C1FAE0686DAFED22C615;// 0x1658(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BB28D644435BB2834A319B74DF3FF1A;// 0x16A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9AFC55B44D3A4DF6FD2F1EB25FCF0BCA;// 0x16F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C1D00E047D1DAEF2D62C1A346FB5DC7;// 0x1748(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EBDA5614622CC7F76F55E873FCBED10;// 0x1798(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_5C60EA514689DF2160EEAF9AC3F89865;// 0x17E8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D660BE414323BB4763298D972F2765E1;// 0x1870(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C8C9FFA2476FE6A443B9ED916A3D7B11;// 0x18B8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_701D23D1427B6B5F3839DB813E86BD9E;// 0x1A18(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_3B62F3FD4879D708F0CCF6982588A38A;// 0x1A60(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13034C9B432C68F69AFD108BA4C86753;// 0x1B48(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8B8B2124050CB95A22C2BADB051FB8A;// 0x1C38(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_87E2FBCB4279AB9799D5EFAE39FBEFA1;// 0x1D28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5AD8DFBA46E5BB4D9B259EAF3C61F5A1;// 0x1D70(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3F1F46C643E6E9326354A491148E1E94;// 0x1E60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1B5D66C245D184C2CF2BF4864B6D9833;// 0x1EA8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1929039841AA7411A0262AAF6D737FF4;// 0x2030(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_491194814B85D276FBC59D98D5010612;// 0x2078(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D7711F244F3349BE824029DA2887DFF;// 0x20C8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C1D90E84136ED24DABE5F8047B63746;// 0x2118(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40DC0F114DB562EF16BB2B8588996825;// 0x2168(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D42EA63042FE820B3B37BB93C084945F;// 0x21B8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E842B7F841967C347AC34AB83A80617E;// 0x2208(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9AA88B1F488AFB9FE1B09EB97C8D5EBC;// 0x2258(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B586E82C4A2CC1F4D0F66F9F3085AEC0;// 0x22A8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4A84FC8441A41C32EB02B0A62500F9F0;// 0x2408(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_B787B04E44A906ED46610B8176CDC5DA;// 0x2450(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FDE20AD6457CBE857007DCBC572AD377;// 0x24D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CF24AA74EA3C3601FFFBDADABED4FE7;// 0x2520(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AD9D266043EC89B2381BFAB6BBB7E2D5;// 0x2610(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B715DF940134F93F8DA789A2AAA5534;// 0x2658(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E10DA95C4F01099ED284A6AF43A38073;// 0x2748(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_05F18D074A5E191B6F3E0BA9A199B592;// 0x2790(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8879822D4D42F2B396BCED8E7FE6FB0F;// 0x28F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_252BDE014230D0DF7C47D593525C77B5;// 0x2938(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3C1BC2FF4DBDCC7A64B1C1ACCF1D1850;// 0x2AC0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AA632A8493D1FC26EB47B86EEAB1A1D;// 0x2B08(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_874BEE9A467216B52FD23787540118D3;// 0x2B58(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA6C49F84AD7A38C6D48E1A5385966DA;// 0x2BA8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0CE854AB48D103DD4C13408123EE2170;// 0x2BF8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ACD1EA5144EF7B58D1EF63ABDBFDC9B7;// 0x2C48(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77A73E204BD3C0A072E5C4A3D82041CC;// 0x2C98(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47A6B12F445F2912C0AE12B523BCD665;// 0x2CE8(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F75748884090A409B8BC888F2592BC25;// 0x2D38(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F15B6DC349C1E82D375669A680DB6A9E;// 0x2E98(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_66E5E8C24AE5E22ED964F2A32F9B41EC;// 0x2EE0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_971C7ADC41031FD1FF8E8A8BFD4BA373;// 0x2F68(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_50D42F594F670FA9E27F6BBD3AAC4004;// 0x2FB0(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E9B151124E8E24ECE6D15AACD943787D;// 0x3098(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DA4770E4F7B648C44A7CCBD72B26951;// 0x3188(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E15C3451411BD5A091C14699F05A9EFE;// 0x3278(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_943543994A3C7C2F6CF6279E7840A6BD;// 0x32C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D377E17F4246593A602FA2A23B2672E1;// 0x33B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A51184A14B4F56F14F6209B28ED1CB17;// 0x33F8(0x00F0)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_622C499C4D9A6C5A3303708FF2E7F902;// 0x34E8(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9FC35D4A4F239B429E558E87812D68B4;// 0x35D0(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F7FC2564C78B25D5344A29AD600C4E2;// 0x36C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B247E674CB9FC0C51AF4A83A5A12739;// 0x37B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1F023294400FF9DA1F0EEAA0CA65070D;// 0x37F8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E9AD50044CFCFC3D8C821A70A280603;// 0x3980(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1324470C42F678A4650BE2AE09414B95;// 0x39C8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4DB09A5B464110E6A0353DA8EC3A484C;      // 0x3B50(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1D2B9BFA460BC912BBA554A623F0F25B;      // 0x3C00(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9093DE8343351E3F372AA7808F7B93E8;// 0x3CB0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6FAC7C0E4EF3ED9243676CB45EF95749;// 0x3D90(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1DBF7D804C9F92A9D7B41BB2C17692FD;// 0x3E70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9052A47E4561619EF8F85DBE3B14FB88;// 0x3EC0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B499AC9140ED4D11C097CDBE1E38D545;// 0x3F10(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_30E7A468493A5F546C171D9DC4E0F498;// 0x4030(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C9D7C55A4AB8ADE7803BE0B0ADF77313;// 0x4080(0x0238)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D90C54F3463DB78D9BA4E3B84D0AED01;// 0x42B8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D9998D0B446CFEC1BED83C9C611AB9CD;// 0x4308(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_687343E648FB81BAA28D93817E835018;// 0x4358(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1AB1B04C4C03102DC3E6F798DC354271;// 0x43A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9920941A4B9F495F18D004A8AB9A2C06;// 0x43F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D027F6C4EE2E7292DDCB78DE8320C35;// 0x4448(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBABA4CD4762103F9447269400833B0F;// 0x4498(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C100AB4245310D1C1084E0A8B6E7A53E;// 0x44E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_453EDB14435C5C162EC6C2B6E1652442;// 0x4538(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3267470947F58F24AB790AB07DB30ED2;// 0x4588(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22D0B1CD49EF3C65348E6892B2FE11AC;// 0x45D8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_972578EB4E943EC4EEDD328C8C2D6726;// 0x46C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B09EB7184F09A63FEB739799C37D9FA0;// 0x4710(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E6D5E33F4F251CB0B25757B3D6EB16A8;// 0x4800(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_168CC6194F32B97102240FBAAF365E35;// 0x4848(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_14AC331F4948C9E183338FB03B1A4C4F;// 0x49D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2583BBA41C519F0F9139ABEA5AA2A03;// 0x4A18(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3AB90D0A4C2304A8E3C5CFAE24E8AC49;// 0x4A68(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE9EEF5347845363B7A8B9AE48F469E3;// 0x4AB8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31ABC92D48F58B8189E4C585DD50FB57;// 0x4B08(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B6BB5314AEA8341F9B9EE97E5D4F577;// 0x4B58(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A58A6C9A4653DE987EEDEBA5522E647C;// 0x4BA8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25C43EF14ADD3F0C5CEDCC88F321629A;// 0x4BF8(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_973BDA5547804779DA5730ACFE31B6AC;// 0x4C48(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_63BADCF5474A196F0D30F6B50DFD8BAE;// 0x4DA8(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_24B7D2CB40F84341E028689A17844658;// 0x4DF0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6364FB23448FDB56EFB058903A75DA7A;// 0x4E78(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C3DF5E294DEC901FEA635898C834CD71;// 0x4EC0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D7F48E094D3E1CFC2209F4A5E81DBC62;// 0x5020(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73B38E164E290751ECC275939865BCA2;// 0x5068(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B9405384147EF49FBE12C858E538046;// 0x5158(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_252FF2FC43D6C52B8B4143826221E1B4;// 0x51A0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DFD371B74DD5189C164865A45EEE1387;// 0x5300(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C44AFAC24E91082239A1A79CD4E01D00;// 0x5348(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_49FC02234ABC612CEBCFD49ACA019ABD;// 0x54D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB5CBA9B4FF0426A8C20EC89972C99AB;// 0x5518(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4814B01B4FB93A34B5B60A814986D498;// 0x5568(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7AB3E38430307A856E0AABFA24EC0FB;// 0x55B8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E45817D44AFB734A5FC23A829371A3D1;// 0x5608(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2EAA16FA454F198375783583B97FE131;// 0x5658(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F13C9424BEDEA5F4F597596F4298F7F;// 0x56A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_528F4FD940C60CFFC3539180EAFC2D6A;// 0x56F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D116ACF94A97512F0A323FAA3B5A50EB;// 0x5748(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95299B2844315AC28DDEB390E11147EE;// 0x5798(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C3D02D243CFF4723B6EFC9E77F22095;// 0x57E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF8FF34444CB3DC97F9C7E8FA0F580B5;// 0x5838(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40ACB1E84DFC84282358AAA5AA9F73BD;// 0x5888(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65B2065342BF471EB8DC61AA58510073;// 0x58D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B3B095B4D7D809390A89BBCD2CF9577;// 0x5928(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E56AECE41B034CE07A530B8D14CCC0A;// 0x5978(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C3B3A1F4CBFD3F837F2149202CA7DCD;// 0x59C8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AB5D2404FC0380C838C61900E36AFA7;// 0x5A18(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_587EF42F46CEFA428962D98A9E2BA741;// 0x5A68(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E29D96C7486750E4834E299F526C5C18;// 0x5AB8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FA08A5E4C0F265FE9074CB5A9AFCEC0;// 0x5B08(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8BB42D1B4438010FBBEE319C9CFFC3AC;// 0x5B58(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4994E4684801DD19D028CD92BE2575D7;// 0x5BA8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E70CF33D4828119B325627AD6FD23EAA;// 0x5BF8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61DBFE8740C5A4064433F1B0308D03E5;// 0x5C48(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E8C4A904BD0DE0C061CE5B060BC2198;// 0x5C98(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B968A2794A16AB49566B8C8B73F37C48;// 0x5CE8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91B637F94E03E2A57610A49A60507A9D;// 0x5D38(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75830C124B8C3A775FDC79B53E3B4F54;// 0x5D88(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F1423F34D04297B1D59F88892DB9B5F;// 0x5DD8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1D29ED74A2F0B2C1953E6B4A2390F74;// 0x5E28(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A3CD9F249C30707C06CA8B874AEB468;// 0x5E78(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2CABA3A4F1C95A08BBA4D831993CCB0;// 0x5EC8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F779D7924370F7B2AF9630829D54A415;// 0x5F18(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F6633504995BEFD473A3CBF18CE0649;// 0x5F68(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C67221184712D61D8A8DA8A3D8240242;// 0x5FB8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69BF5BF44A240A34F2C1388B135A7487;// 0x6008(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2EA3A0B149F660262CD40AAFFB3E190D;// 0x6058(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E18EEB2B43304EBFECEE3A818F0E307C;// 0x60A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_461323F849A9D98CBC08C6AB8B582213;// 0x60F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C97D07644CC0C62038CA98C6F22BDEF;// 0x6148(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C444F5524BF733EE8F2A5384C14EC629;// 0x6198(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7D6DF4734B62BD616F9E00BDDECDBEE9;// 0x61E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F75825A94ADD7F81533EF8AD92F16D2F;// 0x6238(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DEC06E14C01CC54EF6AA4A3758690AC;// 0x6288(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC40D9604B979E8CF300E298D6C73A8F;// 0x62D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3BA6B564A1069DECE8951B8EC0F0027;// 0x6328(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8FD33CAC40FA97971D32E2944B9D8983;// 0x6378(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8EF13F2B40FFE2E6227430A4A7FE8906;// 0x63C8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B51650A7419D078AD07A51BFF356DA83;// 0x6418(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA372B3241067FC7D896BDA0801D9F9F;// 0x6468(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_682716EF4E3143410D92D6AB9E36E2F3;// 0x64B8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0D8E381441C2741002CA8A9BFE938F3;// 0x6508(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A475CB564399C3606F2A96992DA4C586;// 0x6558(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C1D29564BC0DC89D4844CA9C7EF8814;// 0x65A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82692C0F4BDC889E1DE73EB5FD7E4AA2;// 0x65F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79A6EB5F425B1BA368B44080134D7900;// 0x6648(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0625CBB04592453B4DE26F9E6969B678;// 0x6698(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_608DB4054070D7BA406C5486549A376E;// 0x66E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96D545F243D72E26B2B00E928C55FC52;// 0x6738(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD60629C4C92109580A89DA9C1AF43A1;// 0x6788(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3C8F3314F90C5F15F4BEE8773999017;// 0x67D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B63D33614081D10A5FB8A9A64463DFE3;// 0x6828(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6A5A72D4498C1D1A8B4B21BD1326F9A6;// 0x6878(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70C185F34695A3645FF35EA982C28216;// 0x68C8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90D642CB4A3999076DF8B685B089B612;// 0x6918(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE3202E649C69C2930CA96877C5A541D;// 0x6968(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03B594D049EBEC3F2BA171B339475369;// 0x69B8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B15CC53147333877494D84A90887FA8A;// 0x6A08(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96F1E2C843E5356B842CFE816FD33FD4;// 0x6AF8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18F04C6D4C3156788A19F393B3BF19F7;// 0x6B40(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_656F6D8843EEA7EA7215A7BA7969B77A;// 0x6B90(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9AF4A42A4F8864ACE90CEAB5E7152772;// 0x6C80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A070A01D407D1FBCDB92B5BBF72B784B;// 0x6CC8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A4BD86AA4C869C1B236A86AFE08B31BD;// 0x6DB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6FB1BC2440B3802B907B5AD8C88DCC2;// 0x6E00(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E6C0B6AA433FE2E36BD8F1B9B4967E7A;// 0x6EF0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2D972B6469265DE674918A7CA7B5651;// 0x6F38(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60E6882B484DA993AAB67491BB7CC644;// 0x6F88(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CADA14254B9EA3ACD41E5AAED936C7CC;// 0x7078(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CA487E1446CD410A9DAC59ED399FEEE;// 0x70C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8641A6B94F7545BC05040BA1796254CF;// 0x71B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3BAF9244B7F0E925B4CEAB6042CCF0E;// 0x71F8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD5D864549C14EE6371A82AED28531C2;// 0x72E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBD967964D792BCE04AAF9B80BD5F396;// 0x7330(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F1E1D4544CEBE6C476DA0A980C5DED8;// 0x7380(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_64DA3671461A6BA9C9EF93832D6EE811;// 0x7470(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E4ACEBD44EA3AD3CC15D66921609BCF2;// 0x74B8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_46B9878B4061BACB4980A2862CE6D741;// 0x75A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9873C0E24625937CE26C90B12D142C72;// 0x75F0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BADFD94757ECA6B88A2F84744587C7;// 0x76E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D2C8D93465BFA878DFEB7BDBA8E3D00;// 0x7728(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E0A1BDDA47C026FA808F0987F6E0EB9D;// 0x7818(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84AA836F4EC0D5CA00EC5B9ECBB52E4D;// 0x7860(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F6A5AF18479FB521F4B54B98EBE399AA;// 0x7950(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E57F98254E305E9B8CD3C1854A1A0010;// 0x7998(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_701858F64FA19523F4EFF3A5F50EACFD;// 0x7A88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A3D917147FFA2EF897D799CF1288799;// 0x7AD0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A24D05814915302660CFE39971523F36;// 0x7BC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FBF310ED44442E22EBE0868E4164D00B;// 0x7C08(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E683730447B9C038424440B7C1BDAC48;// 0x7CF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BC2D46B144A1036EB52EDD9E3B7248C3;// 0x7D40(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75574D444DD7A72EBA8040B076C8A7BF;// 0x7E30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60CF5DEF4B827C37979688B11F193BEB;// 0x7E78(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_67D01964473D0978D0C913BED6EE6F8C;// 0x7F68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27A06EBE4A019A38BB3DB1BE7C9B8BB1;// 0x7FB0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_623E082F4E720D029BA11BB37E525F4E;// 0x80A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D00D10574337E3AC1DC2B982F1385BE7;// 0x80E8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B95B9DF244DB1FE0643EEABF5A85FF0D;// 0x81D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3930DFFE4D56856E954B5FB50C7CC4A5;// 0x8220(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_72AA0AEC4C1B3DF3AB482A8AC81472E5;// 0x8310(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1F8664D4991040B436025B68C7E2D25;// 0x8358(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_27593B274C6F99EAB25CAAAD28ECECBA;// 0x8448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2A5304745BAFE7482FF42A30FE629B1;// 0x8490(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B71F4B8C497BEB78346A0BB0CE59D20A;// 0x8580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11CE968D4ED4B662500E558A493E840E;// 0x85C8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_54F8D2A744286E362176ED89C5CA297F;// 0x86B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12331CA1412EC41FB4CC518D202DFF87;// 0x8700(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62F54BCF4F9765666F8E07AB01FC3AE9;// 0x87F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20D410FB47EDD768C1C440AF37FFC05A;// 0x8838(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_95C76C2C40E9F5AA1377E999EC36334D;// 0x8928(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65E3A34E42707271BD5154B17A5633E3;// 0x8970(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7C6220C1455B841D80E8738F340A3FBC;// 0x8A60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D70320F4CAD58C1FBE7CF91C282D942;// 0x8AA8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A0D483B14B080A1D0F7188AD4A70C59F;// 0x8B98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2DF21E584DDFC9FB24927789B0008284;// 0x8BE0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AFE1E7B84D38780C3633A2A58E830D17;// 0x8CD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A0ECBB8B4BA7BD5F493D41B1A5036C5B;// 0x8D18(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F6DA98FE4CC79BFFAD7A2FA086C59F59;// 0x8E08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4C789CC4F321289F062B0B8CDB5211F;// 0x8E50(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F64B5034B1B2064080AA9822B300F8F;// 0x8F40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F604F0694C8502EBBB6155B594D0B9AE;// 0x8F88(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8A94CBC24DB5E20CBD7F2CB4F0FCC665;// 0x9078(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ABF0EA04469F4835708E92ADBDE94B13;// 0x90C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_423DC2F446B237626819508663FB9689;// 0x91B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E8A07D9495F08A4C92E188744EFCCCB;// 0x91F8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B8CEEFF84FC6931A5C9FB4BF6962DDB2;// 0x92E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7082B7844BC61C8F01799A534E734CB;// 0x9330(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BC81649C4F27DB42B1CBBF9DBB48E50C;// 0x9420(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3315DB6B47478320C2A59E9C12E92195;// 0x9468(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0EDD0D64430E8F5EE3A74B9BFACB51A3;// 0x9558(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49A3BDE04A7BE81EEF2198B697CAE084;// 0x95A0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_58910B70489273894128099B847BECCC;// 0x9690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD636C8D49AA045A6D2D08B03C245615;// 0x96D8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1052B23E4D4DDC04855DE0AF970948D6;// 0x97C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A239F644873784E51F4969881A87B07;// 0x9810(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5B3293648A5020ABE16799AA040B9CA;// 0x9900(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2AC0F423429CFC9C1767199D300C9519;// 0x9948(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AE639A0D496D48AF44365DA30E117844;// 0x9A38(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1548C50641A3CD7A525D0E8556EC6334;// 0x9A80(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B105B6E74948ECB58F9662ACD4119FD4;// 0x9B70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_472641C6451FEE29724C42AA1CE53B3B;// 0x9BB8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A829D07C46209BE8E68D8DAE4AB092A7;// 0x9CA8(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_30A46B544C05B34533B51FBE2C7682A4;// 0x9CF0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F27119F4FEED8FF2059B88ACC761130;// 0x9D78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DA6F61CB410A64FD3EB7D0A4B77CD644;// 0x9DC0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E1E16FAB4B30DD486BA8AA85B0EBB94B;// 0x9F48(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1365EE6543D6D5288B9F61B61F552D6B;// 0x9F90(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_8D9E1AC9473DA3369A475AA0A2F0A334;// 0x9FE0(0x0140)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0AF691124B865B9DD4CDD385BA37AE56;// 0xA120(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55FC340040EBC1B59A1AF38CE475B5AC;// 0xA170(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0ADD5DCD422F7E8A52B3E7AD8D1CBA91;// 0xA1C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F37BF2AC41A639C9C985FAB2A48B85E5;// 0xA210(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B707402F467DDB86BC41A5938B605E76;// 0xA260(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2556F9742C9F30C51CA36A10AC95B38;// 0xA2B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E56D990746FCAEA31C3E79B53AC9B4CB;// 0xA300(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_51668F8D4E81A77B6B10418809730078;// 0xA350(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F73F519B4067DDB202FF0D80336C83FD;// 0xA4B0(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_314ED4EA41402E773C5A6780F179955B;// 0xA4F8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_60A3CFA94ECD2523F99E2B83D8CCAFC9;// 0xA580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED161A1C44B60D6231501EB66B8AA05E;// 0xA5C8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BFC645E241D973DD123D329C7E28BC60;// 0xA6B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EF049EBE4F4F45903FAE71BA4B8CE01A;// 0xA700(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C6E5D5B24249B1490450A8A925A3B922;// 0xA7F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_043DCEB4420576F3E31F25B39CECEE7F;// 0xA838(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_588EAE054D16F9FB47B113AC2457D9ED;// 0xA928(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F5FA37284E16673D8AB87E972255F3BD;// 0xA970(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CBB88AF342CFA5E5F2102899FA08575F;// 0xAAF8(0x0048)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_AD8DF05F4D567DEE9CDB488CE245DC49;// 0xAB40(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_558DA45D4B5B1444A048A49ED7F0C6F0;// 0xAC80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7D8995B4D6362E538E1E19F6226CE68;// 0xACD0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_681BC9A84BBFFE65C557E092FC875300;// 0xAD20(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93A075F349897205B05721AE1C04ADAE;// 0xAD70(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_597B91454247AF79622386AA00A45A8D;// 0xADC0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A589E3D4AB057FF55A118AF56B31F38;// 0xAE10(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70B85E674D5FEBD21B76958EECC2AF10;// 0xAE60(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B271C7B4C864234927B84B9B4EA2578;// 0xAEB0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_582B5F7E41C31507A79300B07F84D71E;// 0xAF00(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56396DD74CA64B5E9CBFA8AEBAA3F84D;// 0xB060(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_C01273334EF592ECAA2474AD88ED0D75;// 0xB0A8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_215D863E4B7B3B4D1395D4AFD8DAE162;// 0xB130(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AE25A7EA43D542CF3271CDA24F1D49DD;// 0xB178(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D43261F34161179D9EC1C6924A6E630A;// 0xB2D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9DD01EA54FFF56D5247B3ABEAB5E0EBB;// 0xB320(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6DC11A354EB738BE035B3FB3734695A5;// 0xB410(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_91FE539E4F7B28E0EE7A2E89BBEADC24;// 0xB458(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB61B0EB4A57384E4462D78DDF6B9E6D;// 0xB540(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EC9A7FAE4EA9A545D37AFC9AFD1AFDA6;// 0xB630(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75659AB1437EB77CA28C499BF3C3A92B;// 0xB790(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_53044D8544EBD2730E079682CC91565D;// 0xB7D8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5F10A1834DF3C2A344350D9253292B36;// 0xB960(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_CB9E3D924A95612AB0CC6AA33FC9D7AC;// 0xB9A8(0x0188)
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_9E2AE5C9450F72BD196099A4A971FC91;  // 0xBB30(0x08B0)
	struct FGbxAnimNode_ApplyBoneModifyProfile         GbxAnimGraphNode_ApplyBoneModifyProfile_FD2DEF2F4B5D36F85D1898981B0D1350;// 0xC3E0(0x0180)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F4490EA249A22E13C31520888752B029;// 0xC560(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8F61B2D4EE563AEAA3B789B83F1B1CD;// 0xC640(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_AAC69B4F47CC64CF7B131DA438AC9ACE;// 0xC730(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_00DDEF4441E573BC53CFBFA251068FBA;// 0xC7A8(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C19BA8FD4C53ACE9B36123A85F5F50DC;// 0xC828(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_875AFB774FDEBA482E7A018EB9D3CD15;// 0xC870(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_939C2B0546BE4836CFB6ACBF97D212A2;// 0xC9F8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EAAE358549AE2827DB9CD1A2213587DC;// 0xCAE8(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_F55BFB51472DCD3E8438C9B5457F9E93;// 0xCBD8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A31EBFE4EAD03097E1494B2DBEBA153;// 0xCC50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1473665C444084F1C05EC0B52DB9BEA0;// 0xCC98(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_932049674E3F30DE49FADF8895FDF59E;      // 0xCE20(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_81C799E24F9917AE0A8900A5A901F37D;// 0xCED0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E890722145566198027536A542097B53;// 0xCFF0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4273215E4722A2E301337A8220DABC88;// 0xD0D0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F2570AA646ECB6AEE86C7397E4A5B8A6;// 0xD120(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9562711244775FC96ADC8CBD7C2ACF7C;// 0xD170(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0D627983427C52C914F24F936331CB9C;// 0xD1F0(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_9E51CECC4FCB033244E4B4A3703E55E6;// 0xD270(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_091CA4234E0F5305706391A30FFF0175;// 0xD2E8(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_EB25D85F4FA90A6A3A6CD88804E47FB5;// 0xD360(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7510170F41DF611C34CA35967F93B218;// 0xD3D8(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1171A74A49CE6E9B790284AFA1AAEC93;// 0xD458(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58C02FBF4DE494F0BE847599E66661BC;// 0xD4A8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2FC638F24A457BEF1DFA8AB8C1218B8D;// 0xD578(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E2C087B14B96C5796EE959B703002364;// 0xD5C8(0x00E0)
	unsigned char                                      UnknownData00[0x8];                                       // 0xD6A8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BA989A6B4BFA3FDD4E3390AF0709C572;      // 0xD6B0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FBBCB5FF4C7B2A43194378904269C975;// 0xD760(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_842971D64268B5D4FA4427A10A7F186F;// 0xD840(0x0050)
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_1AFBC72D4AE22FEB85960886D93DD2EF; // 0xD890(0x02D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_191ED3D24DEE3F91D04BD5B43CFBDBE3;      // 0xDB60(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B8E174F54D5EE0946DE366B8BF3D806E;      // 0xDC10(0x00B0)
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_5E64AD7047AD78DAD2EAB4A5AA4BE911;// 0xDCC0(0x0730)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9AEB47D24410C91CF0D3DE9856F5115B;// 0xE3F0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0458376F41C38EF353758AB4D17313DB;// 0xE438(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_22F77D7943C052F24C9BA482913EE425;// 0xE518(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9A0CB88D4F4491418A4A3DBE2BB067C8;// 0xE598(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_618370DC48C1C9767536D69C9F83D83A;// 0xE618(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8D937EBF4DFB598C7CB3D4A3D7E3F4D1;// 0xE6F8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB7854704638B0AED47F0084D2E47230;// 0xE7D8(0x00F0)
	unsigned char                                      UnknownData01[0x8];                                       // 0xE8C8(0x0008) MISSED OFFSET
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_5D25826047CE205067BC998F8E088AF1; // 0xE8D0(0x0370)
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_29053DC34CD7F4C2A78B24938CF490CD; // 0xEC40(0x0370)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_309620E24C78301B4DE1F08865C53AC2;// 0xEFB0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_565EC10D4FC46412F3A53FA378BF6299;// 0xF090(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_08F6DBCC4217F9402AB891879A99BDF0;// 0xF0E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D1FD2B274F0585A1D14FD29F599C626C;// 0xF130(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B25C30CD4EC70C85C57F9FAA35B1A726;// 0xF180(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_51C2F6F143B0F7BCB933C4829844AC3E;// 0xF1D0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67CFB87F49417DF54A50E0985DD470F7;// 0xF2B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_02837E664B8A33442FB3A4B3B7CF9972;// 0xF300(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_022D75B64A02F4CEF4742C9F3AF61C7C;// 0xF350(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4B19FABA4E5A3B1C07559B8F883D2716;// 0xF3A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A229124144CB6C7567984593766041F9;// 0xF3F0(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2652A0DD4D106FA756A6169CB66BEB44;// 0xF440(0x0048)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_698721EB4B1AE14FC961D98BE16F2F6A;// 0xF488(0x0068)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_50B343654F2B7FE06CD02593ACB8F006;// 0xF4F0(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE36D0CC467533E19F3F3C9604D3BC35;// 0xF558(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D12DE62A465CBC33E7848BAF5CD39944;// 0xF5A8(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5ED6F3CE456F4BDE7C02FC883E82580E;// 0xF5F8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9E84458E451950E3F26D1A84084B6507;// 0xF678(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E95064BD4630D0B9EA0EFEAC73F28DF3;// 0xF748(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CBD454AA47BE7EE0429697BEA5F98117;// 0xF7C8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_71FA7D5D455BFEA8834F6386464B985A;// 0xF810(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_43F695824B511D169658628500EA1416;// 0xF890(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_51E5B1F5441258B796399894261E226C;// 0xF8D8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4F53F5064FC06BDDC8C724938C34E3EC;// 0xFA60(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5CE92160483292A1486D0FB675D3FE46;// 0xFB40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B9B11EA4655E56437AAD692C0E4E6D3;// 0xFB90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C796EAFB4CBB5F91A75427AB5CD5A39C;// 0xFBE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4F2C23F44DAD928D85DD48A31484483;// 0xFC30(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DDEB75CB42E026666EA72B9B815173F8;// 0xFC80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ECD3E92046C8FD7EB02BC098291976CB;// 0xFCD0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08588A744F8CC74A4B5612B479E0CB6C;// 0xFD20(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8D67B6A741EEB2E3CBF0E1B9B78FC0EA;// 0xFE10(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A6B9622148E791FDBC44FDA932D79469;// 0xFE58(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10D46FA240650BB1C77FA996949B8917;// 0xFF28(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ACA7F4DB4B176F182B8537BDEAFB04BB;// 0x10018(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_83C0BBAC428850736CE26DBB1829949D;// 0x10108(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AB86F37B40668D1ADCFF4B92BE87AD55;// 0x10150(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_41B2A316414A8A1E9CD725A9A7BD0E67;// 0x102D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA636B354114604BEAE370BB7587ADEB;// 0x10320(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_374EC41F4F780C17378F079A5738A0D7;// 0x10370(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05BD47DD4593739CD7EB5FA4FC5BEBD4;// 0x103C0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_468ED9DE453F7DC92FBA39AE51CC3A3D;// 0x10410(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7FB3DF82440D3215944DDC84058BD68F;// 0x10570(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AED6852945EF6FD4EF6BE18A5954DF38;// 0x105B8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9679F6BB455EF07BF373AEA00DDF003B;// 0x106A8(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_A04B126448D441B1A83EA5BEBCD16945;// 0x106F0(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20E41EFA47E9A87F28154C88856362C7;// 0x107D8(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_26B65A794F8837FC2F6D5FA6FFD5995F;// 0x108C8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EB912A924A580DED4780B186417D9B5E;// 0x10A28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EE5DA0084912AD3726D8F3ABC679DE41;// 0x10A70(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B871C24A432F63D6EE2668854B7471F5;// 0x10BF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F5D23AF84BB8936E3A3500A9214647C3;// 0x10C40(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2AF4CA5C4C46960A8AC85D989BEB5B2A;// 0x10DC8(0x00E0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_F2B27177466710A39D91B1824974D2A4;// 0x10EA8(0x00D0)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_F7B239FA48A84C3D45E409A0374C3CA5;// 0x10F78(0x0140)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0C45515442E0A30F3259E1A97F689330;// 0x110B8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D9AEF4A045E7370E891E97ABE433948D;// 0x11188(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_02CB032349C3152A80019A8E6FA56083;// 0x11278(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B85878DB4D74B327CD71C9A53994E321;// 0x11348(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_695F0B3E4FB8E703335541B35512CB6F;// 0x11438(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_900B4AB34E1B1F11389330B3B5C980CA;// 0x11528(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5491D7DC4F122F2922EF5C947F607B68;// 0x115A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9276C1524C1EB95C7E5F0C94E82D7C1B;// 0x115E8(0x0188)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4337AE5D45FDF731AB5461BEF4707191;// 0x11770(0x0198)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_07C448C34A91BB90918E378F5EF58881;     // 0x11908(0x0170)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9FB7859C464EB718CE64A2B1AC43E5CD;// 0x11A78(0x0198)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CB162D7A4F3F2C52E62F3D978F50DF9A;// 0x11C10(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3560CD3445921D884891E39C7AE28300;// 0x11D30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DBFF83C04E237B50ABC4E8A56CE5F341;// 0x11D80(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6532DEF4405AC6469EFCD6ACB2F72BB5;// 0x11DD0(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_1858C50345CC3746EE3755895E59D913;// 0x11E20(0x0140)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2C84043C48D1BB81C07B8A819A4B0F20;// 0x11F60(0x0120)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_C1208E5141925D08BC762A96678D7FC9;// 0x12080(0x0120)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_315C2AE9439B18435C76C28EEFE290C5;// 0x121A0(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_17EDDD974644434A581667BF249A6F1C;// 0x122C0(0x0120)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D1F29BC4427128D37C03F981FC16A581;// 0x123E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BDDAF99C4C06C12D2965A9AB781D29C0;// 0x12430(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D7B3BC3C4F13254D526AC3B7C4DFFBF9;// 0x12480(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5B1F7133401BA2BEF928C598FFA58823;// 0x12570(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_D355B7974A1D0BD158B5E69519D3A501;// 0x125B8(0x00F8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_237AC0F44A628718DC83D8AC405C1FB8;// 0x126B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_43B44C0C4E44DE0C16C1CABFF88A915F;// 0x126F8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E9D9F8524571C84532771FB46405A888;// 0x12880(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B701F6A14802839FCFEEF394C6B59ADF;// 0x12960(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5E326A1E4EE133C889104F87CDDD9C0C;// 0x129B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E83656BA43BA7ACA71C477A716D99B4B;// 0x12A00(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F119074E4C17A3C78ACB3AA4A914494D;// 0x12A50(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_451D2DE1492553A86AF341AFE1294CBD;// 0x12B30(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4FB22DCA4705E83C54776098BA9E6438;// 0x12B80(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E8B96DC444D096193D1DB1BE76BBC2A3;// 0x12C60(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1A20CE042FA073D963D2888096F1641;// 0x12CB0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9D5D802D445446005DF011B32619C624;// 0x12D00(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C22151004E5049CDD08C17A16F9F2DC1;// 0x12D50(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9B765DA740E71C8BE18307AC11270E67;// 0x12DD0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3E10AEE640A8548DB76C75826618747E;// 0x12E18(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3574905462C062227924DA64F58DC0A;// 0x12E98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BD1FE4F340E3E56E95E99CACB250A493;// 0x12EE0(0x0188)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_AE31F68746C4C04CA1F08CA3C0C08921;// 0x13068(0x0120)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_078DD76747F2D54154A579977118199F;// 0x13188(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_308E32814F147F58A8918ABC6613433A;// 0x131C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43BB7771477D767C993EEF994FD1774E;// 0x132A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E599BA943829B4DD5DD4583C5A3D8D4;// 0x132F0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9C7675B476154EA9FA9648629C9E1CE;// 0x13340(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BC3D94534D6B2E6B1AF939BA34EDAC51;// 0x13390(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D78A2457424AA2BE1E859B875609346D;// 0x13460(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_52FF52AA4846A98D3F3235AF73F52C07;// 0x134B0(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A769684444F29D8D4BA3FD8E97B6763E;// 0x135D0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BC337CEE4CDC8B92E0C0FC803F998856;// 0x136C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A62A72BC4FBA27F7B3E39CBC7300AAFF;// 0x13708(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2F7434341F5CCFB7E23DB97AB505B73;// 0x13890(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_721DD04A487D548F57D7F9921A843632;// 0x13980(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1EBE411D44A1C087BE54FBAF4BC3A12A;// 0x139C8(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE4C2D234E550DA69C638DA0FF3AC2AD;// 0x13B50(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D947DD7F4A591A6AF0B95CBDB992A207;// 0x13C40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EB6A6BC947543552AF9C13AFCEA3715F;// 0x13C88(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CBD764E4FCEDADE5753838B601A8BD9;// 0x13E10(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A35EDE91477A4B504251CA8F25A3ABDA;// 0x13F00(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C88BEC65435677348E57D9A34DBF3DFB;// 0x13F48(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3CCD303F4A1AB9829E8E9DA8B0C4911B;// 0x140D0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BBCFE5E94928052BF35626A9D5A2A3E1;// 0x14120(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_6B57ACDB4224A0738C34679BC30C4D9C;// 0x14170(0x0140)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_EBBB83244FF07861B1330B9BA579004A;// 0x142B0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3E0785844E742BF011B3E593CF7106E8;// 0x143D0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DBDBCBC64E6D0959EFACCF922C1F0352;// 0x144B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48B8326E4ECF0DB8218536BF5F95A19F;// 0x14500(0x0050)
	int                                                EnemyVariant;                                             // 0x14550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPsycho;                                                 // 0x14554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MuteFace;                                                 // 0x14555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPistol;                                                // 0x14556(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x14557(0x0001) MISSED OFFSET
	TArray<struct FName>                               LiveWeaponPoses;                                          // 0x14558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasWeaponPoses;                                           // 0x14568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x14569(0x0003) MISSED OFFSET
	float                                              fHasWeaponPoses;                                          // 0x1456C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ValidWeapon;                                              // 0x14570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x14571(0x0003) MISSED OFFSET
	int                                                WeaponType;                                               // 0x14574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAStruct_Generic_WeaponAnimContainer        WeaponPoses;                                              // 0x14578(0x0A20) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InCrouchStance;                                           // 0x14F98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCombatStance;                                           // 0x14F99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InPassiveStance;                                          // 0x14F9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               SuicideStance;                                            // 0x14F9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               TruckBed;                                                 // 0x14F9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x14F9D(0x0003) MISSED OFFSET
	class UBlendSpaceBase*                             PunkAimO;                                                 // 0x14FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ADD_Weap_Idle;                                            // 0x14FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       L_Grip;                                                   // 0x14FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       R_Grip;                                                   // 0x14FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CotV_Male.BPAnim_CotV_Male_C");
		return ptr;
	}


	void CalculateWeaponHoldData(class AWeapon* Weapon, class AWeapon* PreviousWeapon, bool* ValidWeapon);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_LayeredBoneSetBlend_8D9E1AC9473DA3369A475AA0A2F0A334();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_0ADD5DCD422F7E8A52B3E7AD8D1CBA91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_C67221184712D61D8A8DA8A3D8240242();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_B707402F467DDB86BC41A5938B605E76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_D2556F9742C9F30C51CA36A10AC95B38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_D116ACF94A97512F0A323FAA3B5A50EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_51668F8D4E81A77B6B10418809730078();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_ED161A1C44B60D6231501EB66B8AA05E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_252FF2FC43D6C52B8B4143826221E1B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_043DCEB4420576F3E31F25B39CECEE7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_C3DF5E294DEC901FEA635898C834CD71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_LayeredBoneSetBlend_AD8DF05F4D567DEE9CDB488CE245DC49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_93A075F349897205B05721AE1C04ADAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_973BDA5547804779DA5730ACFE31B6AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_70B85E674D5FEBD21B76958EECC2AF10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_8B271C7B4C864234927B84B9B4EA2578();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_25C43EF14ADD3F0C5CEDCC88F321629A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_582B5F7E41C31507A79300B07F84D71E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_A58A6C9A4653DE987EEDEBA5522E647C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_AE25A7EA43D542CF3271CDA24F1D49DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_CE9EEF5347845363B7A8B9AE48F469E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_BlendListByFloatInRange_91FE539E4F7B28E0EE7A2E89BBEADC24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_AB61B0EB4A57384E4462D78DDF6B9E6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_EC9A7FAE4EA9A545D37AFC9AFD1AFDA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_LegIK_9E2AE5C9450F72BD196099A4A971FC91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequenceEvaluator_00DDEF4441E573BC53CFBFA251068FBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_3267470947F58F24AB790AB07DB30ED2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_939C2B0546BE4836CFB6ACBF97D212A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_453EDB14435C5C162EC6C2B6E1652442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TwoWayBlend_81C799E24F9917AE0A8900A5A901F37D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequenceEvaluator_9562711244775FC96ADC8CBD7C2ACF7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequenceEvaluator_0D627983427C52C914F24F936331CB9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequenceEvaluator_7510170F41DF611C34CA35967F93B218();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByBool_58C02FBF4DE494F0BE847599E66661BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_LookAt_1AFBC72D4AE22FEB85960886D93DD2EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_ForwardDynamics_5E64AD7047AD78DAD2EAB4A5AA4BE911();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequenceEvaluator_22F77D7943C052F24C9BA482913EE425();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequenceEvaluator_9A0CB88D4F4491418A4A3DBE2BB067C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_CB7854704638B0AED47F0084D2E47230();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_HandIK_5D25826047CE205067BC998F8E088AF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_HandIK_29053DC34CD7F4C2A78B24938CF490CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_CE36D0CC467533E19F3F3C9604D3BC35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_C100AB4245310D1C1084E0A8B6E7A53E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_D12DE62A465CBC33E7848BAF5CD39944();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByBool_9E84458E451950E3F26D1A84084B6507();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_4D027F6C4EE2E7292DDCB78DE8320C35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_C796EAFB4CBB5F91A75427AB5CD5A39C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_9920941A4B9F495F18D004A8AB9A2C06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_B4F2C23F44DAD928D85DD48A31484483();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_DDEB75CB42E026666EA72B9B815173F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_ECD3E92046C8FD7EB02BC098291976CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_1AB1B04C4C03102DC3E6F798DC354271();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByBool_A6B9622148E791FDBC44FDA932D79469();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_10D46FA240650BB1C77FA996949B8917();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_ACA7F4DB4B176F182B8537BDEAFB04BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_687343E648FB81BAA28D93817E835018();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_RotationOffsetBlendSpace_C9D7C55A4AB8ADE7803BE0B0ADF77313();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_FA636B354114604BEAE370BB7587ADEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_374EC41F4F780C17378F079A5738A0D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_05BD47DD4593739CD7EB5FA4FC5BEBD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_468ED9DE453F7DC92FBA39AE51CC3A3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_9F7FC2564C78B25D5344A29AD600C4E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_BlendListByFloatInRange_A04B126448D441B1A83EA5BEBCD16945();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_20E41EFA47E9A87F28154C88856362C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_26B65A794F8837FC2F6D5FA6FFD5995F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_9FC35D4A4F239B429E558E87812D68B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_BlendListByFloatInRange_622C499C4D9A6C5A3303708FF2E7F902();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_A51184A14B4F56F14F6209B28ED1CB17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByInt_F2B27177466710A39D91B1824974D2A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByBool_0C45515442E0A30F3259E1A97F689330();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByBool_02CB032349C3152A80019A8E6FA56083();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_ModifyBone_4337AE5D45FDF731AB5461BEF4707191();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_LegIK_07C448C34A91BB90918E378F5EF58881();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_ModifyBone_9FB7859C464EB718CE64A2B1AC43E5CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_LayeredBoneBlend_CB162D7A4F3F2C52E62F3D978F50DF9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_LayeredBoneSetBlend_1858C50345CC3746EE3755895E59D913();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TwoWayBlend_2C84043C48D1BB81C07B8A819A4B0F20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TwoWayBlend_C1208E5141925D08BC762A96678D7FC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_BDDAF99C4C06C12D2965A9AB781D29C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_1DA4770E4F7B648C44A7CCBD72B26951();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_E9B151124E8E24ECE6D15AACD943787D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_F1A20CE042FA073D963D2888096F1641();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_BlendListByFloatInRange_50D42F594F670FA9E27F6BBD3AAC4004();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_9D5D802D445446005DF011B32619C624();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_F75748884090A409B8BC888F2592BC25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TwoWayBlend_AE31F68746C4C04CA1F08CA3C0C08921();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByBool_BC3D94534D6B2E6B1AF939BA34EDAC51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_LayeredBoneBlend_52FF52AA4846A98D3F3235AF73F52C07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_77A73E204BD3C0A072E5C4A3D82041CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_LayeredBoneSetBlend_6B57ACDB4224A0738C34679BC30C4D9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TwoWayBlend_EBBB83244FF07861B1330B9BA579004A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_ACD1EA5144EF7B58D1EF63ABDBFDC9B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_FA6C49F84AD7A38C6D48E1A5385966DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_05F18D074A5E191B6F3E0BA9A199B592();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_6CF24AA74EA3C3601FFFBDADABED4FE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_B586E82C4A2CC1F4D0F66F9F3085AEC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_E842B7F841967C347AC34AB83A80617E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_D42EA63042FE820B3B37BB93C084945F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_5C1D90E84136ED24DABE5F8047B63746();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_F8B8B2124050CB95A22C2BADB051FB8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_SequencePlayer_13034C9B432C68F69AFD108BA4C86753();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_GbxAnimGraphNode_BlendListByFloatInRange_3B62F3FD4879D708F0CCF6982588A38A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendSpacePlayer_C8C9FFA2476FE6A443B9ED916A3D7B11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_4BB28D644435BB2834A319B74DF3FF1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_2F88D17449AA29A6E6BE2EA56208753F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_BD089B39417297B4D23DBEAA99042181();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_4EEF2C2943A13B97045134A7786CF535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_F96ECA8A4C67FF7D07CD87A46A8386E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_0ACBD84E49E4DF9A144184AC492121F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_TransitionResult_0D978740453F0540EBA806AF4E648D1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CotV_Male_AnimGraphNode_BlendListByInt_1519C61E40907FC8A56F8389961FBB87();
	void BlueprintInitializeAnimation();
	void OnStanceChanged();
	void OnWeaponChanged(class AWeapon** NewWeapon, class AWeapon** PrevWeapon);
	void CheckWeaponPoses(bool ValidWeapon);
	void CheckAimO();
	void ExecuteUbergraph_BPAnim_CotV_Male(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
