typedef struct {u32 type; s32 sign,exp,pad;u64 mant;} Parts;
extern void func_002ABBE8(s64*,Parts*);
extern s32 *func_002AC950(s32*,s32*,s32*);
extern void func_002AC7B0(s32*);
u32 func_002AC650(s64 a){Parts p;func_002ABBE8(&a,&p);if((p.type^2)==0)return 0;else if(p.type<2)return 0;if(p.sign)return 0;if((p.type ^ 4)==0)return 0xffffffffU;if(p.exp<0)return 0;if(p.exp>=32)return 0xffffffffU;if(p.exp>60)return p.mant<<(p.exp-60);return p.mant>>(60-p.exp);}
void func_002AC8C0(u32 *a,s32 *p){u32 b=*a; u32 sign=b>>31; s32 e=(b>>23)&255; s32 m=b&0x7fffff;p[1]=sign;if(!e){p[0]=2;return;}if(e==255){if(!m){p[0]=4;return;}if(m&0x100000)p[0]=1;else p[0]=0;p[3]=m;return;}p[3]=(m<<7)|0x40000000;p[0]=3;p[2]=e-127;}
extern void func_002AC8C0(u32*,s32*);extern s32 *func_002AC950(s32*,s32*,s32*);extern void func_002AC7B0(s32*);void func_002ACB88(float aa,float bb){s32 x[4],y[4],z[4] __attribute__((aligned(16)));float a=aa,b=bb;func_002AC8C0((u32*)&a,x);func_002AC8C0((u32*)&b,y);func_002AC7B0(func_002AC950(x,y,z));}
void func_002ACBE0(float aa,float bb){s32 x[4],y[4],z[4] __attribute__((aligned(16)));float a=aa,b=bb;func_002AC8C0((u32*)&a,x);func_002AC8C0((u32*)&b,y);y[1]^=1;func_002AC7B0(func_002AC950(x,y,z));}
