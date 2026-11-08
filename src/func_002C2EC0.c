extern int func_002C2E10(int,int);
void func_002C2EA0(void){func_002C2E10(1,0xffff);}
void func_002C2EC0(void){func_002C2E10(0,0xffff);}
int func_002C2D48(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){int x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
