extern u32 D_0040E618[];
extern char D_00477158[], D_00474288[];
extern void D_002AD390(void *);
extern void func_002B2028(void *);
typedef struct {void **begin, **end, **cap;} Vec;
typedef struct {u32 x; void *vt; u32 y; Vec v0,v1,v2,v3,v4; u32 tail[7];} Obj;
static __inline__ void free_vec(Vec *v) {
 void **cap=v->cap; void **begin=v->begin; s32 n=cap-begin;
 if(n!=0) {s32 size=n<<2; if(size!=0) func_002B2028(begin);
 else {*(void **)begin=(void *)D_0040E618[-1]; D_0040E618[-1]=(u32)begin;}}
}
typedef struct {u32 x; void **begin; u32 pad[4]; void **cap;} Tail;
static __inline__ void free_tail(Tail *t) {
 void **p=t->begin;
 if(p) { s32 n=t->cap-p;
 if(n) {s32 size=n<<2; if(size) func_002B2028(p); else {*(void **)p=(void *)D_0040E618[-1]; D_0040E618[-1]=(u32)p;}}}
}
static __inline__ void destroy_vec(Vec *v) {
 void **p;
 for(p=v->begin;p<v->end;++p) {}
 free_vec(v);
}
void func_001E85F8(Obj *a,s32 flags) {
 void **p;
 a->vt=D_00477158;

 free_tail((Tail *)a->tail);
 destroy_vec(&a->v4);
 free_vec(&a->v3);
 free_vec(&a->v2);
 free_vec(&a->v1);
 {
 Vec *v=&a->v0;
 void **end=v->end;
 void **p=v->begin;
 for(;p<end;++p) {}
 free_vec(v);
 }
 a->vt=D_00474288;
 if(flags&1) D_002AD390(a);
}
