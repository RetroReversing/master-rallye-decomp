typedef struct {char x[24];} E;
typedef struct {E *begin,*end,*cap;} V;
extern u32 D_0040E618[];
extern void *func_002B1FC0(int);extern void *func_003D2910(int);extern void *func_00152D28(int);
extern void func_002B2028(void*);extern E *func_002C5160(E*,E*,E*,int);
static inline void *rawalloc(int bytes){void*p=func_002B1FC0(bytes);if(p)return p;return func_003D2910(bytes);}
static inline E *allocate(int n){int bytes;E*p;if(n){bytes=n*24;if(bytes)return rawalloc(bytes);p=(E*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}return 0;}
static inline E *back(E *first,E *last,E *dest){int n=last-first;while(n>0){--dest;--last;__builtin_memcpy(dest,last,24);--n;}return dest;}
void func_003C2110(V*v,E*pos,E*value){
if(v->end!=v->cap){E tmp;E *p=v->end;if(p)__builtin_memcpy(p,p-1,24);++v->end;__builtin_memcpy(&tmp,value,24);back(pos,v->end-2,v->end-1);*pos=tmp;}
else{int n=v->end-v->begin;int size=n?n*2:1;E*mem;E*out;E*i;int bytes;
mem=allocate(size);
out=func_002C5160(v->begin,pos,mem,0);if(out)__builtin_memcpy(out,value,24);pos=func_002C5160(pos,v->end,out+1,0);
for(i=v->begin;i<v->end;++i){}
n=v->cap-v->begin;if(n){if(n*24)func_002B2028(v->begin);else{*(u32*)v->begin=D_0040E618[-1];D_0040E618[-1]=(u32)v->begin;}}
v->end=pos;v->begin=mem;v->cap=mem+size;}}
