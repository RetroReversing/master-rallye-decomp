/* identical to func_0011CF30 (matched), with its names changed by decompdecomp */
extern u8 D_0044DCD8[],D_0044DD18[],D_0044D668[];
extern const char D_004472E8[],D_00447300[],D_004471E8[];
extern void D_002AD390(void*);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*),func_001E2460(void*,void*),func_001E2E38(void*,const char*,void*),func_001E2C78(void*,const char*,u32);
void func_0028CE08(char*p,int flag){*(void**)(p+8)=D_0044DCD8;if(flag&1)D_002AD390(p);}
typedef struct {u32 name[8];u32 reg[4];} Loc;
static inline void zero3(u32*q){q[0]=0;q[1]=0;q[2]=0;}
static inline void init(u32*p,u32 name){p[4]=(u32)D_0044DD18;p[2]=0;p[3]=0;p[1]=0;p[0]=0;zero3(p+5);p[8]=name;}
void *func_0011CC20(char*a){u32*p=D_002AD408(36);Loc t;func_001D4040(t.name,D_004472E8);init(p,t.name[0]);func_001E2460(t.reg,p);func_001E2E38(t.reg,D_00447300,a+12);func_001E2C78(t.reg,D_004471E8,*(u32*)(a+16));return p;}
void *func_0011CBC8(s32*p){u32 name[4];func_001D4040(name,D_004472E8);p[1]=name[0];p[0]=-1;p[2]=(s32)D_0044D668;p[3]=0;return p;}
extern float func_003F3140(float);
void func_0011CB28(char*p){if(*(int*)(p+80)&&*(int*)(p+92)){int n=*(int*)(p+88)+1;float f;*(int*)(p+88)=n;if(n>=64)*(int*)(p+88)=0;f=func_003F3140((float)*(int*)(p+88)/10.0f)/5.0f+0.8999999761581421f;*(float*)(p+84)=f;if(f>1.0f)*(float*)(p+84)=1.0f;}}
