/* identical to func_0014AB90 (matched), with its names changed by decompdecomp */
extern void func_001D4040(void*,const char*);
extern char D_0044C500[],D_0044C510[],D_0044C700[],D_0044C420[],D_0044C438[],D_0044C840[],D_0044DD18[],D_0044BC38[],D_0044BD60[];
extern void* D_002AD408(s32);extern void func_001E2460(void*,void*);extern void func_001E2C78(void*,const char*,s32);extern void func_001E2E38(void*,const char*,void*);
#define W(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
void*func_0014DE38(s32*p){s32 k[4];func_001D4040(k,D_0044C500);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044C700;p[3]=0;p[4]=-1;p[5]=0;p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=103;func_001D4040(p+9,D_0044C510);return p;}
void*func_0014BDA0(s32*p){s32 k[4];func_001D4040(k,D_0044C420);p[1]=k[0];p[4]=0;p[5]=0;p[0]=-1;p[2]=(s32)D_0044C840;func_001D4040(p+4,D_0044C438);p[3]=0;((float*)p)[8]=90.0f;p[7]=0;return p;}
static inline void vi(float*q){u32*p=(u32*)q;p[0]=0;p[1]=0;p[2]=0;}
static inline void ini(u32*p,u32 n){p[2]=0;p[4]=(u32)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;vi((float*)(p+5));p[8]=n;}
void*func_0014BE20(void*a){s32 k[8],c[4];s32 n;u32*p=D_002AD408(36);func_001D4040(k,D_0044C420);ini((u32*)p,k[0]);func_001E2460(c,p);func_001E2C78(c,D_0044BC38,W(a,12));func_001E2E38(c,D_0044BD60,(char*)a+16);return p;}
extern s32 func_00193B60(void),func_00193138(s32,s32),func_00193400(s32,s32);extern void func_0021E4F0(void*),func_0029EC50(void*,s32,s32);
typedef struct {float x,y,z;} V;
static inline void cp(V*d,V*s){d->x=s->x;d->y=s->y;d->z=s->z;}
void func_0014BCD8(void*p,void*q){void*t;V v;if(!func_00193138(func_00193B60(),W(p,12)))func_0021E4F0(q);F(p,16)=F(*(void**)((char*)q+76),80);F(p,20)=F(*(void**)((char*)q+76),84);W(p,24)=func_00193400(func_00193B60(),W(p,12));t=*(void**)((char*)q+4);if(t){v.x=F(p,16);v.y=F(p,20);v.z=0;cp((V*)((char*)t+12),&v);func_0029EC50(t,201,W(p,24));}}
extern char D_0044C408[],D_0044C880[],D_0044C3F0[],D_0044C8C0[],D_0044C2D0[],D_0044C940[];
void*func_0014BB98(s32*p){u32 k[4];func_001D4040(k,D_0044C408);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044C880;p[3]=0;return p;}
void*func_0014B580(s32*p){u32 k[4];func_001D4040(k,D_0044C3F0);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044C8C0;p[11]=0;p[12]=0;p[3]=0;return p;}
void*func_0014ACA8(s32*p){u32 k[4];func_001D4040(k,D_0044C2D0);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044C940;p[4]=-1;p[8]=0;p[9]=0;p[3]=0;return p;}
extern char D_00444B98[],D_00447A60[];
extern float func_001E3610(s32,void*);extern void func_003FA310(char*,const char*,...);extern void func_0029ECB8(s32,const char*);
static inline __attribute__((always_inline)) void*ki(void*p,const char*s){func_001D4040(p,s);return p;}
void func_0014ABE0(void*a,void*b){char buf[128];s32 k[4];s32 m=func_001E4280();float t;t=func_001E3610(m,ki(k,D_00444B98));func_003FA310(buf,D_00447A60,(s32)(t/60.0f),(s32)t%60,(s32)(t*100.0f)%100);if(W(b,4))func_0029ECB8(W(b,4),buf);}
extern char D_0044C4F0[],D_0044C740[],D_0044C220[],D_0044C9C0[],D_0044C238[],D_0044C258[];
extern void func_001E25B0(void*,const char*,void*),func_001E2470(void*,const char*,void*);
void*func_0014DB88(s32*p){u32 k[4];func_001D4040(k,D_0044C4F0);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044C740;return p;}
void*func_0014A3E8(s32*p){u32 k[4];func_001D4040(k,D_0044C220);p[0]=-1;p[1]=k[0];p[2]=(s32)D_0044C9C0;p[4]=40;p[3]=0;p[5]=0;return p;}
void func_0014A518(s32*p,s32 u,void*a){s32 k[4];func_001E2460(k,a);func_001E25B0(k,D_0044BC38,p+3);func_001E25B0(k,D_0044C238,p+4);func_001E2470(k,D_0044C258,p+5);if(p[4]<=0)p[4]=1;}
