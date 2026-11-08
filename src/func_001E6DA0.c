/* identical to func_00197F48 (matched), with its names changed by decompdecomp */
typedef struct{char data[60];} Element;
typedef struct{int count;Element* items;void* extra;} Group;
typedef struct{Group**begin,**end;int cap;} Groups;
extern void func_001984A0(Element*,int);extern void func_001989F0(void*,int);extern void D_002AD530(void*);extern void D_002AD390(void*);extern void func_00198530(Element*);extern void func_00198AA8(void*);
void func_00197D00(Group*p,int flags){Element*it;p->count=0;if(p->items){it=p->items+*(int*)((char*)p->items-16);while(p->items!=it){--it;func_001984A0(it,0);}D_002AD530((char*)p->items-16);}if(p->extra)func_001989F0(p->extra,3);if(flags&1)D_002AD390(p);}
void func_00197DC8(Group*p){int off=0,n=3;do{--n;func_00198530((Element*)((char*)p->items+off));off+=60;}while(n>=0);func_00198AA8(p->extra);}
Groups*func_001E6DA0(Groups*p){volatile int temp[4];p->begin=0;p->end=0;p->cap=0;return p;}
void func_00198170(Groups*p){int n=p->end-p->begin,i;for(i=0;i<n;++i){Group*g=*(Group**)((unsigned)p->begin+((unsigned)i<<2));if(g)func_00197DC8(g);}}
