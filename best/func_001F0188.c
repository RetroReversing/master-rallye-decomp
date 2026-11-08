typedef int (*CB)(void*,void*,int);
void func_001F01E8(char*a,void*b){char*v=*(char**)(a+8);int off=*(short*)(v+80);(*(CB*)(v+84))(a+off,b,4);}
void func_001F0218(char*a,void*b){char*v=*(char**)(a+8);int off=*(short*)(v+112);(*(CB*)(v+116))(a+off,b,4);}
void func_001F0248(char*a,void*b){char*v=*(char**)(a+8);int off=*(short*)(v+80);(*(CB*)(v+84))(a+off,b,1);}
extern void *D_002AD408(unsigned);
extern int func_001F7EC8(void*);
extern int func_001D2CD8(void*,int);
extern char D_00478A70[];
typedef struct {int base[4];void*vt;int key,value;} O;
void *func_001F0188(O*a){O*p=D_002AD408(28);int key;func_001F7EC8(p);key=a->key;p->vt=D_00478A70;func_001D2CD8(&p->key,key);p->value=a->value;return p;}
