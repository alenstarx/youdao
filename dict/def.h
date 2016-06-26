#ifndef DEF_H
#define DEF_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/ipc.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <net/if.h>
#include <net/if_arp.h>
#include <signal.h>
#include <netinet/ip.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/ip_icmp.h>
#include <linux/if_ether.h>
#include <malloc.h>
#include <fcntl.h>
#include <termios.h>
#include <ctype.h>
#include <pthread.h>
#include <time.h>
#include <signal.h>
#include <sched.h>

#define def_msleep(M) usleep(1000*(M))
#define def_min(a,b) ((a) < (b) ? (a):(b))
#define def_max(a,b) ((a) > (b) ? (a):(b))

#ifdef DEBUG
    #define LOGD(...) do{printf("%s (%4d) DEBUG: ", __FILE__, __LINE__);printf(__VA_ARGS__);printf("\n");}while(0)
    #define LOGI(...) do{printf("%s (%4d) INFO: ", __FILE__, __LINE__);printf(__VA_ARGS__);printf("\n");}while(0)
    #define LOGW(...) do{printf("%s (%4d) WARN: ", __FILE__, __LINE__);printf(__VA_ARGS__);printf("\n");}while(0)
    #define LOGE(...) do{printf("%s (%4d) ERROR: ", __FILE__, __LINE__);printf(__VA_ARGS__);printf("\n");}while(0)
#else
	#define LOGI(...) 
	#define LOGD(...) 
	#define LOGW(...) 
    #define LOGE(...) do{printf("%s (%4d) ERROR: ", __FILE__, __LINE__);printf(__VA_ARGS__);printf("\n");}while(0)
#endif

#endif

