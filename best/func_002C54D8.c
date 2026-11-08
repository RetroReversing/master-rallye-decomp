typedef struct {float x,y;} Pair;
typedef struct {Pair *begin,*end,*cap;} Vec;
extern Pair *func_00156260(Pair*,Pair*,Pair*,int);
extern void *func_002B1FC0(unsigned),*func_003D2910(unsigned),*func_00152D28(unsigned);
extern void func_002B2028(void*);
extern u32 D_0040E618[];
static inline void copyforward(Pair *a,Pair *b,Pair *d){int n=b-a;while(n>0){d->x=a->x;d->y=a->y;++a;++d;--n;}}
static inline Pair *allocpair(unsigned bytes){Pair *p;if(bytes){p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);}else {Pair *q=(Pair*)D_0040E618[-1];if(!q)p=func_00152D28(0);else{p=q;D_0040E618[-1]=*(u32*)q;}}return p;}
static inline void freepair(Pair *p,unsigned count){if(count){if(count*8)func_002B2028(p);else {*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
void func_002C54D8(Vec *v,Pair *pos,Pair *first,Pair *last){
 if(first!=last){
 struct {unsigned n,size;} counts; int delta;
 Pair *old; Pair *capacity=v->cap;
 delta=(char*)last-(char*)first;old=v->end;counts.n=delta>>3;
 if((unsigned)(capacity-old)>=counts.n){
 unsigned tail=old-pos;
 if(counts.n<tail){
 Pair *s,*d;int k;
 func_00156260(old-counts.n,old,old,0);
 s=old-counts.n;d=old;k=s-pos;
 v->end+=counts.n;
 while(k>0){--s;--d;d->x=s->x;d->y=s->y;--k;}
 {Pair *a=first,*d=pos;int k=delta>>3;while(k>0){d->x=a->x;--k;d->y=a->y;++a;++d;}}
 }else{
 Pair *mid=first+tail;
 func_00156260(mid,last,old,0);
 v->end+=counts.n-tail;
 func_00156260(pos,old,v->end,0);
 v->end+=tail;
 copyforward(first,mid,pos);
 }
 }else{
 unsigned len,bytes;
 Pair *p,*e,*i; unsigned count;
 counts.size=old-v->begin;
 len=counts.size+*(counts.size<counts.n?&counts.n:&counts.size);bytes=len*8;
 if(len){p=allocpair(bytes);}
 else {p=0;bytes=0;}
 e=func_00156260(v->begin,pos,p,0);
 e=func_00156260(first,last,e,0);
 e=func_00156260(pos,v->end,e,0);
 i=v->begin;while(i<v->end)++i;
 count=v->cap-v->begin;
 freepair(v->begin,count);
 v->end=e;v->cap=(Pair*)((char*)p+bytes);v->begin=p;
 }
 }
}
