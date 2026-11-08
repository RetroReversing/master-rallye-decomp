#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK func_002AFFE8(s32 *, M2C_UNK *, void *);
M2C_UNK func_002B05E0();
extern M2C_UNK D_0047DD08;
extern volatile char D_0048D500;
extern s32 D_004A2A78;
s32 *func_002B1090(void)
{
  if (D_004A2A78 == 0)
  {
    func_002B05E0();
    func_002AFFE8(&D_004A2A78, &D_0047DD08, (&D_0048D500) + 8);
  }
  return &D_004A2A78;
}

