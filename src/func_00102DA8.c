extern void func_001D4040(void*,const char*);
extern char D_00444E70[],D_0044D9B0[];

void *func_00102DA8(s32*p){
s32 k;
func_001D4040(&k,D_00444E70);
p[1]=k;
p[2]=(s32)D_0044D9B0;
p[0]=-1;
p[3]=-1;
p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=0;
return p;
}
