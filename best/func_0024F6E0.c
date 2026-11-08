/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

s32 **func_0024F6E0(s32 **arg0, void *arg1) {
    s32 *sp0;
    s32 *temp_3;
    s32 temp_2;
    void *temp_2_2;

    temp_3 = M2C_FIELD(*M2C_FIELD(arg1, void ***, 8), s32 **, 8);
    sp0 = temp_3;
    if (temp_3 != NULL) {
        *temp_3 += 1;
    }
    *arg0 = sp0;
    if (sp0 != NULL) {
        M2C_FIELD(sp0, s32 *, 0) += 1;
    }
    if (sp0 != NULL) {
        temp_2 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2;
        if (temp_2 == 0) {
            temp_2_2 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_2, s16 *, 8), 3, sp0);
        }
    }
    return arg0;
}
