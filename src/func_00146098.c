extern void func_001E2460(void*,s32),func_001E25B0(void*,const char*,void*),func_001E2510(void*,const char*,void*);
extern s32 func_001E3598(s32,void*);
extern char D_0044BC38[],D_0044C0A8[],D_0044CA80[],D_0044C000[],D_0044C010[],D_0044C020[],D_0044C030[];
static inline void z(s32*p){p[0]=0;p[1]=0;p[2]=0;}
void func_0014B688(char*p,s32 u,s32 a){s32 k[4];func_001E2460(k,a);func_001E25B0(k,D_0044BC38,p+12);}
void*func_00149138(s32*p){s32 k[4];func_001D4040(k,D_0044C0A8);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044CA80;p[5]=206;p[3]=0;p[4]=0;p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=0;z(p+11);p[14]=0;p[15]=0;p[16]=0;p[17]=0;return p;}
void func_00146960(char*p,s32 u,s32 a){s32 k[4];func_001E2460(k,a);func_001E25B0(k,D_0044BC38,p+12);func_001E2510(k,D_0044C000,p+128);func_001E2510(k,D_0044C010,p+124);func_001E2510(k,D_0044C020,p+132);func_001E2510(k,D_0044C030,p+136);}
void func_00146098(char*p,char*q){s32 a,b;char*d;if(*(void**)(q+76)){a=func_001E3598(func_001E4280(),p+20);d=*(char**)(q+76);b=a^1;if(!*(s32*)(p+16))b=a;if(b!=(*(s32*)(d+120)&1))*(s64*)(d+120)=(*(s64*)(d+120)&~1LL)|(b&1);}}
