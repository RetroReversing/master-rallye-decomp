extern int func_003CE3E0(void*,const char*,unsigned,unsigned);
extern unsigned func_003FA9B8(const char*);
extern void func_003D13B0(const char*);
extern char D_00488D08[],D_00488CF0[];
int func_003CFE10(void*a,const char*b,unsigned c){return func_003CE3E0(a,b,c,func_003FA9B8(b));}
char *func_003CFEB0(char **a){char*p=*a;unsigned n=*(unsigned*)(p-16);if(n){p[n]=0;return *a;}return D_00488D08;}
void func_003CFED8(char **a){char*p=*a;p[*(unsigned*)(p-16)]=0;}
char *func_003CFEF0(char **a,unsigned i){char*p=*a;char*r=p+i;if(i>=*(unsigned*)(p-16)){func_003D13B0(D_00488CF0);r=*a+i;}return r;}
