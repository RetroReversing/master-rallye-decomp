extern void func_001D4040(void*,const char*),func_001E2460(void*,int),func_001E28F8(void*,const char*,void*),func_001E25B0(void*,const char*,void*);
extern char D_00445CD8[],D_00445CE8[],D_00445CF8[],D_00445D08[],D_00445D18[],D_00445CC0[],D_0044D880[],D_00445CA8[];
extern int D_0040DC00[];
extern int func_001D2458(void*,const char*);
extern void func_001D2900(void*,int),func_001D4810(void*,int),func_00262F88(int,void*),D_002AD390(int);
#define W(p,o) (*(int*)((char*)(p)+(o)))
void func_0010C5D0(char*p,int u,int a){int k[4];func_001E2460(k,a);func_001E28F8(k,D_00445CD8,p+16);func_001E28F8(k,D_00445CE8,p+20);func_001E28F8(k,D_00445CF8,p+24);func_001E25B0(k,D_00445D08,p+28);func_001E25B0(k,D_00445D18,p+32);}
void*func_0010C470(int*p){int k[4];func_001D4040(k,D_00445CC0);p[1]=k[0];p[0]=-1;p[2]=(int)D_0044D880;p[4]=0;p[5]=0;p[6]=0;p[3]=0;p[7]=0;p[8]=0;return p;}
static inline int *ki(int*p,int a){func_001D4810(p,a);return p;}
void func_0010C160(char*p,char*q){int s[4],k[4];int n=func_001E3650(func_001E4280(),(int)(p+16));func_001D2458(s,D_00445CA8);func_001D2900(s,D_0040DC00[n]);k[0]=0;func_00262F88(W(q,80),ki(k,s[0]));D_002AD390(s[0]);}
extern char D_00444E88[],D_00444EA0[],D_00445C90[],D_0044DD18[],D_0044D8C0[];
extern void*D_002AD408(int);
extern void func_001E2510(void*,const char*,void*),func_001E2E38(void*,const char*,void*),func_001E2C08(void*,const char*,float);
static inline void z7(float*p){p[0]=0;((int*)p)[1]=0;((int*)p)[2]=0;}
static inline void init7(int*p,int k){p[4]=(int)D_0044DD18;p[2]=0;p[3]=0;p[1]=0;p[0]=0;z7((float*)(p+5));p[8]=k;}
void func_0010C108(char*p,int u,int a){int k[4];func_001E2460(k,a);func_001E28F8(k,D_00444E88,p+16);func_001E2510(k,D_00444EA0,p+20);}
void*func_0010C048(char*a){int k[8],reg[4];int*p=D_002AD408(36);func_001D4040(k,D_00445C90);init7(p,k[0]);func_001E2460(reg,(int)p);func_001E2E38(reg,D_00444E88,a+16);func_001E2C08(reg,D_00444EA0,*(float*)(a+20));return p;}
void*func_0010BFE8(int*p){int k[4];func_001D4040(k,D_00445C90);p[1]=k[0];p[2]=(int)D_0044D8C0;p[0]=-1;p[3]=-1;p[4]=0;p[5]=0;p[6]=0;return p;}
