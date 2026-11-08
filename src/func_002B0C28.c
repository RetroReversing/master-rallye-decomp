extern u32 D_00427878[2];extern char D_0047DC10[],D_0047DCD8[];
static inline void init(u32*p){if(p){p[1]=(u32)D_0047DCD8;p[0]=(u32)D_0047DC10;}}
static inline u32*ready(u32*p){if(!p[0])init(p);return p;}
u32*func_002B0CD8(void){return ready(D_00427878);}
typedef struct{u32 pad[4];s16 adj;u16 pad1;s32(*fn)(void*,s32,s32,s32,s32,s32);}VT;
typedef struct{u32 pad;VT*vt;}Obj;
s32 func_002B0C28(Obj*(*a)(),s32(*b)(),s32 c,s32 d,s32(*e)(),s32 f){Obj*p=a();VT*v=p->vt;void*o=(char*)p+v->adj;s8*slot=(s8*)v+0x10;s32 x=b();return (*(s32(**)(void*,s32,s32,s32,s32,s32))(slot+4))(o,x,c,d,e(),f);}
extern s32 func_002B1330();extern s32 func_002B05E0();
s32 func_002B0B10(void*p){s32 r=0;if(p){s8*v=*(s8**)((s8*)p+4);r=func_002B0C28(*(Obj*(**)())(v+4),func_002B1330,1,(s32)p+*(s16*)v,func_002B05E0,(s32)p);}return r!=0;}
extern s32 func_002AFF50(u32);
s32 func_002B10E0(u32 a){return func_002AFF50(a);}
