extern void*D_002AD408(u32);extern void func_001D4040(void*,const char*),func_001E2460(void*,void*),func_001E2C78(void*,const char*,s32),func_001E2E38(void*,const char*,void*);
extern char D_0044BC38[],D_0044BD40[],D_0044BD60[],D_0044BD70[],D_0044DD18[];
static inline void z(s32*p){p[0]=0;p[1]=0;p[2]=0;}
static inline void init(s32*p,s32 key){p[0]=0;p[1]=0;p[2]=0;p[3]=0;p[4]=(s32)D_0044DD18;z(p+5);p[8]=key;}
void*func_00142F40(s32*a){s32 key[8],ctx[4];s32*p=D_002AD408(36);func_001D4040(key,D_0044BD40);init(p,key[0]);func_001E2460(ctx,p);func_001E2C78(ctx,D_0044BC38,a[3]);func_001E2E38(ctx,D_0044BD60,a+4);func_001E2C78(ctx,D_0044BD70,a[5]/30);return p;}
