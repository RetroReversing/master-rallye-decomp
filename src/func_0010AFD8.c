extern void func_001D4040(void*,const char*);
extern int func_001D2458(void*,const char*);
extern void D_002AD390(int);
extern int func_00194C40(void),func_00193FD8(int),func_00193B60(void),func_00192398(int,int),func_00196E10(void),func_00196730(int,int);
extern int*func_001E3750(int,void*);extern void func_001E3FE0(int,void*,void*);
extern void*func_0017E620(void);
extern char D_00444F18[],D_00445B50[],D_00445B78[],D_00445B90[],D_00445BA8[];
#define A(p,t,o) (*(t*)((char*)(p)+(o)))
typedef char*(*GetName)(void*,int,int);
static inline char* carname(int vehicle){void*p=func_0017E620();void*v=*(void**)p;return A(v,GetName,44)((char*)p+A(v,short,40),53,vehicle);}
void func_0010AFD8(void){
int root[4],p1[4],p2[4],car[4];int player,vehicle;
{int m=func_001E4280();func_001D4040(root,D_00444F18);player=func_001E3650(m,(int)root);}
if(func_00193FD8(func_00194C40()))vehicle=func_00192398(func_00193B60(),player);else vehicle=func_00196730(func_00196E10(),player);
if(!player){int m=func_001E4280();int n;func_001D2458(root,D_00445B50);n=func_001E4280();func_001D2458(p1,D_00445B78);func_001E3FE0(m,root,func_001E3750(n,p1));D_002AD390(p1[0]);D_002AD390(root[0]);}
else {int m=func_001E4280();int n;func_001D2458(root,D_00445B50);n=func_001E4280();func_001D2458(p2,D_00445B90);func_001E3FE0(m,root,func_001E3750(n,p2));D_002AD390(p2[0]);D_002AD390(root[0]);}
{int m=func_001E4280();func_001D2458(root,D_00445BA8);func_001D2458(car,carname(vehicle));func_001E3FE0(m,root,car);D_002AD390(car[0]);D_002AD390(root[0]);}
}
