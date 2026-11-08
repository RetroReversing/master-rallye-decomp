extern char D_0046F9C8[],D_00473CD0[],D_0046F9B0[],D_00473428[],D_0046F938[],D_00473E10[],D_00473D50[],D_0044DCD8[];
extern void func_001D4040(void*,const char*),D_002AD530(void*),D_002AD390(void*);
static inline void z(s32*p){p[0]=0;p[1]=0;p[2]=0;}
void*func_00180CE8(s32*p){s32 k;func_001D4040(&k,D_0046F9C8);p[2]=(s32)D_00473CD0;p[1]=k;*(float*)(p+5)=20;p[0]=-1;p[4]=-1;p[3]=-1;p[9]=0;p[11]=0;p[10]=0;p[13]=0;return p;}
void*func_00180C78(s32*p){s32 k;func_001D4040(&k,D_0046F9B0);p[1]=k;p[0]=-1;p[2]=(s32)D_00473428;p[4]=17;p[3]=-10;p[5]=0;return p;}
void*func_0017FC88(s32*p){s32 k[8];func_001D4040(k,D_0046F938);p[1]=k[0];p[0]=-1;p[2]=(s32)D_00473E10;z(p+3);p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=0;p[11]=0;p[12]=0;p[13]=0;p[15]=0;p[17]=0;return p;}
void func_0017F618(void**p,s32 flag){p[2]=D_00473D50;if(p[4])D_002AD530(p[4]);if(p[5])D_002AD530(p[5]);if(p[8])D_002AD530(p[8]);if(p[7])D_002AD530(p[7]);if(p[6])D_002AD530(p[6]);p[2]=D_0044DCD8;if(flag&1)D_002AD390(p);}
