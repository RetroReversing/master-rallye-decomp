typedef struct {int*begin,*end,*cap;} V;
extern char D_00446660[];
extern V*func_001E37E8(int,void*);
extern void func_001E3EC0(int,void*,int),func_001E3FB0(int,void*,void*),func_001D4040(void*,const char*),func_002623F0(int,void*),D_002AD390(void*),func_00112730(void*);
extern int func_00262838(void);extern int func_001D2488(void*,void*);
static inline int*keyinit(int*p,const char*s){func_001D4040(p,s);return p;}
void func_00112540(char*p){int k[4],s[4];int n,r,ui;char*idx;V*v=func_001E37E8(func_001E4280(),p+56);if(v){idx=p+60;n=func_001E3650(func_001E4280(),(int)idx)-1;if(n<0)n+=v->end-v->begin;func_001E3EC0(func_001E4280(),idx,n);ui=func_00262838();func_002623F0(ui,keyinit(k,D_00446660));r=func_001E4280();func_001D2488(s,v->begin+n);func_001E3FB0(r,p+64,keyinit(k,(char*)s[0]));D_002AD390((void*)s[0]);func_00112730(p);}}
