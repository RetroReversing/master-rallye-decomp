void func_001D4040(void *, const char *);
void func_00164150(void *);
void func_00165550(void *, s32);
extern char D_0044F590[];
extern char D_0044F5A8[];
extern void *D_00474090;
extern char D_0044F108[];
extern void *D_00474208;
extern char D_0044EBE8[];
extern void *D_00474148;
void *func_00164D48(void *arg0);
void *D_002AD408(s32);
void func_001E2460(void *, void *);
void func_001E2E38(void *, const char *, void *);
extern char D_0044F5B8[];
extern char D_0044F5D0[];
extern void *D_0044DD18;
void *func_00164F38(void *arg0);
void *func_00163B70(void *arg0)
{
  s32 sp[4];
  func_001D4040(sp, D_0044F108);
  *((s32 *) (((u8 *) arg0) + 4)) = sp[0];
  *((s32 *) (((u8 *) arg0) + 0)) = -1;
  *((void **) (((u8 *) arg0) + 8)) = &D_00474208;
  *((f32 *) (((u8 *) arg0) + 0x18)) = 180.0f;
  *((f32 *) (((u8 *) arg0) + 0x1C)) = 20.0f;
  *((f32 *) (((u8 *) arg0) + 0x24)) = 80.0f;
  *((f32 *) (((u8 *) arg0) + 0x28)) = 40.0f;
  *((f32 *) (((u8 *) arg0) + 0x2C)) = 1.0f;
  *((s32 *) (((u8 *) arg0) + 0x14)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  return arg0;
  *((f32 *) (((u8 *) arg0) + 0x20)) = 1.0f;
}

void *func_0015F428(void *arg0);
