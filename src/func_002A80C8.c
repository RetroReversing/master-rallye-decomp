extern u8 D_0044DCD8[];extern void D_002AD390(void*);
void func_002A80C8(char*p,int f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
void func_002A7FF8(char*p,int f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
void func_002A7F60(char*p,int f){*(void**)(p+8)=D_0044DCD8;if(f&1)D_002AD390(p);}
typedef struct {s32 *b,*e,*c;} Vec;
extern void func_001C46D8(Vec*,s32*,s32*);
void func_002A8078(char*p,s32 v){Vec*a=(Vec*)(p+12);if(a->e!=a->c){if(a->e)*a->e=v;a->e++;}else func_001C46D8(a,a->e,&v);}
