extern char D_0044DCD8[],D_0047B658[],D_0047CD38[],D_0047B708[],D_0047C738[],D_0047AD68[];extern void func_001D4040(void*,const char*);extern void D_002AD390(void*);
void func_0028FBF8(char*p,void*q){char*v;*(s32*)(p+28)=*(s32*)(p+84);v=*(char**)(p+8);((void(*)(void*,void*))*(void**)(v+44))(p+*(s16*)(v+40),q);}
void func_0028F778(char*p,int f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
void *func_0028F720(s32*p){u32 n[4];func_001D4040(n,D_0047B658);p[1]=n[0];p[0]=-1;p[2]=(s32)D_0047CD38;p[3]=0;return p;}
void *func_002900C0(s32*p){u32 n[4];func_001D4040(n,D_0047B708);p[1]=n[0];p[3]=0;p[0]=-1;p[2]=(s32)D_0047C738;func_001D4040(p+3,D_0047AD68);return p;}
