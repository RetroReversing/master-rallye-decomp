extern void func_00192130(void*);extern int func_001D2900(void*,int);extern void func_001D4040(int*,int);extern int func_001E36D8(int, int);extern int func_001E3610(int,int);
static inline __attribute__((always_inline)) int*keyinit(int*p,int s){func_001D4040(p,s);return p;}
int func_00192398(int*p){int k;int mgr;func_00192130(p);func_001D2900(p+3,p[26]);mgr=func_001E4280();return func_001E3650(mgr,(int)keyinit(&k,p[3]));}
int func_00192470(int*p){int k;int mgr;func_00192130(p);func_001D2900(p+3,p[28]);mgr=func_001E4280();return func_001E36D8(mgr,(int)keyinit(&k,p[3]));}
int func_001924D0(int*p){int k;int mgr;func_00192130(p);func_001D2900(p+3,p[29]);mgr=func_001E4280();return func_001E3650(mgr,(int)keyinit(&k,p[3]));}
int func_00192530(int*p){int k;int mgr;func_00192130(p);func_001D2900(p+3,p[30]);mgr=func_001E4280();return func_001E3610(mgr,(int)keyinit(&k,p[3]));}
