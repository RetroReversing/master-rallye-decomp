extern char D_0047B2D0[],D_0047CFB8[],D_0044DD18[],D_0047B2A8[],D_0047B2B8[],D_0047B2C8[];
extern void *D_002AD408(int);extern void func_001D4040(void*,const char*),func_001E2460(void*,int),func_001E2510(void*,const char*,void*),func_001E2C08(void*,const char*,float);
void *func_0028AE00(int*p){int k[8];func_001D4040(k,D_0047B2D0);p[0]=-1;p[1]=k[0];p[2]=(int)D_0047CFB8;p[5]=1;p[4]=0;p[3]=0;return p;}
void*func_0028ADD8(void){return func_0028AE00(D_002AD408(24));}
void func_0028AD80(char*p,int u,int a){int k[4];func_001E2460(k,a);func_001E2510(k,D_0047B2B8,p+20);func_001E2510(k,D_0047B2C8,p+16);}
static inline void z(float*p){p[0]=0;((int*)p)[1]=0;((int*)p)[2]=0;}
static inline void init(int*p,int k){p[3]=0;p[4]=(int)D_0044DD18;p[2]=0;p[1]=0;p[0]=0;z((float*)(p+5));p[8]=k;}
void*func_0028ACC0(char*a){int k[8],reg[4];int*p=D_002AD408(36);func_001D4040(k,D_0047B2A8);init(p,k[0]);func_001E2460(reg,(int)p);func_001E2C08(reg,D_0047B2B8,*(float*)(a+20));func_001E2C08(reg,D_0047B2C8,*(float*)(a+16));return p;}
