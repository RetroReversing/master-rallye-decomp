/* identical to func_003CFA78 (matched), with its names changed by decompdecomp */
extern u32 D_00436208[];
extern void *func_003CD828(void*);
extern int func_003CDC40(void*,unsigned,unsigned,int,int,int);
extern volatile unsigned short func_003CE0D0(char**,unsigned,int);
extern void func_003D13B0(const char*);
extern char D_00488CF0[];
void **func_003D0BB0(void **a,int b,int c,int d){void*p;if(D_00436208[3])p=func_003CD828(D_00436208);else{p=(char*)D_00436208+16;++D_00436208[2];}*a=p;func_003CDC40(a,0,~0u,b,c,d);return a;}
char **func_003CF810(char **o,char **a){char*p=*a,*h=p-16;if(*(unsigned*)(p-8)>=2){func_003CE0D0(a,*(unsigned*)(p-16),1);p=*a;h=p-16;}*(unsigned*)(h+12)=1;if(*(unsigned*)(h+8)>=2)func_003CE0D0(a,*(unsigned*)(p-16),1);p=*a;*(unsigned*)(p-4)=1;*o=p;return o;}
char *func_003CFF48(char **a,unsigned i){char*r;char*p;if(i>=*(unsigned*)(*a-16))func_003D13B0(D_00488CF0);p=*a;r=p+i;if(*(unsigned*)(p-8)>=2){func_003CE0D0(a,*(unsigned*)(*a-16),1);p=*a;r=p+i;}*(unsigned*)(p-4)=1;return r;}
signed char func_003CFFC8(char **a,unsigned i){char*p=*a;if(i!=*(unsigned*)(p-16))return p[i];return 0;}
