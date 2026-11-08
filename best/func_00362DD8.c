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
M2C_UNK *func_00152D28(M2C_UNK);                    /* extern */
M2C_UNK *func_002B1FC0(s32);                        /* extern */
M2C_UNK *func_00368390(s32, s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK *func_003D2910(s32);                        /* extern */
extern M2C_UNK D_0040E618;

void func_00362DD8(void *arg0) {
    M2C_UNK *temp_2_2;
    M2C_UNK *var_6;
    s32 temp_16;
    s32 temp_18;
    void *temp_19;
    void *temp_2;

    if ((M2C_FIELD(arg0, void **, 4) != NULL) && (M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        temp_2 = D_002AD408(0xC);
        temp_19 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_2, M2C_UNK **, 0) = NULL;
        M2C_FIELD(temp_2, M2C_UNK **, 4) = NULL;
        temp_18 = (s32) ((M2C_FIELD(temp_19, s32 *, 4) - M2C_FIELD(temp_19, s32 *, 0)) * 0xAAAAAAAB) >> 4;
        M2C_FIELD(temp_2, void **, 8) = NULL;
        if (temp_18 != 0) {
            temp_16 = temp_18 * 0x30;
            if (temp_16 != 0) {
                temp_2_2 = func_002B1FC0(temp_16);
                var_6 = temp_2_2;
                if (temp_2_2 == NULL) {
                    var_6 = func_003D2910(temp_16);
                }
            } else {
                var_6 = M2C_FIELD(&D_0040E618, M2C_UNK **, -4);
                if (var_6 != NULL) {
                    M2C_FIELD(&D_0040E618, M2C_UNK **, -4) = (M2C_UNK *) *var_6;
                } else {
                    var_6 = func_00152D28(0);
                }
            }
        } else {
            var_6 = NULL;
        }
        M2C_FIELD(temp_2, M2C_UNK **, 0) = var_6;
        M2C_FIELD(temp_2, M2C_UNK **, 4) = var_6;
        M2C_FIELD(temp_2, void **, 8) = (void *) ((temp_18 * 0x30) + var_6);
        M2C_FIELD(temp_2, M2C_UNK **, 4) = func_00368390(M2C_FIELD(temp_19, s32 *, 0), M2C_FIELD(temp_19, s32 *, 4), var_6, 0);
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        M2C_FIELD(arg0, void **, 4) = temp_2;
    }
}
