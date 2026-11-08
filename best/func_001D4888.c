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

s32 func_001CE2F8(s32 *);                           /* extern */
s32 func_001D24B8(s32 *, M2C_UNK, s32, s32);        /* extern */
M2C_UNK func_001D2A40(s32 *, M2C_UNK, s32);         /* extern */
M2C_UNK func_001D2C50(s32 *);                       /* extern */
M2C_UNK func_001D2CD8(s32 *);                       /* extern */
M2C_UNK func_001D2D48(s32 *, M2C_UNK, s32);         /* extern */
M2C_UNK func_001D2ED8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
void **func_002B4AD8();                             /* extern */
s32 func_003FA9B8(s32);                             /* extern */

void func_001D4888(s32 *arg2) {
    s32 (*temp_5)(void *, M2C_UNK);
    s32 (*temp_5_2)(void *, M2C_UNK);
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_4;
    s32 temp_6;
    s32 var_2;
    void **temp_2;
    void **temp_2_2;
    void *temp_3;
    void *temp_3_2;

    func_001D2CD8(arg2);
    temp_4 = *arg2;
    var_2 = 0;
    if (temp_4 != 0) {
        var_2 = func_003FA9B8(temp_4);
    }
    func_001D2D48(arg2, 0, var_2);
    func_001D2ED8(arg2, 0x2F, 0x5C);
    temp_2 = func_002B4AD8();
    temp_3 = *temp_2;
    temp_5 = M2C_FIELD(temp_3, s32 (**)(void *, M2C_UNK), 0x2C);
    temp_16 = temp_5(temp_2 + M2C_FIELD(temp_3, s16 *, 0x28), temp_5);
    temp_16_2 = func_001D24B8(arg2, 0, func_001CE2F8(arg2), temp_16);
    temp_2_2 = func_002B4AD8();
    temp_3_2 = *temp_2_2;
    temp_5_2 = M2C_FIELD(temp_3_2, s32 (**)(void *, M2C_UNK), 0x2C);
    temp_6 = temp_16_2 + func_003FA9B8(temp_5_2(temp_2_2 + M2C_FIELD(temp_3_2, s16 *, 0x28), temp_5_2));
    if (temp_16_2 != -1) {
        func_001D2A40(arg2, 0, temp_6);
    }
    func_001D2C50(arg2);
}
