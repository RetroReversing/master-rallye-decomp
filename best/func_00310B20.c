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

M2C_UNK func_002C17E0(M2C_UNK *);                   /* extern */
M2C_UNK func_002C1818(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0030E8D0(M2C_UNK *);                   /* extern */
M2C_UNK func_0030E918(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003108C8(M2C_UNK *);                   /* extern */
M2C_UNK func_00310A20(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_0042D690;
extern M2C_UNK D_0042DA28;
extern M2C_UNK D_0042DAB8;

void func_00310B20(s32 arg0, s32 arg1) {
    M2C_UNK *var_16;
    s32 var_17;
    void *temp_16;
    void *var_16_2;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            var_17 = 3;
            var_16 = &D_0042D690;
            do {
                var_17 -= 1;
                func_003108C8(var_16);
                var_16 += 0xE0;
            } while (var_17 != -1);
            func_002C17E0(&D_0042DA28);
            func_0030E8D0(&D_0042DAB8);
            return;
        }
        func_0030E918(&D_0042DAB8, 2);
        func_002C1818(&D_0042DA28, 2);
        temp_16 = &D_0042D690 + 0x380;
        if ((&D_0042D690 != NULL) && (temp_16 != &D_0042D690)) {
            var_16_2 = temp_16 - 0xE0;
            do {
                func_00310A20(var_16_2, 0);
                var_16_2 -= 0xE0;
            } while (var_16_2 != &D_0042D690);
        }
    }
}
