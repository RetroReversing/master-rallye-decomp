/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_001D2160(s32, s32);                    /* extern */
s32 func_001D21D8();                                /* extern */
M2C_UNK func_002A2398(s32);                         /* extern */
s32 func_002A2458();                                /* extern */

void func_002A1C98(s32 arg0) {
    func_002A2398(func_002A2458());
    func_001D2160(func_001D21D8(), arg0 + 0x10);
}
