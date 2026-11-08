/* identical to func_002B8F78 (matched), with its names changed by decompdecomp */
extern int D_004288B0,D_004288B4;extern short D_004288AC;extern int D_0047FC00;extern void func_002B9140(void*);extern void D_002AD390(void*);
void func_002B8EF8(void*unused,int key){if(key==D_004288B4){D_004288B4=0;D_004288B0=0;}}
int func_002B8F18(void*unused,int key){int result=0;if(!D_004288B0){D_004288B0=1;result=1;D_004288B4=key;}return result;}
int func_002B91B0(void*unused,int key){return key==D_004288B4;}
void func_002B9008(void**p,int flags){*p=&D_0047FC00;if(D_004288AC)func_002B9140(p);if(flags&1)D_002AD390(p);}
