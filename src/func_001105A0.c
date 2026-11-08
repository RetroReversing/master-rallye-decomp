extern int func_002CD2B8(void),func_002CDD48(int,int);
extern void func_002CD420(int,const char*);
extern void func_002CE0A0(const char*,int,int,float);
extern void func_002CE5D8(int,float,float);
extern int D_0040DC58;
extern char D_004465B0[],D_00446598[],D_00446590[],D_00444E58[],D_0044D9F0[],D_0044DB70[];
extern void func_001D4040(void*,const char*);
extern void *D_002AD408(int);
extern int func_00297E40(void*);
extern int *D_0040DC54;
void func_001107D0(void){int a;func_002CD420(func_002CD2B8(),D_004465B0);a=func_002CDD48(24,47);D_0040DC58=a;func_002CE0A0(D_00446598,a,44100,1.0f);}
void func_001105A0(void){func_002CE0A0(D_00446590,D_0040DC58,44100,1.0f);func_002CE5D8(D_0040DC58,1.0f,1.0f);}
void *func_00110430(void){if(!D_0040DC54){int *p=D_002AD408(4);D_0040DC54=p;p[0]=(int)D_0044DB70;}return D_0040DC54;}
void *func_00110868(int *p){int k[4];func_001D4040(k,D_00444E58);p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=0;p[3]=0;p[1]=k[0];p[0]=-1;p[2]=(int)D_0044D9F0;p[5]=func_00297E40(D_002AD408(16));p[4]=1;p[11]=1;return p;}
