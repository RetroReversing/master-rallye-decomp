typedef struct {int *a,*b,*c;void*d;int e,f,g,h;} O;
extern void *D_002AD408(int);extern void D_002AD390(void*),func_0023F370(void*,int),func_00233C30(void*,int),func_0025A398(void*,int);
extern int *func_00233B70(void*,void*),*func_0023EE28(void*,void*);
void func_002441A0(O*p,int flags){if(p->a)func_0023F370(p->a,3);if(p->b)func_0023F370(p->b,3);if(p->c)func_00233C30(p->c,3);if(p->d)func_0025A398(p->d,3);if(flags&1)D_002AD390(p);}
O*func_00244108(O*p,void**q){p->a=0;p->b=0;p->c=0;p->d=0;p->e=0;p->g=0;p->c=func_00233B70(D_002AD408(20),q[2]);p->b=func_0023EE28(D_002AD408(56),q[1]);p->a=func_0023EE28(D_002AD408(56),q[0]);p->g=0;p->h=0;return p;}
void func_00244230(O*p,int v){p->a[11]=v;p->b[11]=v;p->c[2]=v;p->e=v;}
void func_00244250(O*p,int v){p->a[12]=v;p->b[12]=v;p->c[3]=v;p->f=v;}
