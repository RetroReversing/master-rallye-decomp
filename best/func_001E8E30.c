typedef struct { int a; u32 *p; int bit; } Iter;
typedef struct { int z[2]; int count; int *type; int pad10[2]; float *quality; int pad1c[2]; float *friction; int pad28[2]; float *restitution; int pad34[2]; int *texture; int pad40[2]; Iter solid; } Surface;
typedef struct { int a,b,c,d; void *vt; struct {int a,b,c;} v; int name; } Parser;
extern void *D_002AD408(int);
extern char *func_001D4010(int *);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *,void *);
extern void func_001E2E38(void *,void *,void *);
extern void func_001E2C08(void *,void *,float);
extern void func_001E2B98(void *,void *,int);
extern void func_003FA310(void *,const char *,int);
extern char D_0044DD18[],D_00477070[],D_00477088[],D_00477098[],D_004770B0[],D_004770C8[],D_004770E0[],D_004770F8[];
static __inline__ Iter *advance(Iter *it,int i) {
 int n=i+it->bit; int q=n/32; it->p+=q; n-=q*32;
 if(n<0){it->bit=n+32; --it->p;} else it->bit=n;
 return it;
}
static __inline__ void *initstr(void *p,const char *s){func_001D4040(p,s);return p;}
static __inline__ void initvec(void *v){int *a=v;a[0]=0;a[2]=0;a[1]=0;}
void *func_001E8E30(Surface *s) {
 char buf[256];
 union { char str[32]; struct { u32 *p; u32 mask; } ref; } tmp;
 Iter result, begin, it;
 int parser[4];
 Parser *p;
 int i=0;
 p=D_002AD408(36);
 func_001D4040(buf,D_00477070);
 p->c=0; p->d=0; p->b=0; p->a=0;
 p->vt=D_0044DD18; initvec(&p->v); p->name=*(int*)buf;
 func_001E2460(parser,p);
 if(s->count>0) do {
  func_003FA310(buf+32,D_00477088,i);
  func_001E2E38(parser,buf+32,s->type+i);
  func_003FA310(buf,D_00477098,i);
  func_001E2C08(parser,buf,s->quality[i]);
  func_003FA310(buf,D_004770B0,i);
  func_001E2C08(parser,buf,s->restitution[i]);
  func_003FA310(buf,D_004770C8,i);
  func_001E2C08(parser,buf,s->friction[i]);
  func_003FA310(buf,D_004770E0,i);
  func_001E2E38(parser,buf,initstr(&tmp,func_001D4010(s->texture+i)));
  func_003FA310(buf,D_004770F8,i);
  begin=s->solid; it=begin;
  { Iter *ip=&it; result=*advance(ip,i); }
  i++;
  tmp.ref.mask=1U<<result.bit; tmp.ref.p=result.p;
  func_001E2B98(parser,buf,(*tmp.ref.p & tmp.ref.mask)!=0);
 } while(i<s->count);
 return p;
}
