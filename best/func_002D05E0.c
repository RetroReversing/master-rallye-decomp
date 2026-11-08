typedef void (*Handler)(void);extern Handler D_00437E58;extern Handler func_002ABA80(int);extern int func_002B1FC0(int);extern void *func_003D4938(void*,void*);extern void func_003D4F40(void*);extern char D_00439570[],D_004838D0[];
static inline void invoke(void (*f)(void*),void*p){f(p);}
static inline void fail(void*s,void*p){invoke(func_003D4F40,func_003D4938(p,s));}
void func_002D05E0(int a){Handler h;do{h=D_00437E58;if(!h){fail(D_004838D0,D_00439570);h=func_002ABA80(1);}h();}while(!func_002B1FC0(a));}
int func_002D0518(s8*a,s8*b,s8*c,s8*d){s8 x,y;while(a!=b&&c!=d){x=*a;y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
