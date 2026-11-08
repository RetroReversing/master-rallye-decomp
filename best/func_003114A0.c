typedef struct {u64 a:14,b:6,c:14,d:6,e:14,f:6,g:4;} Bits;
typedef struct {float v[6];Bits x,y;s32 z; s32 pad[5];} __attribute__((aligned(16))) Rec;
typedef struct {u32 *b,*e,*c;} V;
typedef struct {Rec *b,*e,*c;} W;
extern V D_0042DB58; extern W D_0042E430; extern s32 D_0042DB64; extern u32 D_0040E618[];
extern void func_003116D8(void),func_003F93CC(void*,void*,int),func_002B2028(void*),func_002DE820(W*,Rec*,u32,Rec*);
static __inline__ void clearbits(Bits*p,Bits*q){p->a=0;q->a=0;p->c=0;q->c=0;p->e=0;q->e=0;p->b=0;q->b=0;p->d=0;q->d=0;p->f=0;q->f=0;}
static inline void destroy(V*v){s32 n;n=v->c-v->b;if(n){if(n*4)func_002B2028(v->b);else{*v->b=D_0040E618[-1];D_0040E618[-1]=(u32)v->b;}}}
void func_003114A0(void){
 V tmp;u32 *b,*e; s32 n;
 func_003116D8(); b=D_0042DB58.b;e=D_0042DB58.e;func_003F93CC(b,e,0);
 D_0042DB64=-1;
 tmp.b=D_0042DB58.b;tmp.e=(u32*)((char*)D_0042DB58.e-((char*)e-(char*)b));tmp.c=D_0042DB58.c;D_0042DB58.b=0;D_0042DB58.c=0;D_0042DB58.e=0;
 destroy(&tmp);
 n=D_0042E430.e-D_0042E430.b;
 if(n<=1024){Rec r;r.v[0]=0.0f;r.v[1]=0.0f;r.v[2]=0.0f;r.v[3]=0.0f;r.v[4]=0.0f;r.v[5]=0.0f;r.z=0x7fffffff;
 clearbits(&r.x,&r.y);
 if((u32)n>1040){Rec *p=D_0042E430.b+1040,*q;for(q=p;q<D_0042E430.e;q++){}D_0042E430.e=(Rec*)((char*)D_0042E430.e-((char*)D_0042E430.e-(char*)p));}
 else func_002DE820(&D_0042E430,D_0042E430.e,1040-n,&r);
 }
}
