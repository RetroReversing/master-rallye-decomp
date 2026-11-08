extern char D_0047B2D0[],D_0047CFB8[],D_0047AF40[],D_0047B338[],D_0047B348[],D_0047B358[],D_0047CF38[];
extern void*D_002AD408(int);
extern void func_001D4040(void*,const char*),func_001E2460(void*,int),func_001E2510(void*,const char*,void*),func_001E28F8(void*,const char*,void*);
void*func_0028AE00(int*p){int k[4];func_001D4040(k,D_0047B2D0);p[1]=k[0];p[0]=-1;p[2]=(int)D_0047CFB8;p[5]=1;p[4]=0;p[3]=0;return p;}
void func_0028B668(char*p,int u,int a){int k[8];func_001E2460(k,a);func_001E2510(k,D_0047AF40,p+24);func_001E28F8(k,D_0047B338,p+28);}
void*func_0028B6E8(int*p){int k[4],s[4];func_001D4040(k,D_0047B348);p[1]=k[0];p[5]=0;p[0]=-1;p[2]=(int)D_0047CF38;*(float*)(p+4)=1.0f;func_001D4040(s,D_0047B358);p[3]=0;p[5]=s[0];return p;}
void func_0028B6C0(void){func_0028B6E8(D_002AD408(24));}
