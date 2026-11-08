typedef struct { u32 dummy; u32 *p; s32 bit; } Iter;
typedef struct { Iter begin,end; u32 *cap; } Bits;
typedef struct {u32 a,b,c;} Vec;
typedef struct {u32 zero; void *vt; u32 str; Vec v[5]; Bits bits;} Obj;
extern u32 D_0040E618[];
extern char D_00474288[],D_00477158[],D_00476970[];
extern void func_001D4040(void*,void*);
extern void func_001ED1D0(void*,void*);
extern void func_00156C38(void*,void*);
extern void func_001ED610(void*,void*);
extern void func_002B2028(void*);
extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
static inline Iter getiter(Iter *p){Iter x;x.p=p->p;x.bit=p->bit;return x;}
static inline s32 dist(const Iter *ap,const Iter *bp){Iter a,b;a.p=ap->p;a.bit=ap->bit;b.p=bp->p;b.bit=bp->bit;return (((s32)a.p-(s32)b.p)>>2)*32+a.bit-b.bit;}
static inline Iter advance0(Iter a,s32 n){s32 d=n+a.bit; s32 q=d/32; a.p+=q; d-=q*32; if(d<0){a.bit=d+32;--a.p;}else a.bit=d;return a;}
static inline Iter advance(Iter a,s32 n){return advance0(a,n);}
static inline u32 *allocbits(u32 n){u32 sz=n*4; u32 *p;if(!n)return 0;if(sz){p=func_002B1FC0(sz);if(!p)p=func_003D2910(sz);}else{p=(u32*)D_0040E618[-1];if(p)D_0040E618[-1]=*p;else p=func_00152D28(0);}return p;}
typedef struct {u32 *p;u32 mask;} Ref;
static inline Ref deref(Iter *i){Ref r;r.p=i->p;r.mask=1U<<i->bit;return r;}
static inline void assign(Ref *d,Ref *s){if(*s->p&s->mask)*d->p|=d->mask;else *d->p&=~d->mask;}
static inline Iter copy3(Iter a,Iter b,Iter c){
 s32 n=(((s32)b.p-(s32)a.p)>>2)*32+b.bit-a.bit;
 for(;n>0;--n){Ref rd,rs;rd.p=c.p;rd.mask=1U<<c.bit;rs.p=a.p;rs.mask=1U<<a.bit;assign(&rd,&rs);if(++a.bit==32){a.bit=0;++a.p;}if(++c.bit==32){c.bit=0;++c.p;}}
 return c;
}
static inline Iter copy2(Iter a,Iter b,Iter c){Iter x=copy3(a,b,c);return x;}
static inline Iter copy1(Iter *ap,Iter *bp,Iter c){Iter a,b;a.p=ap->p;a.bit=ap->bit;b.p=bp->p;b.bit=bp->bit;return copy2(a,b,c);}
static inline void vecinit(Vec *v){v->a=0;v->b=0;v->c=0;}
Obj *func_001E7FD8(Obj *a,Obj *b){
 Vec *v1=&a->v[1],*v4=&a->v[4],*v3=&a->v[3],*v2=&a->v[2];
 Bits *d=&a->bits,*s=&b->bits;
 a->zero=0;a->vt=D_00474288;func_001D4040(a,D_00476970);
 a->vt=D_00477158;vecinit(&a->v[0]);
 vecinit(v1);vecinit(v2);vecinit(v3);vecinit(v4);
 d->begin.p=0;d->begin.bit=0;d->end.bit=0;d->end.p=0;d->cap=0;
 func_001ED1D0(&a->v[0],&b->v[0]);func_00156C38(v1,&b->v[1]);func_00156C38(v2,&b->v[2]);func_00156C38(v3,&b->v[3]);func_001ED610(v4,&b->v[4]);
 if(s!=d){Iter *e=&s->end;Iter cap;cap.p=d->cap;cap.bit=0;
 if((u32)dist(&cap,&d->begin)<(u32)dist(&s->end,&s->begin)){
 u32 *p=d->begin.p;if(p){s32 n=d->cap-p;if(n){u32 sz=n*4;if(sz)func_002B2028(p);else{*p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
 e=&s->end;{s32 n=dist(e,&s->begin);p=allocbits((u32)(n+31)>>5);d->cap=p+((u32)(n+31)>>5);cap.p=p;cap.bit=0;d->begin=cap;d->end=advance(d->begin,n);}
 }
 copy1(&s->begin,e,d->begin);d->end=advance(d->begin,dist(e,&s->begin));
 }return a;
}
