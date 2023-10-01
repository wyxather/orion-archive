#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_ClapTrap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_ClapTrap.BPAnim_ClapTrap_C
// 0x68BB (0x73AB - 0x0AF0)
class UBPAnim_ClapTrap_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A84DAB5643B1DF26999E518CEB059BDE;      // 0x0AF8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AE6FB7BA407F591FD7ECCF8DD96697C9;// 0x0B40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D2EF4C14D749D929F79BBA115A52C66;// 0x0B90(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2061983241913D495AAE3AB695E74EA1;// 0x0BE0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B5A1A8E2419510E12EB69F9055EECB8F;// 0x0D00(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E6AE8DD944C4D12ECBF802B2727F5864;// 0x0DE0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EFDBC85B4053E09ACC0DB2AFD468B10E;      // 0x0EC0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8816658A48DEC8530F2D9BA9E7770C03;// 0x0F70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BAFAD86149639946D6595AA3CDA76A0C;// 0x0FC0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C245D7B7413C8946D1E31BBC402B9468;// 0x1010(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F8A975684F5806B8540126B9FA5523B2;      // 0x10F0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C106D7C44E633024D172BE993257C0E9;// 0x11A0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_843D0C8E40420A2D916E9A9D15BC2F08;      // 0x11F0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E19F12F043BF77ADA63C64B8C669AA51;// 0x12A0(0x0120)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1345E37F4439F9034010BFAAFBD487A9;// 0x13C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EA8803847B360EBD13189A2A55CF111;// 0x1410(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C0EF180428A94CAADE7D58F00D369C5;// 0x1460(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BE5DC32E47E0552929E90AB1C065F58A;// 0x14B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A01CC0E54D87D3847B78BEA437F8C4EB;// 0x1500(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4FACD964D9998091D760FA1D39A2A67;// 0x1550(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CBC5EF14D1AC979CBCC3891EBC1AA0D;// 0x15A0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8CE7B36E4AEF2C247B197DA54BBBE188;// 0x15F0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B3339D24107EC763959999E01E2D056;// 0x1640(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B70461A14D7823380502FFBB5C2B1DB4;// 0x1690(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ECB792A4B6DFB4057E4009AE733E82A;// 0x16E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86F2904045E51B8ED44C6A8543A399F5;// 0x1730(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39FE932A4DBE8E634F28C5A4CCE2432B;// 0x1780(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1AB1CC464FBE719AC5090B87FA9DC4F0;// 0x1870(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F2E9CE24BACE1BF991CE684A048B8E6;// 0x18B8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6217A7384463F761849A6295C0EB71E8;// 0x19A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C691892940357564A69A54B225B34A96;// 0x19F0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_33451C6B4BC0D9078FB1B9A8633B06D7;// 0x1AE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B4E4EE5141A29F1CACC43483974672F4;// 0x1B28(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_118EACE34A267B0BB736A0B6CA4790F6;// 0x1C18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F1ACD3440965BC1F6A5F1A309A7426B;// 0x1C60(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_24E6EBAE4124C092A83CEB9EA6B17B51;// 0x1D50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1856C5924C7209B90867D1BBAA07476C;// 0x1D98(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DFA373124F0D07AA785054B29730188D;// 0x1E88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0ED84F0749A19F7BC6373881BAC2C77B;// 0x1ED0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19C61127442230A30BEBD581C5E4E5E9;// 0x1FC0(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_34726FFE42AE824F12D83E9A9CF60936;// 0x2008(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C6CF615E42F1BA2548EA0EA610A01B91;// 0x2090(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3434618E45CA18381DA4FDB0D7BADF65;// 0x20D8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1A02437E4CB212A0B54519A28EC566F5;// 0x2260(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_819D000B4DDE0DDB6DBF7AAD82543DE4;// 0x22A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_357A59F54E667A9EE28D02ACC229DEC0;// 0x22F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C45000EE46EE2AF4D01B00B8F26F8346;// 0x2348(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7CADD76485FA6B84D8FE68983E5894A;// 0x2398(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A53AE84458BD953D13EFB941758E2FF;// 0x23E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0054F27F46A10C4BD842F98A0C0CE757;// 0x2438(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AE79E224DE521EF8F9C2F932613851F;// 0x2488(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E41B5044E929EDCE25B8B80FDDE1CE1;// 0x24D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF74A4D145BEFC9204DECD840B689171;// 0x2528(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1186577241E30274852771A43FE34242;// 0x2578(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEB5CBA84E693A1FD09F1B9B8EE8E979;// 0x25C8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44DB44F341D65561F5A32BAC41849E7C;// 0x2618(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FA0A2FFB4BAAFCC7823E6C828F1A506C;// 0x2708(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_05265D5748BB8116633001B58BCF8A52;// 0x2750(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4897AB984D481BBD26930A82B2A98EAE;// 0x27D8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8FA0422448F3858BBE03E98426561150;// 0x2820(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_860503D0457B859CCBA54F92A3A9B3F2;// 0x2980(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5D3AADB446745A2D5F3D459CAD106FEC;// 0x29C8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C82743E343EE7C95C59E94947606B78D;// 0x2B28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73CB227D4C2D2F243833D882B70FE494;// 0x2B70(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3578E2844DBC7C515F3356BECDBF3A1C;// 0x2C60(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AC4A376F450632ED749698AF608A0D95;// 0x2CA8(0x0160)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4962EF6B4B21300B4D22B995CFD04AC7;// 0x2E08(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C871D014F1A0BF3DA0AA4ACD6270B98;// 0x2F20(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F5C25BA4409F28510AB0BDBE82EAF97F;// 0x3080(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F819700F43BB8890177AC4BD8110325E;// 0x30C8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_768984024F5B1B539D34028B1E40DA95;// 0x3250(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C70E17F94748E1796314A2968DD75049;// 0x3298(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2C25753E4FE3945AE9C0D2931FDB8618;// 0x3420(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F261DED641CDBD6A921716A01E187EE5;// 0x3500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05B7E535497ED45FA1368383D42D160C;// 0x3548(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91793FEF4B889B4BF79600A6053C0430;// 0x3598(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF657668434B43145AA6A9BD5D977ACB;// 0x35E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABEAA8C248FBDA192DB2C2B716336EC5;// 0x3638(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_508984704518A56DE98A8CB50FE9A653;// 0x3688(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2CD8F3644892A1700EC5EAF815E6F38;// 0x36D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D70E8B84AD6E6CAC8AE8DA09866D2E9;// 0x3728(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C15569746AB4CC21490EF81987BDB00;// 0x3778(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D479708242C2DD3B062326A715E34D0C;// 0x37C8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6BA2F1B947F6976F2FD7F7A4720687CF;// 0x38B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_668189EE4AE931AFE204B49CED1AC26E;// 0x3900(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CFCBDA5A45B538CEED9D9E8962C86B5D;// 0x39F0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88F67C804DA52854E738ADA50921E1D0;// 0x3A38(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E7501C9143A36309F4A6CBAB0A504FBA;// 0x3A88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AEAA5E134763E13DD275BB8632014D00;// 0x3AD0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_90C5DA7C4650805C3C74888DB49A4E43;// 0x3BC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F085EEC644860C0F74861499186797BF;// 0x3C08(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1D2AD07041999EA9D95A8FB78343DE4F;// 0x3CF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7ACA0F2B45B754B2DA5A689A5AC3DEBD;// 0x3D40(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FE219F124AE29F7A74A1D5A64A3E4725;// 0x3E30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_856072A5420CDCB6893301981992E368;// 0x3E78(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2BF13D444DD8B0E4FA9BCEA345DA79F0;// 0x3F68(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0A0EBF5B4319C9C24676DDA72C6B6BF0;// 0x3FB0(0x0188)
	unsigned char                                      UnknownData00[0x8];                                       // 0x4138(0x0008) MISSED OFFSET
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_E6D8944A481A9287A39E4C98DE6EC9DA; // 0x4140(0x02D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1709E4834708A86BB5A312972F91C579;// 0x4410(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3A59AB154E2E21F99CDADB8442045468;// 0x44F0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4B61F6A6496DD131900CB6B5A680601D;// 0x4540(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DBA5D1C8483280C369C7F8BDD40281E1;// 0x4590(0x0198)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_187AF5504537368C1A64AB9CFD8508BD;// 0x4728(0x01B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9870D62F4547A0C3C71B538403CA1832;// 0x48E0(0x01B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B6B38449401D0A3860C7EE8A76B58B4B;// 0x4A98(0x01B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B07A06884DCC30CB7AE910B7452555B3;// 0x4C50(0x01B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3AD63D25473561FB0C702193121566D2;// 0x4E08(0x01B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7D864C56467719BDD1731F9C6AEF3559;// 0x4FC0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0538199B4D1E409B264B7CA2167758B4;// 0x5090(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A7D603D403DA7ABBC961BB01D5E9D88;// 0x5160(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4FFDDDA54C676C49F04FC3B661FC4393;// 0x5250(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8EA117C4465EB5407CBC1B8986A353F4;  // 0x5340(0x0178)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5CD2A9C048DAF29378B1B7B65A6ECEBA;  // 0x54B8(0x0178)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_700BABCE450172616D091F9B9ED174E2;// 0x5630(0x0198)
	unsigned char                                      UnknownData01[0x8];                                       // 0x57C8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_EE528BFD4F01258947462987E46D7EFA;    // 0x57D0(0x0290)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_072B759E4150096088AFD9BD48622D98;    // 0x5A60(0x0290)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4B17DB924AEC7B11F88F84A2AB4E4D4A;    // 0x5CF0(0x0290)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9F74517244D821B1281BBB9363329EBD;    // 0x5F80(0x0290)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_480DB1784377D71B1580978E4F18967C;// 0x6210(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_AFCA2E114C7776D085EACD9942498657;// 0x6258(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76C51C5745F41EBACBE3C394E0BA207A;// 0x6378(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_38B5D4144A7A73563E0A9A90AFDE5905;// 0x63C8(0x0120)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_EFBEE1AF4F6914A489D5BE93910E7662;// 0x64E8(0x01B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9F527B1342CDA030204788B4DB4A4CCE;// 0x66A0(0x01B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2C4776034F4E978341B77AAA21B92772;// 0x6858(0x0050)
	unsigned char                                      UnknownData02[0x8];                                       // 0x68A8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3B1C53B047345052E711E1885138D7A3;      // 0x68B0(0x00B0)
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_AEBADE664C9D88AF0E14AE9961BA9623;  // 0x6960(0x08B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0FEF53AE45E142DCBCCD8BBF4B72C20D;  // 0x7210(0x0178)
	class AOakCharacter*                               Character;                                                // 0x7388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Give;                                                     // 0x7390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Take;                                                     // 0x7391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x7392(0x0006) MISSED OFFSET
	class UGbxCharacterMovementComponent*              GbxMoveComp;                                              // 0x7398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UOakCharacterMovementComponent*              OakMoveComp;                                              // 0x73A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               MagnetIdle_A;                                             // 0x73A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               MagnetIdle_B;                                             // 0x73A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsScared;                                                 // 0x73AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_ClapTrap.BPAnim_ClapTrap_C");
		return ptr;
	}


	void InitComponents();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_6D70E8B84AD6E6CAC8AE8DA09866D2E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_0054F27F46A10C4BD842F98A0C0CE757();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_1C15569746AB4CC21490EF81987BDB00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_ABEAA8C248FBDA192DB2C2B716336EC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_1A53AE84458BD953D13EFB941758E2FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_GbxAnimGraphNode_LookAt_E6D8944A481A9287A39E4C98DE6EC9DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_ModifyBone_DBA5D1C8483280C369C7F8BDD40281E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_BlendListByBool_7D864C56467719BDD1731F9C6AEF3559();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_BlendListByBool_0538199B4D1E409B264B7CA2167758B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TwoWayBlend_AFCA2E114C7776D085EACD9942498657();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TwoWayBlend_38B5D4144A7A73563E0A9A90AFDE5905();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_8AE79E224DE521EF8F9C2F932613851F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_BlendSpacePlayer_4C871D014F1A0BF3DA0AA4ACD6270B98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_F7CADD76485FA6B84D8FE68983E5894A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_BlendSpacePlayer_AC4A376F450632ED749698AF608A0D95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_D2CD8F3644892A1700EC5EAF815E6F38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_819D000B4DDE0DDB6DBF7AAD82543DE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_FF74A4D145BEFC9204DECD840B689171();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_BlendSpacePlayer_5D3AADB446745A2D5F3D459CAD106FEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_BlendSpacePlayer_8FA0422448F3858BBE03E98426561150();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_9EA8803847B360EBD13189A2A55CF111();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_1345E37F4439F9034010BFAAFBD487A9();
	void BlueprintInitializeAnimation();
	void OnStanceChanged();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_ClapTrap_AnimGraphNode_TransitionResult_1186577241E30274852771A43FE34242();
	void ExecuteUbergraph_BPAnim_ClapTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
