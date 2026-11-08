typedef struct {float x,y,z;} V3;
typedef struct {V3 a,b,c,d; int e,f;} E56;
typedef struct {V3 a,b; float c,d; int e;} E36;
typedef struct {int a[7];} E28;
#define CP(d,s) (d).x=(s).x;(d).y=(s).y;(d).z=(s).z
void func_001CBEF8(E56 *p,E56 *end,E56 *s){while(p!=end){CP(p->a,s->a);CP(p->b,s->b);CP(p->c,s->c);CP(p->d,s->d);p->e=s->e;p->f=s->f;p++;}}
E36 *func_001CA150(E36 *p,E36 *end,E36 *d){while(p!=end){if(d){CP(d->a,p->a);CP(d->b,p->b);d->c=p->c;d->d=p->d;d->e=p->e;}p++;d++;}return d;}
E28 *func_001C9DE0(E28 *p,E28 *end,E28 *d){while(p!=end){if(d)*d=*p;p++;d++;}return d;}
extern int func_003FA9B8(int);
int func_001CE2F8(int *p){if(*p)return func_003FA9B8(*p);return 0;}
