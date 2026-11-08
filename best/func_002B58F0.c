typedef int (*Handler)(void);
Handler func_002ABA80(int);
int func_002B1FC0(int);
int func_003D4938(void*,void*);
int func_003D4F40(int);
extern Handler D_00437E58;
extern int D_00439570;
extern char D_0047EBC8[];
extern int D_0047EBD8;
int D_002AD390(void*);
int func_002B5820();
void func_002B58F0(int arg) {
 int (*thrower)(int)=func_003D4F40;
 Handler h;
 do {
 h=D_00437E58;
 if(!h){thrower(func_003D4938(&D_00439570,D_0047EBC8));h=func_002ABA80(1);}
 h();
 }while(!func_002B1FC0(arg));
}
int func_002B5828(s8*a,s8*b,s8*c,s8*d){
 while(a!=b && c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;++a;++c;}return a==b && c!=d;
}
void func_002B57C8(void*p,int f){*(void**)((char*)p+32)=&D_0047EBD8;func_002B5820();if(f&1)D_002AD390(p);}
void *func_002B57A0(int*p){p[2]=0;*(void**)(p+8)=&D_0047EBD8;p[3]=0;p[5]=0;p[0]=0;p[1]=0;return p;}
