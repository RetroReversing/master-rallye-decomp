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

M2C_UNK func_001F4A08(s32, s32);                    /* extern */
M2C_UNK func_001F4A50(s32, s32);                    /* extern */
M2C_UNK func_001F4AA0(s32, s32);                    /* extern */
M2C_UNK func_001F4BD8(s32, s32);                    /* extern */
M2C_UNK func_001F4C20(s32, s32);                    /* extern */
M2C_UNK func_001F4C68(s32, s32);                    /* extern */
M2C_UNK func_001F4D28(s32, s32);                    /* extern */
M2C_UNK func_001F4DF0(s32, s32);                    /* extern */
M2C_UNK func_001F4E38(s32, s32);                    /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_004262B0;
extern M2C_UNK D_004774D8;
extern M2C_UNK D_00477860;

void func_001F4788(s32 arg0, void *arg1) {
    s32 sp0;
    s32 temp_18;
    s32 temp_19;
    s32 temp_20;
    s32 temp_21;
    s32 temp_22;
    s32 temp_23;
    s32 temp_2;
    s32 temp_30;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *temp_3_8;
    void *temp_3_9;
    void *var_16;
    void *var_5;

    temp_3 = M2C_FIELD(arg1, void **, 0x10);
    sp0 = M2C_FIELD(temp_3, s32 (**)(void *), 0x14)(arg1 + M2C_FIELD(temp_3, s16 *, 0x10));
    temp_3_2 = M2C_FIELD(arg1, void **, 0x10);
    temp_3_3 = M2C_FIELD(arg1, void **, 0x10);
    temp_30 = M2C_FIELD(temp_3_2, s32 (**)(void *), 0x1C)(arg1 + M2C_FIELD(temp_3_2, s16 *, 0x18));
    temp_3_4 = M2C_FIELD(arg1, void **, 0x10);
    temp_23 = M2C_FIELD(temp_3_3, s32 (**)(void *), 0x24)(arg1 + M2C_FIELD(temp_3_3, s16 *, 0x20));
    temp_3_5 = M2C_FIELD(arg1, void **, 0x10);
    temp_22 = M2C_FIELD(temp_3_4, s32 (**)(void *), 0x2C)(arg1 + M2C_FIELD(temp_3_4, s16 *, 0x28));
    temp_3_6 = M2C_FIELD(arg1, void **, 0x10);
    temp_21 = M2C_FIELD(temp_3_5, s32 (**)(void *), 0x34)(arg1 + M2C_FIELD(temp_3_5, s16 *, 0x30));
    temp_3_7 = M2C_FIELD(arg1, void **, 0x10);
    temp_20 = M2C_FIELD(temp_3_6, s32 (**)(void *), 0x3C)(arg1 + M2C_FIELD(temp_3_6, s16 *, 0x38));
    temp_3_8 = M2C_FIELD(arg1, void **, 0x10);
    temp_19 = M2C_FIELD(temp_3_7, s32 (**)(void *), 0x44)(arg1 + M2C_FIELD(temp_3_7, s16 *, 0x40));
    temp_3_9 = M2C_FIELD(arg1, void **, 0x10);
    temp_18 = M2C_FIELD(temp_3_8, s32 (**)(void *), 0x4C)(arg1 + M2C_FIELD(temp_3_8, s16 *, 0x48));
    temp_2 = M2C_FIELD(temp_3_9, s32 (**)(void *), 0x54)(arg1 + M2C_FIELD(temp_3_9, s16 *, 0x50));
    if (sp0 != 0) {
        func_001F4A08(arg0, sp0);
    } else if (temp_30 != 0) {
        func_001F4A50(arg0, temp_30);
    } else if (temp_23 != 0) {
        func_001F4AA0(arg0, temp_23);
    } else if (temp_22 != 0) {
        func_001F4BD8(arg0, temp_22);
    } else if (temp_21 != 0) {
        func_001F4C20(arg0, temp_21);
    } else if (temp_20 != 0) {
        func_001F4C68(arg0, temp_20);
    } else if (temp_19 != 0) {
        func_001F4D28(arg0, temp_19);
    } else if (temp_18 != 0) {
        func_001F4DF0(arg0, temp_18);
    } else if (temp_2 != 0) {
        func_001F4E38(arg0, temp_2);
    }
    if (M2C_FIELD(arg1, void **, 0) != NULL) {
        func_003F9698(&D_00477860);
        M2C_FIELD(&D_004262B0, s32 *, 0xC) = (s32) (M2C_FIELD(&D_004262B0, s32 *, 0xC) + 1);
        var_16 = M2C_FIELD(arg1, void **, 0);
        if (var_16 != NULL) {
            var_5 = var_16;
            do {
                func_001F4788(arg0, var_5);
                var_16 = M2C_FIELD(var_16, void **, 4);
                var_5 = var_16;
            } while (var_16 != NULL);
        }
        M2C_FIELD(&D_004262B0, s32 *, 0xC) = (s32) (M2C_FIELD(&D_004262B0, s32 *, 0xC) - 1);
        func_003F9698(&D_004774D8);
    }
}
