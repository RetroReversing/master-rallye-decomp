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

M2C_UNK func_003DF178(void *, s32, s64, void *, s32, s32); /* extern */
extern s64 D_00488F48;
extern M2C_UNK D_00489120;
extern s64 D_004898B8;

void *func_003DF870(void *arg0, s32 arg1, s32 arg2) {
    s64 sp10;
    s64 sp18;                                       /* compiler-managed */
    s64 var_6;
    void *temp_16;
    void *temp_2;
    void *temp_5;
    void *temp_7;

    if (arg1 != 0) {
        temp_2 = arg0 + 0x68;
        M2C_FIELD(arg0, void **, 0) = temp_2;
        M2C_FIELD(temp_2, s8 *, 0x1A) = 4;
        M2C_FIELD(temp_2, s8 *, 0x1B) = 0;
        M2C_FIELD(temp_2, M2C_UNK **, 0x28) = &D_00489120;
        M2C_FIELD(temp_2, s16 *, 0x18) = 0x20;
        M2C_FIELD(temp_2, s64 *, 0x10) = 0x11;
        M2C_FIELD(temp_2, s32 *, 0x1C) = 6;
        M2C_FIELD(temp_2, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
        M2C_FIELD(temp_2, s32 *, 4) = 0;
        M2C_FIELD(temp_2, s32 *, 8) = 0;
    }
    temp_7 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_7, s64 **, 0x28) = &D_00488F48;
    var_6 = M2C_FIELD(&D_00488F48, s64 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(temp_7, s64 **, 0x28) = &D_004898B8;
    if (arg1 == 0) {
        var_6 = M2C_FIELD(&D_004898B8, s64 *, 0);
        sp10 = var_6;
        sp18 = (s64) M2C_FIELD(&D_004898B8, u16 *, 8);
        M2C_FIELD(temp_7, s64 **, 0x28) = &sp10;
        sp18 = M2C_FIELD(&D_004898B8, u16 *, 8) + (arg0 - (temp_7 - 0x68));
    }
    temp_16 = arg0 + 8;
    func_003DF178(temp_16, arg2, var_6, temp_7, arg1, arg2);
    temp_5 = M2C_FIELD(arg0, void **, 0);
    if (temp_16 == NULL) {
        M2C_FIELD(temp_5, s8 *, 0x1A) = 4;
    } else {
        M2C_FIELD(temp_5, s8 *, 0x1A) = 0;
    }
    M2C_FIELD(temp_5, void **, 0) = temp_16;
    M2C_FIELD(temp_5, s16 *, 0x18) = 0x20;
    M2C_FIELD(temp_5, s64 *, 0x10) = 0x11;
    M2C_FIELD(temp_5, s32 *, 0x1C) = 6;
    M2C_FIELD(temp_5, s32 *, 0x20) = 0;
    M2C_FIELD(temp_5, s8 *, 0x1B) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    return arg0;
}
