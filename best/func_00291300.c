extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2F18(void*,const char*,void*);
extern void func_001E2B98(void*,const char*,s32);
extern void func_001E2C78(void*,const char*,s32);
extern char D_0044DD18[],D_0047ADC0[],D_0047B218[],D_0047B228[],D_0047B238[],D_0047B248[],D_0047B778[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_00291300(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);
func_001D4040(key,D_0047B778);
{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2F18(reg,D_0047B218,a+0x1C);
func_001E2F18(reg,D_0047B228,a+0x34);
func_001E2F18(reg,D_0047B238,a+0x28);
func_001E2B98(reg,D_0047B248,*(s32*)(a+0x18));
func_001E2C78(reg,D_0047ADC0,*(s32*)(a+0xC));
return p;}
