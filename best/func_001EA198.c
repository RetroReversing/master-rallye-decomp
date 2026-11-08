typedef void (*Handler)(void);
extern Handler D_00437E58;extern char D_00439570[],D_00477130[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void*,const char*);
extern void func_003D4F40(void*);
static inline void invoke(void(*f)(void*),const char*s,void*t){f(func_003D4938(t,s));}
void func_001EA198(int n){Handler h;do{h=D_00437E58;if(!h){invoke(func_003D4F40,D_00477130,D_00439570);h=func_002ABA80(1);}h();}while(!func_002B1FC0(n));}
int func_001EA0D0(s8*a,s8*ae,s8*b,s8*be){s8 x,y;while(a!=ae&&b!=be){x=*a;y=*b;if(x<y)return 1;if(y<x)return 0;++a;++b;}return a==ae&&b!=be;}
extern int func_001EA098(int),func_001E9368(int,int),func_001E9E18(void*,void*);
int func_001EA038(int a,int b){int v=func_001EA098(a);if(!func_001EA098(a))return -1;return func_001E9368(v,b);}
void func_001E9F08(void*a,int*b){b[1]=func_001E9E18(a,b);}
