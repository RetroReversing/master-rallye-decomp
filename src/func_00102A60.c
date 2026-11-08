extern void func_001E2460(void*,void*);
extern void func_001E28F8(void*,const char*,void*);
extern void func_001E2470(void*,const char*,void*);
extern void func_001E25B0(void*,const char*,void*);
extern char D_00444DC8[],D_00444DD8[],D_00444DE0[],D_00444DF0[],D_00444E00[],D_00444E10[],D_00444CE0[],D_00444CF0[],D_00444D00[],D_00444D10[];
void func_00102A60(char*a,int unused,void*b){struct {u32 value;} ctx[1];func_001E2460(ctx,b);func_001E28F8(ctx,D_00444DC8,a+12);func_001E2470(ctx,D_00444DD8,a+24);func_001E28F8(ctx,D_00444DE0,a+16);func_001E2470(ctx,D_00444E00,a+28);func_001E28F8(ctx,D_00444E10,a+20);func_001E25B0(ctx,D_00444DF0,a+32);}
void func_00102160(char*a,int unused,void*b){struct {u32 value;} ctx[1];func_001E2460(ctx,b);func_001E28F8(ctx,D_00444CE0,a+12);func_001E25B0(ctx,D_00444CF0,a+16);func_001E25B0(ctx,D_00444D00,a+24);func_001E28F8(ctx,D_00444D10,a+28);}
extern void D_002AD390(void*);
extern void func_001D2458(void*,int);
extern void func_001D2488(void*,void*);
extern void func_001D2900(void*,void*);
extern void *D_0040DA88[];
void *func_00100FA0(void*a,int unused,u32 n){void*t;if(n<56){t=0;func_001D2900(&t,D_0040DA88[n]);func_001D2488(a,&t);D_002AD390(t);}else func_001D2458(a,0);return a;}
extern int func_00194C40(void);extern int func_00193C10(int,int);
extern char D_0044DC58[],D_0044DCD8[];
void func_00100658(void*a,int flags){*(void**)((char*)a+8)=D_0044DC58;func_00193C10(func_00194C40(),0);*(void**)((char*)a+8)=D_0044DCD8;if(flags&1)D_002AD390(a);}
