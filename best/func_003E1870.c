extern void func_003E1708(void*,char*);extern void func_003E1998(int);extern void func_003E1D20(void*,int,void*);extern void func_003E4F40(void*,int);extern void func_003E4F70(void*);extern unsigned func_003E5438(void*,int);extern void func_003E5848(void*);
extern char D_0043AE80[],D_0043AEC0[],D_00489AB8[];
#define I(p,o) (*(int*)((char*)(p)+(o)))
void func_003E1870(void*p){unsigned t,t3,t4;int v;I(p,0xd4)=0;t=func_003E5438(p,32);v=(t>>8)&4095;I(p,0x124)=t>>20;I(p,0x128)=v;if(v>=2801)func_003E1708(p,D_00489AB8);
t=func_003E5438(p,30);I(p,0x134)=t>>12;I(p,0x138)=(t>>1)&1023;
t3=func_003E5438(p,1);I(p,0x840)=t3;if(t3){func_003E4F70(p);func_003E4F40(p,0x50000000);func_003E4F70(p);}else func_003E1D20(p,0x50000000,D_0043AE80);
t4=func_003E5438(p,1);I(p,0x844)=t4;if(t4){func_003E4F70(p);func_003E4F40(p,0x58000000);func_003E4F70(p);}else func_003E1D20(p,0x58000000,D_0043AEC0);
func_003E5848(p);func_003E1998(I(p,0x858));}
