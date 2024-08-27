#ifndef MYTBF_H__
#define MYTBF_H__

#define MAXTBF_NUM 1024//令牌桶数量

typedef void  mytbf_t;//即mytbf_t与void等价

mytbf_t* mytbf_init(int cps,int burst);  //cps：每秒传输的数据 burst：令牌桶的上限  返回:这个结构体的起始地址的指针

int mytbf_fetchtoken(mytbf_t *,int); //取令牌 ，从mytbf_t结构体中 取int个令牌

int mytbf_returntoken(mytbf_t *,int); //令牌取多了 归还

int mytbf_destory(mytbf_t *); //释放空间


#endif