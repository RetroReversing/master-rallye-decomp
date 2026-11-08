typedef struct{int tag;u32*p;int bit;} It;typedef struct{u32*p;u32 mask;} Ref;
static inline void next(It*t){if(++t->bit==32){t->bit=0;t->p++;}}
static inline int ne(It*a,It*b){u32 *ep=b->p,*cp=a->p;int r=0;if(cp!=ep)goto different;{int eb=b->bit,cb=a->bit;if(cb==eb)goto done;}different:r=1;done:return r;}
static inline void fill(It*t,It*end,int*v){while(ne(t,end)){u32*p=t->p;u32 mask=1<<t->bit;Ref r;r.p=p;r.mask=mask;if(*v)*p|=mask;else *p&=~mask;next(t);}}
static inline It*icopy(It*p,It*q){*p=*q;return p;}
void func_0021B288(It*first,It*last,int*v){It a=*first,b;fill(&a,icopy(&b,last),v);}
