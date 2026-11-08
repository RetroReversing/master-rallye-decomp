
typedef struct {int len,cap,refs,flags;char data[4];} StrRep;
extern StrRep D_0040E658;
extern u32 D_0040E618[];
extern char *D_0040E678,*D_0040E67C;
extern int *D_00426294;
extern int D_0043C078,D_0044E7DC,D_0044E7E0,D_0044E7E4,D_0044E7F0,D_0044E7F4;
extern char D_0048A548[],D_0048A570[],D_0048A588[],D_0048A5B0[],D_0048A5D8[],D_0048A5F0[],D_0048A608[],D_0048A620[],D_0048A628[],D_0048A630[],D_0048A648[],D_0048A660[],D_0048A718[],D_0048A720[],D_0048A750[],D_0048A758[],D_0048A770[],D_0048A790[],D_0048A7A0[],D_0048A7B0[];
extern int func_00151A28(char**,int,u32,const char*,int);
extern int func_003FA9B8(const char*);
extern int func_003F9698(const char*,...);
extern void func_002B2028(void*);
extern void *D_002AD408(int);
extern void *func_0015E848(void);
extern int *func_001D31F8(void*);
extern int func_003EF8E0(void*);
extern int func_002A1700(void),func_002B62E0(void);
extern int func_002A1188(int),func_002A12F0(int),func_002A1320(int),func_002A1380(int),func_002A13B8(int),func_002A13E0(int),func_002B5F48(int);
extern int func_003ECE20(void),func_003ECE40(int),func_003ED008(void),func_003EDCA8(void);
extern int func_003EE638(int),func_003EE698(int,const char*);
extern int func_003EE718(int,float),func_003EE968(int);
static inline __attribute__((always_inline)) void make(char **s,const char *p){char *r;if(D_0040E658.flags)r=(char*)func_00151930(&D_0040E658);else{r=D_0040E658.data;D_0040E658.refs++;}*s=r;func_00151A28(s,0,-1,p,func_003FA9B8(p));}
static inline __attribute__((always_inline)) char *chars(char **s){int n=((int*)*s)[-4];if(!n)return D_0048A718;(*s)[n]=0;return *s;}
static inline __attribute__((always_inline)) void drop(char *s){int *r=(int*)(s-16);if(--r[2]==0){if(r[1]+16)func_002B2028(r);else{r[0]=D_0040E618[-1];D_0040E618[-1]=(u32)r;}}}
static inline int open_game(void){char *p=func_0015E848();char *v=*(char**)p;int(*f)(void*)=*(int(**)(void*))(v+0x2c);return f(p+*(s16*)(v+0x28));}
static inline void run_game(void){char *p=func_0015E848();char *v=*(char**)p;void(*f)(void*)=*(void(**)(void*))(v+0x5c);f(p+*(s16*)(v+0x58));}
int func_003ED4B8(int *p){
 struct {char *ptr;int pad[3];} ss;int ok=0,t;char *a=D_0040E678;void *obj;char *v;
 D_0043C078=*p;make(&ss.ptr,a);
 if(((int*)ss.ptr)[-4]){ss.ptr[((int*)ss.ptr)[-4]]=0;func_003EE698(*p,ss.ptr);func_003F9698(D_0048A720,chars(&ss.ptr));}
 else{struct {char *ptr;int pad[3];} bb;make(&bb.ptr,D_0048A750);func_003EE698(*p,chars(&bb.ptr));func_003F9698(D_0048A758,chars(&bb.ptr));drop(bb.ptr);}
 func_003F9698(D_0048A548);func_003F9698(D_0048A570);
 func_003F9698(D_0048A588,D_0044E7E0);func_003F9698(D_0048A5B0,D_0044E7DC);func_003F9698(D_0048A5D8,D_0044E7E4);func_003F9698(D_0048A5F0,D_0040E678);
 func_003F9698(D_0048A608,D_0044E7F0?D_0048A620:D_0048A628);
 func_003F9698(D_0048A630,D_0044E7F4?D_0048A620:D_0048A628);
 if(D_0044E7F4)func_003F9698(D_0048A648,D_0040E67C);
 func_003F9698(D_0048A548);func_003F9698(D_0048A660);
 func_002A1188(func_002A1700());func_002B5F48(func_002B62E0());func_002A12F0(func_002A1700());
 t=func_002A1700();func_002A13B8(t);func_002A13E0(t);func_002A1380(t);
 func_003EE718(*p,0.0f);func_003EE968(*p);func_003EE718(*p,0.0f);func_003EE968(*p);
 func_003EDCA8();func_003F9698(D_0048A770);func_003F9698(D_0048A790);func_003F9698(D_0048A7A0);
 func_003ECE40(1);func_003ED008();func_003ECE40(0);func_003ECE20();func_002A1320(func_002A1700());
 if(open_game()){
 int q=func_003EF8E0(D_002AD408(20));
 if(!D_00426294){D_00426294=func_001D31F8(D_002AD408(4));}ok=1;
 *D_00426294=q;
 run_game();
 }else{func_003F9698(D_0048A7B0);func_003EE638(*p);}
 drop(ss.ptr);return ok;
}
