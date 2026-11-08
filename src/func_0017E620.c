extern void func_001D4040(void*,const char*);
extern char D_0046F8C8[],D_00473D50[],D_0046F748[],D_00473D10[],D_00473468[];
extern void *D_002AD408(u32);
extern void **D_00425D48;
extern void func_0017E1F0(void*);
void func_0017E5F8(s32*);
static inline void z(s32*p){p[0]=0;p[1]=0;p[2]=0;}
void*func_0017F5B0(s32*p){s32 k;func_001D4040(&k,D_0046F8C8);p[1]=k;p[0]=-1;p[2]=(s32)D_00473D50;p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[8]=0;return p;}
void*func_0017E670(s32*p){s32 k[8];func_001D4040(k,D_0046F748);{s32 name=k[0];p[1]=name;p[0]=-1;p[2]=(s32)D_00473D10;}z(p+17);p[3]=-1;p[5]=0;p[11]=0;p[12]=0;p[14]=0;p[7]=0;p[13]=0;return p;}
void **func_0017E620(void){if(!D_00425D48){void**p=D_002AD408(8);p[0]=D_00473468;D_00425D48=p;func_0017E5F8((s32*)p);}return D_00425D48;}
void func_0017E5F8(s32*p){p[1]=0;func_0017E1F0((void*)p);}
