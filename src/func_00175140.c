#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct {float a; int b,c,d; float e,f,g,h,i,j,k,l;} Init;
void *func_00175A40(Init *p) {
p->a=1.1f; p->e=2.f; p->f=.18f; p->g=-.6f; p->h=.02f; p->i=-60.f; p->b=0; p->c=0; p->d=0; p->j=10000.f; p->k=10000.f; p->l=5000.f; return p;
}
void *func_00175A08(void *p) { F(p,int,0)=0; F(p,int,4)=0; F(p,int,8)=0; F(p,int,12)=0; F(p,int,16)=0; F(p,int,20)=0; F(p,int,24)=0; F(p,int,28)=0; F(p,int,32)=0; F(p,int,36)=0; F(p,int,40)=0; F(p,int,44)=0; return p;}
typedef struct {int v[3];} E;
typedef struct {E *begin,*end,*cap;} V;
extern V *func_00176C98(int);
extern void func_001C6E68(void *, E *);
void func_00175140(void *p) {
 int old=F(p,int,0x170);
 int n=F(F(F(p,void*,0x18),void*,0x18),int,0x80);
 if(n!=old) {
 V *v; E *e; int i; void *dst=(char*)p+0x174;
 F(p,int,0x170)=n;
 v=func_00176C98(old);
 i=F(p,int,0x170);
 if(i<0 || (unsigned)i >= (unsigned)(v->end-v->begin)) e=v->begin;
 else e=v->begin+i;
 func_001C6E68(dst,e);
 }
}
void func_00175118(void *p) {
 if(F(p,int,0x1c)!=0) F(p,float,0x154)=0.f;
 else F(p,float,0x154)=F(F(F(p,void*,0x18),void*,0x18),float,8);
}
