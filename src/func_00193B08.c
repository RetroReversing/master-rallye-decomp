int D_002AD408(int);int func_001906C8(int);extern int D_00425D74;
int func_00193B60(void){if(!D_00425D74)D_00425D74=func_001906C8(D_002AD408(204));return D_00425D74;}
void func_001D4040(void*,const char*);int func_001E3E90(int,void*,float);int func_001E40A0(int,void*,int);
static inline int*keyinit(int*p,const char*s){func_001D4040(p,s);return p;}
void func_00193B08(char*p,float f){int k[4];int g;g=func_001E4280();func_001E3E90(g,keyinit(k,*(char**)(p+200)),f);}
void func_00193AB0(char*p,float f){int k[4];int g=func_001E4280();func_001E3E90(g,keyinit(k,*(char**)(p+196)),f);}
void func_00193A58(char*p,int n){int k[4];int g=func_001E4280();func_001E40A0(g,keyinit(k,*(char**)(p+192)),n);}
