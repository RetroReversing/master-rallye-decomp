#define F(p,t,o) (*(t*)((char*)(p)+(o)))
extern void *func_002C7190(void);
extern void func_001DAD18(void*,void*);
typedef void (*Dtor)(void*,int);
typedef void (*Call)(void*);
typedef struct N {int a;struct N *prev,*next;} N;
void func_001D3378(void *a,int*b,int c,int d){
void *p=F(a,void*,0);
if(p){if(--F(p,int,0)==0){void*v=F(p,void*,4);F(v,Dtor,12)((char*)p+F(v,short,8),3);}F(a,void*,0)=0;}
F(a,int,16)=*b;
if(!c)func_001DAD18(F(func_002C7190(),void*,32),(char*)a+4);
else {N*h=(N*)((char*)func_002C7190()+24);N*n=(N*)((char*)a+4);N*prev=n->prev;N*next=n->next;N*hp;prev->next=next;next->prev=prev;hp=h->prev;n->next=h;n->prev=hp;h->prev->next=n;h->prev=n;}
if(d){void*q=func_002C7190();void*v=F(q,void*,48);F(v,Call,12)((char*)q+F(v,short,8));}
}
