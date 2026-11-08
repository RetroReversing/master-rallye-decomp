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

M2C_UNK func_001422F0();                            /* extern */
M2C_UNK func_00142AB0(s32);                         /* extern */
M2C_UNK func_00142B90(s32, void *);                 /* extern */

void func_00142018(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x4C) != 0) {
        func_001422F0();
        func_00142AB0(arg0);
        func_00142B90(arg0, arg1);
    }
}
