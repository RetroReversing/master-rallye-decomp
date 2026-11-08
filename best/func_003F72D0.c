typedef union {float f;s32 u;} FloatWord;
float func_003F72D0(float x,float y){FloatWord a,b;int ix,iy;b.f=y;iy=b.u;a.f=x;ix=a.u;a.u=(ix&0x7fffffff)|(iy&0x80000000);return a.f;}
int func_003F7148(float x){FloatWord a;a.f=x;return (u32)(0x7f800000-(a.u&0x7fffffff))>>31;}
int func_003F7120(float x){FloatWord a;a.f=x;return ((a.u&0x7fffffff)+0x80800000)>>31;}
int func_002AC4B0(s64,s64);
int func_003F6EF8(char *a){s64 x=*(s64 *)(a+8);func_002AC4B0(x,x);return 0;}
