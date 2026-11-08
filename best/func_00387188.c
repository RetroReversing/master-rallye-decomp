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

void *func_0038BF10(s32, s16 *, s16);               /* extern */

void func_00387188(void *arg0) {
    s16 sp10;
    s16 sp12;
    s32 sp20;
    s16 sp24;
    s16 sp28;
    s32 var_18;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;

    var_18 = 0;
    temp_6 = M2C_FIELD(arg0, void **, 0x10);
    temp_3 = M2C_FIELD(temp_6, void **, 8);
    M2C_FIELD(temp_3, M2C_UNK (**)(void *, s32 *, void *), 0x94)(temp_6 + M2C_FIELD(temp_3, s16 *, 0x90), &sp20, temp_6);
    if (sp20 > 0) {
        do {
            temp_6_2 = M2C_FIELD(arg0, void **, 0x10);
            var_18 += 1;
            temp_3_2 = M2C_FIELD(temp_6_2, void **, 8);
            M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, s16 *, void *), 0x94)(temp_6_2 + M2C_FIELD(temp_3_2, s16 *, 0x90), &sp24, temp_6_2);
            temp_6_3 = M2C_FIELD(arg0, void **, 0x10);
            temp_3_3 = M2C_FIELD(temp_6_3, void **, 8);
            M2C_FIELD(temp_3_3, M2C_UNK (**)(void *, s16 *, void *), 0x94)(temp_6_3 + M2C_FIELD(temp_3_3, s16 *, 0x90), &sp28, temp_6_3);
            sp10 = sp24;
            sp12 = 0;
            M2C_FIELD(func_0038BF10(M2C_FIELD(arg0, s32 *, 4) + 0x14, &sp10, sp24), s16 *, 2) = sp28;
        } while (var_18 < sp20);
    }
}
