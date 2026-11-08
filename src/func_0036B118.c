extern s32 D_0043C3B0[];
extern void func_0036B090(void *);
extern void *D_002AD408(s32);
extern void func_0036AF00(void);
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2);
void func_0036B118(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  func_0036B090(arg0);
  *((s32 *) (((u8 *) arg0) + 0x40)) = arg2;
  *((s32 *) (((u8 *) arg0) + 0x38)) = arg1;
 do { *((s32 *) (((u8 *) arg0) + 0x3C)) = arg3; } while (0);
}

void func_0036B0D0(void *arg0);
void func_0036B090(void *arg0);
