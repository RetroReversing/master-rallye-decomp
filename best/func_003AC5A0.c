/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_003AB7F8(s32);                         /* extern */
s32 func_003AB828(s32);                             /* extern */
M2C_UNK func_003ABE58(M2C_UNK *, s32);              /* extern */
s32 func_003ABEA8(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK D_004262D0;

s32 *func_003AC5A0(s32 *arg0, s32 *arg1) {
    s32 sp0;
    s32 temp_2;

    if (*arg0 != *arg1) {
        if (*arg0 >= 0) {
            temp_2 = func_003AB828(func_003ABEA8(&D_004262D0, *arg0));
            sp0 = temp_2;
            if (temp_2 == 0) {
                func_003ABE58(&D_004262D0, *arg0);
            }
        }
        *arg0 = *arg1;
        if (*arg0 >= 0) {
            func_003AB7F8(func_003ABEA8(&D_004262D0, *arg0));
        }
    }
    return arg0;
}
