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

M2C_UNK func_002B2028(void *);                      /* extern */
M2C_UNK func_003ED0B8(M2C_UNK *);                   /* extern */
extern M2C_UNK D_0040E618;
extern M2C_UNK D_0040E658;
extern M2C_UNK D_0049D4A0;
extern void *D_0049D4C0;

void func_003EE430(s32 arg0, s32 arg1) {
    s32 temp_2;
    s32 var_18;
    void **temp_16;
    void **var_16;
    void **var_17;
    void *temp_3;
    void *temp_4;
    void *var_3;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            var_18 = 0x18;
            func_003ED0B8(&D_0049D4A0);
            var_17 = &D_0049D4C0;
            __repair_rows: {
                if (M2C_FIELD(&D_0040E658, s32 *, 0xC) == 0) {
                    var_3 = &D_0040E658 + 0x10;
                    M2C_FIELD(&D_0040E658, s32 *, 8) = (s32) (M2C_FIELD(&D_0040E658, s32 *, 8) + 1);
                } else {
                    var_3 = func_00151930(&D_0040E658);
                }
                *var_17 = var_3;
                var_18 -= 1;
                var_17 += 4;
            }
if (var_18 != -1) goto __repair_rows;
            return;
        }
        temp_16 = &D_0049D4C0 + 0x64;
        if ((&D_0049D4C0 != NULL) && (temp_16 != &D_0049D4C0)) {
            var_16 = temp_16 - 4;
            do {
                temp_3 = *var_16;
                temp_4 = temp_3 - 0x10;
                temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
                M2C_FIELD(temp_4, s32 *, 8) = temp_2;
                if (temp_2 == 0) {
                    if ((M2C_FIELD(temp_4, s32 *, 4) + 0x10) == 0) {
                        M2C_FIELD(temp_3, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                        M2C_FIELD(&D_0040E618, void **, -4) = temp_4;
                    } else {
                        func_002B2028(temp_4);
                    }
                }
                var_16 -= 4;
            } while (var_16 != &D_0049D4C0);
        }
    }
}
