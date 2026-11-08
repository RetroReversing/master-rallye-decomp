extern u8 *D_0040E618[];extern u8 *func_00152B80(u32,s32*);
u8 *func_00152D28(u32 size){s32 count=20;u8 *ret=func_00152B80(size,&count);if(count!=1){u8 *next=ret+size,*p;s32 i;D_0040E618[((size+7)>>3)-1]=next;p=next;i=1;next=p+size;while(count-1!=i){*(u8**)p=next;i++;p=next;next=p+size;}*(u8**)p=0;}return ret;}
typedef struct {s32 a;float b,c,d,e,f;s32 g;u8 h;u8 pad[3];} Rec;
static inline void copy(Rec *d,Rec *s){d->a=s->a;d->b=s->b;d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;d->g=s->g;d->h=s->h;}
Rec *func_00154A60(Rec *s,Rec *end,Rec *d){Rec *p=s,*q=d;char *a=(char*)s+4,*b=(char*)d+4;for(;p!=end;p++,q++,a+=32,b+=32)if(q){*(s32*)(b-4)=*(s32*)(a-4);*(float*)(b)=*(float*)(a);*(float*)(b+4)=*(float*)(a+4);*(float*)(b+8)=*(float*)(a+8);*(float*)(b+12)=*(float*)(a+12);*(float*)(b+16)=*(float*)(a+16);*(s32*)(b+20)=*(s32*)(a+20);*(u8*)(b+24)=*(u8*)(a+24);}return q;}
typedef struct Node {s32 color;struct Node *parent,*left,*right;s8 key;} Node;
typedef struct {Node *p;} Iter;
Iter *func_00154E10(Iter *out,Node **tree,s8 *key){Node *y=*tree,*x=y->parent;volatile Iter a,b;while(x){if(x->key>=*key){y=x;x=y->left;}else x=x->right;}a.p=y;b.p=*tree;if(y==b.p || *key<y->key)out->p=b.p;else out->p=a.p;return out;}
extern void func_00154E78(void*,u32,u32,u32,s32);
void func_001550F8(char **p,u32 n,s8 ch){u32 len=*(u32*)(*p-16);if(len<n)func_00154E78(p,len,0,n-len,ch);else func_00154E78(p,n,0xFFFFFFFF,0,0);}
