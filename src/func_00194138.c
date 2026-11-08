/* identical to func_0011E560 (matched), with its names changed by decompdecomp */
extern void D_002AD390(void*);
void func_0011DF88(void*p,int flags){if(flags&1)D_002AD390(p);}
extern s32 func_00297500(void),func_00296710(void),func_00296530(s32,s32);
extern void func_00297398(s32,s32),func_00296550(s32,s32,float*,float*),func_002965B8(s32,s32,float,float);
void func_0011E248(void*a,s32 b){func_00297398(func_00297500(),b);}
extern void func_001D4040(void*,const char*),func_001E3EC0(s32,void*,s32);
extern const char D_00471788[];
static inline s32*keyinit(s32*p,const char*s){func_001D4040(p,s);return p;}
void func_00194138(void*a,s32 b){s32 key[4];s32 g=func_001E4280();func_001E3EC0(g,keyinit(key,D_00471788),b);}
void func_0011D8E8(char*a,s32 b){if(func_00296530(func_00296710(),b)&&*(s32*)(a+32)){struct{float x,y;}t;s32 n=func_001E3650(func_001E4280(),(s32)(a+32));t.y=0;t.x=0;func_00296550(func_00296710(),b,&t.x,&t.y);func_002965B8(func_00296710(),b,(float)n,t.y);}}
