extern char D_0047B170[],D_0047D138[],D_0044DD18[],D_0047B190[],D_0047B1A0[];
extern void func_001D4040(void*,const char*),func_002A4928(void*);
extern void *D_002AD408(u32);extern void func_001E2460(void*,void*),func_001E2B98(void*,const char*,u32),func_001E2470(void*,const char*,void*),func_001D0FF8(void*),func_00263280(void*,void*);
void *func_00288D50(s32*p){u32 n[4];func_001D4040(n,D_0047B170);p[1]=n[0];p[0]=-1;p[2]=(s32)D_0047D138;func_002A4928(p+3);return p;}
static inline void zero3(u32*p){p[0]=0;p[1]=0;p[2]=0;}
static inline void init(u32*p){p[4]=(u32)D_0044DD18;p[2]=0;p[3]=0;p[1]=0;p[0]=0;zero3(p+5);p[8]=0;}
void *func_00288E40(u32*a){u32*p=D_002AD408(36);u32 name[4],reg[4];init(p);func_001E2460(reg,p);func_001E2B98(reg,D_0047B190,a[3]);func_001E2B98(reg,D_0047B1A0,a[4]);return p;}
void func_00288F58(s32*a,char*b){char*o;s32*p;if(b){o=*(char**)(b+80);if(o && !*(s32*)(o+16)){p=D_002AD408(8);func_001D0FF8(p);if(a[3])p[0]=1;if(a[4])p[1]=1;func_00263280(o,p);}}}
void func_00288EE8(char*a,char*b,void*c){u32 reg[4];func_001E2460(reg,c);func_001E2470(reg,D_0047B190,a+12);func_001E2470(reg,D_0047B1A0,a+16);func_00288F58((s32*)a,b);}
