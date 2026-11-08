extern int D_002AD390(void*);extern void func_002CE730(int);
void func_002D13F0(int*p,int f){if(p[2]>=0){func_002CE730(p[2]);p[2]=-1;}if(f&1)D_002AD390(p);}
extern int func_003FA580(const char*,const char*);
extern char D_00429C00[],D_00429C04[];
void *func_002D0D00(const char*s){char *p=D_00429C00;void*r=0;while(*(char**)p){if(func_003FA580(*(char**)p,s)){p+=0x94;continue;}r=p+4;break;}if(!r)r=D_00429C04;return r;}
extern int func_003F94D0(void*,int,int);
void func_002D0C80(int*p){int i=0;int **q=(int**)((char*)p+0x220);if(p[0x230/4]>0){do{if(*q){func_002D13F0(*q,3);*q=0;}i++;q++;}while(i<p[0x230/4]);}func_003F94D0((char*)p+0x190,0,0x90);p[0x230/4]=0;}
int func_002D1DA0(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
