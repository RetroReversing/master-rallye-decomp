/* identical to func_001813A0 (matched), with its names changed by decompdecomp */
extern void func_001D4040(void*,const char*),func_001E2460(void*,s32),func_001E2510(void*,const char*,void*),func_001E25B0(void*,const char*,void*);
extern char D_0046FA70[],D_00473860[],D_0046FA18[],D_0046FA38[],D_0046FA60[],D_0044DCD8[];
extern void D_002AD390(void*),func_002B2028(void*);
void *func_00181300(s32*p){s32 k;func_001D4040(&k,D_0046FA70);p[0]=-1;p[1]=k;p[2]=(s32)D_00473860;*(float*)(p+3)=90;*(float*)(p+5)=100;p[4]=3;return p;}
void func_00181298(char*p,s32 unused,s32 a){s32 k;func_001E2460(&k,a);func_001E25B0(&k,D_0046FA18,p+16);func_001E25B0(&k,D_0046FA38,p+12);func_001E2510(&k,D_0046FA60,p+20);}
void func_00181370(char*p,int flag){*(void**)(p+8)=D_0044DCD8;if(flag&1)D_002AD390(p);}
void func_002B78F8(void*a,void*b){func_002B2028(b);}
