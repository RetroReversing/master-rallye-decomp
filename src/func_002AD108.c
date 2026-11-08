typedef union {u32 bits;struct {u32 mant:23,exp:8,sign:1;} f;} FloatBits;
void func_002AC8C0(FloatBits *a,s32 *p){u32 sign=a->f.sign; s32 e=a->f.exp;u32 m=a->f.mant;p[1]=sign;if(!e){p[0]=2;return;}if(e==255){if(!m){p[0]=4;return;}if(m&0x100000)p[0]=1;else p[0]=0;p[3]=m;return;}p[2]=e-127;p[3]=(m<<7)|0x40000000;p[0]=3;}
extern float func_002AC7B0(s32*);
extern s32 func_002ACFA0(s32*,s32*);
s32 func_002AD0B8(float a,float b){s32 x[4],y[4];func_002AC8C0((FloatBits*)&a,x);func_002AC8C0((FloatBits*)&b,y);return func_002ACFA0(x,y);}
float func_002AD108(s32 a){s32 p[4];u32 m,t; s32 e;p[0]=3;p[1]=(u32)a>>31;if(!a)p[0]=2;else{p[2]=30;if(p[1]){if((u32)a==0x80000000)return -2147483648.0f;p[3]=-a;}else p[3]=a;m=p[3];if(m<=0x3fffffff){e=p[2];do{t=m*2;e--;m=t;}while(t<=0x3fffffff);p[2]=e;p[3]=t;}}return func_002AC7B0(p);}
s32 func_002AD1C0(float a){s32 p[4];u32 v;func_002AC8C0((FloatBits*)&a,p);if(((u32)p[0]^2)==0 || (u32)p[0]<2)return 0;if((p[0]^4)!=0){if(p[2]<0)return 0;if(p[2]<31){v=(u32)p[3]>>(30-p[2]);return p[1]? -v:v;}}return p[1]?0x80000000:0x7fffffff;}
