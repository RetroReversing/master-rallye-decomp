int func_001E3598(int,void*);int func_001E3D10(int,void*,int);void func_001D4040(void*,const char*);
extern char D_004716E0[];extern int D_0040E7D0,D_0040E7D8;
static inline __attribute__((always_inline)) int*keyinit(int*p,const char*s){func_001D4040(p,s);return p;}
void func_00193CC8(void){int key[4];int g=func_001E4280();func_001E3598(g,keyinit(key,D_004716E0));}
void func_00193C48(void){func_001E3598(func_001E4280(),&D_0040E7D8);}
void func_00193BE0(void){func_001E3598(func_001E4280(),&D_0040E7D0);}
void func_00193BA8(int a,int b){func_001E3D10(func_001E4280(),&D_0040E7D0,b);}
