typedef struct {u64 x;} __attribute__((packed)) E;
typedef struct {E *begin,*end,*cap;} Vec;
extern E *func_00153B10(E*,E*,E*,int);
extern void func_00153B48(E*,E*,const E*);
extern E *func_00153B78(E*,u32,const E*,int);
extern void *func_002B1FC0(u32),*func_003D2910(u32),*func_00152D28(u32);
extern void func_002B2028(void*);
extern u32 D_0040E618[];
static inline void dealloc(E *p,u32 count){if(count){if(count*8)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static inline const u32 *maxref(const u32*a,const u32*b){return *a<*b?b:a;}
static inline E *alloc(u32 len){u32 bytes=len*8;E*p;if(len){if(bytes){E *q=func_002B1FC0(bytes);if(q)return q;return func_003D2910(bytes);}else{p=(E*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}}
else p=0;
return p;}
void func_00153BA8(Vec *v,E *pos,u32 n,const E *value){
if(n){
if((u32)(v->cap-v->end)>=n){
E *old=v->end;
E x=*value;u32 after=old-pos;
if(n<after){
E *src,*dst;int count;
func_00153B10(old-n,old,old,0);v->end+=n;
src=old-n;dst=old;count=src-pos;
for(;count>0;--count)*--dst=*--src;
func_00153B48(pos,pos+n,&x);
}else{
func_00153B78(old,n-after,&x,0);v->end+=n-after;
func_00153B10(pos,old,v->end,0);v->end+=after;
func_00153B48(pos,old,&x);
}
}else{
u32 size=v->end-v->begin;u32 len=size+*maxref(&size,&n);u32 bytes;E *p;
if(len){bytes=len*8;p=alloc(len);}else{p=0;bytes=0;}
{E *end=func_00153B10(v->begin,pos,p,0);E *it;
end=func_00153B78(end,n,value,0);pos=func_00153B10(pos,v->end,end,0);
for(it=v->begin;it<v->end;it++){}
dealloc(v->begin,v->cap-v->begin);
v->begin=p;v->end=pos;v->cap=p+len;}
}
}
}
