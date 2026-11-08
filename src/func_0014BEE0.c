/* identical to func_00145FC8 (matched), with its names changed by decompdecomp */
extern void*D_002AD408(u32);
extern void func_001E2460(void*,s32),func_001E25B0(void*,const char*,void*),func_001E28F8(void*,const char*,void*),func_001E2C78(void*,const char*,s32);
extern char D_0044C4B8[],D_0044DD18[],D_0044BC38[],D_0044BF28[],D_0044BD60[];
extern s32 func_001E38C8(s32,void*);extern void func_001E3D10(s32,void*,s32),func_003FA310(char*,const char*,...);
static inline void z(float*p,float x){p[0]=x;((s32*)p)[1]=0;((s32*)p)[2]=0;}
void*func_0014D0F0(char*a){s32 name[8],reg[4];s32*p=D_002AD408(36);func_001D4040(name,D_0044C4B8);p[2]=0;p[4]=(s32)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;z((float*)(p+5),0);p[8]=name[0];func_001E2460(reg,(s32)p);func_001E2C78(reg,D_0044BC38,*(s32*)(a+12));return p;}
typedef struct __attribute__((packed)){u64 data;}S8;
S8*func_00153B10(S8*src,S8*end,S8*dst){while(src!=end){if(dst)*dst=*src;src++;dst++;}return dst;}
void func_00146020(char*p){char buf[32];char*k; k=p+20;func_003FA310(buf,D_0044BF28,*(s32*)(p+12));func_001D4040(k,buf);if(!func_001E38C8(func_001E4280(),k))func_001E3D10(func_001E4280(),k,1);}
void func_0014BEE0(char*p,s32 u,s32 a){u32 k[4];func_001E2460(k,a);func_001E25B0(k,D_0044BC38,p+12);func_001E28F8(k,D_0044BD60,p+16);}
