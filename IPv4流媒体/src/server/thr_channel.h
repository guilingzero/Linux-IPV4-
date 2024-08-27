#ifndef THR_CHANNEL_H__
#define THR_CHANNEL_H__

#include "medialib.h"

int channel_create(struct medialib_des_st *);  //创建线程
int channel_destory(struct medialib_des_st *);  //销毁单个线程
int channel_destoryall(void);   //销毁全部线程


#endif
