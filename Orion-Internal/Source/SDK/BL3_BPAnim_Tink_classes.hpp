#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Tink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Tink.BPAnim_Tink_C
// 0xD235 (0xDD25 - 0x0AF0)
class UBPAnim_Tink_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_174BBE644909498E64E6ABBED01E858E;      // 0x0AF8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A8445D13450496870A534EAD5D9B34DB;// 0x0B40(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B1AABB394F4C13BC46A4A2852F8EF010;      // 0x0C60(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_ECBD8E2A4F66B68DFEBFC7853E69781C;// 0x0D10(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_140FAA82447C047D5D2CB68EBA161E28;      // 0x0DF0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_90FE16D44C1EE28DC4FAC88B4C171E73;// 0x0EA0(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_0C233222453FD684404CE9934A546A47;// 0x0EE8(0x0238)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86E615D7443C228C6BC8138D0ED776C6;// 0x1120(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93A2FBAA4487E443A7EFDBAFDBB80E72;// 0x1170(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54D4D45D4DEF21E937FA748C3A2EA7BE;// 0x11C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ABBD42F42294576A2302E8E1A0731E2;// 0x1210(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9D6D2A0A4EBA457EABD98ABA9F205D14;// 0x1260(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1BDFCD4948824F0AF59586A839009FC2;// 0x12B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69802CC94950DB04BD96968144C84FA8;// 0x1300(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A7276E10401CC4C9E0C416B7E4721236;// 0x1350(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCED4B3B4605CEBF70917E9ABCE6EF22;// 0x1440(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C14BD99441AEC0528E74229BEBD56024;// 0x1488(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_593CBC4C4825E74CBFC3C8868EB6C7E7;// 0x1578(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9B60EABC49DB5DB7D9F15CA461BE0A67;// 0x15C0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EE7EE9C04E6476C0A81B7B851D6CE59A;// 0x1748(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_897ECD86478DCB4710AF07A3748C6B3E;// 0x1790(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_933B383C4435BE79F970C5B3F376544E;// 0x17E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53F325824A4FE3CDC0DFE7B8B9B5DADA;// 0x1830(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79FB9DD744D3CBC508A75E93C5EB225D;// 0x1880(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6367BB85416006B9F192F5AA4C4E2AAB;// 0x18D0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82B6B2E84DE114FE9CB3C6B43902F68F;// 0x1920(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A960107B4AA337C2FBBFCE91CDEAD8C8;// 0x1970(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C5C6AA748648A45D4062A9F750B363A;// 0x19C0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9F11BFEE4FB77312218D8D932ABA15FE;// 0x1B20(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_A5A9B88649398CF398D62AAFA5FB8928;// 0x1B68(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_541D85C84137773A8D5C60A3AB0733AB;// 0x1BF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F9ABA8A462DDDAB7B69D2A528EF46A0;// 0x1C38(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EDBCD7964140E4ABBE7BDEAD4B0EC8E1;// 0x1D28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99D795D9479D74DF4359BFA6329BD3F2;// 0x1D70(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A63EC55E4FAE810E464269B07C8E89A4;// 0x1E60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E930A3F4A44550CDC5974AB0F221C6A;// 0x1EA8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03A0697C46FEC23F1FEAA092B2CBA44A;// 0x1F98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F8AE7C04063142CB79905A5546D54D3;// 0x1FE0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B042EDB47FB3CD4C1DEA589776E9156;// 0x2168(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB9E800A4515DFD9350EBCA88CE6DB5A;// 0x21B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F58F701E4DD0B084CFA028BCF3DD4EE4;// 0x2200(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7F9A43F45508C622912C2BAB008816D;// 0x2250(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2180483547E2DC04B9850183D90FE97B;// 0x22A0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B39E6EB542523DA6B509ADAFE132C340;// 0x22F0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DDEB3BC242FFDC3A8C5C81894DF8BBE0;// 0x2340(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09A861DB4B28A624C1C7EF861E764836;// 0x2390(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C83A0CC419A8A656A43C28F035CEDF4;// 0x23E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C84A24694FAFD817A6A87E85E0E2C4C6;// 0x2430(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_22DCEAB2454DB5A15983C98732AAACDF;// 0x2480(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6EA038494D6903CCFB146DA9EEA963E1;// 0x25C0(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BDFD8D8648C4C4ADBFC0408908438CE5;// 0x26B0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_143C825E408C7B6ED3B8919E46D4FC96;// 0x2810(0x0048)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_9E61A9D7441B614F552C21BEB0EBB348;// 0x2858(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6772A5C84912B5590C943188DD228446;// 0x2998(0x00F0)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_A165B4D54E6D6EACF72F25B9D9F11E89;// 0x2A88(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_71491AD040B01D55907C1CBB1835D421;// 0x2B10(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B93D2441454E83297BFD9C967C932949;// 0x2B58(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A588338F49B25A0A35A20099B8A2CF91;// 0x2CB8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93616FB648FCCA938814A8AAB97F8950;// 0x2D88(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2F8270BB47DAFFE8895FAA8AA1263890;// 0x2E78(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F78CD8AA4061719672DDB5AF4F243163;// 0x2EC0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D6DD9827452E43DCDF3A35BB6CFBFCA9;// 0x3020(0x0048)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_98019F0348F82B9FD10D7D823481074F;// 0x3068(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F42AFF947A9A1BFEC51BF8FB33D5F74;// 0x31A8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_259F1DD6480872859DB7E6B96C5D5927;// 0x3298(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5054B9E84F9CCA8E2331619EDC903B93;// 0x3388(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DA5DE0E14DE833DABBEE2EA670BEC3B2;// 0x33D0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5CA7D2E84E6FE9F0189ADEBD647A4DE6;// 0x3558(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C4265F384D6EE399576C129104FBA79E;// 0x35A0(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5112F5EF47B30F2D875480869FFBA03E;// 0x3728(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D8C35DD143A9A41CF93D77BC65750A37;// 0x3808(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12A81F5B44B8873DA1F392B1D6D9F509;// 0x3858(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x38A8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_39CEEF924E973C784E1827A02802160F;      // 0x38B0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EED1D8484F3CCC5B9F4AFBB3577EDEFD;// 0x3960(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25AFB2FA4CDCD8014B11EB89DA17487D;// 0x39B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95CE20394B694D0B6F85668D6E9357F6;// 0x3A00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D4F363549173D758C47D0AC26EA80C4;// 0x3A50(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D72D49734C78A445A7BDCFA8DA1215E8;// 0x3AA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92EE535D45E9C146C7EEDC836A6739C4;// 0x3AF0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F6886A94F7DB014A49DC193F3E033F6;// 0x3B40(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BA15F7C146EB746C87CE488DCB31CDB9;// 0x3C30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2021B6D54CA9C63407DAAC90C9AE05BB;// 0x3C78(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0EFB8D974D7223933B81B3A4F5C80986;// 0x3D68(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0266ED8A4EA385FD16A762BFF3A18274;// 0x3DB0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1FA7BEBC4B59C2084BDB859EEF6047FA;// 0x3F38(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8CF167B84BFC6B4F4915E1A782A42590;// 0x3F80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3A6004C4DB3EAB39C9D46AB82AA9DB5;// 0x3FD0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E26792D2425856783F8B528B8DB60BD6;// 0x4020(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD752DEE400605679EBE46AE51B601A1;// 0x4070(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A89E9B864FB10F7A53FB218C88785530;// 0x40C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_405C3FFC4887029593FD03A8F671A01A;// 0x4110(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A66EB8146150FB648EE0FA80D946289;// 0x4160(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7354C3AA4579BE75B563F6AF54C0B9CA;// 0x41B0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E9F1252B4BBE2AFD4E208F9FBB1D9A74;// 0x4200(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39DD73D94616B6590A504D9F1E48DC05;// 0x4360(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_70B6B4174E22E5BF4BE2FF8560238A9D;// 0x43A8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E053E0724497F08AD33E89AFA549BA5F;// 0x4430(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45F4E7A24E7F64B6478C949BDBC54362;// 0x4478(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_400A969E485589920FD792ACBC805832;// 0x4568(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_826FA37F44D8E601776D2689BA096A62;// 0x45B0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD96BC6E413F697D2616F797D8788F7E;// 0x46A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7CF2901840762C38A87BE3A29398FE37;// 0x46E8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EE74CB3849CA67D46487888B97812ADC;// 0x47D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FA3A88194236EFFB7641C39119E4750C;// 0x4820(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_016F8D7644D6C914359357AAD7C1B935;// 0x49A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B73DB004685DA8ABAE80BB1F4AD0041;// 0x49F0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_339568F7484D3D77E98F1C806F5D0F27;// 0x4A40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01BFEA3E4E4B2A5F41569BB0DB321725;// 0x4A90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB83E6454FF11D9C2E51F3B787824B90;// 0x4AE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36E26A8040E25462DE388382842D9F51;// 0x4B30(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C62A71BE45A1BDFD525DC0A1C219DA92;// 0x4B80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA6CAACE4AA978F3C20BD7855184242F;// 0x4BD0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2A183D994D3121BDEA4B66BB995CD358;// 0x4C20(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C89AF8804CF9159E34AD8FB471496DAB;// 0x4D80(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_852EC5064448646164018194568C66F1;// 0x4DC8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8D29D512484638979A42558E7871C9AC;// 0x4E50(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_8E9FF1A147AE7708C0ABD28C6C4EEA17;// 0x4E98(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_39ACFE2C4B58978FE034388C6ECEFF26;// 0x4F80(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CDE31994499C1F57EB3B6A8506C14836;// 0x50E0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6AA411DF47283951D1B260B0243E4FF6;// 0x5240(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A8C3F561402235CE0D83678C54C5E12B;// 0x5288(0x0160)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_829E1CA1401FADEEB9E204B7FF73A4ED;// 0x53E8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D735849E4BED509A536C67BCF39E06F7;// 0x54D0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_201249B6488402B1FD6249B1007A63AD;// 0x5630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_087C77BD4DC2461876F153B3BEA44807;// 0x5678(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_04AEAAB942C7285B32100EBB52D4489D;// 0x5768(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_89DF6B044D43E0CCA09496B83E97AFEB;// 0x57B0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_052FFF574F0B5DF2A4442CB2D0FA4F0E;// 0x5938(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_CEEE55AB422E9206152B31B7DF35EB01;// 0x5980(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B99C8C5643489F8DDFE6A3A634F13C2C;// 0x5B08(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E8695E634905C7A1F5AE1C90FCBFABC3;// 0x5BE8(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9B1E59E8472616708DF96CA1AD8FB68C;// 0x5D08(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32C34FB9405EFEE82719DD85C697B54B;// 0x5D58(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_333C21D4452D1D2B9B25E587439F0BC2;// 0x5DA8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9BDF040499E7B7D9AA29A98FC436516;// 0x5E88(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E549ACA74BB7AAB7F930DFA7A5609C06;// 0x5ED8(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x5F28(0x0008) MISSED OFFSET
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_CF6101C0466DF2CB708FBB8753C540C0;  // 0x5F30(0x08B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A9F10D44020DE760C9997983893D372;// 0x67E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E9DEE3741ADFF0F503194819A7C36A2;// 0x6830(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B9FDE5CE4966C597E2BB339A0B8034FC;// 0x6880(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FC2D6CC4CE8577E22F29093FE48B488;// 0x68D0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26DE43744FB69B2524B16D8D7784F7FB;// 0x6920(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D6DA9384EA063DEC074AB96EA8C88D0;// 0x6970(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0022729468AA7FCF013BCA52820450C;// 0x69C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57C527494BC4C4EF8AC897B6C959DEB1;// 0x6A10(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B96543A4896A133EE327EB34BD347ED;// 0x6A60(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_114945004E96EA766F35A0BCD63B5E81;// 0x6B50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08F2F95A4FA15D0AF835868E61E3FF82;// 0x6B98(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_40207E054F5B8F3A3B9047B97ECD4812;// 0x6C88(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A63EFF724121E1F39F21FF914ACCC175;// 0x6CD0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DC0FAD5A42DC67DE4921AC91D39300FD;// 0x6E58(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_02F1AEFD42F3C051AFA580B6ADF8C9D0;// 0x6EA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE39EC6B47D699E10EB58CB08765C147;// 0x6EF0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FEF5C31040C0E72C3F44E39B3AC859E8;// 0x6F40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CE6C55644754955118B5BA413F10943;// 0x6F90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8801EFE4A23D483FAA583B9A629E8D7;// 0x6FE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1614A3A2484202141C305A83F129B0E4;// 0x7030(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_75C0F7364FA89E0EC2C0409C09E1FE67;// 0x7080(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_07C72B4F49D9F7EE871C308C53CC2CB4;// 0x71E0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E03D322847F0E8AF7F50C9B1EF6985CF;// 0x7228(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80C713ED4F599D423B413DAA2B7CBE5B;// 0x7388(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_1E0B0D0444AF938B9D1E86801991A108;// 0x73D0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D2BE4DA042A5CB6B7E8C0EBD54560E58;// 0x7458(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF3A57524490E3B926AAF780597F3E38;// 0x74A0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_978698504D3EA9A2FBC366A036847FBA;// 0x7590(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A576C38144D3B2027280BFB25E19C875;// 0x75D8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2A13D0A14173322D4F8F0B96FD575C6B;// 0x7760(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61C317C34AAC7667DCEA579D08624802;// 0x77A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_245B44214984F758C36605ACCE33171E;// 0x77F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D2DEF144B84930F796FDEBB71B40A4D;// 0x7848(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18BAF2CD4D72CC44523B14B9FB999A8A;// 0x7898(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A6731C1405CC5D148EF2CBA23E2F72B;// 0x78E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53327C6B485AC252BF3098B860BF56B1;// 0x7938(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CD7FC5248E7F8AF28BF7B86DC6B7CEB;// 0x7988(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1350FDE2464B40AA3CE9E6AD331C44D3;// 0x79D8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_12A5C74F4797361A6DD4D4BBD40A01CA;// 0x7B38(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_332AB1F04576338D19C3D6AEEFF6CC7A;// 0x7B80(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B09A5B65451F56C8D3120887183822E2;// 0x7C08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_206F39F546845592593DC6BFBD6CF283;// 0x7C50(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_065890E34EA0D07FE58157A4473E3BFB;// 0x7D40(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_CF12ABD6476FB4F73BA68C88B610BF52;// 0x7D88(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D91DA144F2F9135AF70D6889815BA3C;// 0x7E70(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85584A97495EB17DB5D2C888D2F9915E;// 0x7F60(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD529EEA4CA74020DE509D8F6F355DE3;// 0x8050(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6BB87C9A4E55F30C5FA67E891F9B97AF;// 0x8098(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_29511749458000E6389EB48F5DA5535B;// 0x8188(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1970289848C4450DE0A81DB9DE90BCEB;// 0x81D0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBB1F8B94EAE527C7699C29B719B4D6C;// 0x8358(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64D09D034906C866539E188AA450FAA4;// 0x83A0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9283A265419CA511019EEC85A13300AC;// 0x83F0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B7136454A4B1AEC76FF18AAC8CFC2A2;// 0x8440(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15B8953848A3CEC15CC1D08F72EC5C25;// 0x8490(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2CA88595412AF47FF8A60AA780C68E7E;// 0x84E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EADCED3F47183C4E9A90FB855597C7AF;// 0x8530(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2428DBDF4EA225C5E58807B521E46A0F;// 0x8580(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0D20CEC54B313B6604A083AE8511B64F;// 0x85D0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D7F6F4514AA6F4231FA7BF917054ABB4;// 0x8730(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_7658C01E4B8C0911FD00EB90B350D1B4;// 0x8778(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EC2B54DE42C90D7881C9BA9BD0CB071E;// 0x8800(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_8EF6CEF14CFA5CF375435D9E2FD4F554;// 0x8848(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_27BA5AC544E3B3773126AFB6C6CD11A1;// 0x8930(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9A284D5842F596B3B868AD895E761E2B;// 0x8A90(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_58EBC910453CEBD80C7F879A59E0D0AE;// 0x8BF0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8A5B14E9466C2ACB7C2789BDB16B5681;// 0x8C38(0x0160)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_F440A29449BD6F71034B79BA5CA356A7;// 0x8D98(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B4BFCA0440F1A8A078230A9CD769B441;// 0x8E80(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_90135D3D47248826954D89B87D511917;// 0x8FE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE5ECB3B4BC6F8D84D5C90A089474959;// 0x9028(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_55D5335C4B52AFEFADDFD49319DD539B;// 0x9118(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_50ED230444DC15996427699D8F790F99;// 0x9160(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C77B12FE48610EEF7F42DBA2E52BD878;// 0x92E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FDF518F647F4010A108F409FB0A18340;// 0x9330(0x0188)
	unsigned char                                      UnknownData02[0x8];                                       // 0x94B8(0x0008) MISSED OFFSET
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_8AEF3C484C0F4061695969B5ABC62193; // 0x94C0(0x02D0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D6537B5D46BDD046DBAF69812F77A0EA;// 0x9790(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BFDABCA74F3DE7E3BA1DA2B2CBFF8267;// 0x97E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A8249424A00800E1C7B9CAB5734498B;// 0x9830(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F83D08C477626516EFF42847167FEF0;// 0x9880(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CD22AEFE41B10F5E096CE7A57BA6CBB1;// 0x9970(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1EC8F0494B862AEBD9E69FBAEFC0620C;// 0x99B8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5346B45D47F04991EF59C7BED8E478FF;// 0x9AA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_04298F9C4209545417D1BEB95DCA2952;// 0x9AF0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_17685F8B46EB8BFD0452C1AD77221D01;// 0x9C78(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E8DD4F345A83C4B36ED28BF54137FF6;// 0x9CC0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6BBA10FF4B229A4CA7CBB786F17EFEB6;// 0x9D10(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0F0E00844705C74D14820CBBF0056DBC;// 0x9D60(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54342B9146C440F7824B8BA48380B586;// 0x9DB0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E622A8F141C1580F6BD9879A4319DBF9;// 0x9E00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F60B3EEB489272E68D1A3291AD173B6D;// 0x9E50(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E84A72C45F932363C5EB7A79409B7D1;// 0x9EA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DE2742145EA4EDDE10997B12DC6E404;// 0x9EF0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A6FD28194CEC9457479CAC9D111E9AAF;// 0x9F40(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DB1BA4464033C56572C6CBADC3370990;// 0xA0A0(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_47B89BC141CB2200F83FF48DB472E8E5;// 0xA0E8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A4FC6D8D40273F6C566869B1B73704E2;// 0xA170(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3E9D747443418DD386C7B7AC78121E1C;// 0xA1B8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA0F9D644617AA9B50C87782618C8F94;// 0xA318(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4BB55DF94ABB82D4A4D0BE948093BA67;// 0xA360(0x0160)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_7CAFA5D046E7C56FF001AD9D1710C834;// 0xA4C0(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5AB9C6D94F5E5794A5607EB181329261;// 0xA5A8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A262F0E14AB79129DAE62A919B2265D3;// 0xA698(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2C5EFE040D75019C70EBAA8EA9CC1CB;// 0xA6E0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D4B186194E9C2B94C80D8291600D4DA9;// 0xA7D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E7A712FF4B5EB1EBD76E399C1FC3386F;// 0xA818(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_516EAF5C487A044EAE46DE93EADA5FF8;// 0xA9A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A077C78C47E99D105B6183A1813B3028;// 0xA9E8(0x0188)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C04EE7F5489F3811355F52A5A66F50BA;// 0xAB70(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EE163B93411988ADCB47C1A8D71D635B;// 0xAC50(0x0048)
	struct FGbxAnimNode_ApplyBoneModifyProfile         GbxAnimGraphNode_ApplyBoneModifyProfile_305E56E540400874392B8FAE8531BBA5;// 0xAC98(0x0180)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_30EA1E014CAB2A4BDBAB33999AD74E6C;// 0xAE18(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_97B0B9354AFC4CC1F22B3B9DCA3DBADD;// 0xAEF8(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_34A0BE0C4CAA0B454575709B0FB1D047;// 0xAF78(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_22843C894F8D3CB45A4C5290E2770F22;// 0xAFF8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8679E3D4453C234E779506BFAE7781D6;// 0xB0D8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_293D512E40C4F1D3F594CB99E8D19AE9;// 0xB1B8(0x00F0)
	unsigned char                                      UnknownData03[0x8];                                       // 0xB2A8(0x0008) MISSED OFFSET
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_4A5FD51145CC26039219AC8B23FE649F; // 0xB2B0(0x0370)
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_41C6DF2A4EFBCF9991B3FC8C705F5D17; // 0xB620(0x0370)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CCD97A8E4BEEBA7ECC2840A1AE2986F7;// 0xB990(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5682268D482B460FB16AAC89E4F20976;// 0xBAB0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FF40C2F34453E5A645D9728A57FC6D1D;// 0xBB00(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C02CE4A84A8C4455679EF597A43AD87A;// 0xBB50(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7819247C4AFAE0F69A2DFAADA0062155;// 0xBBA0(0x0050)
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_B0F68C9E4E472967BD71308F92DBCD16;// 0xBBF0(0x0730)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_64FDE9044E7AC27F27D14881B0BC6134;// 0xC320(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8F3DD3B644ABB7E39C69488EE2504E25;// 0xC440(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CB7443D94EB256571E5D4B8857BF4198;// 0xC560(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_826AB8524FE29A3862F184A5CDA98413;// 0xC5B0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F5D8BB24828D8BAA75F018FE886BF6B;// 0xC690(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D13DDBA243934BDAB1E0A9BE8B568651;// 0xC6E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6287ECD94906D4880B9A448BF4DEC303;// 0xC730(0x0050)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_9B7202714C177F0A81C4C28FDAE6C85C;// 0xC780(0x0068)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_89B685324F1ABD657238A8B640CE3590;// 0xC7E8(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C66B809640D82AE27131A28213907EF9;// 0xC850(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C94AB144581C2EF180575B83BF0CB39;// 0xC930(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B80D9344A55859978AA1FAA1675E47B;// 0xC980(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_572A6CAE49BE770735358688C6C4EC17;// 0xC9D0(0x0140)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0C7888A6464858328599588FB7BDFE05;// 0xCB10(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7BCCC68A420D2C3AC6D70BAA69846CD2;// 0xCB90(0x0120)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_FEFAF0A043346AA8EC27138DDA7D2617;// 0xCCB0(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_83FDC7C44B0430810252359EF37E8A83;// 0xCDF0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B6E166E419CBEEEC158F8814CCE94FC;// 0xCE40(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D82FEC5E4B69910852616D83D5F50561;// 0xCE90(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_84F010A04A84C1D6612D3BB193728EA5;// 0xCF70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CF22BE2E4E2F77BBE31008888B5305D4;// 0xCFC0(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_00E79A0B483E3A94B84EDF92398FE43C;// 0xD010(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48AC1C2F4FCE1AAD4FCC219D7CEDB7B4;// 0xD150(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E085050E4951B0BADFCA39AA8C87B7FE;// 0xD1A0(0x0120)
	TEnumAsByte<ETinkVariations>                       EnemyVariant;                                             // 0xD2C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasWeaponPoses;                                           // 0xD2C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0xD2C2(0x0002) MISSED OFFSET
	float                                              fHasWeaponPoses;                                          // 0xD2C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentWeaponManufacturer;                                // 0xD2C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponType;                                               // 0xD2CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAStruct_Generic_WeaponAnimContainer        WeaponPoses;                                              // 0xD2D0(0x0A20) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOakWeapon*                                  BaseWeapon;                                               // 0xDCF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightGrip;                                                // 0xDCF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftGrip;                                                 // 0xDD00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponPose;                                               // 0xDD08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               LiveWeaponPoses;                                          // 0xDD10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InCrouchStance;                                           // 0xDD20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCombatStance;                                           // 0xDD21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InNinjaStance;                                            // 0xDD22(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Crazy_Run;                                                // 0xDD23(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               InPassiveStance;                                          // 0xDD24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Tink.BPAnim_Tink_C");
		return ptr;
	}


	void CalculateWeaponHoldData(class AWeapon* NewWeapon, class AWeapon* PrevWeapon);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_2A183D994D3121BDEA4B66BB995CD358();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_DA6CAACE4AA978F3C20BD7855184242F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_B9FDE5CE4966C597E2BB339A0B8034FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_C62A71BE45A1BDFD525DC0A1C219DA92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_26DE43744FB69B2524B16D8D7784F7FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_01BFEA3E4E4B2A5F41569BB0DB321725();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_E0022729468AA7FCF013BCA52820450C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_57C527494BC4C4EF8AC897B6C959DEB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_826FA37F44D8E601776D2689BA096A62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_CE39EC6B47D699E10EB58CB08765C147();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_45F4E7A24E7F64B6478C949BDBC54362();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_75C0F7364FA89E0EC2C0409C09E1FE67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_E9F1252B4BBE2AFD4E208F9FBB1D9A74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_E03D322847F0E8AF7F50C9B1EF6985CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_7A66EB8146150FB648EE0FA80D946289();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_405C3FFC4887029593FD03A8F671A01A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_3D2DEF144B84930F796FDEBB71B40A4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_FD752DEE400605679EBE46AE51B601A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_18BAF2CD4D72CC44523B14B9FB999A8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_3A6731C1405CC5D148EF2CBA23E2F72B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_E26792D2425856783F8B528B8DB60BD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_1350FDE2464B40AA3CE9E6AD331C44D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_206F39F546845592593DC6BFBD6CF283();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_BlendListByFloatInRange_CF12ABD6476FB4F73BA68C88B610BF52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_3D91DA144F2F9135AF70D6889815BA3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_85584A97495EB17DB5D2C888D2F9915E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_92EE535D45E9C146C7EEDC836A6739C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_8D4F363549173D758C47D0AC26EA80C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_25AFB2FA4CDCD8014B11EB89DA17487D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_1B7136454A4B1AEC76FF18AAC8CFC2A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_EADCED3F47183C4E9A90FB855597C7AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_LayeredBoneSetBlend_98019F0348F82B9FD10D7D823481074F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_2428DBDF4EA225C5E58807B521E46A0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_0D20CEC54B313B6604A083AE8511B64F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_BlendListByFloatInRange_8EF6CEF14CFA5CF375435D9E2FD4F554();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_27BA5AC544E3B3773126AFB6C6CD11A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_9A284D5842F596B3B868AD895E761E2B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_F78CD8AA4061719672DDB5AF4F243163();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_8A5B14E9466C2ACB7C2789BDB16B5681();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_BlendListByFloatInRange_F440A29449BD6F71034B79BA5CA356A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_B4BFCA0440F1A8A078230A9CD769B441();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_93616FB648FCCA938814A8AAB97F8950();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendListByBool_A588338F49B25A0A35A20099B8A2CF91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_LookAt_8AEF3C484C0F4061695969B5ABC62193();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_B93D2441454E83297BFD9C967C932949();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_0A8249424A00800E1C7B9CAB5734498B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_LayeredBoneSetBlend_9E61A9D7441B614F552C21BEB0EBB348();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_0F0E00844705C74D14820CBBF0056DBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_54342B9146C440F7824B8BA48380B586();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_F60B3EEB489272E68D1A3291AD173B6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_BDFD8D8648C4C4ADBFC0408908438CE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_4E84A72C45F932363C5EB7A79409B7D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_LayeredBoneSetBlend_22DCEAB2454DB5A15983C98732AAACDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_A6FD28194CEC9457479CAC9D111E9AAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_3E9D747443418DD386C7B7AC78121E1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_C84A24694FAFD817A6A87E85E0E2C4C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_4BB55DF94ABB82D4A4D0BE948093BA67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_BlendListByFloatInRange_7CAFA5D046E7C56FF001AD9D1710C834();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_5AB9C6D94F5E5794A5607EB181329261();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_1C83A0CC419A8A656A43C28F035CEDF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_B39E6EB542523DA6B509ADAFE132C340();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendListByEnum_C04EE7F5489F3811355F52A5A66F50BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequenceEvaluator_97B0B9354AFC4CC1F22B3B9DCA3DBADD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequenceEvaluator_34A0BE0C4CAA0B454575709B0FB1D047();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_293D512E40C4F1D3F594CB99E8D19AE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_HandIK_4A5FD51145CC26039219AC8B23FE649F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_HandIK_41C6DF2A4EFBCF9991B3FC8C705F5D17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_LayeredBoneBlend_CCD97A8E4BEEBA7ECC2840A1AE2986F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TwoWayBlend_64FDE9044E7AC27F27D14881B0BC6134();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TwoWayBlend_7BCCC68A420D2C3AC6D70BAA69846CD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_LayeredBoneSetBlend_FEFAF0A043346AA8EC27138DDA7D2617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_LayeredBoneSetBlend_00E79A0B483E3A94B84EDF92398FE43C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TwoWayBlend_E085050E4951B0BADFCA39AA8C87B7FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_2180483547E2DC04B9850183D90FE97B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_E7F9A43F45508C622912C2BAB008816D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_D735849E4BED509A536C67BCF39E06F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_SequencePlayer_99D795D9479D74DF4359BFA6329BD3F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_4C5C6AA748648A45D4062A9F750B363A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_79FB9DD744D3CBC508A75E93C5EB225D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_BlendListByFloatInRange_829E1CA1401FADEEB9E204B7FF73A4ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_A8C3F561402235CE0D83678C54C5E12B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_GbxAnimGraphNode_BlendListByFloatInRange_8E9FF1A147AE7708C0ABD28C6C4EEA17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_69802CC94950DB04BD96968144C84FA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_9D6D2A0A4EBA457EABD98ABA9F205D14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_9ABBD42F42294576A2302E8E1A0731E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_TransitionResult_93A2FBAA4487E443A7EFDBAFDBB80E72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_39ACFE2C4B58978FE034388C6ECEFF26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_RotationOffsetBlendSpace_0C233222453FD684404CE9934A546A47();
	void ValidateAnimSetTags();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Tink_AnimGraphNode_BlendSpacePlayer_CDE31994499C1F57EB3B6A8506C14836();
	void CheckVariant();
	void OnWeaponChanged(class AWeapon** NewWeapon, class AWeapon** PrevWeapon);
	void OnStanceChanged();
	void OnAnimStyleChanged();
	void ExecuteUbergraph_BPAnim_Tink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
