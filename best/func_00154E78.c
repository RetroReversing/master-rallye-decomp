typedef struct{u32 len,cap,refs,hash;} H;
extern u32 D_0040E618[];
extern void *func_002B1FC0(u32),*func_003D2910(u32),*func_00152D28(u32);
extern void func_002B2028(void*),func_003F931C(void*,const void*,u32),func_003F93CC(void*,const void*,u32),func_003F94D0(void*,s32,u32);
static inline void* alloc(u32 n){void*p;if(n){p=func_002B1FC0(n);if(p)return p;return func_003D2910(n);}p=(void*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}
static inline void fill(char*p,u32 n,s8 c){volatile s8 tmp=c;func_003F94D0(p,c,n);}
char**func_00154E78(char**s,u32 pos,u32 count,u32 n,s8 c){u32 old=((H*)(*s-16))->len,rem=old-pos,sz;H*h;int grow=0;s8 ch=c;((H*)(*s-16))->hash=0;if(rem>=count)rem=count;sz=old-rem+n;h=(H*)(*s-16);if(h->refs>=2||h->cap<sz+1||2*((sz+1>15)?sz+1:16)<h->cap)grow=1;
if(grow){u32 cap=16;u32 suffix=pos+rem,dst=pos+n; s32 saved=(s32)c<<24;H*newh;char*p;while(cap<sz+1)cap*=2;newh=alloc(cap+16);newh->cap=cap;newh->refs=1;newh->hash=0;p=(char*)(newh+1);if(pos)func_003F931C(p,*s,pos);if(old-suffix)func_003F931C(p+dst,*s+pos+rem,old-suffix);fill(p+pos,n,(s8)(saved>>24));h=(H*)(*s-16);if(--h->refs==0){if(h->cap+16)func_002B2028(h);else{*(u32*)h=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}*s=p;
}else{char*p=*s;if(old-(pos+rem))func_003F93CC(p+pos+n,p+pos+rem,old-(pos+rem));fill(*s+pos,n,ch);}((H*)(*s-16))->len=sz;return s;}
