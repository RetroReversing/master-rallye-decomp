/* identical to func_0018DA50 (matched), with its names changed by decompdecomp */
/* identical to func_001DE938 (matched), with its names changed by decompdecomp */
extern void *D_00474288;
extern u32 D_0040E618[];
extern void D_002AD390();
extern void func_001DEC20(void *);
extern void func_002B2028(void *);
typedef struct { u32 tag; u32 *begin; u32 *end; u32 *cap; } Obj;
void func_001DE990(Obj *p, int flags) {
 u32 *b; int n;
 func_001DEC20(p);
 b=p->begin;
 n=p->cap-b;
 if(n) {
  if(n*4) func_002B2028(b);
  else { *b=D_0040E618[-1]; D_0040E618[-1]=(u32)b; }
 }
 if(flags&1) D_002AD390(p);
}
void *func_001DE968(void *arg0) {
 void *temp_3=arg0+4;
 *(s32 *)(arg0+4)=0;
 *(s32 *)(temp_3+8)=0;
 *(s32 *)(temp_3+4)=0;
 *(s32 *)arg0=0;
 return arg0;
}
void func_0026B160(void *p,int flags) {
 ((void **)p)[1]=&D_00474288;
 if(flags&1) D_002AD390();
}
void *func_001DE920(void *p,int x) {
 ((int *)p)[0]=x;
 ((void **)p)[1]=&D_00474288;
 return p;
}
