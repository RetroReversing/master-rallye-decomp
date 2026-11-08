#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct {char *begin,*end,*cap;} Arr;
typedef void (*Callback)(void*,Arr*,int);
extern Arr D_0040E8D0;
extern void func_0017B038(void*,float,float),func_0017B418(void*,int,float,float);
extern int func_0021F4B0(void),func_0021E9C0(int,void*);
extern void *func_002015D8(void);
extern int func_0016F9F8();
void func_0017A130(void){func_0016F9F8();}
void func_0017AFB8(void *p,float x,float y){int h;if(!F(p,int,40))F(p,int,40)=func_0021E9C0(func_0021F4B0(),(char*)p+36);h=F(p,int,40);if(h){void *obj=F(func_002015D8(),void*,8);void *vt=F(obj,void*,0);F(vt,Callback,84)((char*)obj+F(vt,short,80),&D_0040E8D0,h);}}
static inline void clear(Arr *a,char *e,char *b){char *i;char *last=e;int n=last-b;for(i=b;i<e;i+=56){}a->end=last-n;}
void func_0017AEF8(void *p,float x,float y){int i,off;clear(&D_0040E8D0,D_0040E8D0.end,D_0040E8D0.begin);off=0;i=3;do{--i;func_0017B038(F(p,char*,16)+off,x,y);off+=400;}while(i>=0);}
void func_0017AE50(void *p,float x,float y){int i;int off;int total=0;func_0017AEF8(p,x,y);off=0;func_0017AFB8(p,x,y);i=3;do{char *q=F(p,char*,16)+off;--i;off+=400;func_0017B418(q,total,x,y);total+=F(q,int,172);}while(i>=0);}
