#ifndef _ZCFG_DEBUG_H
#define _ZCFG_DEBUG_H

#include <syslog.h>

#define ZCFG_LOG_USE_SYSLOG 1

/*ZCFG debug level*/
#define ZCFG_LOG_EMERG   LOG_EMERG
#define ZCFG_LOG_ALERT   LOG_ALERT
#define ZCFG_LOG_CRIT    LOG_CRIT
#define ZCFG_LOG_ERR     LOG_ERR
#define ZCFG_LOG_WARNING LOG_WARNING
#define ZCFG_LOG_NOTICE  LOG_NOTICE
#define ZCFG_LOG_INFO    LOG_INFO
#define ZCFG_LOG_DEBUG   LOG_DEBUG
/*End*/

/*ZCFG LOG Prefix*/
#define ZCFG_LOGPRE_ACCOUNT "Account:"
#define ZCFG_LOGPRE_XDSL "xDSL:"
#define ZCFG_LOGPRE_IGMP "IGMP:"
#define ZCFG_LOGPRE_ACL "ACL:"
#define ZCFG_LOGPRE_WIFI "Wifi:"
#define ZCFG_LOGPRE_NAT "NAT:"
#define ZCFG_LOGPRE_QOS "QoS:"
#define ZCFG_LOGPRE_DDNS "DDNS:"
#define ZCFG_LOGPRE_MACFILTER "MACFilter:"
#define ZCFG_LOGPRE_FIREWALL "Firewall:"
#define ZCFG_LOGPRE_SYSTEM "System:"
#define ZCFG_LOGPRE_UPNP "upnp:"

/*End*/

/*Log the message of level less than ZCFG_LOG_LEVEL*/
#define ZCFG_LOG_LEVEL ZCFG_LOG_INFO

#if ZCFG_LOG_USE_SYSLOG
#define zcfgLog(logLev, format, ...) \
                if(ZCFG_LOG_LEVEL >= logLev) \
                        syslog(logLev, format, ##__VA_ARGS__)
#define zcfgLogPrefix(logLev, Prefix, format, ...) \
                if(ZCFG_LOG_LEVEL >= logLev) \
                        syslog(logLev, Prefix " " format, ##__VA_ARGS__)
#else
#define zcfgLog(logLev, format, ...) \
		if(ZCFG_LOG_LEVEL >= logLev) \
			printf(format, ##__VA_ARGS__)
#define zcfgLogPrefix(logLev, Prefix, format, ...) \
                if(ZCFG_LOG_LEVEL >= logLev) \
                        printf(Prefix " " format, ##__VA_ARGS__)
#endif


#endif
