extern void *D_00428F24;
extern void *func_002C20D0(void);
extern void *func_002C2EE0(void);
extern void func_002C39D8(void *);
extern void func_00110098(void);

s32 func_001100F0(void)
{
  void *obj;
  void *vt;
  s16 off;
  s32 (*fn)(void *);

  func_002C39D8(func_002C20D0());
  if (D_00428F24 == NULL) {
    func_002C39D8(func_002C2EE0());
  }
  obj = D_00428F24;
  func_00110098();
  vt = *(void **) obj;
  off = *(s16 *) ((u8 *) vt + 0x10);
  fn = *(s32 (**)(void *)) ((u8 *) vt + 0x14);
  return fn((void *) ((u8 *) obj + off));
}
