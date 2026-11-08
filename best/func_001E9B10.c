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

s32 *func_002B1FC0(M2C_UNK);                        /* extern */
s32 *func_003D2910(M2C_UNK);                        /* extern */
extern M2C_UNK D_00477140;

void *func_001E9B10(void *arg0) {
    s32 *temp_3;
    s32 *temp_4;
    s32 *var_3;

    M2C_FIELD(arg0, s32 **, 0) = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_00477140;
    var_3 = func_002B1FC0(0x18);
    if (var_3 == NULL) {
        var_3 = func_003D2910(0x18);
    }
    M2C_FIELD(arg0, s32 **, 0) = var_3;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    *var_3 = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 0), s32 *, 4) = 0;
    temp_4 = M2C_FIELD(arg0, s32 **, 0);
    M2C_FIELD(temp_4, s32 **, 8) = temp_4;
    temp_3 = M2C_FIELD(arg0, s32 **, 0);
    M2C_FIELD(temp_3, s32 **, 0xC) = temp_3;
    return arg0;
}
