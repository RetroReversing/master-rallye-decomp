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

M2C_UNK func_001B1E70(s32);                         /* extern */

void func_001B2E60(void *arg0, void *arg1, s32 arg2) {
    func_001B1E70(arg0 + 0xA4);
    if ((arg2 != 0) || (M2C_FIELD(arg0, s32 *, 0xCC) != 0)) {
        M2C_FIELD(arg1, s32 *, 0xD0) = 1;
    }
}
