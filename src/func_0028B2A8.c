extern char D_0047B2D0[],D_0047B2E0[],D_0047B2F8[],D_0044DD18[],D_0047B310[],D_0047B328[],D_0047CF78[],D_0044DCD8[];
extern void*D_002AD408(int);
extern void D_002AD390(void*);
extern void func_001D4040(void*,const char*),func_001E2460(void*,int),func_001E2510(void*,const char*,void*),func_001E2470(void*,const char*,void*),func_001E2C08(void*,const char*,float),func_001E2B98(void*,const char*,int);
static inline void z(float*p){p[0]=0;((int*)p)[1]=0;((int*)p)[2]=0;}
static inline void init(int*p,int k){p[2]=0;p[4]=(int)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;z((float*)(p+5));p[8]=k;}
void*func_0028B168(char*a){int k[8],reg[4];int*p=D_002AD408(36);func_001D4040(k,D_0047B2D0);init(p,k[0]);func_001E2460(reg,(int)p);func_001E2C08(reg,D_0047B2E0,*(float*)(a+16));func_001E2B98(reg,D_0047B2F8,*(int*)(a+20));return p;}
void func_0028B228(char*p,int u,int a){int k[4];func_001E2460(k,a);func_001E2510(k,D_0047B2E0,p+16);func_001E2470(k,D_0047B2F8,p+20);}
void*func_0028B2A8(int*p){int k[4],s[4];func_001D4040(k,D_0047B310);p[1]=k[0];p[7]=0;p[0]=-1;p[2]=(int)D_0047CF78;*(float*)(p+6)=1.0f;func_001D4040(s,D_0047B328);p[5]=0;p[7]=s[0];p[3]=0;return p;}
void func_0028AE60(char*p,int f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
