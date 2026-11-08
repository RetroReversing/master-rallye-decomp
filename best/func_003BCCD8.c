typedef struct {char x[24];} E;
typedef struct {E *begin,*end,*cap;} V;
extern u32 D_0040E618[];
extern void *func_002B1FC0(int);extern void *func_003D2910(int);extern void *func_00152D28(int);
extern void func_002B2028(void*);extern E *func_002C5160(E*,E*,E*,int);
void func_003BCCD8(V*v,E*pos,E*value){E tmp;E *p; p=v->end;
if(p!=v->cap){E*src;int n;if(p){__builtin_memcpy(p,p-1,24);}v->end++;p=v->end-1;src=p-1;n=src-pos;__builtin_memcpy(&tmp,value,24);if(n>0)do{--p;--src;__builtin_memcpy(p,src,24);}while(--n>0);__builtin_memcpy(pos,&tmp,24);}
else{int n=p-v->begin;int size=n?n*2:1;E*mem;E*out;E*i;int bytes;
if(size){bytes=size*24;if(bytes){mem=func_002B1FC0(bytes);if(!mem)mem=func_003D2910(bytes);}else{mem=(E*)D_0040E618[-1];if(mem)D_0040E618[-1]=*(u32*)mem;else mem=func_00152D28(0);}}else mem=0;
out=func_002C5160(v->begin,pos,mem,0);if(out)*out=*value;out=func_002C5160(pos,v->end,out+1,0);
{E *end=v->end;for(i=v->begin;i<end;++i){}}
n=v->cap-v->begin;if(n){if(n*24)func_002B2028(v->begin);else{*(u32*)v->begin=D_0040E618[-1];D_0040E618[-1]=(u32)v->begin;}}
v->end=out;v->begin=mem;v->cap=mem+size;}}
