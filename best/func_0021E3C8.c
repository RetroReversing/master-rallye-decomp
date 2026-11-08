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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK func_001D1900(void *);                      /* extern */
M2C_UNK func_00205C68(s32, M2C_UNK);                /* extern */
void *func_0021F4B0();                              /* extern */
M2C_UNK func_0021F7D8(s32, void *);                 /* extern */
M2C_UNK func_00220690(s32, M2C_UNK);                /* extern */
M2C_UNK func_00262EB0(s32, M2C_UNK);                /* extern */

void func_0021E3C8(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 var_17;
    void **temp_6_2;
    void **var_16;
    void *temp_16;
    void *temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_6;
    void *var_16_2;

    var_17 = 3;
    var_16 = arg0 + 4;
    func_0021F7D8(M2C_FIELD(func_0021F4B0(), s32 *, 0x1C), arg0);
    do {
        temp_6 = *var_16;
        if (temp_6 != NULL) {
            temp_2 = M2C_FIELD(temp_6, void **, 8);
            M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
        }
        var_17 -= 1;
        var_16 += 4;
    } while (var_17 >= 0);
    temp_6_2 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_6_2 != NULL) {
        temp_2_2 = *temp_6_2;
        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, void **), 0xC)(temp_6_2 + M2C_FIELD(temp_2_2, s16 *, 8), 3, temp_6_2);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_4 != 0) {
        func_00205C68(temp_4, 3);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_4_2 != 0) {
        func_00262EB0(temp_4_2, 3);
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_4_3 != 0) {
        func_00220690(temp_4_3, 3);
    }
    func_001D1900(arg0 + 0x60);
    temp_17 = arg0 + 0x18;
    temp_16 = arg0 + 0x48;
    if (temp_17 != NULL) {
        var_16_2 = temp_16 - 0xC;
        if (temp_17 != temp_16) {
            do {
                func_001D1900(var_16_2);
                var_16_2 -= 0xC;
            } while (temp_17 != var_16_2);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
