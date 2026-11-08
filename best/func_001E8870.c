typedef struct { int unused; u32 *p; int bit; } BI;
typedef struct { BI first,last; u32 *cap; } BV;
extern void func_001ED1D0(void*,void*);
extern void func_00156C38(void*,void*);
extern void func_001ED610(void*,void*);
extern void func_002B2028(void*);
extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
extern u32 D_0040E618[];
static inline int distref(const BI *a,const BI *b){return (a->p-b->p)*32+a->bit-b->bit;}
static inline BI *initbi(BI *a,const BI *b){a->p=b->p;a->bit=b->bit;return a;}
static inline int size(BV *v){BI a,b;return distref(initbi(&a,&v->last),initbi(&b,&v->first));}
static inline int capacity(BV *v){BI a,b;a.p=v->cap;a.bit=0;return distref(&a,initbi(&b,&v->first));}
static inline BI begin(BV *v){BI a;a.p=v->first.p;a.bit=v->first.bit;return a;}
static inline BI end(BV *v){BI a;a.p=v->last.p;a.bit=v->last.bit;return a;}
static inline BI advance(BI original,int n){ BI a=original;int x=n+a.bit;int q=x/32;a.p+=q;x-=q*32;if(x<0){a.bit=x+32;--a.p;}else a.bit=x;return a;}
static inline void inc(BI *a){if(++a->bit==32){a->bit=0;++a->p;}}
typedef struct {u32 *p;u32 mask;} BR;
static inline void assign(BR *a,BR *b){if(*b->p&b->mask)*a->p|=a->mask;else *a->p&=~a->mask;}
static inline BI copybits3(BI a,BI b,BI d){int n=distref(&b,&a);for(;n>0;--n){{BR x,y;x.p=d.p;x.mask=1U<<d.bit;y.p=a.p;y.mask=1U<<a.bit;assign(&x,&y);}inc(&a);inc(&d);}return d;}
static inline BI copybits2(BI a,BI b,BI d){return copybits3(a,b,d);}
static inline BI copybits(BI a,BI b,BI d){return copybits2(a,b,d);}
void *func_001E8870(char *a,char *b){
BV *d=(BV*)(a+72),*s=(BV*)(b+72);
func_001ED1D0(a+12,b+12);func_00156C38(a+24,b+24);func_00156C38(a+36,b+36);func_00156C38(a+48,b+48);func_001ED610(a+60,b+60);
if(s!=d){
if((u32)size(s)>(u32)capacity(d)){
u32 *p=d->first.p;int n;
if(p){n=d->cap-p;if(n){if((u32)n*4)func_002B2028(p);else{*p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
{int n=size(s);u32 words=((u32)n+31)/32;u32 *p=0;
if(words){u32 bytes=words*4;if(bytes){p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);}else {p=(u32*)D_0040E618[-1];if(p)D_0040E618[-1]=*p;else p=func_00152D28(0);}}
d->cap=p+words;{BI x;x.p=p;x.bit=0;d->first=x;}d->last=advance(d->first,n);}
}
copybits(begin(s),end(s),d->first);
d->last=advance(d->first,size(s));
}
return a;
}
