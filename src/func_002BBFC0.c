/* identical to func_002C2E10 (matched), with its names changed by decompdecomp */
extern char D_00428958[],D_00428978[];
extern int func_002BB7C0(void*),func_002BB778(void*,int),func_002BB288(void*),func_002BB1C0(void*,int);
void func_002BBFC0(int on,int priority){if(priority!=0xffff)return;if(on){func_002BB7C0(D_00428958);func_002BB288(D_00428978);}else{func_002BB1C0(D_00428978,2);func_002BB778(D_00428958,2);}}
void func_002C2EA0(void){func_002BBFC0(1,0xffff);}
void func_002C2EC0(void){func_002BBFC0(0,0xffff);}
int func_002C2D48(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
