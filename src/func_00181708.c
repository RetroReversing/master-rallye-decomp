extern void func_001D4040(void*,const char*);
extern char D_0046FA70[],D_00473860[],D_0046FB48[],D_00473DD0[],D_00473CD0[],D_0044DCD8[];
extern void D_002AD390(void*),D_002AD530(void*);
void *func_00181300(s32*p){u32 k;func_001D4040(&k,D_0046FA70);p[0]=-1;p[1]=k;p[2]=(s32)D_00473860;*(float*)(p+3)=90;*(float*)(p+5)=100;p[4]=3;return p;}
float func_001816E0(float a,float b){return (float)(s32)((a+b)/b)*b;}
static inline void z3(s32*p){p[0]=0;p[1]=0;p[2]=0;}
void *func_00181708(s32*p){s32 k[16];func_001D4040(k,D_0046FB48);p[1]=k[0];p[0]=-1;p[2]=(s32)D_00473DD0;z3(p+10);z3(p+13);z3(p+16);*(float*)(p+6)=20;*(float*)(p+7)=90;p[4]=0;p[5]=0;return p;}
void func_00180D60(void**p,s32 flag){p[2]=D_00473CD0;if(p[9])D_002AD530(p[9]);if(p[11])D_002AD530(p[11]);if(p[10])D_002AD530(p[10]);p[2]=D_0044DCD8;if(flag&1)D_002AD390(p);}
