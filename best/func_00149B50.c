extern void func_001D4040(void*,const char*),func_001E2460(void*,void*),func_001E2C78(void*,const char*,s32),D_002AD390(void*);
extern void*D_002AD408(u32);
extern char D_0044C3F0[],D_0044DD18[],D_0044BC38[],D_0044C120[],D_0044CA00[],D_0044C108[],D_0044CA40[],D_0044DCD8[];
static inline void z(u32*p){p[0]=0;p[1]=0;p[2]=0;}
void*func_0014B5E0(char*a){u32 k[8],c[4];u32*p=D_002AD408(36);func_001D4040(k,D_0044C3F0);p[2]=0;p[3]=0;p[1]=0;p[0]=0;p[4]=(u32)D_0044DD18;z(p+5);p[8]=k[0];func_001E2460(c,p);func_001E2C78(c,D_0044BC38,*(s32*)(a+12));return p;}
static inline void col(float*p){p[0]=1;p[1]=1;p[2]=1;p[3]=1;}
void*func_00149B50(s32*p){u32 k[4];func_001D4040(k,D_0044C120);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044CA00;p[9]=-1;p[11]=0;p[8]=0;p[5]=0;p[6]=0;p[7]=0;p[10]=0;p[4]=0;p[25]=0;col((float*)(p+20));return p;}
void*func_00149A98(s32*p){u32 k[4];func_001D4040(k,D_0044C108);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044CA40;return p;}
void func_001491D0(char*p,s32 f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
