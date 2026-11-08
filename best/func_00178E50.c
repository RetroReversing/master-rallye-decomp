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
M2C_UNK func_0019EAC8(s32, M2C_UNK);                /* extern */

void func_00178E50(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 var_2;
    void *temp_2;
    void *temp_6;

    temp_6 = M2C_FIELD(arg0, void **, 0x98);
    if (temp_6 != NULL) {
        temp_2 = M2C_FIELD(temp_6, void **, 0x18);
        M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x9C);
    var_2 = arg1 & 1;
    if (temp_4 != 0) {
        func_0019EAC8(temp_4, 3);
        var_2 = arg1 & 1;
    }
    if (var_2 != 0) {
        D_002AD390(arg0);
    }
}
