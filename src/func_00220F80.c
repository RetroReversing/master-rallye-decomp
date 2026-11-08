typedef struct E96{u32 data[24];}E96;
typedef struct V96{E96*b,*e,*c;}V96;
extern u32 D_0040E618[];
extern void func_002B2028(void*),D_002AD390(void*);
void func_00220F80(V96*v,int flags){E96*e,*begin,*p,*cap;int n;e=v->e;begin=v->b;for(;begin<e;begin++){}cap=v->c;p=v->b;n=cap-p;if(n){if(n*96)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}if(flags&1)D_002AD390(v);}
