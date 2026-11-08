extern unsigned char D_0046FC60[];
extern unsigned char D_0046FC70[];
extern unsigned char D_0046FC78[];
extern unsigned char D_0046FC88[];
extern unsigned char D_004700C8[];
extern unsigned char D_00473C90[];
extern unsigned char D_00473D90[];
void func_001E2460(void *, s32);
void func_001E2510(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001D4040(void *, const char *);
void func_00182550(s32 arg0, s32 arg1, s32 arg2);
void *func_001825E0(void *arg0);
void *func_00184E38(void *arg0)
{
  char sp[16];
  u8 *new_var2;
  int new_var;
  func_001D4040(sp, (const char *) D_004700C8);
  *((s32 *) (((u8 *) arg0) + 0)) = -1;
  new_var2 = (u8 *) arg0;
  *((s32 *) (((u8 *) arg0) + 4)) = *((s32 *) sp);
  *((s32 *) (((u8 *) arg0) + 8)) = (s32) D_00473D90;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 1;
  *((s32 *) (((u8 *) arg0) + 0x38)) = 0;
  new_var = 0x18;
  *((s32 *) (((u8 *) arg0) + new_var)) = (*((s32 *) (((u8 *) arg0) + 0x1C)) = 0);
  *((s32 *) (((u8 *) arg0) + 0x28)) = (*((s32 *) (((u8 *) arg0) + 0x24)) = 0);
  *((s32 *) (((u8 *) arg0) + 0x2C)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x20)) = 1;
  *((s32 *) (((u8 *) arg0) + 0x34)) = (*((s32 *) (((u8 *) arg0) + 0x30)) = 0);
  return arg0;
}

