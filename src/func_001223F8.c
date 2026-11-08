extern void func_0011DFB8(s32),func_0011E278(s32,s32);
extern s32 func_0011E528(s32),D_0040DCD0;
extern void func_001D4040(void*,const char*);
extern char D_00447D60[],D_0044D468[],D_00447E50[];
extern s32 func_00122168(void);
extern void func_001E3EC0(s32,void*,s32),func_003FA310(char*,const char*,...);
void func_001223F8(s32*p){func_0011DFB8(p[3]);if(!func_0011E528(p[3])){s32 n=p[4]+1;p[4]=n;if(D_0040DCD0<n && !p[5]){func_0011E278(p[3],52);p[5]=1;}}}
void *func_00122470(s32*p){s32 k;func_001D4040(&k,D_00447D60);p[1]=k;p[0]=-1;p[2]=(s32)D_0044D468;p[3]=0;p[4]=0;p[5]=0;p[14]=0;return p;}
typedef struct{ s32 a,b;} Pair;
typedef struct{Pair*begin,*end,*cap;} Array;
typedef struct{ s32 pad[4];Array v;} Obj;
void func_00122248(Obj*p){u32 i=0;Array*v=&p->v;if(v->end-v->begin)do{p->v.begin[i].a=func_00122168();p->v.begin[i].b=0;i++;}while(i<(u32)(v->end-v->begin));}
void func_00122B98(s32*p){char buf[64];s32 key; s32 i=0;do{s32 x=(i-p[4])*111+375;func_003FA310(buf,D_00447E50,i);i++;{s32 m=func_001E4280();func_001D4040(&key,buf);func_001E3EC0(m,&key,x);}}while(i<5);}
