void func_001E2460(void*,int);void func_001E2510(void*,const char*,void*);void func_001D4040(void*,const char*);float func_001E3610(int,void*);
extern char D_0044EC90[],D_0044ECA8[],D_0044ECC0[],D_0044EC28[],D_0044EC40[],D_0044EC58[],D_0044EC68[],D_004741C8[];
extern int D_004267B0;
void func_0015FBA0(char*p,int unused,int a){int k[4];func_001E2460(k,a);func_001E2510(k,D_0044EC90,p+24);func_001E2510(k,D_0044ECA8,p+20);func_001E2510(k,D_0044ECC0,p+28);}
void func_0015F7A8(char*p,int unused,int a){int k[4];func_001E2460(k,a);func_001E2510(k,D_0044EC28,p+24);func_001E2510(k,D_0044EC40,p+20);func_001E2510(k,D_0044EC58,p+28);}
void*func_0015F810(int*p){int k[4];func_001D4040(k,D_0044EC68);p[1]=k[0];p[0]=-1;p[2]=(int)D_004741C8;((float*)p)[5]=80.0f;((float*)p)[6]=40.0f;((float*)p)[7]=1.0f;p[4]=0;p[3]=0;return p;}
void func_0015F628(char*p){float v=func_001E3610(func_001E4280(),p+16)**(float*)(p+28);char*q=*(char**)(p+12);if(v>=.05f && *(float*)(q+32)<.05f)D_004267B0++;else if(v<.05f && *(float*)(q+32)>=.05f)D_004267B0--;*(float*)(q+32)=v;*(int*)(q+8)=1;}
