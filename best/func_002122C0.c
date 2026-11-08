typedef struct {int w[13];} E;typedef struct {E*begin,*end,*cap;} V;extern void *func_00152D28(unsigned);extern void *func_002B1FC0(unsigned);extern void *func_003D2910(unsigned);extern void func_003F93CC(void*,const void*,unsigned);extern u32 D_0040E618[];
static inline void *alloc(unsigned z){void*q=func_002B1FC0(z);if(!q)q=func_003D2910(z);return q;}
static inline void *zeroalloc(void){int*q=(int*)D_0040E618[-1];if(!q)return func_00152D28(0);D_0040E618[-1]=*q;return q;}

extern E*func_00213DB8(E*,E*,E*,int);extern void func_002B2028(void*);
static inline E*copy(E*s,E*e,E*d){int n=e-s;if(n>0){char*a=(char*)s+40,*b=(char*)d+40;do{*(int*)(b+-40)=*(int*)(a+-40);*(int*)(b+-36)=*(int*)(a+-36);*(int*)(b+-32)=*(int*)(a+-32);*(int*)(b+-28)=*(int*)(a+-28);*(int*)(b+-24)=*(int*)(a+-24);*(int*)(b+-20)=*(int*)(a+-20);*(int*)(b+-16)=*(int*)(a+-16);*(int*)(b+-12)=*(int*)(a+-12);*(int*)(b+-8)=*(int*)(a+-8);*(int*)(b+-4)=*(int*)(a+-4);*(int*)(b+0)=*(int*)(a+0);*(int*)(b+4)=*(int*)(a+4);*(int*)(b+8)=*(int*)(a+8);n--;s++;d++;a+=52;b+=52;}while(n>0);}return d;}
static inline void destroy(E*s,E*e){for(;s<e;s++){}}
V*func_002122C0(V*a,V*b){if(b!=a){E*last=b->end,*first=b->begin;E*dest=a->begin;int n=last-first;
if((unsigned)(a->cap-dest)<(unsigned)n){E*p;if(n){unsigned bytes=n*52;if(bytes)p=alloc(bytes);else p=zeroalloc();}else p=0;
func_00213DB8(first,last,p,0);destroy(a->begin,a->end);{E*q=a->begin;int k=a->cap-q;if(k){if(k*52)func_002B2028(q);else{*(u32*)q=D_0040E618[-1];D_0040E618[-1]=(u32)q;}}}
a->begin=p;a->cap=p+n;
}else if((unsigned)(a->end-dest)>=(unsigned)n){E*q=copy(first,last,dest);destroy(q,a->end);}
else {copy(first,first+(a->end-dest),dest);func_00213DB8(b->begin+(a->end-a->begin),b->end,a->end,0);}
a->end=a->begin+n;}return a;}
