#ifndef __SYS_CALL_WRAPPER_H__
#define __SYS_CALL_WRAPPER_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <pthread.h>
#include "icf_types.h"


/*____________________________________________________________________________*/
/*	functions                                                                                                                     */
/*____________________________________________________________________________*/
icf_void_t* icf_memget(icf_uint32_t size);
icf_void_t icf_memfree(icf_void_t* buffer);
icf_void_t* icf_memcpy(icf_void_t* s1, icf_void_t* s2, icf_uint32_t size);



/*
======================================================================
== Platform-DEPEND Candidate functions:
== the following functions SHOULD be moved to the corresponding Platform-DEPEND part (i.e. sys_itf.c)
== for All Platforms, Once there is any different implement case in some Platform!
======================================================================
*/

void *zyMemcpy(void *p_destination, const void *p_source, unsigned int num_bytes_to_copy);
void *zyMemset(void *p_mem_block, unsigned int value_to_set, unsigned int num);
void *zyMalloc(unsigned int size);
void zyFree(void *ptr);
char *zyStrcpy(char *p_destination, const char *p_source);
char *zyStrncpy(char *p_destination, const char *p_source, unsigned int max_num_bytes);
char *zyStrcat(char *p_destination, const char *p_source);
char *zyStrtok(char *p_source, const char *p_delimiters);
unsigned int zyStrcmp(const char *p_string_1, const char *p_string_2);
unsigned int zyStrcasecmp(const char *p_string_1, const char *p_string_2);
unsigned int zyStrlen(const char *p_string);

int zyMutexInit(pthread_mutex_t *mutex);
int zyMutexLock(pthread_mutex_t *mutex);
int zyMutexUnlock(pthread_mutex_t *mutex);
int zyMutexDestroy(pthread_mutex_t *mutex);


/* Redirect Debug message for ZyIMS to setting direction., __P876__, Klose, 20130128 */
void zyPrintf( const char *fmt, ...);

#define SleepMs(x) usleep(1000*x) //Michael.20150521.003: Add by moving the macro function 'SleepMs(x)' from 'Endpoint_itf.h' & 'vcm.c' to be centralized in the 'syscall_wrapper.h'.

#endif //__SYS_CALL_WRAPPER_H__.
