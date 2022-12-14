#ifndef _ZCFG_MSG_H
#define _ZCFG_MSG_H
#include "zcfg_common.h"
#include "zcfg_eid.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#define ERROR_APPLY_MSG -1

#define ZCFG_NO_WAIT_REPLY (1 << 31)
#if 1 /* non-blocking config apply, ZyXEL, John */
#define ZCFG_BLOCK_MODE_CONFIG_APPLY (1 << 30)
#endif
#define ZCFG_PARTIAL_OBJECT_SET (1 << 29)

/* ZCFG message type with waiting reply*/
#define REQUEST_GET_NEXT_OBJ                0
#define RESPONSE_NO_MORE_INSTANCE           1
#define REQUEST_GET_OBJ                     2
#define RESPONSE_GET_SUCCESS                3
#define RESPONSE_GET_EMPTY                  4
#define RESPONSE_GET_FAIL                   5
#define REQUEST_SET_OBJ                     6
#define REQUEST_SET_MULTI_OBJ               7
#define REQUEST_ADD_INSTANCE                8
#define REQUEST_DEL_INSTANCE                9
#define REQUEST_FIRMWARE_UPGRADE            10
#define REQUEST_RESTORE_DEFAULT             11
#define RESPONSE_SUCCESS                    12
#define RESPONSE_FAIL                       13
#define REQUEST_GET_NEXT_SUB                14
#define REQUEST_GET_PARAM_ATTR              15
#define REQUEST_SET_PARAM_ATTR              16
#define RESPONSE_WRITE_OBJ_SUCCESS          17
#define RESPONSE_WRITE_OBJ_FAIL             18
#define ZCFG_MSG_DELAY_APPLY                19
#define ZCFG_MSG_RE_APPLY                   20
#define REQUEST_SET_WITHOUT_APPLY           21
#define REQUEST_ROMD_UPGRADE                22
#define REQUEST_GET_OBJ_WITHOUT_UPDATE      23
#define REQUEST_CONFIG_BACKUP               24
#define ZCFG_MSG_UPNP_PORTMAP_GET           25

#define REQUEST_GET_NEXT_OBJ_WITHOUT_UPDATE 27
#define REQUEST_GET_NEXT_SUB_WITHOUT_UPDATE 28
#define ZCFG_MSG_VOICE_STATS_GET            29
#define ZCFG_MSG_VOICE_CONTROL              30
#define ZCFG_MSG_VOICE_DEBUG_AND_TEST       31
#define REQUEST_REINIT_MACLESS_PROVISIONING 32
#define ZCFG_MSG_DECT_CONTROL               33
#define ZCFG_MSG_DECT_STATS_GET             34
#define ZCFG_MSG_GET_TR98_ALL_IGD_NAMES     36
#define ZCFG_MSG_MCPCTL						37
#define ZCFG_MSG_CLEAN_ROMD					38
#define ZCFG_MSG_SAVE_ROMD					39
#define ZCFG_MSG_VOICE_LIST_ACCESS          40
#define REQUEST_FIRMWARE_UPGRADE_CHK        41
#define ZCFG_MSG_MAIL_SEND_EVENT			42
#define REQUEST_RESTORE_DEFAULT_CHK			43
#define ZCFG_MSG_WAN_CONNCTION_READY		44
#define ZCFG_MSG_WAN_CONNCTION_LOST			45

#if 1  /* __ZyXEL__, Albert, 20150520, Supports PPPoE Connection Delay and LCP Echo  */
#define ZCFG_MSG_PPP_LCP_ECHO_GET			46
#endif
/* __ZyXEL__, Albert, 20150622, Support DHCP option125   */
#define ZCFG_MSG_DHCP_OPTIONI125_CHK			49
#define ZCFG_MSG_VOICE_CAP_GET               50
/* Connect/Disconnect PPP by Status page */
#define ZCFG_MSG_WAN_PPP_DISCONNECT         51
#define ZCFG_MSG_WAN_PPP_CONNECT            52
/* Release/Renew IP by Status page */
#define ZCFG_MSG_WAN_IP_RELEASE             53
#define ZCFG_MSG_WAN_IP_RENEW               54
#define REQUEST_FIRMWARE_WRITE_ONLY         55
#define REQUEST_GET_WHOLE_OBJ_BY_NAME       56
#define REQUEST_SET_WHOLE_OBJ_BY_NAME       57

#define ZCFG_MSG_REQUEST_TR98_MAPPING       99	/*Request for tr181 object name related with tr98*/
#define ZCFG_MSG_REQUEST_TR181_MAPPING      100	/*Request for tr98 object name related with tr181*/

/*Test Use*/
#define ZCFG_MSG_REPLY				101
#define ZCFG_MSG_HELLO				102
#define ZCFG_MSG_NO_REPLY			(101 | ZCFG_NO_WAIT_REPLY)

#define ZCFG_MSG_REQUEST_TR98_OBJMAPPING 103
#define ZCFG_MSG_REQUEST_TR181_OBJMAPPING 104
#define ZCFG_MSG_NOTIFY_TR69_TR98   (105 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_ADD_TR98_MAPPING   106
#define ZCFG_MSG_UPDATE_PARAMETER_NOTIFY   (120 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_HOSTS	121

#define ZCFG_MSG_REQUEST_DELAY_DELETE	130

#define ZCFG_MSG_UPGRADING_FW_CHECK_FWID_STATUS		131
#define ZCFG_MSG_UPGRADING_FW_CHECK_MODEL_STATUS	132

#define ZCFG_MSG_REQUEST_GET_PARAM_ATTR_LIST	133

/* ZCFG message type without waiting reply*/
#define ZCFG_MSG_LAN_IP_CONNECTION_UP           (1  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_DHCPC_BOUND                    (2  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_DHCPC_DECONFIG                 (3  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_DHCPC_RELEASE                  (4  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_PPPD_EVENT                     (5  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WAN_IP_CONNECTION_UP           (6  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WAN_LINK_STATUS                (7  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_PARAMETER_CHANGED_NOTIFY       (8  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WAN_PPP_CONNECTION_UP          (9  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WAN_CONNECTION_READY           (10 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WAN_CONNECTION_LOST            (11 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_LAN_MAC_CONTROL_EVENT          (12 | ZCFG_NO_WAIT_REPLY) /*For MAC Filter*/
#define ZCFG_MSG_VOICE_CONNECTION_CHANGE        (13 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VOICE_CONNECTION_LOST          (14 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VOICE_DYNAMIC_INSTANCE_CHANGED (15 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VOICE_STATIC_CONFIG_CHANGED    (16 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VOICE_CONFIG_SAVED             (17 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_INIT_WAN_LINK_INFO             (18 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_REBOOT_SYSTEM                  (19 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_PING_MSG                       (20 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_TRACERT_MSG                    (21 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_DHCP6C_STATE_CHANGED           (22 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_MGABDEV_DETECT                 (23 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_RA_INFO                        (24 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_MGMT_NAT_DETECT                (25 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_MGMT_NAT_CLEAR                 (26 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_MGMT_UDP_CONNREQ               (27 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_MGMT_DIAGNOSTIC_COMPLETE       (28 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_NSLOOKUP_MSG                   (29 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_ATM_OAM_F5_COMPLETE            (30 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_ATM_OAM_F4_COMPLETE            (31 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VC_AUTOHUNT_START              (32 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VC_AUTOHUNT_STOP               (33 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_HTTP_TIMEOUT_CONFIG            (34 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_NTP_SYNC_SUCCESS               (35 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_STB_VENDOR_ID_FIND             (36 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_AUTO_PROVISION                 (37 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_TR64_DEVICE_UPDATE             (38 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_INIT_DATAMODEL_FIN             (39 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VLAN_AUTOHUNT_START			(40 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VLAN_AUTOHUNT_STOP				(41 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VLAN_HUNT_SUCCESS				(42 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VLAN_HUNT_FAIL					(43 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VLAN_HUNT_SET_TIMEOUT			(44 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_MGMT_CONNECT_UPDATE            (45 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_DOWNLOAD_DIAG_COMPLETE_EVENT   (46 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_TR64_LAN_DEVICE_UPDATE         (47 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VOICE_CONFIG_CHANGED_PARTIAL_RELOAD	(48 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_DHCPC_RENEW                 	(52 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_AUTOHUNT_FINISH				(53 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_ETHWAN_TR69_PROVISION_SUCCESS  (54 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_VLAN_HUNT_TERMINATE            (55 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_AUTO_RSV_IP					(56 | ZCFG_NO_WAIT_REPLY)//ch_wang
#define ZCFG_MSG_UPLOAD_DIAG_COMPLETE_EVENT     (58 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_DHCPD_OPTION                   (59 | ZCFG_NO_WAIT_REPLY)
#ifdef ZYXEL_WIND_ITALY_CUSTOMIZATION
#define ZCFG_MSG_SIP_WAN_CHK                    (60 | ZCFG_NO_WAIT_REPLY)
#endif
#define ZCFG_MSG_CLEAN_ROMD_NO_REPLY			(60 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_SAVE_ROMD_NO_REPLY				(61 | ZCFG_NO_WAIT_REPLY)
#if 1 //ZyXEL, Renew add WAN release/renew command, Albert
#define ZCFG_MSG_WAN_PPP_DISCONNECTED          (66  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WAN_PPP_CONNECTING            (67  | ZCFG_NO_WAIT_REPLY)
#endif
#define ZCFG_MSG_WNA_INTERNET_LED_UPDATE       (68  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_UPGRADING_FW_CHECK_FWID_ON	(69  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_UPGRADING_FW_CHECK_FWID_OFF	(70  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_UPGRADING_FW_CHECK_MODEL_ON	(71  | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_UPGRADING_FW_CHECK_MODEL_OFF	(72  | ZCFG_NO_WAIT_REPLY)
#ifdef SUPPORT_PROXIMITY_SENSOR
#define ZCFG_MSG_PROXIMITY_SENSOR_ON            (73 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_PROXIMITY_SENSOR_OFF           (74 | ZCFG_NO_WAIT_REPLY)
#endif
#define ZCFG_MSG_ZYAUTOPROVISION           (75 | ZCFG_NO_WAIT_REPLY)//Miles_Lin
#ifdef ZYXEL_POWER_MGMT
#define ZCFG_MSG_POWER_MGMT_LED_ON					(76 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_POWER_MGMT_LED_OFF					(77 | ZCFG_NO_WAIT_REPLY)
#endif


/* WIFI message */
#define ZCFG_MSG_WIFI_INIT					(500 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WIFI_RELOAD				(501 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WIFI_UPDATE_LANINFO		(502 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WIFI_GET_LIST				503
#define ZCFG_MSG_WPS_RELOAD					(504 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WPS_HWBTN_PRESS			505
#define ZCFG_MSG_WPS_SWBTN_PRESS			506
#define ZCFG_MSG_WPS_START_STAPIN			507
#define ZCFG_MSG_WDS_SCAN					508
#define ZCFG_MSG_WIFI_STA_FILTER			(509 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_CHANNEL_SCAN				510
#define ZCFG_MSG_GET_CHANNEL_INFO			511
#define ZCFG_MSG_WIFI_ST_UPDATE				512
#define ZCFG_MSG_WIFI_RELOAD_CHECK			513
#define ZCFG_MSG_WIFI_LED_ENABLE			(514 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_WPS_ACTION_CANCEL			515
#define ZCFG_MSG_WPS_UPDATE_CONFIG			516
#define ZCFG_MSG_WLAN_GET_CMD				520
#define ZCFG_MSG_WLAN_SET_CMD				521
#define ZCFG_MSG_WIFI_RELOAD_DELAY			(522 | ZCFG_NO_WAIT_REPLY)

#if 1 /* #36467, MAC filter with SONiQ, cpwang, 2017-04-18 10:56:46 */
#define ZCFG_MSG_BSA_STA_FILTER			    (523 | ZCFG_NO_WAIT_REPLY)
#endif /* #36467, MAC filter with SONiQ, cpwang, 2017-04-18 10:56:46 */

#define ZCFG_MSG_FAKEROOT_COMMAND			(800 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_FAKEROOT_SYS_ATSH			801	/* Fakeroot for "sys atsh" */

#if 1 /* __ZyXEL__, Albert, 20150416, Web redirect   */
#define ZCFG_MSG_WIFI_WEB_REDIRECT_CHECK        (61 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_PPP_AUTH_FAIL                  (62 | ZCFG_NO_WAIT_REPLY)
#endif
#define ZCFG_MSG_UPDATE_ONE_CONNECT				(63 | ZCFG_NO_WAIT_REPLY)
/* end ZCFG message type */

#define ZCFG_MSG_REQ_REBOOT                   	(64 | ZCFG_NO_WAIT_REPLY)
#define ZCFG_MSG_REQ_SYNCFLASH                  (65 | ZCFG_NO_WAIT_REPLY)

#define ZCFG_ADDRESS_PREFIX "/var/lib/.sock/zcfg_sockaddr"
#define ZCFG_MSG_BACKLOG 5

typedef struct zcfgMsg_s {
	uint32_t type;
	uint32_t oid;
	uint8_t srcEid;
	uint8_t dstEid;
	uint16_t length;
	int32_t clientPid;
	int32_t statCode;
	char reserve[28];
	objIndex_t objIid[1];
}zcfgMsg_t;

void zcfgEidInit(zcfgEid_t eid, char *);
zcfgRet_t zcfgMsgServerInit();
zcfgRet_t zcfgMsgReqRecv(zcfgMsg_t **recvBuf, uint32_t timeout_msec);
zcfgRet_t zcfgMsgRepSend(zcfgMsg_t *sendMsg);
zcfgRet_t zcfgMsgSendAndGetReply(zcfgMsg_t *sendMsg, zcfgMsg_t **replyMsg, uint32_t timeout_msec);
#endif
