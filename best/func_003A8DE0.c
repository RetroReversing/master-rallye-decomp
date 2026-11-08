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

M2C_UNK func_0039BC70(void *, s32, s32);            /* extern */
s32 func_003A5A10(void *);                          /* extern */
M2C_UNK func_003A8D70(s32, s32);                    /* extern */

void func_003A8DE0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg0, s32 *, 8)) {
        func_003A8D70(M2C_FIELD(arg0, s32 *, 4), arg1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 8);
        return;
    }
    func_0039BC70(arg0, func_003A5A10(arg0), arg1);
}
