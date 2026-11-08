extern char D_0047D9A8[];extern void D_002AD390(void*);void func_002AED50(void*p,int flags){*(void**)p=D_0047D9A8;if(flags&1)D_002AD390(p);}
extern int *func_002AD838(void);extern void(*D_004270B8)(void);extern void(*D_00426AC0)(void);
int func_002AE760(void){int x;D_004270B8();x=*func_002AD838();return x+8;}
void*func_002AE718(void){void*t;D_00426AC0();t=func_002AE718();D_00426AC0=(void(*)(void))t;return t;}
unsigned long long func_002AE6B8(unsigned long long a,unsigned long long b){s32 ah=(s64)a>>32,bh=(s64)b>>32; s32 al=(s32)a,bl=(s32)b; s32 cross1=al*bh; s32 cross2=ah*bl;u64 low=(u64)(u32)al*(u64)(u32)bl;return (low&0xFFFFFFFFULL)|((u64)(u32)((s32)(low>>32)+cross1+cross2)<<32);}
