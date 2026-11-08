/* identical to func_001F01E8 (matched), with its names changed by decompdecomp */
typedef int (*CB)(void*,void*,int);
void func_001F02A8(char*a,void*b){char*v=*(char**)(a+8);int off=*(short*)(v+80);(*(CB*)(v+84))(a+off,b,4);}
void func_001F0218(char*a,void*b){char*v=*(char**)(a+8);int off=*(short*)(v+112);(*(CB*)(v+116))(a+off,b,4);}
void func_001F0248(char*a,void*b){char*v=*(char**)(a+8);int off=*(short*)(v+80);(*(CB*)(v+84))(a+off,b,1);}
extern void *D_002AD408(unsigned);
extern void func_001F7EC8(void*);
extern int func_001D2CD8(void*,int);
extern char D_00478A70[];
void *func_001F0188(char*a){char*p=D_002AD408(28);func_001F7EC8(p);*(void**)(p+16)=D_00478A70;func_001D2CD8(p+20,*(int*)(a+20));*(int*)(p+24)=*(int*)(a+24);return p;}
