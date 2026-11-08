s32 func_003EDCC8(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){if(*a<*c)return 1;if(*c<*a)return 0;++a;++c;}return a==b&&c!=d;}
extern int func_003EE718(int,float);extern int func_003EE968(int);
void func_003ED400(int*p){if(*p){func_003EE718(*p,0.0f);func_003EE968(*p);func_003EE718(*p,0.0f);func_003EE968(*p);}}
extern int D_002AD390(int);extern int func_002DC3B8(int);extern int func_002DDA20(void);extern int func_003F9698(void*);extern int D_0048A898,D_0048A8B0;
void func_003EE638(int*p){if(p[1]){p[1]=0;func_003F9698(&D_0048A898);func_002DC3B8(func_002DDA20());if(*p)D_002AD390(*p);}}
extern int*D_002AD408(int);extern int func_002DC4D0(int,int);extern int func_003F0760(int*);
int func_003EE698(int*p,int a){if(!p[1]){p[1]=1;if(func_002DC4D0(func_002DDA20(),a)){int*q;func_003F9698(&D_0048A8B0);q=D_002AD408(4);*p=(int)q;*q=0;func_003F0760(q);return 1;}}return 0;}
