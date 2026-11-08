typedef struct { int state; } Alloc;
static inline void initvec(s32 *v, volatile Alloc *a) { v[0]=0;v[1]=0;v[2]=0; }
void *func_001DE968(void *p) {
 volatile Alloc a;
 initvec((s32 *)p+1,&a);
 *(s32 *)p=0;
 return p;
}
