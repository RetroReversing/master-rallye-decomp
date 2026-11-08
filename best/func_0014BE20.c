extern void func_001D4040(void*,const char*);
extern char D_0044C500[],D_0044C510[],D_0044C700[],D_0044C420[],D_0044C438[],D_0044C840[],D_0044DD18[],D_0044BC38[],D_0044BD60[];
extern void* D_002AD408(s32);extern void func_001E2460(void*,void*);extern void func_001E2C78(void*,const char*,s32);extern void func_001E2E38(void*,const char*,void*);
#define W(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
void*func_0014DE38(s32*p){s32 k[4];func_001D4040(k,D_0044C500);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044C700;p[3]=0;p[4]=-1;p[5]=0;p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=103;func_001D4040(p+9,D_0044C510);return p;}
void*func_0014BDA0(s32*p){s32 k[4];func_001D4040(k,D_0044C420);p[1]=k[0];p[4]=0;p[5]=0;p[0]=-1;p[2]=(s32)D_0044C840;func_001D4040(p+4,D_0044C438);p[3]=0;((float*)p)[8]=90.0f;p[7]=0;return p;}
static inline void vi(float*p){p[0]=0;((s32*)p)[1]=0;((s32*)p)[2]=0;}
void*func_0014BE20(void*a){s32 k[8],c[4];s32 n;s32*p=D_002AD408(36);func_001D4040(k,D_0044C420);n=k[0];p[2]=0;p[3]=0;p[1]=0;p[0]=0;*(void**)(p+4)=D_0044DD18;vi((float*)(p+5));p[8]=n;func_001E2460(c,p);func_001E2C78(c,D_0044BC38,W(a,12));func_001E2E38(c,D_0044BD60,(char*)a+16);return p;}
extern s32 func_00193B60(void),func_00193138(s32,s32),func_00193400(s32,s32);extern void func_0021E4F0(void*),func_0029EC50(void*,s32,s32);
typedef struct {float x,y,z;} V;
static inline void cp(V*d,V*s){d->x=s->x;d->y=s->y;d->z=s->z;}
void func_0014BCD8(void*p,void*q){void*t;V v;if(!func_00193138(func_00193B60(),W(p,12)))func_0021E4F0(q);F(p,16)=F(*(void**)((char*)q+76),80);F(p,20)=F(*(void**)((char*)q+76),84);W(p,24)=func_00193400(func_00193B60(),W(p,12));t=*(void**)((char*)q+4);if(t){v.x=F(p,16);v.y=F(p,20);v.z=0;cp((V*)((char*)t+12),&v);func_0029EC50(t,201,W(p,24));}}
