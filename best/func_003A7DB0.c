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

s32 func_003A7DB0(void *arg0, s32 arg1) {
    s32 sp0;
    s32 (*temp_6)(void *, s32, M2C_UNK);
    s32 (*temp_6_2)(void *, s32, M2C_UNK);
    s32 (*temp_6_3)(void *, s32, M2C_UNK);
    s32 temp_3;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;

    sp0 = 0;
    temp_2 = M2C_FIELD(arg0, void **, 8);
    sp0 = (sp0 != 0) | (M2C_FIELD((temp_2 + 0x80), s32 (**)(void *, s32), 4)(arg0 + M2C_FIELD(temp_2, s16 *, 0x80), arg1) != 0);
    temp_2_2 = M2C_FIELD(arg0, void **, 8);
    temp_6 = M2C_FIELD((temp_2_2 + 0x80), s32 (**)(void *, s32, M2C_UNK), 4);
    sp0 = (sp0 != 0) | (temp_6(arg0 + M2C_FIELD(temp_2_2, s16 *, 0x80), arg1 + 4, temp_6) != 0);
    temp_2_3 = M2C_FIELD(arg0, void **, 8);
    temp_6_2 = M2C_FIELD((temp_2_3 + 0x80), s32 (**)(void *, s32, M2C_UNK), 4);
    sp0 = (sp0 != 0) | (temp_6_2(arg0 + M2C_FIELD(temp_2_3, s16 *, 0x80), arg1 + 8, temp_6_2) != 0);
    temp_2_4 = M2C_FIELD(arg0, void **, 8);
    temp_6_3 = M2C_FIELD((temp_2_4 + 0x80), s32 (**)(void *, s32, M2C_UNK), 4);
    temp_3 = (sp0 != 0) | (temp_6_3(arg0 + M2C_FIELD(temp_2_4, s16 *, 0x80), arg1 + 0xC, temp_6_3) != 0);
    sp0 = temp_3;
    return temp_3;
}
