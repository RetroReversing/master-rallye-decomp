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
s32 _SetTLBEntry_4();
s32 func_0040B7A0(s32 arg0)
{
  if (((u32) (arg0 - 0xD)) >= 0x23U)
  {
    if (arg0)
    {
      return -1;
    }
    else
    {
      return -1;
    }
  }
  return _SetTLBEntry_4();
}

