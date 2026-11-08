extern void func_001D4040(void*,const char*);
extern void func_001E3D10(s32,void*,s32);
extern const char D_00444E40[],D_00447308[],D_00447328[];
extern u8 D_0044DA30[];
static inline void init(s32*p,s32 name){p[0]=-1;p[1]=name;p[2]=(s32)D_0044DA30;p[3]=1;p[8]=0;p[4]=0;p[5]=-1;p[6]=-1;p[7]=0;p[9]=0;p[12]=0;p[13]=-1;p[14]=-1;p[15]=0;}
static inline s32 *keyinit(s32*p,const char*s){func_001D4040(p,s);return p;}
void *func_0011CE48(s32*p){s32 name[4],key[4];s32 g;func_001D4040(name,D_00444E40);init(p,name[0]);g=func_001E4280();func_001E3D10(g,keyinit(key,D_00447308),1);g=func_001E4280();func_001D4040(key,D_00447328);func_001E3D10(g,key,0);return p;}
