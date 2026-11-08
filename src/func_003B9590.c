/* identical to func_002076E8 (matched), with its names changed by decompdecomp */
extern s32 func_001DF180(void*,s32);extern char D_004880F0[];
void func_003B9590(s32*p,s32 b){p[4]=(s32)D_004880F0;func_001DF180(p,b);}
typedef struct{float*b,*e,*c;} FV;
void func_00207650(FV*a,FV*b,FV*c){s32 n=c->e-c->b,i=0;if(n>0)do{c->b[i]=a->b[i]-b->b[i];i++;}while(i<n);}
void func_002075F0(FV*a,FV*b,FV*c){s32 n=c->e-c->b,i=0;if(n>0)do{c->b[i]=a->b[i]+b->b[i];i++;}while(i<n);}
void func_00207598(FV*a,FV*b){s32 n=a->e-a->b,i=0;if(n>0)do{a->b[i]-=b->b[i];i++;}while(i<n);}
