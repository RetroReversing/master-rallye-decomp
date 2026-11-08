typedef union {u32 bits;struct {u32 mant:23,exp:8,sign:1;} f;} FloatBits;
void func_002AC8C0(FloatBits *a,s32 *p){u32 sign=a->f.sign; s32 e=a->f.exp;u32 m=a->f.mant;p[1]=sign;if(!e){p[0]=2;return;}if(e==255){if(!m){p[0]=4;return;}if(m&0x100000)p[0]=1;else p[0]=0;p[3]=m;return;}p[3]=(m<<7)|0x40000000;{s32 exp=e-127;p[2]=exp;p[0]=3;}}
