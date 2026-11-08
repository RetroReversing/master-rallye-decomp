typedef void (*Handler)(void);extern Handler D_00437E58;extern Handler func_002ABA80(int);extern int func_002B1FC0(int);extern void *func_003D4938(void*,void*);extern void func_003D4F40(void*);extern char D_00439570[],D_004838D0[];
void func_002D05E0(int a){Handler h;do{h=D_00437E58;if(!h){func_003D4F40(func_003D4938(D_00439570,D_004838D0));h=func_002ABA80(1);}h();}while(!func_002B1FC0(a));}
int func_002D0580(s8*a,s8*b,s8*c,s8*d){s8 x,y;while(a!=b&&c!=d){x=*a;y=*c;if(x<y)return -1;if(y<x)return 1;a++;c++;}if(c==d)return a!=b;return -1;}
int func_002D0518(s8*a,s8*b,s8*c,s8*d){s8 x,y;while(a!=b&&c!=d){x=*a;y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
extern int D_002AD390(int);extern int func_002D0C80();
void func_002D0C38(int a,int f){func_002D0C80();if(f&1)D_002AD390(a);}
