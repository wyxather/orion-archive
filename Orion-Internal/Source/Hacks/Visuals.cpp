#include "Visuals.h"
#include "Module/Config.h"
#include "SDK/Class/LocalPlayer.h"

#if !NDEBUG
#include "Module/Console.h"
#endif

/*
[18:36:12] [socket  : R_Forearm_Shield                 | index: 0  ] [bone    : R_Forearm_Twist                  | index: 75 ] [parent  : R_Forearm                        | index: 53 ]
[18:36:12] [socket  : FX_Head                          | index: 1  ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : FX_L_Eye                         | index: 2  ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : FX_R_Eye                         | index: 3  ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : FX_Mouth                         | index: 4  ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : FX_CenterMass                    | index: 5  ] [bone    : Spine3                           | index: 5  ] [parent  : Spine2                           | index: 4  ]
[18:36:12] [socket  : FX_R_Foot                        | index: 6  ] [bone    : R_Foot                           | index: 125] [parent  : R_Shin                           | index: 124]
[18:36:12] [socket  : FX_L_Foot                        | index: 7  ] [bone    : L_Foot                           | index: 120] [parent  : L_Shin                           | index: 119]
[18:36:12] [socket  : FX_R_Hand                        | index: 8  ] [bone    : R_Hand                           | index: 54 ] [parent  : R_Forearm                        | index: 53 ]
[18:36:12] [socket  : FX_L_Hand                        | index: 9  ] [bone    : L_Hand                           | index: 22 ] [parent  : L_Forearm                        | index: 21 ]
[18:36:12] [socket  : FX_DamageUI                      | index: 10 ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : FX_Root                          | index: 11 ] [bone    : Root                             | index: 0  ] [parent  : None                             | index: -1 ]
[18:36:12] [socket  : FX_Status_01                     | index: 12 ] [bone    : Spine3                           | index: 5  ] [parent  : Spine2                           | index: 4  ]
[18:36:12] [socket  : FX_Status_02                     | index: 13 ] [bone    : L_Forearm                        | index: 21 ] [parent  : L_Upperarm                       | index: 20 ]
[18:36:12] [socket  : FX_Status_03                     | index: 14 ] [bone    : R_Forearm                        | index: 53 ] [parent  : R_Upperarm                       | index: 52 ]
[18:36:12] [socket  : FX_Status_04                     | index: 15 ] [bone    : R_Thigh                          | index: 123] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : FX_Status_05                     | index: 16 ] [bone    : L_Thigh                          | index: 118] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : SnapZoom                         | index: 17 ] [bone    : Spine3                           | index: 5  ] [parent  : Spine2                           | index: 4  ]
[18:36:12] [socket  : SnapBeam                         | index: 18 ] [bone    : Spine3                           | index: 5  ] [parent  : Spine2                           | index: 4  ]
[18:36:12] [socket  : FX_MedicBeam                     | index: 19 ] [bone    : Spine4                           | index: 6  ] [parent  : Spine3                           | index: 5  ]
[18:36:12] [socket  : Gore_Head                        | index: 20 ] [bone    : Neck2                            | index: 13 ] [parent  : Neck1                            | index: 12 ]
[18:36:12] [socket  : Gore_L_Forearm                   | index: 21 ] [bone    : L_Forearm                        | index: 21 ] [parent  : L_Upperarm                       | index: 20 ]
[18:36:12] [socket  : Gore_R_Forearm                   | index: 22 ] [bone    : R_Forearm                        | index: 53 ] [parent  : R_Upperarm                       | index: 52 ]
[18:36:12] [socket  : Gore_L_Shin                      | index: 23 ] [bone    : L_Shin                           | index: 119] [parent  : L_Thigh                          | index: 118]
[18:36:12] [socket  : Gore_R_Shin                      | index: 24 ] [bone    : R_Shin                           | index: 124] [parent  : R_Thigh                          | index: 123]
[18:36:12] [socket  : FX_LaserSight                    | index: 25 ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : Gore_L_Upperarm                  | index: 26 ] [bone    : L_Upperarm                       | index: 20 ] [parent  : L_Clav                           | index: 19 ]
[18:36:12] [socket  : Gore_R_Upperarm                  | index: 27 ] [bone    : R_Upperarm                       | index: 52 ] [parent  : R_Clav                           | index: 51 ]
[18:36:12] [socket  : Gore_L_Thigh                     | index: 28 ] [bone    : L_Thigh                          | index: 118] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : Gore_R_Thigh                     | index: 29 ] [bone    : R_Thigh                          | index: 123] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : BackpackCap                      | index: 30 ] [bone    : Backpack                         | index: 117] [parent  : Spine3                           | index: 5  ]
[18:36:12] [socket  : FX_Status                        | index: 31 ] [bone    : SpineEnd                         | index: 7  ] [parent  : Spine4                           | index: 6  ]
[18:36:12] [socket  : FX_Status_06                     | index: 32 ] [bone    : L_Shin                           | index: 119] [parent  : L_Thigh                          | index: 118]
[18:36:12] [socket  : FX_Status_07                     | index: 33 ] [bone    : R_Shin                           | index: 124] [parent  : R_Thigh                          | index: 123]
[18:36:12] [socket  : FX_Status_08                     | index: 34 ] [bone    : R_Hand                           | index: 54 ] [parent  : R_Forearm                        | index: 53 ]
[18:36:12] [socket  : FX_Status_09                     | index: 35 ] [bone    : L_Hand                           | index: 22 ] [parent  : L_Forearm                        | index: 21 ]
[18:36:12] [socket  : FX_Status                        | index: 36 ] [bone    : L_Upperarm                       | index: 20 ] [parent  : L_Clav                           | index: 19 ]
[18:36:12] [socket  : FX_Status                        | index: 37 ] [bone    : R_Upperarm                       | index: 52 ] [parent  : R_Clav                           | index: 51 ]
[18:36:12] [socket  : Gore_L_Forearem_Limb             | index: 38 ] [bone    : L_Forearm                        | index: 21 ] [parent  : L_Upperarm                       | index: 20 ]
[18:36:12] [socket  : Gore_L_Shin_Limb                 | index: 39 ] [bone    : L_Shin                           | index: 119] [parent  : L_Thigh                          | index: 118]
[18:36:12] [socket  : SnapHead                         | index: 40 ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : Root                             | index: 41 ] [bone    : Root                             | index: 0  ] [parent  : None                             | index: -1 ]
[18:36:12] [socket  : Camera_3rd                       | index: 42 ] [bone    : Camera_3rd                       | index: 1  ] [parent  : Root                             | index: 0  ]
[18:36:12] [socket  : Hips                             | index: 43 ] [bone    : Hips                             | index: 2  ] [parent  : Root                             | index: 0  ]
[18:36:12] [socket  : Spine1                           | index: 44 ] [bone    : Spine1                           | index: 3  ] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : Spine2                           | index: 45 ] [bone    : Spine2                           | index: 4  ] [parent  : Spine1                           | index: 3  ]
[18:36:12] [socket  : Spine3                           | index: 46 ] [bone    : Spine3                           | index: 5  ] [parent  : Spine2                           | index: 4  ]
[18:36:12] [socket  : Spine4                           | index: 47 ] [bone    : Spine4                           | index: 6  ] [parent  : Spine3                           | index: 5  ]
[18:36:12] [socket  : SpineEnd                         | index: 48 ] [bone    : SpineEnd                         | index: 7  ] [parent  : Spine4                           | index: 6  ]
[18:36:12] [socket  : Camera                           | index: 49 ] [bone    : Camera                           | index: 8  ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : L_Hand_to_Camera_1st             | index: 50 ] [bone    : L_Hand_to_Camera_1st             | index: 9  ] [parent  : Camera                           | index: 8  ]
[18:36:12] [socket  : R_Hand_to_Camera_1st             | index: 51 ] [bone    : R_Hand_to_Camera_1st             | index: 10 ] [parent  : Camera                           | index: 8  ]
[18:36:12] [socket  : Spine_End_Offset                 | index: 52 ] [bone    : Spine_End_Offset                 | index: 11 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : Neck1                            | index: 53 ] [bone    : Neck1                            | index: 12 ] [parent  : Spine_End_Offset                 | index: 11 ]
[18:36:12] [socket  : Neck2                            | index: 54 ] [bone    : Neck2                            | index: 13 ] [parent  : Neck1                            | index: 12 ]
[18:36:12] [socket  : Head                             | index: 55 ] [bone    : Head                             | index: 14 ] [parent  : Neck2                            | index: 13 ]
[18:36:12] [socket  : L_Antenna                        | index: 56 ] [bone    : L_Antenna                        | index: 15 ] [parent  : Head                             | index: 14 ]
[18:36:12] [socket  : R_Antenna                        | index: 57 ] [bone    : R_Antenna                        | index: 16 ] [parent  : Head                             | index: 14 ]
[18:36:12] [socket  : Hood_Flap1                       | index: 58 ] [bone    : Hood_Flap1                       | index: 17 ] [parent  : Head                             | index: 14 ]
[18:36:12] [socket  : Hood_Flap2                       | index: 59 ] [bone    : Hood_Flap2                       | index: 18 ] [parent  : Hood_Flap1                       | index: 17 ]
[18:36:12] [socket  : L_Clav                           | index: 60 ] [bone    : L_Clav                           | index: 19 ] [parent  : Spine_End_Offset                 | index: 11 ]
[18:36:12] [socket  : L_Upperarm                       | index: 61 ] [bone    : L_Upperarm                       | index: 20 ] [parent  : L_Clav                           | index: 19 ]
[18:36:12] [socket  : L_Forearm                        | index: 62 ] [bone    : L_Forearm                        | index: 21 ] [parent  : L_Upperarm                       | index: 20 ]
[18:36:12] [socket  : L_Hand                           | index: 63 ] [bone    : L_Hand                           | index: 22 ] [parent  : L_Forearm                        | index: 21 ]
[18:36:12] [socket  : L_Hand_Object                    | index: 64 ] [bone    : L_Hand_Object                    | index: 23 ] [parent  : L_Hand                           | index: 22 ]
[18:36:12] [socket  : L_Index_Meta                     | index: 65 ] [bone    : L_Index_Meta                     | index: 24 ] [parent  : L_Hand                           | index: 22 ]
[18:36:12] [socket  : L_Index_01                       | index: 66 ] [bone    : L_Index_01                       | index: 25 ] [parent  : L_Index_Meta                     | index: 24 ]
[18:36:12] [socket  : L_Index_02                       | index: 67 ] [bone    : L_Index_02                       | index: 26 ] [parent  : L_Index_01                       | index: 25 ]
[18:36:12] [socket  : L_Index_03                       | index: 68 ] [bone    : L_Index_03                       | index: 27 ] [parent  : L_Index_02                       | index: 26 ]
[18:36:12] [socket  : L_Middle_Meta                    | index: 69 ] [bone    : L_Middle_Meta                    | index: 28 ] [parent  : L_Hand                           | index: 22 ]
[18:36:12] [socket  : L_Middle_01                      | index: 70 ] [bone    : L_Middle_01                      | index: 29 ] [parent  : L_Middle_Meta                    | index: 28 ]
[18:36:12] [socket  : L_Middle_02                      | index: 71 ] [bone    : L_Middle_02                      | index: 30 ] [parent  : L_Middle_01                      | index: 29 ]
[18:36:12] [socket  : L_Middle_03                      | index: 72 ] [bone    : L_Middle_03                      | index: 31 ] [parent  : L_Middle_02                      | index: 30 ]
[18:36:12] [socket  : L_Ring_Meta                      | index: 73 ] [bone    : L_Ring_Meta                      | index: 32 ] [parent  : L_Hand                           | index: 22 ]
[18:36:12] [socket  : L_Ring_01                        | index: 74 ] [bone    : L_Ring_01                        | index: 33 ] [parent  : L_Ring_Meta                      | index: 32 ]
[18:36:12] [socket  : L_Ring_02                        | index: 75 ] [bone    : L_Ring_02                        | index: 34 ] [parent  : L_Ring_01                        | index: 33 ]
[18:36:12] [socket  : L_Ring_03                        | index: 76 ] [bone    : L_Ring_03                        | index: 35 ] [parent  : L_Ring_02                        | index: 34 ]
[18:36:12] [socket  : L_Thumb_01                       | index: 77 ] [bone    : L_Thumb_01                       | index: 36 ] [parent  : L_Hand                           | index: 22 ]
[18:36:12] [socket  : L_Thumb_02                       | index: 78 ] [bone    : L_Thumb_02                       | index: 37 ] [parent  : L_Thumb_01                       | index: 36 ]
[18:36:12] [socket  : L_Thumb_03                       | index: 79 ] [bone    : L_Thumb_03                       | index: 38 ] [parent  : L_Thumb_02                       | index: 37 ]
[18:36:12] [socket  : L_Pinky_Meta                     | index: 80 ] [bone    : L_Pinky_Meta                     | index: 39 ] [parent  : L_Hand                           | index: 22 ]
[18:36:12] [socket  : L_Pinky_01                       | index: 81 ] [bone    : L_Pinky_01                       | index: 40 ] [parent  : L_Pinky_Meta                     | index: 39 ]
[18:36:12] [socket  : L_Pinky_02                       | index: 82 ] [bone    : L_Pinky_02                       | index: 41 ] [parent  : L_Pinky_01                       | index: 40 ]
[18:36:12] [socket  : L_Pinky_03                       | index: 83 ] [bone    : L_Pinky_03                       | index: 42 ] [parent  : L_Pinky_02                       | index: 41 ]
[18:36:12] [socket  : L_Forearm_Twist                  | index: 84 ] [bone    : L_Forearm_Twist                  | index: 43 ] [parent  : L_Forearm                        | index: 21 ]
[18:36:12] [socket  : L_Upperarm_Twist                 | index: 85 ] [bone    : L_Upperarm_Twist                 | index: 44 ] [parent  : L_Upperarm                       | index: 20 ]
[18:36:12] [socket  : L_Arm_Wire1                      | index: 86 ] [bone    : L_Arm_Wire1                      | index: 45 ] [parent  : L_Upperarm                       | index: 20 ]
[18:36:12] [socket  : L_Arm_Wire2                      | index: 87 ] [bone    : L_Arm_Wire2                      | index: 46 ] [parent  : L_Upperarm                       | index: 20 ]
[18:36:12] [socket  : L_Cape1                          | index: 88 ] [bone    : L_Cape1                          | index: 47 ] [parent  : L_Clav                           | index: 19 ]
[18:36:12] [socket  : L_Cape2                          | index: 89 ] [bone    : L_Cape2                          | index: 48 ] [parent  : L_Cape1                          | index: 47 ]
[18:36:12] [socket  : L_Cape3                          | index: 90 ] [bone    : L_Cape3                          | index: 49 ] [parent  : L_Cape2                          | index: 48 ]
[18:36:12] [socket  : LF2_Cape1                        | index: 91 ] [bone    : LF2_Cape1                        | index: 50 ] [parent  : L_Clav                           | index: 19 ]
[18:36:12] [socket  : R_Clav                           | index: 92 ] [bone    : R_Clav                           | index: 51 ] [parent  : Spine_End_Offset                 | index: 11 ]
[18:36:12] [socket  : R_Upperarm                       | index: 93 ] [bone    : R_Upperarm                       | index: 52 ] [parent  : R_Clav                           | index: 51 ]
[18:36:12] [socket  : R_Forearm                        | index: 94 ] [bone    : R_Forearm                        | index: 53 ] [parent  : R_Upperarm                       | index: 52 ]
[18:36:12] [socket  : R_Hand                           | index: 95 ] [bone    : R_Hand                           | index: 54 ] [parent  : R_Forearm                        | index: 53 ]
[18:36:12] [socket  : R_Hand_Object                    | index: 96 ] [bone    : R_Hand_Object                    | index: 55 ] [parent  : R_Hand                           | index: 54 ]
[18:36:12] [socket  : R_Middle_Meta                    | index: 97 ] [bone    : R_Middle_Meta                    | index: 56 ] [parent  : R_Hand                           | index: 54 ]
[18:36:12] [socket  : R_Middle_01                      | index: 98 ] [bone    : R_Middle_01                      | index: 57 ] [parent  : R_Middle_Meta                    | index: 56 ]
[18:36:12] [socket  : R_Middle_02                      | index: 99 ] [bone    : R_Middle_02                      | index: 58 ] [parent  : R_Middle_01                      | index: 57 ]
[18:36:12] [socket  : R_Middle_03                      | index: 100] [bone    : R_Middle_03                      | index: 59 ] [parent  : R_Middle_02                      | index: 58 ]
[18:36:12] [socket  : R_Index_Meta                     | index: 101] [bone    : R_Index_Meta                     | index: 60 ] [parent  : R_Hand                           | index: 54 ]
[18:36:12] [socket  : R_Index_01                       | index: 102] [bone    : R_Index_01                       | index: 61 ] [parent  : R_Index_Meta                     | index: 60 ]
[18:36:12] [socket  : R_Index_02                       | index: 103] [bone    : R_Index_02                       | index: 62 ] [parent  : R_Index_01                       | index: 61 ]
[18:36:12] [socket  : R_Index_03                       | index: 104] [bone    : R_Index_03                       | index: 63 ] [parent  : R_Index_02                       | index: 62 ]
[18:36:12] [socket  : R_Pinky_Meta                     | index: 105] [bone    : R_Pinky_Meta                     | index: 64 ] [parent  : R_Hand                           | index: 54 ]
[18:36:12] [socket  : R_Pinky_01                       | index: 106] [bone    : R_Pinky_01                       | index: 65 ] [parent  : R_Pinky_Meta                     | index: 64 ]
[18:36:12] [socket  : R_Pinky_02                       | index: 107] [bone    : R_Pinky_02                       | index: 66 ] [parent  : R_Pinky_01                       | index: 65 ]
[18:36:12] [socket  : R_Pinky_03                       | index: 108] [bone    : R_Pinky_03                       | index: 67 ] [parent  : R_Pinky_02                       | index: 66 ]
[18:36:12] [socket  : R_Thumb_01                       | index: 109] [bone    : R_Thumb_01                       | index: 68 ] [parent  : R_Hand                           | index: 54 ]
[18:36:12] [socket  : R_Thumb_02                       | index: 110] [bone    : R_Thumb_02                       | index: 69 ] [parent  : R_Thumb_01                       | index: 68 ]
[18:36:12] [socket  : R_Thumb_03                       | index: 111] [bone    : R_Thumb_03                       | index: 70 ] [parent  : R_Thumb_02                       | index: 69 ]
[18:36:12] [socket  : R_Ring_Meta                      | index: 112] [bone    : R_Ring_Meta                      | index: 71 ] [parent  : R_Hand                           | index: 54 ]
[18:36:12] [socket  : R_Ring_01                        | index: 113] [bone    : R_Ring_01                        | index: 72 ] [parent  : R_Ring_Meta                      | index: 71 ]
[18:36:12] [socket  : R_Ring_02                        | index: 114] [bone    : R_Ring_02                        | index: 73 ] [parent  : R_Ring_01                        | index: 72 ]
[18:36:12] [socket  : R_Ring_03                        | index: 115] [bone    : R_Ring_03                        | index: 74 ] [parent  : R_Ring_02                        | index: 73 ]
[18:36:12] [socket  : R_Forearm_Twist                  | index: 116] [bone    : R_Forearm_Twist                  | index: 75 ] [parent  : R_Forearm                        | index: 53 ]
[18:36:12] [socket  : R_Arm_Shield                     | index: 117] [bone    : R_Arm_Shield                     | index: 76 ] [parent  : R_Forearm                        | index: 53 ]
[18:36:12] [socket  : R_Upperarm_Twist                 | index: 118] [bone    : R_Upperarm_Twist                 | index: 77 ] [parent  : R_Upperarm                       | index: 52 ]
[18:36:12] [socket  : R_Cape1                          | index: 119] [bone    : R_Cape1                          | index: 78 ] [parent  : R_Clav                           | index: 51 ]
[18:36:12] [socket  : R_Cape2                          | index: 120] [bone    : R_Cape2                          | index: 79 ] [parent  : R_Cape1                          | index: 78 ]
[18:36:12] [socket  : R_Cape3                          | index: 121] [bone    : R_Cape3                          | index: 80 ] [parent  : R_Cape2                          | index: 79 ]
[18:36:12] [socket  : RF2_Cape1                        | index: 122] [bone    : RF2_Cape1                        | index: 81 ] [parent  : R_Clav                           | index: 51 ]
[18:36:12] [socket  : L_Hand_Weapon                    | index: 123] [bone    : L_Hand_Weapon                    | index: 82 ] [parent  : Spine_End_Offset                 | index: 11 ]
[18:36:12] [socket  : R_Hand_Weapon                    | index: 124] [bone    : R_Hand_Weapon                    | index: 83 ] [parent  : Spine_End_Offset                 | index: 11 ]
[18:36:12] [socket  : F_Collar                         | index: 125] [bone    : F_Collar                         | index: 84 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : B_Collar                         | index: 126] [bone    : B_Collar                         | index: 85 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : L_Collar                         | index: 127] [bone    : L_Collar                         | index: 86 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : R_Collar                         | index: 128] [bone    : R_Collar                         | index: 87 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : L_CollarHose                     | index: 129] [bone    : L_CollarHose                     | index: 88 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : F_Cape1                          | index: 130] [bone    : F_Cape1                          | index: 89 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : F_Cape2                          | index: 131] [bone    : F_Cape2                          | index: 90 ] [parent  : F_Cape1                          | index: 89 ]
[18:36:12] [socket  : F_Cape3                          | index: 132] [bone    : F_Cape3                          | index: 91 ] [parent  : F_Cape2                          | index: 90 ]
[18:36:12] [socket  : F_Cape4                          | index: 133] [bone    : F_Cape4                          | index: 92 ] [parent  : F_Cape3                          | index: 91 ]
[18:36:12] [socket  : FL_Cape1                         | index: 134] [bone    : FL_Cape1                         | index: 93 ] [parent  : F_Cape2                          | index: 90 ]
[18:36:12] [socket  : FL_Cape2                         | index: 135] [bone    : FL_Cape2                         | index: 94 ] [parent  : FL_Cape1                         | index: 93 ]
[18:36:12] [socket  : FR_Cape1                         | index: 136] [bone    : FR_Cape1                         | index: 95 ] [parent  : F_Cape2                          | index: 90 ]
[18:36:12] [socket  : FR_Cape2                         | index: 137] [bone    : FR_Cape2                         | index: 96 ] [parent  : FR_Cape1                         | index: 95 ]
[18:36:12] [socket  : LF1_Cape1                        | index: 138] [bone    : LF1_Cape1                        | index: 97 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : RF1_Cape1                        | index: 139] [bone    : RF1_Cape1                        | index: 98 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : B_Cape                           | index: 140] [bone    : B_Cape                           | index: 99 ] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : LB1_Cape1                        | index: 141] [bone    : LB1_Cape1                        | index: 100] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : LB1_Cape2                        | index: 142] [bone    : LB1_Cape2                        | index: 101] [parent  : LB1_Cape1                        | index: 100]
[18:36:12] [socket  : LB1_Cape3                        | index: 143] [bone    : LB1_Cape3                        | index: 102] [parent  : LB1_Cape2                        | index: 101]
[18:36:12] [socket  : LB1_Cape4                        | index: 144] [bone    : LB1_Cape4                        | index: 103] [parent  : LB1_Cape3                        | index: 102]
[18:36:12] [socket  : LB1_Cape5                        | index: 145] [bone    : LB1_Cape5                        | index: 104] [parent  : LB1_Cape4                        | index: 103]
[18:36:12] [socket  : LB2_Cape1                        | index: 146] [bone    : LB2_Cape1                        | index: 105] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : LB2_Cape2                        | index: 147] [bone    : LB2_Cape2                        | index: 106] [parent  : LB2_Cape1                        | index: 105]
[18:36:12] [socket  : LB2_Cape3                        | index: 148] [bone    : LB2_Cape3                        | index: 107] [parent  : LB2_Cape2                        | index: 106]
[18:36:12] [socket  : RB1_Cape1                        | index: 149] [bone    : RB1_Cape1                        | index: 108] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : RB1_Cape2                        | index: 150] [bone    : RB1_Cape2                        | index: 109] [parent  : RB1_Cape1                        | index: 108]
[18:36:12] [socket  : RB1_Cape3                        | index: 151] [bone    : RB1_Cape3                        | index: 110] [parent  : RB1_Cape2                        | index: 109]
[18:36:12] [socket  : RB1_Cape4                        | index: 152] [bone    : RB1_Cape4                        | index: 111] [parent  : RB1_Cape3                        | index: 110]
[18:36:12] [socket  : RB1_Cape5                        | index: 153] [bone    : RB1_Cape5                        | index: 112] [parent  : RB1_Cape4                        | index: 111]
[18:36:12] [socket  : RB2_Cape1                        | index: 154] [bone    : RB2_Cape1                        | index: 113] [parent  : SpineEnd                         | index: 7  ]
[18:36:12] [socket  : RB2_Cape2                        | index: 155] [bone    : RB2_Cape2                        | index: 114] [parent  : RB2_Cape1                        | index: 113]
[18:36:12] [socket  : RB2_Cape3                        | index: 156] [bone    : RB2_Cape3                        | index: 115] [parent  : RB2_Cape2                        | index: 114]
[18:36:12] [socket  : FlashChest                       | index: 157] [bone    : FlashChest                       | index: 116] [parent  : Spine4                           | index: 6  ]
[18:36:12] [socket  : Backpack                         | index: 158] [bone    : Backpack                         | index: 117] [parent  : Spine3                           | index: 5  ]
[18:36:12] [socket  : L_Thigh                          | index: 159] [bone    : L_Thigh                          | index: 118] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : L_Shin                           | index: 160] [bone    : L_Shin                           | index: 119] [parent  : L_Thigh                          | index: 118]
[18:36:12] [socket  : L_Foot                           | index: 161] [bone    : L_Foot                           | index: 120] [parent  : L_Shin                           | index: 119]
[18:36:12] [socket  : L_Toe                            | index: 162] [bone    : L_Toe                            | index: 121] [parent  : L_Foot                           | index: 120]
[18:36:12] [socket  : L_Thigh_Twist                    | index: 163] [bone    : L_Thigh_Twist                    | index: 122] [parent  : L_Thigh                          | index: 118]
[18:36:12] [socket  : R_Thigh                          | index: 164] [bone    : R_Thigh                          | index: 123] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : R_Shin                           | index: 165] [bone    : R_Shin                           | index: 124] [parent  : R_Thigh                          | index: 123]
[18:36:12] [socket  : R_Foot                           | index: 166] [bone    : R_Foot                           | index: 125] [parent  : R_Shin                           | index: 124]
[18:36:12] [socket  : R_Toe                            | index: 167] [bone    : R_Toe                            | index: 126] [parent  : R_Foot                           | index: 125]
[18:36:12] [socket  : R_Thigh_Twist                    | index: 168] [bone    : R_Thigh_Twist                    | index: 127] [parent  : R_Thigh                          | index: 123]
[18:36:12] [socket  : L_AssaultVest_CrotchFlap         | index: 169] [bone    : L_AssaultVest_CrotchFlap         | index: 128] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : R_AssaultVest_CrotchFlap         | index: 170] [bone    : R_AssaultVest_CrotchFlap         | index: 129] [parent  : Hips                             | index: 2  ]
[18:36:12] [socket  : L_Hand_to_Root                   | index: 171] [bone    : L_Hand_to_Root                   | index: 130] [parent  : Root                             | index: 0  ]
[18:36:12] [socket  : L_Footstep                       | index: 172] [bone    : L_Footstep                       | index: 131] [parent  : Root                             | index: 0  ]
[18:36:12] [socket  : R_Hand_to_Root                   | index: 173] [bone    : R_Hand_to_Root                   | index: 132] [parent  : Root                             | index: 0  ]
[18:36:12] [socket  : R_Footstep                       | index: 174] [bone    : R_Footstep                       | index: 133] [parent  : Root                             | index: 0  ]
[18:36:12] [socket  : FeetIK_Root                      | index: 175] [bone    : FeetIK_Root                      | index: 134] [parent  : Root                             | index: 0  ]
[18:36:12] [socket  : L_Foot_to_Root                   | index: 176] [bone    : L_Foot_to_Root                   | index: 135] [parent  : FeetIK_Root                      | index: 134]
[18:36:12] [socket  : R_Foot_to_Root                   | index: 177] [bone    : R_Foot_to_Root                   | index: 136] [parent  : FeetIK_Root                      | index: 134]
*/

namespace
{
	struct BoundingBox
	{
	private:
		bool valid;
		SDK::AHUD& hud;
		SDK::UCanvas& canvas;
		SDK::APlayerController& controller;

		auto drawLine(const SDK::FVector2D& a, const SDK::FVector2D& b, float thickness, const SDK::FLinearColor& color) const noexcept
		{
			canvas.K2_DrawLine(a + SDK::FVector2D{ 1.f, 1.f }, b + SDK::FVector2D{ 1.f, 1.f }, thickness, { 0.f, 0.f, 0.f, color.A });
			canvas.K2_DrawLine(a, b, thickness, color);
		}

	public:
		SDK::FVector2D min, max;
		SDK::FVector2D vertices[8];

		explicit BoundingBox(
			SDK::AHUD& hud,
			SDK::UCanvas& canvas,
			SDK::AOakPlayerController& controller,
			const SDK::FVector& origin,
			const SDK::FVector& mins,
			const SDK::FVector& maxs,
			const float yaw,
			const SDK::FVector& scale = { .25f, .25f, .25f }) noexcept :
			hud{ hud },
			canvas{ canvas },
			controller{ controller }
		{
			min.Y = min.X = (std::numeric_limits<float>::max)();
			max.Y = max.X = -(std::numeric_limits<float>::max)();

			const auto scaledMins = mins + (maxs - mins) * 2 * (.25f - scale);
			const auto scaledMaxs = maxs - (maxs - mins) * 2 * (.25f - scale);

			for (auto i = 0; i < 8; ++i) {

				const SDK::FVector point{
					i & 1 ? scaledMaxs.X : scaledMins.X,
					i & 2 ? scaledMaxs.Y : scaledMins.Y,
					i & 4 ? scaledMaxs.Z : scaledMins.Z
				};

				if (!controller.ProjectWorldLocationToScreen(origin + game->getKismetMathLibrary()->STATIC_RotateAngleAxis(point - origin, yaw, { 0.f, 0.f, 1.f }), false, false, &vertices[i])) {
					valid = false;
					return;
				}

				min.X = (std::min)(min.X, vertices[i].X);
				min.Y = (std::min)(min.Y, vertices[i].Y);
				max.X = (std::max)(max.X, vertices[i].X);
				max.Y = (std::max)(max.Y, vertices[i].Y);
			}

			valid = true;
		}


		[[nodiscard]] constexpr explicit operator bool() const noexcept
		{
			return valid;
		}

		auto render3D(const SDK::FLinearColor& color) const noexcept
		{
			for (auto i = 0; i < 8; ++i)
				for (auto j = 1; j <= 4; j <<= 1)
					if (!(i & j))
						drawLine(vertices[i], vertices[i + j], 1.f, color);
		}

		auto render2D(const SDK::FLinearColor& color) const noexcept
		{
			drawLine(min, { max.X, min.Y }, 1.f, color);
			drawLine({ min.X, max.Y }, max, 1.f, color);
			drawLine(min, { min.X, max.Y }, 1.f, color);
			drawLine({ max.X, min.Y }, max, 1.f, color);
		}

		auto renderSnapline(const SDK::FVector& from, const SDK::FVector2D& to, const SDK::FLinearColor& color) const noexcept
		{
			SDK::FVector2D screen;
			if (!controller.ProjectWorldLocationToScreen(from, false, false, &screen))
				return;

			drawLine(screen, to, 1.f, color);
		}

		auto renderHealthbar(const float healthPercentage) const noexcept
		{
			constexpr auto calcHealthColor = [](const float fraction, SDK::FLinearColor& color) noexcept {
				constexpr auto greenHue = 1.f / 3.f;
				constexpr auto redHue = 0.f;
				ImGui::ColorConvertHSVtoRGB(std::lerp(redHue, greenHue, fraction), 1, 1, color.R, color.G, color.B);
				color.A = 1.f;
			};

			const auto pos = min - SDK::FVector2D{ 5.f, 0.f };
			const auto height = max.Y - min.Y - 1.f;

			SDK::FLinearColor color;
			calcHealthColor(healthPercentage, color);

			drawLine(
				pos + SDK::FVector2D{ 0.f, (1.f - healthPercentage) * height },
				pos + SDK::FVector2D{ 0, height },
				3.f,
				color
			);
		}

		auto renderShieldbar(const float curShield, const float maxShield) const noexcept
		{
			const auto pos = min - SDK::FVector2D{ 10.f, 0.f };
			const auto height = max.Y - min.Y - 1.f;

			drawLine(
				pos + SDK::FVector2D{ 0.f, (maxShield - curShield) / maxShield * height },
				pos + SDK::FVector2D{ 0, height },
				3.f,
				{ .29f, .62f, .98f, 1.f }
			);
		}

		auto renderName(const SDK::FString& name) const noexcept
		{
			float textSize[2];
			hud.GetTextSize(name, game->memory.engine->TinyFont, 1.f, &textSize[0], &textSize[1]);
			canvas.K2_DrawText(
				game->memory.engine->TinyFont,
				name,
				{ min.X + (max.X - min.X) * .5f, min.Y - textSize[1] - 2.f },
				{ 1.f, 1.f, 0.f, 1.f },
				true,
				{},
				{},
				true,
				false,
				true,
				{ 0.f, 0.f, 0.f, 1.f });
		}

		auto renderWeapon(const SDK::FString& weapon) const noexcept
		{
			float textSize[2];
			hud.GetTextSize(weapon, game->memory.engine->TinyFont, 1.f, &textSize[0], &textSize[1]);
			canvas.K2_DrawText(
				game->memory.engine->TinyFont,
				weapon,
				{ min.X + (max.X - min.X) * .5f, max.Y + 2.f },
				{ 1.f, 1.f, 1.f, 1.f },
				true,
				{},
				{},
				true,
				false,
				true,
				{ 0.f, 0.f, 0.f, 1.f });
		}
	};
}

auto Visuals::esp(SDK::AHUD& hud, SDK::UCanvas& canvas) noexcept -> void
{
	const auto& cfg = config->getData().players.enemy;

	const auto localPlayerController = LocalPlayer::Controller::Get();
	if (!localPlayerController)
		return;

	const auto world = LocalPlayer::ViewPort::World::Get();
	if (!world)
		return;

	std::int32_t display[2];
	localPlayerController->GetViewportSize(&display[0], &display[1]);
	if (display[0] <= 0 || display[1] <= 0)
		return;

	for (auto levelIndex = 0; levelIndex < world->Levels.Num(); ++levelIndex) {
		const auto level = world->Levels[levelIndex];
		if (!level)
			continue;

		for (auto entityIndex = 0; entityIndex < level->EntityList.Num(); ++entityIndex) {
			const auto entity = SDK::SafeCast<SDK::AOakCharacter>(level->EntityList[entityIndex]);
			if (!entity || entity == localPlayerController->Pawn)
				continue;

			const auto targetableComponent = entity->TargetableComponent;
			if (!targetableComponent || !targetableComponent->TargetUIName || targetableComponent->IsFriendly(localPlayerController->Pawn))
				continue;

			const auto damageComponent = entity->DamageComponent;
			if (!damageComponent || damageComponent->bCurrentlyDead || damageComponent->IsInGodMode())
				continue;

			const auto mesh = entity->Mesh;
			if (!mesh)
				continue;

			SDK::FVector origin, extent;
			float radius;
			game->getKismetSystemLibrary()->STATIC_GetComponentBounds(mesh, &origin, &extent, &radius);

			BoundingBox bbox{ hud, canvas, *localPlayerController, origin, origin - extent, origin + extent, entity->K2_GetActorRotation().Yaw, { cfg.box.scale[0], cfg.box.scale[1], cfg.box.scale[2] } };
			if (!bbox)
				continue;

			std::optional<bool> visible;

			if (cfg.box.enable) {

				if (!visible.has_value())
					visible.emplace(localPlayerController->LineOfSightTo(entity, {}, false));

				switch (cfg.box.type) {
				case 0:
					bbox.render2D(visible.value() ? SDK::FLinearColor{ 1.f, 0.f, 0.f, 1.f } : SDK::FLinearColor{ cfg.box.color[0],  cfg.box.color[1],  cfg.box.color[2],  cfg.box.color[3] });
					break;
				case 1:
					bbox.render3D(visible.value() ? SDK::FLinearColor{ 1.f, 0.f, 0.f, 1.f } : SDK::FLinearColor{ cfg.box.color[0],  cfg.box.color[1],  cfg.box.color[2],  cfg.box.color[3] });
					break;
				}
			}

			if (cfg.snapline) {

				if (!visible.has_value())
					visible.emplace(localPlayerController->LineOfSightTo(entity, {}, false));

				bbox.renderSnapline(origin, SDK::FVector2D{ static_cast<float>(display[0]), static_cast<float>(display[1]) } *.5f, visible.value() ? SDK::FLinearColor{ 1.f, 0.f, 0.f, 1.f } : SDK::FLinearColor{ 1.f, 1.f, 1.f, 1.f });
			}

			if (cfg.healthbar)
				bbox.renderHealthbar(damageComponent->GetCurrentHealthPercent());

			if (cfg.shieldbar)
				bbox.renderShieldbar(damageComponent->GetCurrentShield(), damageComponent->GetMaxShield());

			if (cfg.name)
				bbox.renderName(targetableComponent->TargetUIName->DisplayName.Get());

			if (cfg.weapon) {
				if (const auto weapon = entity->GetActiveWeapon(0)) {
					if (weapon->WeaponDisplayData)
						bbox.renderWeapon(weapon->WeaponDisplayData->DisplayName.Get());
				}
			}

#if !NDEBUG
			[[maybe_unused]] static const auto debugBones = [&mesh]() noexcept {
				const auto sockets = mesh->GetAllSocketNames();
				for (auto socketIndex = 0; socketIndex < sockets.Num(); ++socketIndex) {
					const auto& socket = sockets[socketIndex];

					const auto bone = mesh->GetSocketBoneName(socket);
					const auto boneIndex = mesh->GetBoneIndex(bone);

					const auto parent = mesh->GetParentBone(bone);
					const auto parentIndex = mesh->GetBoneIndex(parent);

					console->log<"[%-8s: %-32s | index: %-3d] [%-8s: %-32s | index: %-3d] [%-8s: %-32s | index: %-3d]">(
						"socket", socket.GetName(), socketIndex,
						"bone", bone.GetName(), boneIndex,
						"parent", parent.GetName(), parentIndex);
				}
				return false;
			}();
#endif
		}
	}
}

#if !NDEBUG
auto Visuals::debug(SDK::UCanvas& canvas) noexcept -> void
{
	const auto localPlayer = LocalPlayer::Controller::Character::Get();
	if (!localPlayer)
		return;

	const auto& resources = localPlayer->ResourcePoolComponent->ResourcePools;
	for (auto resourceIndex = 0; resourceIndex < resources.Num(); ++resourceIndex) {
		const auto& resource = resources[resourceIndex];
		if (!resource.ResourcePoolData || !resource.ResourcePoolData->Resource)
			continue;

		canvas.K2_DrawText(
			game->memory.engine->TinyFont,
			resource.ResourcePoolData->Resource->ResourceName.Get(),
			{ 100.f, 100.f + 20.f * resourceIndex },
			{ 1.f, 1.f, 1.f, 1.f },
			true,
			{},
			{},
			false,
			false,
			true,
			{ 0.f, 0.f, 0, 1.f }
		);
	}
}
#endif