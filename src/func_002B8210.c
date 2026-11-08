/* identical to func_0011E248 (matched), with its names changed by decompdecomp */
extern void D_002AD390(void*);
void func_0011DF88(void*p,int flags){if(flags&1)D_002AD390(p);}
extern s32 func_002BDB28(void),func_00296710(void),func_00296530(s32,s32);
extern void func_002BD8D0(s32,s32),func_00296550(s32,s32,float*,float*),func_002965B8(s32,s32,float,float);
void func_002B8210(void*a,s32 b){func_002BD8D0(func_002BDB28(),b);}
extern void func_001D4040(void*,const char*),func_001E3EC0(s32,void*,s32);
extern const char D_00447578[];
static inline s32*keyinit(s32*p,const char*s){func_001D4040(p,s);return p;}
void func_0011E560(void*a,s32 b){s32 key[4];s32 g=func_001E4280();func_001E3EC0(g,keyinit(key,D_00447578),b);}
void func_0011D8E8(char*a,s32 b){if(func_00296530(func_00296710(),b)&&*(s32*)(a+32)){float x,y;s32 n;a+=32;n=func_001E3650(func_001E4280(),(s32)a);y=0.0f;x=0.0f;func_00296550(func_00296710(),b,&x,&y);func_002965B8(func_00296710(),b,(float)n,y);}}
