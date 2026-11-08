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

void *func_002B1FC0(M2C_UNK);                       /* extern */
void *func_003D2910(M2C_UNK);                       /* extern */

void *func_001F3958(void *arg0) {
    void *temp_17;
    void *temp_3;
    void *temp_4;
    void *var_2;

    temp_17 = arg0 + 0x24;
    M2C_FIELD(arg0, void **, 0x24) = NULL;
    var_2 = func_002B1FC0(0x18);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0x18);
    }
    M2C_FIELD(arg0, void **, 0x24) = var_2;
    M2C_FIELD(temp_17, s8 *, 8) = 0;
    M2C_FIELD(temp_17, s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4) = 0;
    temp_3 = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(temp_3, void **, 8) = temp_3;
    temp_4 = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(temp_4, void **, 0xC) = temp_4;
    return arg0;
}
