extern char D_0047B288[],D_0047D038[],D_0044DD18[],D_0047AF40[],D_0047B298[];
extern void *D_002AD408(int);extern void func_001D4040(void*,const char*),func_001E2460(void*,int),func_001E2510(void*,const char*,void*),func_001E2C08(void*,const char*,float);
void*func_0028A8B0(int*p){int k[4];func_001D4040(k,D_0047B288);p[1]=k[0];p[0]=-1;p[2]=(int)D_0047D038;((float*)p)[4]=.02f;((float*)p)[5]=3.0f;p[3]=0;return p;}
void func_0028AA70(char*p,int u,int a){int k[4];func_001E2460(k,a);func_001E2510(k,D_0047AF40,p+16);func_001E2510(k,D_0047B298,p+20);}
void func_0028A950(char*p,char*q){float a=*(float*)(p+16);float b=*(float*)(p+12)+a;char*t;*(float*)(p+12)=b;if(*(float*)(p+20)<b||b<0.0f)*(float*)(p+16)=-a;t=*(char**)(q+80);*(float*)(t+84)=*(float*)(t+84)+*(float*)(p+16);}
static inline void z(float*p){p[0]=0;((int*)p)[1]=0;((int*)p)[2]=0;}
static inline void init(int*p,int k){p[2]=0;p[3]=0;p[4]=(int)D_0044DD18;p[1]=0;p[0]=0;z((float*)(p+5));p[8]=k;}
void*func_0028A9B0(char*a){int k[8],reg[4];int*p=D_002AD408(36);func_001D4040(k,D_0047B288);init(p,k[0]);func_001E2460(reg,(int)p);func_001E2C08(reg,D_0047AF40,*(float*)(a+16));func_001E2C08(reg,D_0047B298,*(float*)(a+20));return p;}
extern char D_0047B2A8[],D_0047CFF8[],D_0047B280[],D_0047B310[],D_0047B338[];
extern float func_0027DF40(void);
extern void func_001E2E38(void*,const char*,void*);
void*func_0028B5A8(char*a){int k[8],reg[4];int*p=D_002AD408(36);func_001D4040(k,D_0047B310);init(p,k[0]);func_001E2460(reg,(int)p);func_001E2E38(reg,D_0047B338,a+28);func_001E2C08(reg,D_0047AF40,*(float*)(a+24));return p;}
void*func_0028A788(char*a){int unused[4],reg[4];int*p=D_002AD408(36);init(p,0);func_001E2460(reg,(int)p);func_001E2C08(reg,D_0047AF40,*(float*)(a+12));func_001E2C08(reg,D_0047B280,*(float*)(a+16));return p;}
void*func_0028AAF0(int*p){int k[4];float v[3];float f,t;func_001D4040(k,D_0047B2A8);p[1]=k[0];p[0]=-1;p[2]=(int)D_0047CFF8;f=func_0027DF40()/180.0f;p[6]=0;t=((float*)p)[6];((float*)p)[4]=1.0f;v[2]=0;v[0]=0;v[1]=0;{float *d=(float*)(p+7);d[0]=t;((float*)p)[5]=f*3.0f;d[1]=t;d[2]=v[2];}p[3]=0;return p;}
