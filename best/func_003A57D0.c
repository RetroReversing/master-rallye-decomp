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

M2C_UNK func_003ACDA0(s32 *, s32 **);               /* extern */
M2C_UNK func_003ACE60(s32 *, s32 **);               /* extern */

void func_003A57D0(s32 *arg0, s32 **arg1) {
    s32 *sp0;
    s32 *temp_2;
    s32 *temp_2_2;
    s32 *var_17;

    var_17 = arg0;
    *var_17 = 0;
loop_1:
    if ((var_17 != *arg1) && (M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 *, 0) == 0)) {
        if (M2C_FIELD(var_17, s32 **, 4) == M2C_FIELD(M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 **, 4), s32 *, 8)) {
            temp_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 **, 4), s32 **, 0xC);
            sp0 = temp_2;
            if ((temp_2 != NULL) && (*sp0 == 0)) {
                M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 *, 0) = 1;
                *sp0 = 1;
                *M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 **, 4) = 0;
                var_17 = M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 **, 4);
            } else {
                if (var_17 == M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 *, 0xC)) {
                    var_17 = M2C_FIELD(var_17, s32 **, 4);
                    func_003ACDA0(var_17, arg1);
                }
                M2C_FIELD(M2C_FIELD(var_17, void **, 4), s32 *, 0) = 1;
                *M2C_FIELD(M2C_FIELD(var_17, void **, 4), s32 **, 4) = 0;
                func_003ACE60(M2C_FIELD(M2C_FIELD(var_17, void **, 4), s32 **, 4), arg1);
            }
        } else {
            temp_2_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 **, 4), s32 **, 8);
            sp0 = temp_2_2;
            if ((temp_2_2 != NULL) && (*sp0 == 0)) {
                M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 *, 0) = 1;
                *sp0 = 1;
                *M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 **, 4) = 0;
                var_17 = M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 **, 4);
            } else {
                if (var_17 == M2C_FIELD(M2C_FIELD(var_17, s32 **, 4), s32 *, 8)) {
                    var_17 = M2C_FIELD(var_17, s32 **, 4);
                    func_003ACE60(var_17, arg1);
                }
                M2C_FIELD(M2C_FIELD(var_17, void **, 4), s32 *, 0) = 1;
                *M2C_FIELD(M2C_FIELD(var_17, void **, 4), s32 **, 4) = 0;
                func_003ACDA0(M2C_FIELD(M2C_FIELD(var_17, void **, 4), s32 **, 4), arg1);
            }
        }
        goto loop_1;
    }
    **arg1 = 1;
}
