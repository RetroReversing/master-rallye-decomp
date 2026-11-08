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

M2C_UNK func_00258F80(s32 *, s32, s32);             /* extern */

void func_0024F770(void *arg0, s32 arg1, s32 arg2) {
    s32 *sp0;
    s32 *temp_3;
    s32 temp_2_2;
    void **temp_2;
    void *temp_17;
    void *temp_2_3;
    void *var_16;

    temp_2 = M2C_FIELD(arg0, void ***, 8);
    var_16 = *temp_2;
    if (var_16 != temp_2) {
        do {
            temp_3 = M2C_FIELD(var_16, s32 **, 8);
            sp0 = temp_3;
            if (temp_3 != NULL) {
                *temp_3 += 1;
            }
            func_00258F80(sp0, arg1, arg2);
            temp_17 = M2C_FIELD(var_16, void **, 0);
            var_16 = temp_17;
            if (sp0 != NULL) {
                temp_2_2 = M2C_FIELD(sp0, s32 *, 0) - 1;
                M2C_FIELD(sp0, s32 *, 0) = temp_2_2;
                if (temp_2_2 == 0) {
                    temp_2_3 = M2C_FIELD(sp0, void **, 4);
                    M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_3, s16 *, 8), 3, sp0);
                }
            }
        } while (temp_17 != M2C_FIELD(arg0, void ***, 8));
    }
}
