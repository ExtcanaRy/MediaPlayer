#pragma once

#ifdef __linux__

#define S_BedrockLog__log_va "_ZN10BedrockLog6log_vaENS_11LogCategoryENSt3__16bitsetILm3EEENS_7LogRuleE9LogAreaIDjPKciS7_P13__va_list_tag"
#define S_DedicatedServer__initializeLogging "_ZN15DedicatedServer17initializeLoggingEv"
#define SC_Level__Level "_ZN5LevelC2ERKN3gsl8not_nullIN7Bedrock15NonOwnerPointerI20SoundPlayerInterfaceEEEE9OwnerPtrTI17SharePtrRefTraitsI12LevelStorageEER18IMinecraftEventingb11SubClientIdR9SchedulerNS1_INS3_I16StructureManagerEEEER19ResourcePackManagerRKNS1_INS3_I20IEntityRegistryOwnerEEEE8WeakRefTI15EntityRefTraitsENSt3__110unique_ptrI21BlockComponentFactoryNSW_14default_deleteISY_EEEENSX_I20BlockDefinitionGroupNSZ_IS12_EEEE15ItemRegistryRefNSW_8weak_ptrI17BlockTypeRegistryEEbbRK18NetworkPermissionsNSW_8optionalI24DimensionDefinitionGroupEE"
#define S_ChangeSettingCommand__setup "_ZN20ChangeSettingCommand5setupER15CommandRegistry"
#define S_CommandRegistry__registerCommand "_ZN15CommandRegistry15registerCommandERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc22CommandPermissionLevel11CommandFlagSC_"
#define S_ServerNetworkHandler__handle___CommandRequestPacket "_ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK20CommandRequestPacket"
#define S_MapItem__update "_ZNK7MapItem6updateER5LevelR5ActorR16MapItemSavedData"
#define S_MapItem__doesDisplayPlayerMarkers "_ZN7MapItem24doesDisplayPlayerMarkersERK9ItemStack"
#define S_MapItemSavedData__tickByBlock "_ZN16MapItemSavedData11tickByBlockERK8BlockPosR11BlockSource"
#define S_BlockSource__getBlock "_ZNK11BlockSource8getBlockERK8BlockPos"
#define S_FaceDirectionalBlock__getFacingDirection "_ZN20FaceDirectionalBlock18getFacingDirectionERK5Blockb"
#define S_Level__tick "_ZN5Level4tickEv"
#define S_ServerNetworkHandler___getServerPlayer "_ZN20ServerNetworkHandler16_getServerPlayerERK17NetworkIdentifier11SubClientId"
#define S_Player__getXuid "_ZNK6Player7getXuidEv"
#define S_TextPacket__TextPacket "_ZN10TextPacketC2E14TextPacketTypeRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RKNS1_6vectorIS7_NS5_IS7_EEEEbS9_S9_"
#define SC_PlaySoundPacket__PlaySoundPacket "_ZN15PlaySoundPacketC2ENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERK4Vec3ff"
#define S_ServerPlayer__sendNetworkPacket "_ZNK12ServerPlayer17sendNetworkPacketER6Packet"
#define S_MinecraftPackets__createPacket "_ZN16MinecraftPackets12createPacketE18MinecraftPacketIds"
#define S_Actor__getOrCreateUniqueID "_ZNK5Actor19getOrCreateUniqueIDEv"
#define S_Actor__getNameTag "_ZNK5Actor10getNameTagEv"
#define S_Actor__getPosition "_ZNK5Actor11getPositionEv"
#define SC_ServerPlayer__ServerPlayer "_ZN12ServerPlayerC2ER5LevelR12PacketSenderR19ServerNetworkSystemRN15ClientBlobCache6Server22ActiveTransfersManagerE8GameTypeRK17NetworkIdentifier11SubClientIdNSt3__18functionIFvRS_EEEN3mce4UUIDERKNSF_12basic_stringIcNSF_11char_traitsIcEENSF_9allocatorIcEEEEST_NSF_10unique_ptrI11CertificateNSF_14default_deleteISV_EEEEibR13EntityContext"
#define SD_ServerPlayer__ServerPlayer "_ZN12ServerPlayerD2Ev"

#else

#define S_ServerNetworkHandler__onPlayerLeft "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z"
#define S_BedrockLog__log_va "?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z"
#define S_DedicatedServer__initializeLogging "?initializeLogging@DedicatedServer@@AEAAXXZ"
#define SC_Level__Level "??0Level@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$OwnerPtrT@U?$SharePtrRefTraits@VLevelStorage@@@@@@AEAVIMinecraftEventing@@_NW4SubClientId@@AEAVScheduler@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVResourcePackManager@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRefT@UEntityRefTraits@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@std@@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@std@@VItemRegistryRef@@V?$weak_ptr@VBlockTypeRegistry@@@std@@33AEBUNetworkPermissions@@V?$optional@VDimensionDefinitionGroup@@@std@@@Z"
#define S_ChangeSettingCommand__setup "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z"
#define S_CommandRegistry__registerCommand "?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z"
#define S_ServerNetworkHandler__handle___CommandRequestPacket "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z"
#define S_MapItem__update "?update@MapItem@@QEBAXAEAVLevel@@AEAVActor@@AEAVMapItemSavedData@@@Z"
#define S_MapItem__doesDisplayPlayerMarkers "?doesDisplayPlayerMarkers@MapItem@@SA_NAEBVItemStack@@@Z"
#define S_MapItemSavedData__tickByBlock "?tickByBlock@MapItemSavedData@@QEAAXAEBVBlockPos@@AEAVBlockSource@@@Z"
#define S_BlockSource__getBlock "?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z"
#define S_FaceDirectionalBlock__getFacingDirection "?getFacingDirection@FaceDirectionalBlock@@SAEAEBVBlock@@_N@Z"
#define S_Level__tick "?tick@Level@@UEAAXXZ"
#define S_ServerNetworkHandler___getServerPlayer "?_getServerPlayer@ServerNetworkHandler@@EEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@W4SubClientId@@@Z"
#define S_Player__getXuid "?getXuid@Player@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ"
#define SC_PlaySoundPacket__PlaySoundPacket "??0PlaySoundPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z"
#define S_ServerPlayer__sendNetworkPacket "?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z"
#define S_MinecraftPackets__createPacket "?createPacket@MinecraftPackets@@SA?AV?$shared_ptr@VPacket@@@std@@W4MinecraftPacketIds@@@Z"
#define S_Actor__getOrCreateUniqueID "?getOrCreateUniqueID@Actor@@QEBAAEBUActorUniqueID@@XZ"
#define S_Actor__getNameTag "?getNameTag@Actor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ"
#define S_Actor__getPosition "?getPosition@Actor@@QEBAAEBVVec3@@XZ"
#define SC_ServerPlayer__ServerPlayer "??0ServerPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVServerNetworkSystem@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@9V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z"
#define SD_ServerPlayer__ServerPlayer "??_EServerPlayer@@UEAAPEAXI@Z"

#endif
