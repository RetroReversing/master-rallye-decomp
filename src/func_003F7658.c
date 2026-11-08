#define I(p,o) (*(int*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))
#define H(p,o) (*(short*)((char*)(p)+(o)))
extern void func_003F7800(void*),func_003FA410(void),func_003FA478(void),func_003FA4F8(void),func_003FA560(void);extern void*D_004404DC;
void func_003F7810(void){func_003F7800(D_004404DC);}
void func_003F7658(char*p,short a,short b,void*owner){P(p,84)=owner;H(p,12)=a;H(p,14)=b;P(p,32)=func_003FA410;P(p,36)=func_003FA478;P(p,40)=func_003FA4F8;P(p,44)=func_003FA560;I(p,4)=0;I(p,8)=0;I(p,16)=0;I(p,24)=0;P(p,28)=p;I(p,0)=0;}
void func_003F7820(char*p){char*q=p+484;P(p,60)=func_003F7800;I(p,56)=1;func_003F7658(q,4,0,p);func_003F7658(p+572,9,1,p);func_003F7658(p+660,10,2,p);P(p,480)=q;I(p,476)=3;I(p,472)=0;}
extern void*func_003F8A30(void*,int);extern void func_003F94D0(void*,int,int);
void*func_003F76B0(void*ctx,int n){int size=n*88;char*p=func_003F8A30(ctx,size+12);if(p){char*q=p+12;I(p,4)=n;I(p,0)=0;P(p,8)=q;func_003F94D0(q,0,size);return p;}return 0;}
