/* identical to func_00153318 (matched), with its names changed by decompdecomp */
typedef struct{u8 data[8];} S8;
S8*func_002ECF10(S8*src,S8*end,S8*dst){while(src!=end){if(dst)*dst=*src;src++;dst++;}return dst;}
extern char D_0044DCD8[],D_0044C4F0[],D_0044C740[];
extern void D_002AD390(void*),func_001D4040(void*,const char*);
extern void *D_002AD408(u32);
void func_0014DEC0(char*p,int flag){*(void**)(p+8)=D_0044DCD8;if(flag&1)D_002AD390(p);}
void*func_0014DB88(s32*p){u32 n[4];func_001D4040(n,D_0044C4F0);p[1]=n[0];p[0]=-1;p[2]=(s32)D_0044C740;return p;}
void*func_00159128(s32*a){s32*p=D_002AD408(12);s32 n=a[1];p[2]=(s32)D_0044DCD8;p[1]=n;p[0]=-1;return p;}
