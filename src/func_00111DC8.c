extern void func_001E2460(void*, s32);
extern void func_001E25B0(void*, const char*, void*);
extern void func_001E28F8(void*, const char*, void*);
extern s32 func_0017E620(void);
extern void func_001D4810(void*, s32);
extern char D_00444D00[],D_004465C8[],D_004465D8[],D_004465E0[],D_00446718[],D_00446728[],D_00446730[],D_00446738[];

typedef struct { char pad[0x20]; s16 unk20; char pad2[2]; s32 (*fn)(void*,s32); } Obj;

void func_00111DC8(s32 arg0, s32 arg1, s32 arg2){
 struct { char pad[0x10]; } obj;
 func_001E2460(&obj, arg2);
 func_001E25B0(&obj, D_00444D00, (void*)(arg0+0xC));
 func_001E28F8(&obj, D_00446718, (void*)(arg0+0x48));
 func_001E28F8(&obj, D_004465C8, (void*)(arg0+0x38));
 func_001E28F8(&obj, D_004465D8, (void*)(arg0+0x3C));
 func_001E28F8(&obj, D_004465E0, (void*)(arg0+0x40));
 func_001E28F8(&obj, D_00446728, (void*)(arg0+0x4C));
 func_001E25B0(&obj, D_00446730, (void*)(arg0+0x18));
 func_001E25B0(&obj, D_00446738, (void*)(arg0+0x14));
 {
  s32 t2 = func_0017E620();
  Obj *t3 = (Obj*)(*(void**)t2);
  s32 r = t3->fn((void*)t2 + t3->unk20, 0x1F6);
  func_001D4810((void*)(arg0+0x54), r);
 }
}
