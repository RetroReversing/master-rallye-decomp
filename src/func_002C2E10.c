extern char D_004969A0[],D_004969D8[];
extern int func_002B8438(void*),func_002B84E0(void*,int),func_002C2740(void*),func_002C27E0(void*,int);
void func_002C2E10(int on,int priority){if(priority!=0xffff)return;if(on){func_002B8438(D_004969A0);func_002C2740(D_004969D8);}else{func_002C27E0(D_004969D8,2);func_002B84E0(D_004969A0,2);}}
void func_002C2EA0(void){func_002C2E10(1,0xffff);}
void func_002C2EC0(void){func_002C2E10(0,0xffff);}
int func_002C2D48(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
