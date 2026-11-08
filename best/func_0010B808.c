typedef struct Arr10 {int*begin,*end,*cap;} Arr10;
typedef struct Setup10 {Arr10 a,b;int unused,mode;void*vt;char pad[44];} Setup10;
extern char D_0044DBA0[];extern int D_0040DBD0[];extern u32 D_0040E618[];
extern void func_00152688(void*),func_00152720(void*,int*,int*),func_00152918(void*,int*);
extern int func_00193B60(void),func_00194C40(void),func_00194738(int);
extern char*func_001189C0(void);
extern void func_00191C50(int,int),func_00191FD0(int,int),func_00192998(int,int,int),func_00192AF0(int,int,int),func_00192BE0(int,int,int),func_00191E60(int,int),func_00191EB8(int,int),func_002B2028(void*);
static inline Arr10* az(Arr10*p){p->begin=0;p->end=0;p->cap=0;return p;}
static inline void push10(Setup10*p,int*v){if(p->a.end!=p->a.cap){if(p->a.end)*p->a.end=*v;p->a.end++;}else func_00152720(p,p->a.end,v);}
static inline void free10(int n,int*begin){if(n){if(n<<2)func_002B2028(begin);else{*(u32*)begin=D_0040E618[-1];D_0040E618[-1]=(u32)begin;}}}
static inline void drop10(Arr10*p){free10(p->cap-p->begin,p->begin);}
typedef struct Race10 {int car0,car1;char pad[36];} Race10;
typedef struct Car10 {int a,value;char pad[44];} Car10;
static inline int racecar(char*db,int i,int which){Race10*r=(Race10*)(db+0x604);return which?r[i].car1:r[i].car0;}
static inline int carval(char*db,int i){return ((Car10*)db)[i].value;}
#define W(p,o) (*(int*)((char*)(p)+(o)))
static inline void destroy10(Setup10*p){p->vt=D_0044DBA0;drop10(&p->b);drop10(&p->a);}
static inline void init10(Setup10*p){p->vt=D_0044DBA0;az(&p->a);az(&p->b);p->mode=1;func_00152688(p);}
void func_0010B808(int unused,int index){
Setup10 s;int value,selected;int i;int race,car;Arr10*b;
init10(&s);
for(i=0;i<10;i++){value=i;push10(&s,&value);}func_00152918(&s,&selected);
race=index+25;func_00191C50(func_00193B60(),race);func_00191FD0(func_00193B60(),D_0040DBD0[index]);
car=W(func_001189C0(),race*44+0x604);
func_00192998(func_00193B60(),0,car);
{int m=func_00193B60();func_00192AF0(m,0,W(func_001189C0(),car*52+4));}
if(func_00194738(func_00194C40())){
func_00192998(func_00193B60(),1,car);
{int m=func_00193B60();func_00192AF0(m,1,W(func_001189C0(),car*52+4));}
{int car2=W(func_001189C0(),race*44+0x608);func_00192998(func_00193B60(),2,car2);
{int m=func_00193B60();func_00192AF0(m,2,W(func_001189C0(),car2*52+4));}
}func_00192BE0(func_00193B60(),2,selected);func_00191E60(func_00193B60(),3);func_00191EB8(func_00193B60(),2);
}else{
int car2=W(func_001189C0(),race*44+0x608);func_00192998(func_00193B60(),1,car2);
{int m=func_00193B60();func_00192AF0(m,1,W(func_001189C0(),car2*52+4));}
func_00192BE0(func_00193B60(),1,selected);func_00191E60(func_00193B60(),2);func_00191EB8(func_00193B60(),1);
}
destroy10(&s);
}
