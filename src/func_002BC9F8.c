#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct PoolNode {u32 unused; struct PoolNode *next;} PoolNode;
typedef struct BufferPool {PoolNode *head; PoolNode *slots[4]; int count;} BufferPool;
extern void func_002BCB20(BufferPool *);
extern int func_003F9698(const char *, ...);
extern char D_00480528[];
extern void func_002BCDD8(void *,int,PoolNode *);
void *func_002BCB68(BufferPool *p) {
 PoolNode *n;
 if(!p->head) {func_002BCB20(p); func_003F9698(D_00480528,p->head,p->count);}
 n=p->head; p->head=n->next; return n+1;
}
void func_002BCBC0(BufferPool *p, void *data) {
 PoolNode *n=(PoolNode*)((char*)data-8);
 PoolNode **slot; int i=0;
 if(n!=p->slots[0]) {
 slot=&p->slots[0]; ++i;
 loop:
 ++slot;
 if(i<4) {if(n!=*slot) {++i; goto loop;} }
 }
 if(i>=4) {func_002BCDD8(data,i,n); --p->count;} else {n->next=p->head; p->head=n;}
}
void func_002BC9F8(void *p,int a,int b,int c,int d) {
 F(p,int,12)=a&65535; F(p,int,20)=b; F(p,int,24)=c; F(p,int,28)=d;
 F(p,void*,32)=p; F(p,int,64)=0; F(p,int,72)=0; F(p,int,68)=0; F(p,int,80)=0; F(p,int,84)=0;
}
void func_002BC9D8(void *p,int a) { F(p,u32,16)=F(p,u16,16)|(a<<16); }
