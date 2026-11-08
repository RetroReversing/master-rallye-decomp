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

s32 func_002BFCE0(M2C_UNK *);                       /* extern */
extern M2C_UNK D_00480FA0;

void func_002BFF88(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_7;
    s32 var_5;
    s32 var_6;
    void *temp_3;
    void *temp_4;
    void *temp_4_2;
    void *var_4;

    temp_4 = M2C_FIELD(arg0, void **, 0x18);
    temp_7 = func_002BFCE0(&D_00480FA0);
    var_6 = 0;
    if ((((s64) M2C_FIELD(temp_4, u8 *, 1) << 8) | M2C_FIELD(temp_4, u8 *, 0)) & 0xFFFF) {
        var_5 = 0 * 4;
        do {
            temp_3 = M2C_FIELD(arg0, void **, 0x18) + var_5;
            temp_2 = M2C_FIELD(temp_3, s32 *, 4);
            if (temp_2 != 0) {
                M2C_FIELD(temp_3, s32 *, 4) = (s32) (temp_2 + arg1);
            }
            var_4 = M2C_UNALIGNED32(M2C_FIELD((M2C_FIELD(arg0, void **, 0x18) + var_5), M2C_UNK *, 4));
            var_6 += 1;
            if (var_4 != NULL) {
                do {
                    temp_2_2 = M2C_FIELD(var_4, s32 *, 0x10);
                    if (temp_2_2 != 0) {
                        M2C_FIELD(var_4, s32 *, 0x10) = (s32) (temp_2_2 + arg1);
                    }
                    temp_2_3 = M2C_FIELD(var_4, s32 *, 0xC);
                    if (arg2 != 0) {

                    }
                    if (temp_2_3 != 0) {
                        M2C_FIELD(var_4, s32 *, 0xC) = (s32) (temp_2_3 + arg1);
                    }
                    if (temp_7 == ((((s64) M2C_FIELD(var_4, u8 *, 0x15) << 8) | M2C_FIELD(var_4, u8 *, 0x14)) & 0xFFFF)) {
                        temp_2_4 = M2C_FIELD(var_4, s32 *, 0);
                        if (temp_2_4 != 0) {
                            M2C_FIELD(var_4, s32 *, 0) = (s32) (temp_2_4 + arg1);
                        }
                    }
                    var_4 = M2C_UNALIGNED32(M2C_FIELD(var_4, s32 *, 0x10));
                } while (var_4 != NULL);
            }
            temp_4_2 = M2C_FIELD(arg0, void **, 0x18);
            var_5 = var_6 * 4;
        } while (var_6 < ((((s64) M2C_FIELD(temp_4_2, u8 *, 1) << 8) | M2C_FIELD(temp_4_2, u8 *, 0)) & 0xFFFF));
    }
}
