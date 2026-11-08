/* identical to func_00132000 (matched), with its names changed by decompdecomp */
/* identical to func_00288DE8 (matched), with its names changed by decompdecomp */
extern void func_001D4040(void*,const char*);
extern char D_0047B678[],D_0047D078[],D_0047B078[],D_0047D438[],D_0047AD68[];
extern char D_0047B1D0[],D_0047B1E8[],D_0047B1F8[],D_0047B208[];
extern void func_001E2460(void*,s32);
extern void func_001E2510(void*,const char*,void*);
extern void func_001E2470(void*,const char*,void*);
extern void **func_00201350(void);
#define W(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
void *func_0028F8C8(void*p){s32 k;func_001D4040(&k,D_0047B678);W(p,4)=k;W(p,0)=-1;W(p,8)=(s32)D_0047D078;W(p,12)=0;W(p,16)=0;return p;}
void func_00289038(void*a,void*b){void*d=*(void**)((char*)b+80);char*s=*(char**)func_00201350()+192;float*t=(float*)((char*)d+80);t[0]=((float*)s)[0];t[1]=((float*)s)[1];t[2]=((float*)s)[2];t[3]=1.0f;}
void func_00289608(void*p,s32 unused,s32 a){s32 k;func_001E2460(&k,a);func_001E2510(&k,D_0047B1D0,(char*)p+36);F(p,40)=F(p,36)/30.0f;func_001E2470(&k,D_0047B1E8,(char*)p+12);func_001E2470(&k,D_0047B1F8,(char*)p+16);func_001E2470(&k,D_0047B208,(char*)p+20);}
static inline void vinit(float*p,float x){p[0]=x;((s32*)p)[2]=0;((s32*)p)[1]=0;}
void *func_00289698(void*p){s32 k;func_001D4040(&k,D_0047B078);W(p,4)=k;W(p,0)=-1;W(p,8)=(s32)D_0047D438;W(p,20)=1;W(p,12)=0;W(p,16)=0;vinit((float*)((char*)p+24),0);vinit((float*)((char*)p+36),1);vinit((float*)((char*)p+48),0);W(p,60)=0;func_001D4040((char*)p+60,D_0047AD68);return p;}
