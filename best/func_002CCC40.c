typedef int(*Handler)(void);extern Handler D_00437E58;extern int D_00439570;extern char D_00482A20[];
extern Handler func_002ABA80(int);extern int func_002B1FC0(int);extern void*func_003D4938(void*,const char*);extern int func_003D4F40(void*);
static inline void*make_error(const char *s,void*p){return func_003D4938(p,s);}
void func_002CCC40(int n){int(*raise)(void*)=func_003D4F40;do{Handler h=D_00437E58;if(!h){raise(make_error(D_00482A20,&D_00439570));h=func_002ABA80(1);}h();}while(!func_002B1FC0(n));}
int func_002CCB78(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;++a;++c;}return a==b&&c!=d;}
typedef struct {int a,b,c,d;} Value;
extern int func_002CC5D8(void*,Value*);extern int func_002CC948(void*,Value*,Value*);
void func_002CCA78(void*p,Value*v){func_002CC5D8(p,v);}
void func_002CCA00(void*p){Value v;v.a=0;v.b=0;v.c=0;v.d=0;func_002CC5D8(p,&v);if(func_002CC948(p,&v,(Value*)((char*)p+12))){*(int*)((char*)p+28)=-1;*(Value*)((char*)p+12)=v;}}
