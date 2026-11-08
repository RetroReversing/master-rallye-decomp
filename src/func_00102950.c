extern void func_001E2C78(void*,const char*,s32);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2B98(void*,const char*,s32);
extern void func_001E2C08(void*,const char*,f32);
extern char D_00444DA8[],D_00444DC8[],D_00444DD8[],D_00444DE0[],D_00444DF0[],D_00444E00[],D_00444E10[],D_0044DD18[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_00102950(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);
func_001D4040(key,D_00444DA8);
{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2E38(reg,D_00444DC8,a+12);
func_001E2B98(reg,D_00444DD8,*(s32*)(a+24));
func_001E2E38(reg,D_00444DE0,a+16);
func_001E2C78(reg,D_00444DF0,*(s32*)(a+32));
func_001E2B98(reg,D_00444E00,*(s32*)(a+28));
func_001E2E38(reg,D_00444E10,a+20);return p;}
