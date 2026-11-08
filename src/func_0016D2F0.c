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
f32 func_0016D290(s32);
f32 func_0016D2C0();
f32 func_0016D2F0(s32 arg0)
{
  f32 temp_f20;
 do { temp_f20 = func_0016D2C0(); return temp_f20 - func_0016D290(arg0); } while (0);
}
