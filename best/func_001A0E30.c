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

M2C_UNK func_001A0F58(s32, s32, void *, s32, s32, s32); /* extern */
void *func_001E3820(s32, s32, M2C_UNK *);           /* extern */
s32 func_001E38C8(s32, s32);                        /* extern */
void *func_0021E9C0(s32, s32);                      /* extern */
s32 func_0021F4B0();                                /* extern */
s32 func_00262FF8(void *);                          /* extern */
extern M2C_UNK D_0040E698;

void func_001A0E30(s32 arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_2;
    s32 temp_5;
    s32 var_18;
    s32 var_20;
    s32 var_21;
    void *temp_16_2;
    void *temp_2_2;
    void *temp_2_3;

    temp_16 = arg0 + 0x20;
    temp_2 = func_001E4280();
    if (func_001E38C8(temp_2, temp_16) != 0) {
        if (func_001E3650(temp_2, temp_16) != 0) {
            temp_2_2 = func_001E3820(func_001E4280(), arg1 + 0x5C, &D_0040E698);
            var_18 = arg0 + 0x10;
            if (temp_2_2 != NULL) {
                var_21 = 0;
                var_20 = 3;
                do {
                    temp_17 = M2C_FIELD(temp_2_2, s32 *, 0xC) + var_21;
                    temp_2_3 = func_0021E9C0(func_0021F4B0(), temp_17 + 0x50);
                    if (temp_2_3 != NULL) {
                        temp_16_2 = M2C_FIELD(temp_2_3, void **, 0x50);
                        if ((temp_16_2 != NULL) && (func_00262FF8(temp_16_2) != 0)) {
                            temp_5 = M2C_FIELD(temp_16_2, s32 *, 0x14);
                            if (temp_5 != 0) {
                                func_001A0F58(arg0, temp_5, temp_2_2, temp_17, temp_2, var_18);
                            }
                        }
                    }
                    var_18 += 4;
                    var_20 -= 1;
                    var_21 += 0x54;
                } while (var_20 >= 0);
            }
        }
    }
}
