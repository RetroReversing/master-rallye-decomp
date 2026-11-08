extern void func_00192FD8(void);
extern void func_001D2900(void *a0, s32 a1);
extern void func_001D4040(void *a0, s32 a1);
extern void func_001E3EC0(s32 a0, void *a1, void *a2);
extern s32 func_001E4280(void);
typedef struct 
{
  u8 pad0[0xC];
  s32 unkC;
  u8 pad10[0xAC];
  s32 unkBC;
} S939E8;
void func_001939E8(S939E8 *arg0, s32 arg1, void *arg2)
{
  u8 tmp[16];
  s32 v;
 do { func_00192FD8(); func_001D2900(&arg0->unkC, arg0->unkBC); } while (0);
  v = func_001E4280();
  func_001D4040(tmp, arg0->unkC);
  func_001E3EC0(v, tmp, arg2);
}

extern char D_00471738[];
extern void func_001E33C8(s32 a0, void *a1, s32 a2);
void func_00193E28(void *arg0, void *arg1);
extern char D_00471770[];
extern void func_001D2CD8(void *a0, char *a1);
extern void func_001D22C0(void *a0, void *a1, s32 a2);
typedef struct 
{
  u8 pad0[0xC];
  s32 unkC;
} S94018;
void func_00194018(S94018 *arg0, void *arg1, void *arg2);
