#include <ctype.h>
#include <unistd.h>
#include "zcfg_common.h"

#ifdef SUPPORT_LANVLAN
zcfgRet_t zyUtilISetIfState(char *ifName, bool up);
#endif
#define zyUtilIGetSerailNum zyUtilIGetSerialNumber
zcfgRet_t zyUtilIGetBaseMAC(char *mac);
zcfgRet_t zyUtilIGetNumberOfMAC(int *num);
zcfgRet_t zyUtilIGetNthMAC(char *mac, int nth);
zcfgRet_t zyUtilIGetModelID(char *model_id);
zcfgRet_t zyUtilIGetProductName(char *pdname);
zcfgRet_t zyUtilIGetFirmwareVersion(char *fwversion);
zcfgRet_t zyUtilIGetSerialNumber(char *serianumber);
#ifdef ECONET_PLATFORM
zcfgRet_t zyUtilIGetGponSerialNumber(char *serianumber);
zcfgRet_t zyUtilIGetBootingFlag(int *boot_flag);
zcfgRet_t zyUtilISetBootingFlag(int boot_flag);
zcfgRet_t zyUtilGetBootImageHeader(void *booting_header);  //should conver to "struct trx_header"
zcfgRet_t zyUtilGetDualImageInfo(int bootFlag, char *fwversion);
zcfgRet_t zyUtilGetWlanReserveAreaOffset(char*, unsigned int*);
#endif
#ifdef BROADCOM_PLATFORM
zcfgRet_t memaccess(int type, unsigned long addr, unsigned long *value);
#endif
int zyUtilGetGPIO(int gpioNum);
float transferOpticalTemperature(int input_value);
float transferOpticalPower(float input_value);
