#ifndef _ESMD_H
#define _ESMD_H
#ifdef ISKON_CUSTOMIZATION_Motorola_VIP1003
#include <time.h>
#endif
void updateLinkStatus(const char*);
//void updateLanLinkStatus(void);
//void updateWanLinkStatus(void);
void emailEventHandle(char *buf, uint8_t clientEid, uint32_t clientPid);

typedef enum {
		isATM,
		isPTM,
        isXTM,
        isEth,
        isMoca,
        isGpon,
        isEpon,
		isWwan,
		none
} wanLinkType;
//INTERNET_LED_CONTROL
typedef enum{
	INTERNET_LED_FAIL = 0,
	INTERNET_LED_DATA
}internet_led_t;
typedef enum{
	INTERNET_LED_STATE_OFF = 0,
	INTERNET_LED_STATE_ON,
	INTERNET_LED_STATE_FAIL
}internet_led_state_t;

#ifdef ISKON_CUSTOMIZATION_Motorola_VIP1003
#define NUM_LAN_PORT 4
typedef struct {
	char portName[16];
	time_t time;
} sPortName;

extern sPortName lanPortName[NUM_LAN_PORT];
#endif
#endif

#define JSON_OBJ_COPY(json_object) json_tokener_parse(json_object_to_json_string(json_object))

