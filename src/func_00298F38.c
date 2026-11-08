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

M2C_UNK func_00299138();                            /* extern */
M2C_UNK func_002991D0(void *, s32);                 /* extern */
M2C_UNK func_00299938(void *, s32);                 /* extern */

void func_00298F38(void *arg0, s32 arg1) {
    func_00299138();
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        func_002991D0(arg0, arg1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        func_00299938(arg0, arg1);
    }
}
