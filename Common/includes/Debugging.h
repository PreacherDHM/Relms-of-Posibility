#ifndef DEBUGGING_H
#define DEBUGGING_H
//Start Coding Debugging. 
#define P_COLOR_INFO "\033[0;36m"
#define P_COLOR_TAG "\033[1;33m"
#define P_COLOR_NC "\033[0m"

#define pInfo(tag, message) printf("[%sINFO%s]%s %s%s: %s\n",P_COLOR_INFO,P_COLOR_NC, P_COLOR_TAG,  tag, P_COLOR_NC, message)
//#define pInfo(tag, message) printf("[INFO] %s: %s",  tag, message)
//#define pInfo(tag, message) printf("[INFO] %s: %s\n", tag, message)
#endif
