extern int func_003CE868(void*,char*,unsigned,unsigned);
extern int func_003CE0D0(char**,unsigned,int);
int func_003CFB70(void *a,char **b,unsigned c){char *p=*b;return func_003CE868(a,p,c,*(unsigned*)(p-16));}
static inline char *strend(char **a){char *p=*a,*h=p-16;unsigned n;if(*(unsigned*)(p-8)>=2){func_003CE0D0(a,*(unsigned*)(p-16),1);p=*a;h=p-16;}*(unsigned*)(h+12)=1;n=*(unsigned*)(*a-16);if(*(unsigned*)(h+8)>=2){func_003CE0D0(a,n,1);p=*a;}*(unsigned*)(*a-4)=1;return *a+n;}
char *func_003CF990(char **a){return strend(a);}
char **func_003CF8C0(char **out,char **a){*out=strend(a);return out;}
unsigned func_003CFDB0(char *p,signed char c,unsigned i,unsigned end){volatile signed char tmp=c;for(;i<end;++i){if(p[i]==(signed char)(int)tmp)return i;}return ~0u;}
