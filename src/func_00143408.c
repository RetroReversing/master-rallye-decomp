extern void *D_002AD408(u32);
extern void D_002AD530(void*),D_002AD390(void*),func_002B2028(void*),func_001D4040(void*,const char*);
extern char D_0044DD18[],D_0044CC80[],D_0044DCD8[],D_0044BDB0[],D_0044BC38[],D_0044BD60[],D_0044BD70[];
static inline void z(s32*p){p[0]=0;p[1]=0;p[2]=0;}
void *func_00143480(void){s32*p=D_002AD408(36);p[2]=0;p[4]=(s32)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;z(p+5);p[8]=0;return p;}
void func_00143408(void**p,s32 f){p[2]=D_0044CC80;if(p[4])D_002AD530(p[4]);if(p[11])func_002B2028(p[11]);p[2]=D_0044DCD8;if(f&1)D_002AD390(p);}
static inline void col(float*p){p[0]=1;p[1]=1;p[2]=1;*(s32*)(p+3)=0;}
void *func_00143368(s32*p){s32 k;func_001D4040(&k,D_0044BDB0);p[1]=k;p[0]=-1;p[2]=(s32)D_0044CC80;p[9]=0;p[3]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[8]=0;p[10]=0;p[11]=0;col((float*)(p+12));p[16]=0;p[17]=0;p[18]=0;p[9]=0;return p;}
extern void func_001E2460(void*,s32),func_001E25B0(void*,const char*,void*),func_001E28F8(void*,const char*,void*),func_001E2C78(void*,const char*,s32);
void func_00143028(s32*p,s32 unused,s32 a){s32 k[4];func_001E2460(k,a);func_001E25B0(k,D_0044BC38,p+3);func_001E28F8(k,D_0044BD60,p+4);func_001E2C78(k,D_0044BD70,p[5]);p[5]*=30;}
