extern void* func_002B1FC0(unsigned);extern void*func_003D2910(unsigned);extern void*func_00152D28(unsigned);extern void func_002B2028(void*);extern void func_003F931C(void*,void*,unsigned);extern u32 D_0040E618[];
typedef struct H {u32 len,cap,refs,zero;} H;
void func_001537E8(char**p,int n,int copy){H*h;unsigned cap,size,req,oldcap;int change=0;H*b;char*d;
*(int*)(*p-4)=0;h=(H*)(*p-16);if(h->refs>=2 || (oldcap=h->cap,oldcap<(req=n+1)) || ((req>15?req:16)*2)<oldcap)change=1;
if(change){n=n+1;cap=16;while(cap<(unsigned)n)cap*=2;size=cap+16;
if(size){H*t=func_002B1FC0(size);if(t)b=t;else b=func_003D2910(size);}
else {b=(H*)D_0040E618[-1];if(b)D_0040E618[-1]=*(u32*)b;else b=func_00152D28(0);}
b->cap=cap;b->refs=1;b->zero=0;
if(copy){d=(char*)b+16;if(*(u32*)(*p-16))func_003F931C(d,*p,*(u32*)(*p-16));b->len=*(u32*)(*p-16);}else {b->len=0;d=(char*)b+16;}
h=(H*)(*p-16);if(--h->refs==0){if(h->cap+16)func_002B2028(h);else {h->len=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}*p=d;}}
