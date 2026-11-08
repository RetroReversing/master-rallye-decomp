extern void func_001D2900(void*,char*);
extern void* func_001189C0(void);
extern void func_001D2488(s32,void*);
extern void D_002AD390(s32);
extern char D_004457B0[],D_004457C0[],D_004457D0[];
s32 func_00107EF8(s32 a0,s32 a1,s32 a2,s32 a3){
 int sp[4];
 sp[0]=0;
 func_001D2900(sp,D_004457B0);
 {void*p=func_001189C0(); s32 s0=a3*0x34+(s32)p; func_001D2900(sp,*(char**)((char*)s0+0x1C));}
 if(a2==0) func_001D2900(sp,D_004457C0);
 else func_001D2900(sp,D_004457D0);
 func_001D2488(a0,sp);
 D_002AD390(sp[0]);
 return a0;
}
