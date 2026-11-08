/* identical to func_001E3820 (matched), with its names changed by decompdecomp */
extern s32 func_001E4150(s32,void*);extern s32 func_001E56D8(s32,s32);extern s32 func_001E4DC8(s32);extern s32 func_001D4010(s32);extern void func_001D2CD8(s32*,s32);extern void func_001D4040(void*,s32);extern void func_003F7320(void(*)(void));extern void func_001E3728(void);extern s32 D_00426378,D_00492220;extern s32 func_001E5E10(s32,void*);
void func_001E4070(s32 a,void*b,s32 c){func_001E56D8(func_001E4150(a,b),c);}
s32 func_001E37E8(s32 a,void*b){s32*p=(s32*)func_001E4150(a,b);s32 v=0;if(p[2]==9)v=p[1];return v;}
s32*func_001E3750(s32 a,s32*b){s32 buf[4];if(!D_00426378){D_00426378=1;D_00492220=0;func_003F7320(func_001E3728);}func_001D4040(buf,*b);func_001D2CD8(&D_00492220,func_001D4010(func_001E4DC8(func_001E4150(a,buf))));return &D_00492220;}
typedef struct{ s32 x,y,t,w[4];} Cfg;
typedef struct{Cfg*b,*e;} CV;
void func_001E3918(s32 a,CV*b){Cfg*p=b->b;if(p!=b->e)do{if((p->t^12)!=0)func_001E5E10(func_001E4150(a,p),p);p++;}while(p!=b->e);}
