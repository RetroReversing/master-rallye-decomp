typedef struct{char bytes[32];} E32;typedef struct{E32*begin,*end,*cap;} V32;
extern void*func_002B1FC0(int);extern void*func_003D2910(int);extern void*func_00152D28(int);extern void func_002B2028(void*);extern E32*func_00326C10(E32*,E32*,E32*,int);extern u32 D_0040E618[];
static inline E32*alloc32(int bytes){if(bytes){E32*p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);return p;}else{E32*p=(E32*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}}
static inline void free32(E32*p,int n){if(n){if(n*32)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static inline void backward32(E32*first,E32*last,E32*dest){int n=last-first;while(n>0){--dest;--last;*dest=*last;--n;}}
static inline E32*construct32(E32*p,const E32*v){E32*r=p;if(p){*p=*v;r=p;}else r=0;return r;}
static inline void destroy_range32(E32*first,E32*last){for(;first<last;first++){}}
static inline E32*copy32(E32*dest,E32*first,E32*last){return func_00326C10(first,last,dest,0);}
void func_00376188(V32*v,E32*pos,E32*value){E32 temp;E32*initial=v->end,*end,*src,*buf,*out,*finish,*it,*oldend,*old;int n,bytes,count;
if(initial!=v->cap){if(initial)*initial=initial[-1];end=v->end;v->end=end+1;__builtin_memcpy(&temp,value,32);backward32(pos,end-1,end);*pos=temp;return;}
n=initial-v->begin;n=n?n*2:1;bytes=n*32;if(n)buf=alloc32(bytes);else{buf=0;bytes=0;}out=copy32(buf,v->begin,pos);out=construct32(out,value);finish=func_00326C10(pos,v->end,out+1,0);destroy_range32(v->begin,v->end);free32(v->begin,v->cap-v->begin);v->begin=buf;v->end=finish;v->cap=(E32*)((char*)buf+bytes);}
