#ifndef _ESMD_LINK_WAN_H
#define _ESMD_LINK_WAN_H

bool isDslLineLinkUp();
zcfgRet_t initWanLinkInfo();
void esmdAtmLinkStatusChanged(objIndex_t *, bool);
void esmdPtmLinkStatusChanged(objIndex_t *, bool);
void updateWanLinkStatus(const char *, bool skipEthWanAutoHuntProcess);
void esmdResetWanLinkStatus(int);
void wanConnctionReadyHandle(char *, uint8_t clientEid, uint32_t clientPid);
void wanConnctionLostHandle(char *, uint8_t clientEid, uint32_t clientPid);
//INTERNET_LED_CONTROL
void wanInternetLEDUpdate(void);
int getIPv6DefaultGatwayStatus(void);
int getIPv4DefaultGatwayStatus(void);

bool isVcAutoHuntEnable(void);
bool isVlanAutoHuntEnable(void);



#endif
