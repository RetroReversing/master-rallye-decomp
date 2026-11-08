typedef struct Node {struct Node*next;} Node;typedef struct {Node**begin,**end,**cap;} Arr;typedef struct {int pad;Arr a;int count;} Table;int func_002B2028(void*);
static inline void clear(Arr*a,Table*t){unsigned i=0;if(a->end-t->a.begin){do{int offset=i*4;Node*n=*(Node**)((char*)t->a.begin+offset);while(n){Node*old=n;n=n->next;func_002B2028(old);}++i;*(Node**)((char*)t->a.begin+offset)=0;offset=i*4;}while(i<(unsigned)(a->end-t->a.begin));}}
void func_0035D680(Table*t){clear(&t->a,t);t->count=0;}
