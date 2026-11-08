extern void func_001D4040(void*,const char*);extern void func_001E3D10(s32,void*,s32);extern void func_001E3EC0(s32,void*,s32);
extern char D_00444898[];
extern char D_004448A8[];
extern char D_004448B8[];
extern char D_004448D0[];
extern char D_004448E8[];
extern char D_004448F8[];
extern char D_00444908[];
extern char D_00444918[];
extern char D_00444928[];
extern char D_00444940[];
extern char D_00444958[];
extern char D_0044DC58[];
static inline __attribute__((always_inline)) void *key(void*p,const char*s){func_001D4040(p,s);return p;}
void *func_00100440(s32 *p){s32 a[4],b[4];func_001D4040(a,D_00444898);p[2]=(s32)D_0044DC58;p[0]=-1;p[1]=a[0];func_001E3D10(func_001E4280(),key(b,D_004448A8),0);func_001E3D10(func_001E4280(),key(b,D_004448B8),0);func_001E3D10(func_001E4280(),key(b,D_004448D0),0);func_001E3EC0(func_001E4280(),key(b,D_004448E8),0);func_001E3EC0(func_001E4280(),key(b,D_004448F8),0);func_001E3EC0(func_001E4280(),key(b,D_00444908),0);func_001E3EC0(func_001E4280(),key(b,D_00444918),0);func_001E3D10(func_001E4280(),key(b,D_00444928),0);func_001E3D10(func_001E4280(),key(b,D_00444940),0);func_001E3D10(func_001E4280(),key(b,D_00444958),0);return p;}
