typedef struct {int a,size,refs,flag;} H;
typedef struct {char *s; int refs;} E;
typedef struct {int *map,*end,*cap,*rev,*r1,*r2,*freebegin,*freeend,*freecap; E *entries; int x,y,n;} Table;
typedef struct {u16 tag,pad; int id;} Obj;
extern Table D_004262D0; extern H D_0040E658; extern u32 D_0040E618[];
extern void func_002B2028(void *); extern void func_00152720(void *,int *,int *);
static inline __attribute__((always_inline)) void drop(char *s){H*h=(H*)(s-16);if(--h->refs==0){if((unsigned)(h->size+16)!=0)func_002B2028(h);else{*(u32*)h=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}}
static inline __attribute__((always_inline)) void assign(E*d,E*s){if(s!=d){char*p;H*h;drop(d->s);p=s->s;h=(H*)(p-16);if(h->flag!=0)p=(char*)func_00151930(h);else {int refs=h->refs+1;h->refs=refs;}d->s=p;}d->refs=s->refs;}
static inline void setid(int *dst,int *src){E tmp;int id;Table*t;int old=*dst;if(old!=*src){if(old>=0){E*e=D_004262D0.entries+D_004262D0.map[old];t=&D_004262D0;if(--e->refs==0){int idx,last,r;E*s,*d;id=*dst;last=t->n-1;idx=t->map[id];t->n=last;if(idx!=last){s=t->entries+last;d=t->entries+idx;r=t->rev[last];assign(d,s);t->map[r]=idx;t->rev[idx]=r;}d=t->entries+t->n;if(D_0040E658.flag)tmp.s=(char*)func_00151930(&D_0040E658);else{tmp.s=(char*)(&D_0040E658+1);D_0040E658.refs++;}tmp.refs=0;assign(d,&tmp);drop(tmp.s);{int**v=&t->freebegin;int*p=v[1];if(p!=v[2]){if(p)*p=id;v[1]++;}else func_00152720(v,p,&id);}}}*dst=*src;if(*dst>=0)D_004262D0.entries[D_004262D0.map[*dst]].refs++;}}
Obj *func_003BFA38(Obj*a,Obj*b){a->tag=b->tag;setid(&a->id,&b->id);return a;}
