typedef struct {unsigned long a:14;unsigned long b:6;unsigned long c:14;unsigned long d:6;unsigned long keep:8;unsigned long e:6;unsigned long f:6;unsigned long keep2:4;} PackedTex;
typedef struct {int words[6];PackedTex tex0,tex1;int limit;} TexState;
typedef struct {char bytes[32];} Elem32;typedef struct {Elem32*begin,*end,*cap;} Vec32;
extern Vec32 D_0042EA78;extern TexState D_0042EA88;extern u32 D_0040E618[];extern void func_002B2028(void*);
static inline void cleartex(PackedTex*t){t->a=0;t->c=0;t->e=0;t->b=0;t->d=0;t->f=0;}
static inline void initstate(Vec32*v,TexState*s){cleartex(&s->tex1);v->begin=0;v->cap=0;s->words[0]=0;s->limit=0x7fffffff;cleartex(&s->tex0);v->end=0;s->words[1]=0;s->words[2]=0;s->words[3]=0;s->words[4]=0;s->words[5]=0;}
void func_00376490(int init,int phase){Elem32*it,*end,*data;int n;if(phase==65535){if(init){initstate(&D_0042EA78,&D_0042EA88);}else{it=D_0042EA78.begin;end=D_0042EA78.end;for(;it<end;it++){}data=D_0042EA78.begin;n=D_0042EA78.cap-data;if(n){if(n*32)func_002B2028(data);else{*(u32*)data=D_0040E618[-1];D_0040E618[-1]=(u32)data;}}}}}
