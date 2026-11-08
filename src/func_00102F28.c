extern void func_001E2460(void*,void*);extern void func_001E28F8(void*,const char*,void*);extern volatile unsigned short func_001E2470(void*,const char*,void*);extern void func_001E2510(void*,const char*,void*);
extern char D_00444E88[],D_00444E98[],D_00444EA0[],D_00444EB0[],D_00444EC0[],D_00444ED0[];
typedef struct{float x,y,z;}Vec;typedef struct{Vec n;float d;}Plane;
static inline void init(Vec*p,float x,float y,float z){p->x=x;p->y=y;p->z=z;}
static inline void plane(Plane*p,Vec*v){p->n.x=v->x;p->n.y=v->y;p->n.z=v->z;p->d=0.0f;}
void func_00102F28(char*a,char*b,void*c){Vec v;u32 ctx;func_001E2460(&ctx,c);func_001E28F8(&ctx,D_00444E88,a+16);func_001E2470(&ctx,D_00444E98,a+20);func_001E2510(&ctx,D_00444EA0,a+28);func_001E2470(&ctx,D_00444EB0,a+24);func_001E2470(&ctx,D_00444EC0,a+36);if(*(int*)(a+36)){init(&v,0.0f,-1.0f,0.0f);plane((Plane*)(*(char**)(b+80)+48),&v);}func_001E2470(&ctx,D_00444ED0,a+40);}
