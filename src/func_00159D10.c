extern void func_00156C38(void*,void*);extern int func_00296710(void);extern void func_00296530(int,int);extern void D_002AD390(void*);extern unsigned char D_0044DCD8[];
void func_00156F28(char*p,char*end,void*v){while(p!=end){func_00156C38(p,v);p+=12;}}
void func_00159A78(void*unused,int b){func_00296530(func_00296710(),b);}
void func_00159D10(void*unused,int b){func_00296530(func_00296710(),b);}
void func_0015A3F0(char*p,int flag){*(void**)(p+8)=D_0044DCD8;if(flag&1)D_002AD390(p);}
