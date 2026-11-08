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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001DF2B0(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001EB128(void *, s32);                 /* extern */
extern M2C_UNK D_0044DD18;

void *func_001DF4C8(void *arg0) {
    void *temp_2;
    void *temp_3;
    void *var_16;

    temp_2 = D_002AD408(0x24);
    temp_3 = temp_2 + 0x14;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, M2C_UNK **, 0x10) = &D_0044DD18;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2, s32 *, 0x14) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 0x20) = 0;
    func_001EB128(temp_3, arg0 + 0x14);
    var_16 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_2, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    if (var_16 != NULL) {
        do {
            func_001DF2B0(temp_2, func_001DF4C8(var_16), 0);
            var_16 = M2C_FIELD(var_16, void **, 4);
        } while (var_16 != NULL);
    }
    return temp_2;
}
