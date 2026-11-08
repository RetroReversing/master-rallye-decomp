/* identical to func_001D0FF8 (matched), with its names changed by decompdecomp */
typedef struct V{int*b,*e,*c;}V;extern void func_00155DB0(V*,int*,int*);
void func_002A9F90(int*p){p[0]=0;p[1]=0;}
void func_001D11C0(char*p,int*x){V*v=(V*)(p+224);int*e=v->e;if(e!=v->c){if(e)*e=*x;v->e=(int*)((u32)v->e+4);}else func_00155DB0(v,e,x);}
void func_001D1378(char*p,int*x){V*v=(V*)(p+8);int*e=v->e;if(e!=v->c){if(e)*e=*x;v->e=(int*)((u32)v->e+4);}else func_00155DB0(v,e,x);}
void func_001D13D0(char*p,int x,float y){*(int*)(p+44)=x;*(float*)(p+48)=y;}
