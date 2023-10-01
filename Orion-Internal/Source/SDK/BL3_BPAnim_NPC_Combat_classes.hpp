#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_NPC_Combat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_NPC_Combat.BPAnim_NPC_Combat_C
// 0x101B0 (0x10CC0 - 0x0B10)
class UBPAnim_NPC_Combat_C : public UOakNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_14218861442A9C2E142104BE80BF9A61;      // 0x0B18(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_56BD48BF414DD7DD2AF7C7BCC6331E48;// 0x0B60(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71ABCD52478CC0C617FAE29867CBD433;// 0x0C40(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AC3BB6A54BEB327803636085879EC2A6;      // 0x0C90(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0457336E47446DAA43CD6BA3372CBF6B;// 0x0D40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3C2853A4414F27389BD979F5CA09F06;// 0x0D90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63AD012A46DCB09E34DD90AB8341BCF0;// 0x0DE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DAF393FF47238284D8FB9685DBCE1D72;// 0x0E30(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19E172EE47B4752C6029E3BE6A414039;// 0x0E80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_245E845E4B4E27AD0AC2C098AB9A8B87;// 0x0ED0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7693EC63424865FD0FA403963814B7CF;// 0x0F20(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0E397F445EC2815C1BE95B681BBDBD0;// 0x0F70(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01E290A6422322C2CD2D21B651A6B706;// 0x0FC0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E53C41A44BBE3F9BD7FBE59EB7387C5F;// 0x1010(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C407D88D482F692B398F3AA97D8E385A;// 0x1060(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3710AA8B4797CD94666BC39327376541;// 0x10B0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2E19F69404C9B2158EA27AF6B6B14D4;// 0x1100(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C85962AC471A689DD673CD956D1345CD;// 0x11F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79E8F6D9474E58411D02F6B656E9AC7C;// 0x1238(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59CADBA9440340095B0C6CB16709FA2A;// 0x1328(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9E1CACAF4C5A1070D1F39D92DACE8409;// 0x1370(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4A0718484177417AB310F6ACCD2C7163;// 0x14F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_068A88DD477DD144D5B158A796CF983F;// 0x1540(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6747120E4B5BD5596A94E1BA26F68CDA;// 0x1590(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33990E9C4A6B89825043BAA431A6278C;// 0x15E0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BEE8384C4A6DBE240A759DA293EF000A;// 0x1630(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4296C2184732CEB7D9817DB32C86C33D;// 0x1680(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F52366884C1D216A62D65CAC08F87B0D;// 0x16D0(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_AFE913B8461FB97AF2CE32AE7519D1DF;// 0x1720(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_41D83F4B44F42152FE730C96C26E3B4F;// 0x17A8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_65B1EA6C4FC7078445A0E09C2755B832;// 0x17F0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C37D76024913F752E30497B564B31C54;// 0x1950(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_857B95C84FBC22130E073393253F23FD;// 0x1998(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DDAACCC4C456641C70891A7D68DC53C;// 0x1A88(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38B0EB1941E3D15F5ED69195E761E5A3;// 0x1AD0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8D26632B4B61FC43F169B19FE0F02430;// 0x1BA0(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72031AEE4417D1CA75076EA40A31E990;// 0x1C90(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_77A1D4064E49C2F662BAED943246C37C;// 0x1D80(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DA718BE140D67390C709C1AC8E0AA60F;// 0x1DC8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_93386A5E48E0FF44264325A85A94FF4B;// 0x1F50(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99B2D6824F6E96DA8E12BFA6C586BA24;// 0x1F98(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_516C224D4DA624A3E20B62A0405D53DA;// 0x1FE8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E78B356E47CE9C65C3DA878BF1AFC197;// 0x2038(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2EECDDD049A889E8CD747D91D15FBCA3;// 0x2088(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEE9F9814619BEA65623ECAF500117C0;// 0x20D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE8FF1B448EFF4ED9D4D4388C93C5D84;// 0x2128(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68B4A3AE434061CB40233D993A073C2E;// 0x2178(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BE5BACC4E8C9EB37E10609C05A8FBF3;// 0x21C8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC1F233242526FCC892D309E861DFEF7;// 0x2218(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7EB82504391BF9010493CB5D56AA5E6;// 0x2268(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49ACADDB48471B2AD789E786E20F17AF;// 0x22B8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2B734DF541BEBDB64C4FEC918BEDD488;// 0x2308(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_764961794D4FD8970936F39F6151ABCC;// 0x2358(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61379945432AE191A9A451A9EC7F0F87;// 0x23A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_003CCC0C447848D321D1CDA8F909C651;// 0x23F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E5D60B6480DAB3D6A604BBF4195EB84;// 0x2448(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29A40E934E2BEBAD252084B9AC4455A9;// 0x2498(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD4F0B824DA0D3A257205F9DCF4A903A;// 0x24E8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8D44913440EE08AF96361865EF8318A;// 0x2538(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA1880A745910A4904D54AA65C21FBBB;// 0x2588(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A1FB8B24AB3668FD417368D70E91D84;// 0x25D8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1E7A47E458DB94620215FA4D42BEB59;// 0x2628(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A08F94E8426A4960F76FE58B8A2C532E;// 0x2678(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD0D91D24D460B17188B4F9D5B8A2BB1;// 0x2768(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15CC5E41419B34D3FC7594AFDC7C851B;// 0x27B0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4A5147DF4C7153EC74564CA30BC40A99;// 0x28A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C5A98ED14B72B3FAAEC66986393C9661;// 0x28E8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FB0E6BC8402C600842F47BA5D5A9FB6F;// 0x29D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71A5C7B64A96787877B4E298DD936F03;// 0x2A20(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8558587342B745C5101C89AC77364D85;// 0x2B10(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E6A389C48B287B3514013B66787FC65;// 0x2B58(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DF65C31D49DF49D194FC2FB5E6EA5700;// 0x2C48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17221710408D184F2CF0E6B0260B5283;// 0x2C90(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F86D3A6C46F3970DE527ED8C8A5EEFE4;// 0x2D80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F099650C47CB220DDDF761A272115AD9;// 0x2DC8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B675FD724BB11629C2066097B95DEE6D;// 0x2EB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E39B0C47472F24D06D3EF5AF9DDB31E7;// 0x2F00(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7794A6DB4971C0D93FB1B3882633CF60;// 0x2FF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_431F6C284CD0AC36446730B5EF581937;// 0x3038(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_44873A4F44ADE77BD9E92DB4D563569E;// 0x3128(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BC7BF3E94A82CC01A36693BBBC5909C8;// 0x3170(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2A78177848851A682439B6ADF2F4E03D;// 0x3260(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30188BCE45F1624953405AA47592C151;// 0x32A8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52CE4167470FA6BB88A0BC810E8F8D55;// 0x3398(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_647C26414016583310E461A737030608;// 0x33E0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_30C07C43484643972742EC8F449A538B;// 0x34D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B6CA7C94DB1736FD575529D0DA84918;// 0x3518(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_70E51CAF42EAFC536861B8925FACB6A2;// 0x3608(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB4077C84BBDFE0766FA3C81A03272CC;// 0x3650(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_71B6CBDC4692AE200D4EDC941572B5C4;// 0x3740(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6ACBB5A8408737BACD84BD857CA512B9;// 0x3788(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_08791B3B43D1B328F847B98023ED43F7;// 0x3878(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7FD63FE34AA7759D6FC35CA1F2388F81;// 0x38C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_71F7D36046DB13783DEFFDA9117081CE;// 0x39B0(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_E4BB1E6E407F803B1EF151A73C1ACA9A;// 0x39F8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BB8DE04B46198709A3DAB387A69EB7A5;// 0x3A80(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_34444FB64B50770245C9E5B4B601D335;// 0x3AC8(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EBC6FC0042A88E22A5A53D88715C860C;// 0x3C50(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AD5CDFB4AF9DD2379ECB2A669F26633;// 0x3C98(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53B62CFD43BF351E1CE3D58706A6D1B6;// 0x3CE8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D93562B4140B481AFFCBCB5C903EF58;// 0x3D38(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C8813A9B4409541684DDBFB145F4DD93;// 0x3D88(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DE5508B441E24252E871AD9C4B992673;// 0x3DD8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC8D990C47AEABA684A152BEDAE54712;// 0x3E28(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24B4DF634D92F8E143CD849A8F9E0E6B;// 0x3E78(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_A77AB5B74651B6740B5E88A79B066802;// 0x3EC8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_830099B944FA085424340799E0062495;// 0x3F50(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ABA744F84261441D737141A246800C5B;// 0x3F98(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0E0C74194A57C2261B770CA75453BD3A;// 0x40F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_133A361C4C08FFEC2E999297DBB5CC4F;// 0x4140(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B1F2DF834E4C6C907B0DAE880C6E1E17;// 0x4230(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24B2CBB64A4E436E2DBC058FE339F8CC;// 0x4278(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80E0B34B46E47BFE2EB08A88C204611B;// 0x4368(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BCA8BEB048D2A8693922A896FDA0E490;// 0x43B0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99634BF54B875F8FA52E90BF463B34A7;// 0x4510(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FDCD6E7B468574565DFEC39FDDB5D53E;// 0x4558(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF98768F46C6BEECC36CDD9C3777FBA2;// 0x46E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F03234ED4002CB4AC38357B6FB0942AF;// 0x4728(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_423200A64F5AE4B05864D9B8C45BC0AC;// 0x4778(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E170238A42F21DB1052B6BAF38AAC100;// 0x47C8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95FD8D57419016BAA21C13A7B9B3F220;// 0x4818(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DFFD26B44E1A08452FFB7B6CD34683F;// 0x4868(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A667CA16420083110F5C20AD7BEB68BB;// 0x48B8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C9C66AD4DFA762768F525859E896E4B;// 0x4908(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D736E044F7B77BD2CAB19847553E802;// 0x4958(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C429A5B945AAF982CB781C9DE590F457;// 0x49A8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20FB28844138433807B9C5A30433E084;// 0x49F8(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_662FF945488D7A56B3DC48A7E7BEB13C;// 0x4A48(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E09D3B3F454AB64996F2FC89B67BAA42;// 0x4A98(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_326E5F204CBFE69390ABF5999AC9C9A0;// 0x4AE8(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_A5A0C053464141F3E621B78A5CD75B60;// 0x4B38(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_582AF0FC4F4CE93C391D96BC025B46C5;// 0x4BC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DAECF1174E6E1272C16DB6A41F4D192E;// 0x4C08(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6218934E483F620F22C4B3B768873743;// 0x4CF8(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_E67F3502410278F97E59FEBEAB15EDEC;// 0x4D40(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A90AF2AD4610E332FC7E86817668EE7D;// 0x4DC8(0x0048)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_A2057E51463908AF7939798E11486031;// 0x4E10(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9188A76B4B363FBC265E79B7511CB5D0;// 0x4E98(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AB636831428D26CD20C8DB9C4CB253BF;// 0x4EE0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59CF2EA44F138B21A4F5DB9AC447EFBB;// 0x5040(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_759EF94344B661730D117D978E1E83DF;// 0x5088(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03F203484A6B4155287A28BE254ACB5E;// 0x5178(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C406B42B467AA7E53398ECA9425F2B5B;// 0x51C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5440CCF0451F16BC6FB6C68C3E9DE7CC;// 0x52B0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_01133BE04B7500B020C7898E7F8FDA5F;// 0x52F8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AA3B00D4470DAD09CB5AAF952CC317F0;// 0x5458(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B02575B247EC5D0EE12374BB6BB08689;// 0x54A0(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0ECA83C8440F6991ABB895A19F112473;// 0x5628(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A67A3284B8528BCC0D96B93B3E98FDC;// 0x5670(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A147D8A148E7DB8E3171A499AC7345F4;// 0x56C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7CDFE1E743C9AA647CD08497CCC6EA52;// 0x5710(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B339560C4D35B450BA3A0DB78EFA069E;// 0x5760(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88C97ADA4D545AFE43B325AFAD046EFD;// 0x57B0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8F56CDA4AF8B4297F768E88428AFAE3;// 0x5800(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0864FD4A4E3B3D02226D28ABC029FD76;// 0x5850(0x0050)
	struct FGbxAnimNode_AnimTable                      GbxAnimGraphNode_AnimTable_84BBA1D24E14523BEBBBE999C8979B1B;// 0x58A0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7CA81DB947564584F126A78D62CB7197;// 0x5928(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7AAD397B44308F4E181A7CA414DDAAF3;// 0x5970(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CC64004F4AD9977084CF5D88EBED1183;// 0x5AD0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A1C805534880D2B116A6CF9EAB622E4B;// 0x5B18(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_83E8DC934A38EC974CFF3083C3DCB588;// 0x5C78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1CACAE42499E730A9D971FBC695BCA93;// 0x5CC0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_164922BA4F6FFD10F68ED0A551BD6CFB;// 0x5DB0(0x0048)
	struct FGbxAnimNode_BlendListByFloatInRange        GbxAnimGraphNode_BlendListByFloatInRange_AE0357FE4B5A67F647D5B6A7ADCE08FC;// 0x5DF8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0BCE2F1C4F7EF59F670D92A02B56402B;// 0x5EE0(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F8374C8D48CD59AFD093EC84FA86575A;// 0x6040(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5BC328114A1ECFAA413AAE8F41DF5E72;// 0x61A0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D8CCBF704F712BD97788B395C3852D92;// 0x6270(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F1D1F0847996C5CB2E1F29C5C7E9A06;// 0x63D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BD71C821445A139930BCB98D23207C28;// 0x6418(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BAF103E545A14075E73C28A025BF6DA7;// 0x65A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E8BDB2224B34FC92EFE366A8977F17C5;// 0x65E8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0A53645E429B09EF5F0F8281056A9FF4;// 0x6770(0x00E0)
	struct FGbxAnimNode_LegIK                          GbxAnimGraphNode_LegIK_5C14D03747109971DB14E48B3F94CFB4;  // 0x6850(0x08B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_62841A2D4417BF51E0130D9AEBF0AB66;// 0x7100(0x0238)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8D9006AC454EEAF119D011A11D2305AC;// 0x7338(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x7388(0x0008) MISSED OFFSET
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_EBF37B294BAAC8332C7CF9ADAE522071; // 0x7390(0x02D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D71841364A88027569D509B8E292CACB;// 0x7660(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_398C12A9425AC52DE23EC19C02792873;// 0x7740(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7D489CE74A0C3ED50009D1B8F256CC11;// 0x7790(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2E786C5C4E8EF9B27A317A8438D346F4;      // 0x7870(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A1E487214A2A302EE8B3C59802E57B3E;// 0x7920(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC4BD54B4FC2AA0FE87112BAE364B660;// 0x7970(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88225AA4499C066AD6B73887CC9DA548;// 0x79C0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFE625C147DA86C80E666EA5F2185D8A;// 0x7A10(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0566684A431F655AB312BCAACA4D4189;// 0x7A60(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C5384954EBFB0537A0635847C8F9547;// 0x7AB0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBEFD49143DF0DB0B05AC7BA926267A0;// 0x7B00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_909F1C2540C75340BED9ACB533769A26;// 0x7B50(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E7E43614A3C4B76652190A1B80F07DD;// 0x7BA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14503E674059AA0AEA273AAD1BEDD03A;// 0x7BF0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_932461B44CEEBBD3737E9794E4E128C0;// 0x7C40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_496F8FED45DD1A09FE0A6DA787267261;// 0x7C90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E9C50524171AA3DC3F1728759AFAA6A;// 0x7CE0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_909677A64F4C820041FC1C86F7510705;// 0x7D30(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F15F2A2E4F0B63A0863CDB80AC5ACA76;// 0x7D80(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F72C256444BE4ACCC517E3B779289D6C;// 0x7DD0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21F75CCF4FE8F3DFDF8CBD82697634D5;// 0x7E20(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C374FD8A46571BD741D1C7833D5C7767;// 0x7E70(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_73F9059347DD790B2EF77BA4B95F1651;// 0x7F60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F97E808D4E402708ABDC9BB060342184;// 0x7FA8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_126B08B048594D96971A07A9EF89EDB0;// 0x8098(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F69BF3C4AD31F33962F1A8A7DDFB10D;// 0x80E0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3A26B8B749D24BBB01DECE93AE32FFB3;// 0x81D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B70DEE943BCC2D431F8149FBCCC035E;// 0x8218(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_912157094988A92EA10911880BE8040C;// 0x8308(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9FB836DF4B0A4E88AA50BCA98C80A8D0;// 0x8350(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91EF89FC41DC6AE9C4EFD6ADCB235B72;// 0x8440(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90EBF3E74EEC5C5675E97CA14ADF5BB0;// 0x8488(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D6E174EF44C68440FC3FB982DB05A7F3;// 0x8578(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3C8203D2400B4BF6A51322B94049809B;// 0x85C0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9FB78399406165D23FCED5A3E448651B;// 0x86B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8EE4A1C4D72165161EE40844FB35A3F;// 0x86F8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3E4C7DB2445AE762DD464B929D8B6CBC;// 0x87E8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8819FA8B43CBF699AA59E19F234AFA4B;// 0x8830(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EE8473D341EA270823CF7380457474F7;// 0x8880(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C54DC15E444425776A06F1A460B3173D;// 0x88C8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_422819774B0E1D4267A01C9316F17C47;// 0x89B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F8F6E10435A5D55F7A11A9B1FCC733A;// 0x8A00(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B0042549402AA87576BAB68482DF1250;// 0x8AF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C0ECC074AC41BFA97261791C068F1D8;// 0x8B38(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BB87409F4E84977CEE208E83679898AB;// 0x8C28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9BEB8DA745B12E89AEB7529A4BF9834E;// 0x8C70(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FA81C6144E3C4F7C55E7D7B43C0D40BA;// 0x8D60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9C4CDBB34FB02EAF5D03AEABB4C6A776;// 0x8DA8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_831E8106443E468569B0F2976E1B0DFE;// 0x8F30(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88D049504441BDE7A4A3FB967DF61F2C;// 0x9010(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7C6C58054CC045235387C882CB4FD86A;// 0x9060(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_375FA1FC4688BE41C1FFD98622EF3778;// 0x90B0(0x00E0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3317AC3F448872119E41FAB7DB9F8890;// 0x9190(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7C10D3844B88DE0D41A2008A0BF95F93;// 0x9210(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6E1FA7114B50360DB5F8CAAC3494076F;// 0x9290(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_42F29D6B4057B7F0AA3607814A92EE74;// 0x9370(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D30473D6407A3D9A382AB19029F89C5D;// 0x9450(0x00F0)
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_44C1C6FE429AC227E36854BCEFB982A7; // 0x9540(0x0370)
	struct FGbxAnimNode_HandIK                         GbxAnimGraphNode_HandIK_0F99ED6642B2FD721E609D9F669A66D1; // 0x98B0(0x0370)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6564590549621A4901EA98A1E8508590;// 0x9C20(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B5EED59E406F397D3E74229D6360CB2F;// 0x9C70(0x0050)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_73EE1E2C4C46FA7298C809A0832EBE0C;// 0x9CC0(0x00D0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_94284E5A48661555BA1F089C3C0BA43C;// 0x9D90(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B6B3FB6948E5594DC828308D7FEB70EB;// 0x9E08(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_683CB6BD48BC5C4586562B8B9DDB9869;// 0x9E88(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_0FB43D5246582B805550E3B89395354E;// 0x9F08(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7D756AAE40235B81DCBCEFB8A3015D58;// 0x9F80(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_28BDE25D435F603AAB0D9A965AFD77D6;// 0xA000(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2FE1099B44F968E9001A9FB7377BCA3C;// 0xA078(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_327DB16843BA38CFC9AFC8B33B223A70;// 0xA168(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AF7146A945F969F628B9A694C8A64B28;// 0xA1E0(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62154AF546D8B3DFE960E39D0293F6B1;// 0xA260(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0E7E80C643C35B0ED7BF9D86A394E1C7;// 0xA2A8(0x0188)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_422DCDB642B6D0302F9D52809E925737;// 0xA430(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8F1B0DEB45E52E4C8A531FB4B5FA6AFD;// 0xA4A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46785A8A4EC6CCB501489DA2F652C1CC;// 0xA528(0x00F0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_234D1AB54BFAD9B15411D9A89A72910B;// 0xA618(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4D76F5A642AC493435D14784B9E3BFD5;// 0xA698(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4C47B47C4A67CE6EA8B2CAA4ACF7BB9A;// 0xA710(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_C240AF734AA0F5481A5837AE75F78E69;// 0xA790(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20C45668454F4DF0B3F3A991D8B4B74A;// 0xA808(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_BD76D0D9420021BF5406A4B089E009B3;// 0xA8F8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E3BC2E7A4E4A2CAB3510DA9D7821A0BF;// 0xA970(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AA98690C49200C85E09F599036E992CB;// 0xA9B8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_93B5B0AF47E0CBC5C409448EB4576094;      // 0xAB40(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_CBE9D1FE478AD7449E8F6FAE7AE19DB7;// 0xABF0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FF118CD34C630EE0A5318BB26658EDCC;// 0xAD10(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5725DAB54F741B6B9EB2D5831B73DA54;// 0xADF0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5691B17E4438EE03D483FA8A729DC256;// 0xAE40(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F6FF3B7241E9A9BED61C699209C076A4;// 0xAE90(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_ECDECBB64A4DA8157D2FDFABC6E5A1AA;// 0xAF10(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_F12F4FF9494B9815A320C6AD5EBD79A1;// 0xAF90(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_F874606C4AC8DA67503B6BB36CB16B64;// 0xB008(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_7C2C1C6C4B95349B5C2EBD9AD27FE297;// 0xB080(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C288A95B420567C32B64FC8C55F7F00C;// 0xB0F8(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_452704864EEEC66D1313F08AE70002BA;// 0xB178(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DB3B9C9E45A41654B9748D9D3D23FC5C;// 0xB1C8(0x00E0)
	unsigned char                                      UnknownData01[0x8];                                       // 0xB2A8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_013201954EF7BE8F5B9C7EAC13813905;      // 0xB2B0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_491F861648FCDBDC660B81AAC36508B4;// 0xB360(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3416B2CB419CDFDD955306A6FB00AD69;// 0xB440(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1079326E41C2AB7A042B78A9F6CF01F2;// 0xB510(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28EF73A447A90311167DF48413EDC7DB;// 0xB560(0x0050)
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_383596D14CD141046D0878821652AE7C;// 0xB5B0(0x0730)
	struct FAnimNode_BlendFaceFXAnimation              AnimGraphNode_BlendFaceFXAnimation_8961132C42ABC58B3907D1BE3F6CF5DF;// 0xBCE0(0x0088)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_27FAF6744E277927338A5F9B680EB36D;// 0xBD68(0x0048)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_F964CEA747AEC1112F3F5B885FC660B9;// 0xBDB0(0x0140)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_397CA0C34FE6F3F042063FB7C86A9005;// 0xBEF0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B17EC2334FACB2238FD657B7C539F0A0;// 0xBFC0(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63A34EBE437C7C7EE5ACD0A660F90FD5;// 0xC0B0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4EB7924946B94CC199F25FAA15827304;// 0xC180(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_618F1B784BF83E752830A08C691C8FB3;// 0xC270(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4689DABF4A45FC9BA9CD6C889BE6DA91;// 0xC360(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_515C700147012440D7DCB38C493E4D3A;// 0xC3D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F0740C448BC04926448819A65E89F78;// 0xC420(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_679CF2584DE8DD223801A6837CD50E8D;// 0xC5A8(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F3D377424561B594B857F5A8B81487B3;// 0xC5F8(0x0120)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11EC9D4544D601252F2C1CA31222B915;// 0xC718(0x0120)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3C957E149F6241B1621729309083059;// 0xC838(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1FD18F524FDEF65F61F005A9395BE882;// 0xC888(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F0FCD1EC4FF93F91B5BB1DBED29317F3;// 0xC8D8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED4682FF4BD2B725340E79B7D78A751A;// 0xC928(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FFFBD7C54A5F78453DFF078184A6C0EE;// 0xCA18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81A04E7C45F72DD4B45305AF19B08D5D;// 0xCA60(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2FC92541491E72666E1D5B8959985670;// 0xCB50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48337BF24CB0AC32E73145A47C213FF6;// 0xCB98(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A7BAFD149F205E0E693C4919BD93FE1;// 0xCC88(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6E80273A4445E56A717236B3D56C202E;// 0xCCD0(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BF10C44E407A42596BB8519F8AC4A924;// 0xCE58(0x00E0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_063BC2674B8DEB2BF3B83EB9723AA31F;// 0xCF38(0x0120)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72E119154CDF55A75B1DBBB4F90E0B9B;// 0xD058(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B46C93264B07D67A14D26FA70D66A5C4;// 0xD0A8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D384533045779E26C187DB8194719D5B;// 0xD0F8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF7EABF94118831B750320B3872330EA;// 0xD1E8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DA6A62E44E1F94926F238B8844E6E7AA;// 0xD230(0x0050)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_32B37ED048B284C1CA6E1C9E6A84C469;// 0xD280(0x00F8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BC95823C4AD3869E60897C8BA0A69DEF;// 0xD378(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_86C5684049A807D65624099A37BA516B;// 0xD3C0(0x0188)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1543F7C142AE840E1566F6BD88ED538D;// 0xD548(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ADED79E6425A83EF65B177B8F63691D2;// 0xD590(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_E96FA23B4CD789EDEC1A39988CB4B78B;// 0xD5E0(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_890F0DB74C529B67BA4AF5B7CEFD0357;// 0xD720(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_81F17DEB49D167D0860523B5DD4EE0AE;// 0xD770(0x0140)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4EED26F84C5EE2C8C2F3C7876C65F105;      // 0xD8B0(0x00B0)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_057CEB8D4C331CAC27D83B90EDB1AC1B;// 0xD960(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A7D22A644CDF6B0B5D58F586987D8875;// 0xD9C8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DDBC30D64389619551B39C9A414C7B84;// 0xDAA8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10484D2F407C03BA160CBD8E1DD3AC99;// 0xDAF8(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FD4C1AF448627A79F6BA6AB12C56EFDF;// 0xDBD8(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F9C55F37424BCB66C38EC794A2093A03;// 0xDC10(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_1B53D76244C67F95CCBA699FC784BEF4;// 0xDC48(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_52E2563F41D1E6A7137456B70CDD56BF;// 0xDD68(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F60EA054C6A4650343A2B8F229B55DB;// 0xDE48(0x0050)
	struct FGbxAnimNode_BlendTwoPosesPerBone           GbxAnimGraphNode_BlendTwoPosesPerBone_5AC2994A47EBFFA5BF6E1CB59F2BE4DC;// 0xDE98(0x00F0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A627E0DE48F569FA49D39D92553D82FA;// 0xDF88(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A43F4DE1459AFB3148160DB53F09E554;// 0xDFD8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37855E22448C69FA04E326AE115F2F67;// 0xE028(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A67C593943460B040BBC11AC59096CEA;// 0xE078(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F52A41C643FCF85AFC3E5183A5E00080;// 0xE158(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AEA8481E487D62FDD54601B48892F10A;// 0xE1A8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87A7672140762A3D86B9168F1F8C74E8;// 0xE1F8(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63217988425C3808BF773EA7CF1BC81E;// 0xE2E8(0x00D0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_1E5DB03C44D4BC769909B4947EC827E8;// 0xE3B8(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BD31A1B544F2143A45C8BFBD86E3CE45;// 0xE430(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75B5367F4C5DAFE0D845548D6C79EF95;// 0xE4B0(0x00F0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B8CADBD0408C57975477A9802BB26116;// 0xE5A0(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_5C70BB9F43E783072B9E8F994E0786EF;// 0xE620(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F719DCD74B32BB5E710E809D93AF0A39;// 0xE698(0x0080)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_CD23AF9046F039287E5F2CAF48FDEDBC;// 0xE718(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E2CA68A487D53930C73F1BE09A85946;// 0xE790(0x00F0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_A99D72864F99BE26D7B598A769866B3A;// 0xE880(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C45FE64B460B124C7107A49F01DF30B7;// 0xE8F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_64D354E6414E79C32CCEAA9F6C20E321;// 0xE940(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0BC1137440824EDD5022AA20471BA3F;// 0xEAC8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3EA5799D4F7DA678612DEB844120B2D5;// 0xEBB8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B0E9F63D4BEF0E3B5C4AF9865AD852A5;// 0xEC00(0x0188)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2583F66344AB74E74B0297B1134CD861;// 0xED88(0x0120)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_496E8D474062D84667D4B38F65709F85;// 0xEEA8(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FFE95E3A44499B67E8239DAE8DE8F306;// 0xEFC8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FB969A8B49E40C7C68CF96A4C9FCFD73;// 0xF018(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DBA949184A3C683F2147E78F3F9B4D8B;// 0xF138(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C6FBCBC1425673660DDD4CAED7F74C69;// 0xF218(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B7A7EBB147B56C4A277AA789581CD26E;// 0xF268(0x0120)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_FBC8952D468FEC65C248479744E196EB;// 0xF388(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B45633CF42A20ADC17CAFDA99F9E29F3;// 0xF480(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3C8DA84146271A6F9B8D02B4133418A1;// 0xF4D0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4B7D8B1744645D64B7616B91A20FA86A;      // 0xF520(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_62EBAA934B36A3CC5D5B899662EE5F70;// 0xF5D0(0x0198)
	unsigned char                                      UnknownData02[0x8];                                       // 0xF768(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8844BBFA4D6857F6C566D7BEA6D69CC5;      // 0xF770(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_95D4700B4EAAD735C1F4ECA047577266;// 0xF820(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_D3ADD7374367A77E96AC98AC13BA750F;// 0xF870(0x0140)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_66D10EFA4D1A10955C1CC9AC1360F065;// 0xF9B0(0x00E0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_1199F9634D9A96C3240BDF8CA89FD1ED;// 0xFA90(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A4A468EB42D6AC161617C684C438921E;// 0xFBB0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40B732C44963544A20B1D6B4F2C7A66D;// 0xFC00(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_148A31824FF8597DE27EED9DCF75CA45;// 0xFC50(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_FFD276B847BD670FCE9F27A976830B7A;// 0xFCA0(0x0120)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_6561733F45006BD122AFF7BC337ADB19;// 0xFDC0(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F173E75A424703A61FD0ECBB35EA00F3;// 0xFF00(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AEDEBFAF43581AC5F117C3827AF8D66D;// 0xFF50(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B210169B46F0993C4FB3E091EBF58A49;// 0x10030(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ACB6E26F40508930C6303B9523853419;// 0x10080(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_C45220514FBC8B3A79310489739E66D7;// 0x100D0(0x0120)
	class AOakCharacter*                               Character;                                                // 0x101F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxMoveComp;                                              // 0x101F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UOakCharacterMovementComponent*              OakMoveComp;                                              // 0x10200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Give;                                                     // 0x10208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Take;                                                     // 0x10209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InAlert;                                                  // 0x1020A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x1020B(0x0005) MISSED OFFSET
	struct FName                                       PassiveIdle;                                              // 0x10210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInjured;                                                // 0x10218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomInjuredVar;                                         // 0x10219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1021A(0x0002) MISSED OFFSET
	float                                              FaceEmoteWeight;                                          // 0x1021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fHasWeaponPoses;                                          // 0x10220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x10224(0x0004) MISSED OFFSET
	TArray<struct FName>                               LiveWeaponPoses;                                          // 0x10228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SingleWeaponUser;                                         // 0x10238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasWeaponPoses;                                           // 0x10239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x1023A(0x0006) MISSED OFFSET
	struct FName                                       SingleWeaponRightGripPose;                                // 0x10240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakWeapon*                                  BaseWeapon;                                               // 0x10248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ForeGripType;                                             // 0x10250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GripType;                                                 // 0x10254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UManufacturerData*                           Manufacturer;                                             // 0x10258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAStruct_Generic_WeaponAnimContainer        WeaponPoses;                                              // 0x10260(0x0A20) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentWeaponManufacturer;                                // 0x10C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponType;                                               // 0x10C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Combat_Sprint_Blendspace;                             // 0x10C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFacePoses;                                             // 0x10C89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Give_Alt;                                                 // 0x10C8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Take_Alt;                                                 // 0x10C8B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x10C8C(0x0004) MISSED OFFSET
	struct FName                                       Right_Grip;                                               // 0x10C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Left_Grip;                                                // 0x10C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AdditiveWeaponPose;                                       // 0x10CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Default;                                     // 0x10CA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Confident;                                   // 0x10CA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Sad;                                         // 0x10CAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostureState_Tense;                                       // 0x10CAB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_AnimPostures>                     Posture;                                                  // 0x10CAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFallAnims;                                             // 0x10CAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCombat;                                                 // 0x10CAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InPassive;                                                // 0x10CAF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SingleWeapon_LeftGripPose;                                // 0x10CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLazyEye;                                               // 0x10CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x10CB9(0x0003) MISSED OFFSET
	float                                              GlobalEmoteWeightModifier;                                // 0x10CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_NPC_Combat.BPAnim_NPC_Combat_C");
		return ptr;
	}


	void Sort_Posture_StateMachine_TransitionRules(TEnumAsByte<Enum_AnimPostures> Posture);
	void CalculateWeaponHoldData(class AWeapon* Weapon, class AWeapon* PreviousWeapon);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_F15F2A2E4F0B63A0863CDB80AC5ACA76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_DAECF1174E6E1272C16DB6A41F4D192E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_F72C256444BE4ACCC517E3B779289D6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_21F75CCF4FE8F3DFDF8CBD82697634D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_662FF945488D7A56B3DC48A7E7BEB13C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_909677A64F4C820041FC1C86F7510705();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_496F8FED45DD1A09FE0A6DA787267261();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_A667CA16420083110F5C20AD7BEB68BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_3317AC3F448872119E41FAB7DB9F8890();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_7C10D3844B88DE0D41A2008A0BF95F93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_D30473D6407A3D9A382AB19029F89C5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_GbxAnimGraphNode_HandIK_44C1C6FE429AC227E36854BCEFB982A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_GbxAnimGraphNode_HandIK_0F99ED6642B2FD721E609D9F669A66D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendListByInt_73EE1E2C4C46FA7298C809A0832EBE0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_B6B3FB6948E5594DC828308D7FEB70EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_683CB6BD48BC5C4586562B8B9DDB9869();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_7D756AAE40235B81DCBCEFB8A3015D58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_AF7146A945F969F628B9A694C8A64B28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_BCA8BEB048D2A8693922A896FDA0E490();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_133A361C4C08FFEC2E999297DBB5CC4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_ABA744F84261441D737141A246800C5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_8F1B0DEB45E52E4C8A531FB4B5FA6AFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_46785A8A4EC6CCB501489DA2F652C1CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_234D1AB54BFAD9B15411D9A89A72910B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_4C47B47C4A67CE6EA8B2CAA4ACF7BB9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_932461B44CEEBBD3737E9794E4E128C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_AB636831428D26CD20C8DB9C4CB253BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TwoWayBlend_CBE9D1FE478AD7449E8F6FAE7AE19DB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_F6FF3B7241E9A9BED61C699209C076A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_ECDECBB64A4DA8157D2FDFABC6E5A1AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_C288A95B420567C32B64FC8C55F7F00C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendListByBool_3416B2CB419CDFDD955306A6FB00AD69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_GbxAnimGraphNode_ForwardDynamics_383596D14CD141046D0878821652AE7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendFaceFXAnimation_8961132C42ABC58B3907D1BE3F6CF5DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendListByBool_397CA0C34FE6F3F042063FB7C86A9005();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendListByBool_63A34EBE437C7C7EE5ACD0A660F90FD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_BC8D990C47AEABA684A152BEDAE54712();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_C3C957E149F6241B1621729309083059();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_1FD18F524FDEF65F61F005A9395BE882();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_759EF94344B661730D117D978E1E83DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_F0FCD1EC4FF93F91B5BB1DBED29317F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_0C5384954EBFB0537A0635847C8F9547();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_DE5508B441E24252E871AD9C4B992673();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TwoWayBlend_063BC2674B8DEB2BF3B83EB9723AA31F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_B46C93264B07D67A14D26FA70D66A5C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_0D93562B4140B481AFFCBCB5C903EF58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_LayeredBoneSetBlend_E96FA23B4CD789EDEC1A39988CB4B78B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_LayeredBoneSetBlend_81F17DEB49D167D0860523B5DD4EE0AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TwoWayBlend_1B53D76244C67F95CCBA699FC784BEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_GbxAnimGraphNode_BlendTwoPosesPerBone_5AC2994A47EBFFA5BF6E1CB59F2BE4DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendListByBool_63217988425C3808BF773EA7CF1BC81E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_BD31A1B544F2143A45C8BFBD86E3CE45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_B8CADBD0408C57975477A9802BB26116();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequenceEvaluator_F719DCD74B32BB5E710E809D93AF0A39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_0566684A431F655AB312BCAACA4D4189();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_LayeredBoneBlend_2583F66344AB74E74B0297B1134CD861();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TwoWayBlend_496E8D474062D84667D4B38F65709F85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_LayeredBoneBlend_B7A7EBB147B56C4A277AA789581CD26E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_ModifyBone_62EBAA934B36A3CC5D5B899662EE5F70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_LayeredBoneSetBlend_D3ADD7374367A77E96AC98AC13BA750F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TwoWayBlend_1199F9634D9A96C3240BDF8CA89FD1ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TwoWayBlend_FFD276B847BD670FCE9F27A976830B7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_LayeredBoneSetBlend_6561733F45006BD122AFF7BC337ADB19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TwoWayBlend_C45220514FBC8B3A79310489739E66D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_C406B42B467AA7E53398ECA9425F2B5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_GbxAnimGraphNode_LookAt_EBF37B294BAAC8332C7CF9ADAE522071();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_72031AEE4417D1CA75076EA40A31E990();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_SequencePlayer_8D26632B4B61FC43F169B19FE0F02430();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendListByBool_38B0EB1941E3D15F5ED69195E761E5A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_65B1EA6C4FC7078445A0E09C2755B832();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_RotationOffsetBlendSpace_62841A2D4417BF51E0130D9AEBF0AB66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_01133BE04B7500B020C7898E7F8FDA5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_33990E9C4A6B89825043BAA431A6278C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_3710AA8B4797CD94666BC39327376541();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_7CDFE1E743C9AA647CD08497CCC6EA52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_C407D88D482F692B398F3AA97D8E385A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_E53C41A44BBE3F9BD7FBE59EB7387C5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_D8CCBF704F712BD97788B395C3852D92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_01E290A6422322C2CD2D21B651A6B706();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendListByBool_5BC328114A1ECFAA413AAE8F41DF5E72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_F8374C8D48CD59AFD093EC84FA86575A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_7693EC63424865FD0FA403963814B7CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_245E845E4B4E27AD0AC2C098AB9A8B87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_0BCE2F1C4F7EF59F670D92A02B56402B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_19E172EE47B4752C6029E3BE6A414039();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_GbxAnimGraphNode_BlendListByFloatInRange_AE0357FE4B5A67F647D5B6A7ADCE08FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_DAF393FF47238284D8FB9685DBCE1D72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_A1C805534880D2B116A6CF9EAB622E4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_63AD012A46DCB09E34DD90AB8341BCF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_A3C2853A4414F27389BD979F5CA09F06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_0457336E47446DAA43CD6BA3372CBF6B();
	void BlueprintInitializeAnimation();
	void OnStanceChanged();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_D8F56CDA4AF8B4297F768E88428AFAE3();
	void AnimNotify_CtoP();
	void AnimNotify_PtoC();
	void AnimNotify_PtoA();
	void AnimNotify_AtoP();
	void AnimNotify_AtoC();
	void AnimNotify_CtoA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_BlendSpacePlayer_7AAD397B44308F4E181A7CA414DDAAF3();
	void ValidateAnimSetTags();
	void OnWeaponChanged(class AWeapon** NewWeapon, class AWeapon** PrevWeapon);
	void OnAnimStyleChanged();
	void Update_AnimStyle();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_NPC_Combat_AnimGraphNode_TransitionResult_0864FD4A4E3B3D02226D28ABC029FD76();
	void ExecuteUbergraph_BPAnim_NPC_Combat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
