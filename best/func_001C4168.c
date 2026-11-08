extern void *func_002B1FC0(unsigned),*func_003D2910(unsigned),*func_00152D28(unsigned);extern void func_003F931C(void*,const void*,unsigned);extern u32 D_0040E618[];
typedef struct{unsigned len,cap,refs,zero;char data[1];} S;
static inline void*alloc(unsigned n){void*p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}
static inline void*za(void){unsigned*p=(unsigned*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*p;return p;}
char*func_001C4168(S*a){unsigned n=16,need=a->len+1,z;S*p;char*dst;while(n<need)n*=2;z=n+16;p=z?alloc(z):za();p->cap=n;p->refs=1;p->zero=0;dst=p->data;if(a->len)func_003F931C(dst,a->data,a->len);p->len=a->len;return dst;}
