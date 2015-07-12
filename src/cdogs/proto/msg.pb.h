/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.0 at Sun Jul 12 16:11:47 2015. */

#ifndef PB_MSG_PB_H_INCLUDED
#define PB_MSG_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _NRequestPlayers {
    uint8_t dummy_field;
} NRequestPlayers;

typedef struct _NActorAddAmmo {
    uint32_t UID;
    int32_t PlayerUID;
    uint32_t AmmoId;
    uint32_t Amount;
    bool IsRandomSpawned;
} NActorAddAmmo;

typedef struct _NActorDie {
    uint32_t UID;
} NActorDie;

typedef struct _NActorDir {
    uint32_t UID;
    int32_t Dir;
} NActorDir;

typedef struct _NActorHeal {
    uint32_t UID;
    int32_t PlayerUID;
    int32_t Amount;
    bool IsRandomSpawned;
} NActorHeal;

typedef struct _NActorPickupAll {
    uint32_t UID;
    bool PickupAll;
} NActorPickupAll;

typedef struct _NActorReplaceGun {
    uint32_t UID;
    uint32_t GunIdx;
    char Gun[128];
} NActorReplaceGun;

typedef struct _NActorState {
    uint32_t UID;
    int32_t State;
} NActorState;

typedef struct _NActorSwitchGun {
    uint32_t UID;
    uint32_t GunIdx;
} NActorSwitchGun;

typedef struct _NActorUseAmmo {
    uint32_t UID;
    int32_t PlayerUID;
    uint32_t AmmoId;
    uint32_t Amount;
} NActorUseAmmo;

typedef struct _NCampaignDef {
    char Path[4096];
    int32_t GameMode;
    uint32_t Mission;
} NCampaignDef;

typedef struct _NCharLooks {
    int32_t Face;
    int32_t Skin;
    int32_t Arm;
    int32_t Body;
    int32_t Leg;
    int32_t Hair;
} NCharLooks;

typedef struct _NClientId {
    uint32_t Id;
    uint32_t FirstPlayerUID;
} NClientId;

typedef struct _NCmd {
    uint32_t Cmd;
} NCmd;

typedef struct _NGunState {
    uint32_t ActorUID;
    int32_t State;
} NGunState;

typedef struct _NMissionComplete {
    bool ShowMsg;
} NMissionComplete;

typedef struct _NObjectiveUpdate {
    uint32_t ObjectiveId;
    int32_t Count;
} NObjectiveUpdate;

typedef struct _NRemovePickup {
    uint32_t UID;
    int32_t SpawnerUID;
} NRemovePickup;

typedef struct _NRescueCharacter {
    uint32_t UID;
} NRescueCharacter;

typedef struct _NScore {
    uint32_t PlayerUID;
    int32_t Score;
} NScore;

typedef struct _NVec2i {
    int32_t x;
    int32_t y;
} NVec2i;

typedef struct _NActorAdd {
    uint32_t UID;
    uint32_t CharId;
    int32_t Direction;
    int32_t Health;
    int32_t PlayerUID;
    uint32_t TileItemFlags;
    NVec2i FullPos;
} NActorAdd;

typedef struct _NActorMove {
    uint32_t UID;
    NVec2i Pos;
} NActorMove;

typedef struct _NAddBullet {
    char BulletClass[128];
    NVec2i MuzzlePos;
    int32_t MuzzleHeight;
    float Angle;
    int32_t Elevation;
    uint32_t Flags;
    int32_t PlayerUID;
    int32_t UID;
} NAddBullet;

typedef struct _NAddKeys {
    uint32_t KeyFlags;
    NVec2i Pos;
} NAddKeys;

typedef struct _NAddMapObject {
    uint32_t UID;
    char MapObjectClass[128];
    NVec2i Pos;
    uint32_t TileItemFlags;
    int32_t Health;
} NAddMapObject;

typedef struct _NAddPickup {
    uint32_t UID;
    char PickupClass[128];
    bool IsRandomSpawned;
    int32_t SpawnerUID;
    uint32_t TileItemFlags;
    NVec2i Pos;
} NAddPickup;

typedef struct _NExploreTile {
    NVec2i Tile;
} NExploreTile;

typedef struct _NGunFire {
    int32_t PlayerUID;
    char Gun[128];
    NVec2i MuzzleFullPos;
    int32_t Z;
    float Angle;
    bool Sound;
} NGunFire;

typedef struct _NGunReload {
    int32_t PlayerUID;
    char Gun[128];
    NVec2i FullPos;
    int32_t Direction;
} NGunReload;

typedef struct _NPlayerData {
    char Name[20];
    NCharLooks Looks;
    pb_size_t Weapons_count;
    char Weapons[3][128];
    uint32_t Lives;
    int32_t Score;
    int32_t TotalScore;
    int32_t Kills;
    int32_t Suicides;
    int32_t Friendlies;
    uint32_t MaxHealth;
    uint32_t LastMission;
    uint32_t UID;
} NPlayerData;

typedef struct _NSound {
    char Sound[128];
    NVec2i Pos;
} NSound;

typedef struct _NTrigger {
    uint32_t ID;
    NVec2i Tile;
} NTrigger;

typedef struct _NAddPlayers {
    pb_size_t PlayerDatas_count;
    NPlayerData PlayerDatas[4];
} NAddPlayers;

/* Default values for struct fields */
extern const int32_t NActorAdd_PlayerUID_default;
extern const int32_t NActorHeal_PlayerUID_default;
extern const int32_t NActorAddAmmo_PlayerUID_default;
extern const int32_t NActorUseAmmo_PlayerUID_default;
extern const int32_t NAddPickup_SpawnerUID_default;
extern const int32_t NRemovePickup_SpawnerUID_default;
extern const int32_t NGunReload_PlayerUID_default;
extern const int32_t NGunFire_PlayerUID_default;

/* Initializer values for message structs */
#define NRequestPlayers_init_default             {0}
#define NCmd_init_default                        {0}
#define NClientId_init_default                   {0, 0}
#define NCampaignDef_init_default                {"", 0, 0}
#define NCharLooks_init_default                  {0, 0, 0, 0, 0, 0}
#define NPlayerData_init_default                 {"", NCharLooks_init_default, 0, {"", "", ""}, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define NAddPlayers_init_default                 {0, {NPlayerData_init_default, NPlayerData_init_default, NPlayerData_init_default, NPlayerData_init_default}}
#define NAddMapObject_init_default               {0, "", NVec2i_init_default, 0, 0}
#define NScore_init_default                      {0, 0}
#define NSound_init_default                      {"", NVec2i_init_default}
#define NVec2i_init_default                      {0, 0}
#define NActorAdd_init_default                   {0, 0, 0, 0, -1, 0, NVec2i_init_default}
#define NActorMove_init_default                  {0, NVec2i_init_default}
#define NActorState_init_default                 {0, 0}
#define NActorDir_init_default                   {0, 0}
#define NActorSwitchGun_init_default             {0, 0}
#define NActorPickupAll_init_default             {0, 0}
#define NActorReplaceGun_init_default            {0, 0, ""}
#define NActorHeal_init_default                  {0, -1, 0, 0}
#define NActorAddAmmo_init_default               {0, -1, 0, 0, 0}
#define NActorUseAmmo_init_default               {0, -1, 0, 0}
#define NActorDie_init_default                   {0}
#define NAddPickup_init_default                  {0, "", 0, -1, 0, NVec2i_init_default}
#define NRemovePickup_init_default               {0, -1}
#define NGunReload_init_default                  {-1, "", NVec2i_init_default, 0}
#define NGunFire_init_default                    {-1, "", NVec2i_init_default, 0, 0, 0}
#define NGunState_init_default                   {0, 0}
#define NAddBullet_init_default                  {"", NVec2i_init_default, 0, 0, 0, 0, 0, 0}
#define NTrigger_init_default                    {0, NVec2i_init_default}
#define NExploreTile_init_default                {NVec2i_init_default}
#define NRescueCharacter_init_default            {0}
#define NObjectiveUpdate_init_default            {0, 0}
#define NAddKeys_init_default                    {0, NVec2i_init_default}
#define NMissionComplete_init_default            {0}
#define NRequestPlayers_init_zero                {0}
#define NCmd_init_zero                           {0}
#define NClientId_init_zero                      {0, 0}
#define NCampaignDef_init_zero                   {"", 0, 0}
#define NCharLooks_init_zero                     {0, 0, 0, 0, 0, 0}
#define NPlayerData_init_zero                    {"", NCharLooks_init_zero, 0, {"", "", ""}, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define NAddPlayers_init_zero                    {0, {NPlayerData_init_zero, NPlayerData_init_zero, NPlayerData_init_zero, NPlayerData_init_zero}}
#define NAddMapObject_init_zero                  {0, "", NVec2i_init_zero, 0, 0}
#define NScore_init_zero                         {0, 0}
#define NSound_init_zero                         {"", NVec2i_init_zero}
#define NVec2i_init_zero                         {0, 0}
#define NActorAdd_init_zero                      {0, 0, 0, 0, 0, 0, NVec2i_init_zero}
#define NActorMove_init_zero                     {0, NVec2i_init_zero}
#define NActorState_init_zero                    {0, 0}
#define NActorDir_init_zero                      {0, 0}
#define NActorSwitchGun_init_zero                {0, 0}
#define NActorPickupAll_init_zero                {0, 0}
#define NActorReplaceGun_init_zero               {0, 0, ""}
#define NActorHeal_init_zero                     {0, 0, 0, 0}
#define NActorAddAmmo_init_zero                  {0, 0, 0, 0, 0}
#define NActorUseAmmo_init_zero                  {0, 0, 0, 0}
#define NActorDie_init_zero                      {0}
#define NAddPickup_init_zero                     {0, "", 0, 0, 0, NVec2i_init_zero}
#define NRemovePickup_init_zero                  {0, 0}
#define NGunReload_init_zero                     {0, "", NVec2i_init_zero, 0}
#define NGunFire_init_zero                       {0, "", NVec2i_init_zero, 0, 0, 0}
#define NGunState_init_zero                      {0, 0}
#define NAddBullet_init_zero                     {"", NVec2i_init_zero, 0, 0, 0, 0, 0, 0}
#define NTrigger_init_zero                       {0, NVec2i_init_zero}
#define NExploreTile_init_zero                   {NVec2i_init_zero}
#define NRescueCharacter_init_zero               {0}
#define NObjectiveUpdate_init_zero               {0, 0}
#define NAddKeys_init_zero                       {0, NVec2i_init_zero}
#define NMissionComplete_init_zero               {0}

/* Field tags (for use in manual encoding/decoding) */
#define NActorAddAmmo_UID_tag                    1
#define NActorAddAmmo_PlayerUID_tag              2
#define NActorAddAmmo_AmmoId_tag                 3
#define NActorAddAmmo_Amount_tag                 4
#define NActorAddAmmo_IsRandomSpawned_tag        5
#define NActorDie_UID_tag                        1
#define NActorDir_UID_tag                        1
#define NActorDir_Dir_tag                        2
#define NActorHeal_UID_tag                       1
#define NActorHeal_PlayerUID_tag                 2
#define NActorHeal_Amount_tag                    3
#define NActorHeal_IsRandomSpawned_tag           4
#define NActorPickupAll_UID_tag                  1
#define NActorPickupAll_PickupAll_tag            2
#define NActorReplaceGun_UID_tag                 1
#define NActorReplaceGun_GunIdx_tag              2
#define NActorReplaceGun_Gun_tag                 3
#define NActorState_UID_tag                      1
#define NActorState_State_tag                    2
#define NActorSwitchGun_UID_tag                  1
#define NActorSwitchGun_GunIdx_tag               2
#define NActorUseAmmo_UID_tag                    1
#define NActorUseAmmo_PlayerUID_tag              2
#define NActorUseAmmo_AmmoId_tag                 3
#define NActorUseAmmo_Amount_tag                 4
#define NCampaignDef_Path_tag                    1
#define NCampaignDef_GameMode_tag                2
#define NCampaignDef_Mission_tag                 3
#define NCharLooks_Face_tag                      1
#define NCharLooks_Skin_tag                      2
#define NCharLooks_Arm_tag                       3
#define NCharLooks_Body_tag                      4
#define NCharLooks_Leg_tag                       5
#define NCharLooks_Hair_tag                      6
#define NClientId_Id_tag                         1
#define NClientId_FirstPlayerUID_tag             2
#define NCmd_Cmd_tag                             1
#define NGunState_ActorUID_tag                   1
#define NGunState_State_tag                      2
#define NMissionComplete_ShowMsg_tag             1
#define NObjectiveUpdate_ObjectiveId_tag         1
#define NObjectiveUpdate_Count_tag               2
#define NRemovePickup_UID_tag                    1
#define NRemovePickup_SpawnerUID_tag             2
#define NRescueCharacter_UID_tag                 1
#define NScore_PlayerUID_tag                     1
#define NScore_Score_tag                         2
#define NVec2i_x_tag                             1
#define NVec2i_y_tag                             2
#define NActorAdd_UID_tag                        1
#define NActorAdd_CharId_tag                     2
#define NActorAdd_Direction_tag                  3
#define NActorAdd_Health_tag                     4
#define NActorAdd_PlayerUID_tag                  5
#define NActorAdd_TileItemFlags_tag              6
#define NActorAdd_FullPos_tag                    7
#define NActorMove_UID_tag                       1
#define NActorMove_Pos_tag                       2
#define NAddBullet_BulletClass_tag               1
#define NAddBullet_MuzzlePos_tag                 2
#define NAddBullet_MuzzleHeight_tag              3
#define NAddBullet_Angle_tag                     4
#define NAddBullet_Elevation_tag                 5
#define NAddBullet_Flags_tag                     6
#define NAddBullet_PlayerUID_tag                 7
#define NAddBullet_UID_tag                       8
#define NAddKeys_KeyFlags_tag                    1
#define NAddKeys_Pos_tag                         2
#define NAddMapObject_UID_tag                    1
#define NAddMapObject_MapObjectClass_tag         2
#define NAddMapObject_Pos_tag                    3
#define NAddMapObject_TileItemFlags_tag          4
#define NAddMapObject_Health_tag                 5
#define NAddPickup_UID_tag                       1
#define NAddPickup_PickupClass_tag               2
#define NAddPickup_IsRandomSpawned_tag           3
#define NAddPickup_SpawnerUID_tag                4
#define NAddPickup_TileItemFlags_tag             5
#define NAddPickup_Pos_tag                       6
#define NExploreTile_Tile_tag                    1
#define NGunFire_PlayerUID_tag                   1
#define NGunFire_Gun_tag                         2
#define NGunFire_MuzzleFullPos_tag               3
#define NGunFire_Z_tag                           4
#define NGunFire_Angle_tag                       5
#define NGunFire_Sound_tag                       6
#define NGunReload_PlayerUID_tag                 1
#define NGunReload_Gun_tag                       2
#define NGunReload_FullPos_tag                   3
#define NGunReload_Direction_tag                 4
#define NPlayerData_Name_tag                     1
#define NPlayerData_Looks_tag                    2
#define NPlayerData_Weapons_tag                  3
#define NPlayerData_Lives_tag                    4
#define NPlayerData_Score_tag                    5
#define NPlayerData_TotalScore_tag               6
#define NPlayerData_Kills_tag                    7
#define NPlayerData_Suicides_tag                 8
#define NPlayerData_Friendlies_tag               9
#define NPlayerData_MaxHealth_tag                10
#define NPlayerData_LastMission_tag              11
#define NPlayerData_UID_tag                      12
#define NSound_Sound_tag                         1
#define NSound_Pos_tag                           2
#define NTrigger_ID_tag                          1
#define NTrigger_Tile_tag                        2
#define NAddPlayers_PlayerDatas_tag              2

/* Struct field encoding specification for nanopb */
extern const pb_field_t NRequestPlayers_fields[1];
extern const pb_field_t NCmd_fields[2];
extern const pb_field_t NClientId_fields[3];
extern const pb_field_t NCampaignDef_fields[4];
extern const pb_field_t NCharLooks_fields[7];
extern const pb_field_t NPlayerData_fields[13];
extern const pb_field_t NAddPlayers_fields[2];
extern const pb_field_t NAddMapObject_fields[6];
extern const pb_field_t NScore_fields[3];
extern const pb_field_t NSound_fields[3];
extern const pb_field_t NVec2i_fields[3];
extern const pb_field_t NActorAdd_fields[8];
extern const pb_field_t NActorMove_fields[3];
extern const pb_field_t NActorState_fields[3];
extern const pb_field_t NActorDir_fields[3];
extern const pb_field_t NActorSwitchGun_fields[3];
extern const pb_field_t NActorPickupAll_fields[3];
extern const pb_field_t NActorReplaceGun_fields[4];
extern const pb_field_t NActorHeal_fields[5];
extern const pb_field_t NActorAddAmmo_fields[6];
extern const pb_field_t NActorUseAmmo_fields[5];
extern const pb_field_t NActorDie_fields[2];
extern const pb_field_t NAddPickup_fields[7];
extern const pb_field_t NRemovePickup_fields[3];
extern const pb_field_t NGunReload_fields[5];
extern const pb_field_t NGunFire_fields[7];
extern const pb_field_t NGunState_fields[3];
extern const pb_field_t NAddBullet_fields[9];
extern const pb_field_t NTrigger_fields[3];
extern const pb_field_t NExploreTile_fields[2];
extern const pb_field_t NRescueCharacter_fields[2];
extern const pb_field_t NObjectiveUpdate_fields[3];
extern const pb_field_t NAddKeys_fields[3];
extern const pb_field_t NMissionComplete_fields[2];

/* Maximum encoded size of messages (where known) */
#define NRequestPlayers_size                     0
#define NCmd_size                                6
#define NClientId_size                           12
#define NCampaignDef_size                        4116
#define NCharLooks_size                          66
#define NPlayerData_size                         562
#define NAddPlayers_size                         2260
#define NAddMapObject_size                       178
#define NScore_size                              17
#define NSound_size                              155
#define NVec2i_size                              22
#define NActorAdd_size                           75
#define NActorMove_size                          30
#define NActorState_size                         17
#define NActorDir_size                           17
#define NActorSwitchGun_size                     12
#define NActorPickupAll_size                     8
#define NActorReplaceGun_size                    143
#define NActorHeal_size                          30
#define NActorAddAmmo_size                       31
#define NActorUseAmmo_size                       29
#define NActorDie_size                           6
#define NAddPickup_size                          180
#define NRemovePickup_size                       17
#define NGunReload_size                          177
#define NGunFire_size                            184
#define NGunState_size                           17
#define NAddBullet_size                          210
#define NTrigger_size                            30
#define NExploreTile_size                        24
#define NRescueCharacter_size                    6
#define NObjectiveUpdate_size                    17
#define NAddKeys_size                            30
#define NMissionComplete_size                    2

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
