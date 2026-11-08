typedef struct VT9{u32 a,b;s16 delta,pad;void(*destroy)(void*,int);}VT9;
typedef struct Ref9{int refs;VT9*vt;}Ref9;
typedef struct Vref9{Ref9**begin,**end,**cap;}Vref9;
typedef struct List9{char pad[16];u32 *a,*b;char pad2[28];int flag;char tail[8];}List9;
typedef struct Manager9{List9 list[2];char pad[64];int x;char pad2[12];Vref9 refs;}Manager9;
typedef struct E9{u32 data[8];}E9;typedef struct Vec9{E9*begin,*end,*cap;}Vec9;
extern Vec9 D_0042EA78;extern u32 D_0040E618[];extern char D_0042D690[],D_004853F0[];extern volatile u16 D_0042DA10;
extern void func_00342BB8(void*);extern void FlushCache_2(int);extern void func_003C75C0(void);extern void func_003C9328(int);extern void func_003C7660(int,int);extern void func_003114A0(void*);extern void func_0030F070(void);extern void func_0030F030(void);extern Manager9*func_00311098(void);extern void func_00317208(void*);extern void func_00316B88(void*);extern void func_0030E960(void);extern void func_0030F290(void);extern E9*func_002B1FC0(int);extern E9*func_003D2910(int);extern void func_00326C10(E9*,E9*,E9*,int);extern void func_002B2028(void*);
static inline void clear9(List9*p){p->b[3]=0;p->a[3]=0;p->flag=-1;}
static inline void release9(Ref9*p){if(p){if(--p->refs==0)p->vt->destroy((char*)p+p->vt->delta,3);}}
static inline void dealloc9(E9*cap,E9*begin){int n=cap-begin;if(n){if(n<<5)func_002B2028(begin);else{*(u32*)begin=D_0040E618[-1];D_0040E618[-1]=(u32)begin;}}}
static inline void clearrefs(Vref9*v){Ref9**last=v->end,**first=v->begin;int n=(char*)last-(char*)first;if(first<last)do{release9(*first);first++;}while(first<last);v->end=(Ref9**)((char*)v->end-n);}
static inline void reserve9(Vec9*v){E9 *old,*end,*buf,*cur;int n;old=v->begin;if((u32)(v->cap-old)<256){end=v->end;n=end-old;buf=func_002B1FC0(8192);if(!buf)buf=func_003D2910(8192);func_00326C10(old,end,buf,0);
for(cur=v->begin;cur<v->end;cur++){}
dealloc9(v->cap,v->begin);
v->begin=buf;v->end=buf+n;v->cap=buf+256;}}
void *func_00311210(char*p){Manager9*m;Ref9 **first,**last;int count;E9*old,*end,*buf,*cur;int n;
func_00342BB8(p);
*(void**)(p+328)=D_004853F0;*(int*)(p+336)=-1;*(int*)(p+340)=-1;*(int*)(p+344)=-1;*(int*)(p+348)=-1;*(int*)(p+352)=0;*(int*)(p+360)=0;*(int*)(p+364)=0;*(int*)(p+356)=1;
FlushCache_2(0);func_003C75C0();func_003C9328(1);func_003C7660(0,0);func_003114A0(p);func_0030F070();func_0030F030();m=func_00311098();clear9(&m->list[0]);clear9(&m->list[1]);m->x=0;
clearrefs(&m->refs);
func_00317208(D_0042D690+(s16)D_0042DA10*224);func_00316B88(p);func_0030E960();func_0030F290();
reserve9(&D_0042EA78);
return p;}
