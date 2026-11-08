extern void func_001D4040(void*,const char*);
extern char D_00445D28[],D_0044D840[],D_00444D00[],D_00445D48[],D_00445D50[],D_00445D60[],D_00445D70[],D_00445D80[];
extern void *D_002AD408(int);extern void*func_00297E40(void*);
extern void func_001E2460(void*,int),func_001E25B0(void*,const char*,void*);
extern void func_00297E58(int,int,int,int,int);
extern void func_0010C778(void),func_0010CBD8(int,int);
#define W(p,o) (*(int*)((char*)(p)+(o)))
typedef struct Obj5 {int refs,key;void*vt;int id;void*nav;} Obj5;
void *func_0010C8C8(Obj5*p){int k[4];func_001D4040(k,D_00445D28);p->key=k[0];p->refs=-1;p->vt=D_0044D840;p->id=0;p->nav=func_00297E40(D_002AD408(16));return p;}
void func_0010CA90(void*p,int unused,int a){struct{int k,up,right,down,left;} v;func_001E2460(&v.k,a);v.up=0;v.right=0;v.down=0;v.left=0;func_001E25B0(&v.k,D_00444D00,(char*)p+12);func_001E25B0(&v.k,D_00445D48,&v.up);func_001E25B0(&v.k,D_00445D50,&v.right);func_001E25B0(&v.k,D_00445D60,&v.down);func_001E25B0(&v.k,D_00445D70,&v.left);func_00297E58(W(p,16),v.up,v.right,v.down,v.left);}
void func_0010C660(void){func_0010C778();}
void func_0010CB68(int a,int b){int k[4];int m=func_001E4280();func_001D4040(k,D_00445D80);if(func_001E3650(m,(int)k)<=0)func_0010CBD8(a,b);}
