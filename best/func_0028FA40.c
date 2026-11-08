extern char D_0047B6C0[],D_0047C778[],D_0044DCD8[];extern void func_001D4040(void*,const char*);extern void D_002AD390(void*);
void *func_0028FCE8(s32*p){u32 n[4];func_001D4040(n,D_0047B6C0);p[1]=n[0];p[0]=-1;p[2]=(s32)D_0047C778;return p;}
void func_0028FD38(char*p,int f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
typedef struct {float x,y,z;} V3; static inline void copy3(V3*d,V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
extern s32 func_001FDE60(void);extern s32 func_001FDBA8(s32,void*);extern void func_001FE768(void*,s32);extern void func_001FEA38(V3*,void*,V3*);extern void func_00289958(void*,void*);
void func_0028FC28(char*p,char*q){u32 t[4];V3 in,out;s32 a;if(func_001E3650(func_001E4280(),(s32)(p+80))<=0){a=func_001FDBA8(func_001FDE60(),p+12);if(a){float*v;func_001FE768(t,a);v=(float*)(*(char**)(q+80)+80);in.x=v[0];in.y=v[1];in.z=v[2];func_001FEA38(&out,t,&in);copy3((V3*)(p+40),&out);func_00289958(p+16,q);}}}
void func_0028FBF8(char*p,void*q){char*v;*(s32*)(p+28)=*(s32*)(p+84);v=*(char**)(p+8);((void(*)(void*,void*))*(void**)(v+44))(p+*(s16*)(v+40),q);}

extern char D_0047ADC0[],D_0047B050[],D_0047B028[],D_0044DD18[],D_0047AD68[],D_0047B040[],D_0047B6A8[],D_0047D1B8[];
extern void func_001E2460(void*,void*),func_001E28F8(void*,const char*,void*),func_001E25B0(void*,const char*,void*),func_001E2E38(void*,const char*,void*),func_001E2C78(void*,const char*,u32);
extern void *D_002AD408(u32);
extern void func_00289698(void*);
void func_0028FBA0(char*p,u32 unused,void*q){u32 t[4];func_001E2460(t,q);func_001E28F8(t,D_0047B050,p+12);func_001E25B0(t,D_0047ADC0,p+84);}
static inline void zero3(u32*p){p[0]=0;p[1]=0;p[2]=0;}static inline void init(u32*p,u32 n){p[2]=0;p[4]=(u32)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;zero3(p+5);p[8]=n;}
void *func_0028FAE0(char*a){u32*p=D_002AD408(36);u32 name[8],reg[4];func_001D4040(name,D_0047B028);init(p,name[0]);func_001E2460(reg,p);func_001E2E38(reg,D_0047B050,a+12);func_001E2C78(reg,D_0047ADC0,*(u32*)(a+84));return p;}
void *func_0028FA40(s32*p){u32 t[4];s32*k=p+3,*e=p+20;func_001D4040(t,D_0047B6A8);*k=0;p[0]=-1;p[1]=t[0];p[2]=(u32)D_0047D1B8;func_00289698(p+4);*e=0;p[21]=0;func_001D4040(k,D_0047B040);func_001D4040(e,D_0047AD68);return p;}
