extern void func_001D2458(void*,char*);
extern s32 func_00196E10(void);
extern void func_001965F0(s32,s32,void*);
extern void func_001966C0(s32,s32,s32);
extern void func_00196790(s32,s32,s32);
extern void func_00196860(s32,s32,s32);
extern void func_00196930(s32,s32,f32);
extern void func_00196A00(s32,s32,f32);
extern void func_00196AD0(s32,s32,s32);
extern void func_00196BA0(s32,s32,s32);
extern void func_00196C70(s32,s32,s32);
extern void func_00196D40(s32,s32,s32);
extern char D_00444878[];
void func_0010CFD0(void){
 s32 i; float f=0.f; char sp[0x10];
 i=0;
 do {
  func_001D2458(sp,D_00444878);
  func_001965F0(func_00196E10(),i,sp);
  func_001966C0(func_00196E10(),i,0);
  func_00196790(func_00196E10(),i,0);
  func_00196860(func_00196E10(),i,0);
  func_00196930(func_00196E10(),i,f);
  func_00196A00(func_00196E10(),i,f);
  func_00196AD0(func_00196E10(),i,0);
  func_00196BA0(func_00196E10(),i,0);
  func_00196C70(func_00196E10(),i,0);
  func_00196D40(func_00196E10(),i,0);
  i++;
 } while(i<6);
}
