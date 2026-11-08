typedef void (*Handler)(void);
extern Handler D_00437E58,func_002ABA80(int);
extern void *func_002B1FC0(u32),*func_003D4938(void*,const char*);
extern char func_003D4F40[];
extern u32 D_00439570[];
extern const char D_0044C630[];
void *func_00152AF0(u32 n){void *p;do{Handler h=D_00437E58;if(!h){((void(*)(void*))func_003D4F40)(func_003D4938(D_00439570,D_0044C630));h=func_002ABA80(1);}h();p=func_002B1FC0(n);}while(!p);return p;}
extern int func_003F9288(void*,void*,u32);
int func_00153F40(char **a,char **b,u32 off,u32 n){char *x=*a,*y=*b;u32 m=*(u32*)(x-16)-off;u32 k=*(u32*)(y-16);int r;if(n<m)m=n;if(k<m)m=k;r=func_003F9288(x+off,y,m);if(!r){if(m!=n)r=*(u32*)(*a-16)-off-*(u32*)(*b-16);else r=0;}return r;}
typedef struct {u8 a;float b;int c;float d,e,f,g;} Elem;
static inline void ctor(Elem *d,const Elem*s){d->a=s->a;d->b=s->b;d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;d->g=s->g;}
Elem *func_00153FE0(Elem *s,Elem *e,Elem *d){Elem *it=s,*out=d;char *src=(char*)s+12,*dst=(char*)d+12;for(;it!=e;it++,src+=28,dst+=28,out++){if(out){*(u8*)(dst-12)=*(u8*)(src-12);*(float*)(dst-8)=*(float*)(src-8);*(int*)(dst-4)=*(int*)(src-4);*(float*)dst=*(float*)src;*(float*)(dst+4)=*(float*)(src+4);*(float*)(dst+8)=*(float*)(src+8);*(float*)(dst+12)=*(float*)(src+12);}}return out;}
typedef struct N{int color;struct N *parent,*left,*right;s8 key;} N;
N **func_00154398(N **out,N **root,const s8 *key){N *y=*root,*x=y->parent;while(x){if(!(x->key<*key)){y=x;x=y->left;}else x=x->right;}*out=y;return out;}
