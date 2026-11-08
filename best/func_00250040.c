extern int func_002719C0(void*),func_00271A28(void*),func_0027C350(void*); extern void func_002B2028(void*),D_002AD390(void*);
extern void func_003F93CC(void*,void*,int);
extern u32 D_0040E618[];
typedef struct {u32 *begin; int end; u32 *cap;} Vec;
void func_00250040(char *p,int flags){
u32 *b; int e,n; Vec *v; void *q; v=(Vec*)(p+28);q=p+56;
func_002719C0(p); func_00271A28(p+4);
b=v->begin;e=(int)v->end;func_003F93CC(b,(void*)e,0);
e-= (int)b; v->end-=e;
func_0027C350(q);func_00271A28(p+60);func_002B2028(*(void**)(p+60));
func_002719C0(q);func_002B2028(*(void**)(p+56));
{u32 *d=v->begin;n=v->cap-d;if(n){if(n*4)func_002B2028(d);else{*d=D_0040E618[-1];D_0040E618[-1]=(u32)d;}}}
func_00271A28(p+4);func_002B2028(*(void**)(p+4));func_002719C0(p);func_002B2028(*(void**)p);if(flags&1)D_002AD390(p);
}
