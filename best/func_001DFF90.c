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

extern int D_004262BC;
s32 func_001D4010();
s32 func_001D65D0();
extern char D_004262B0[];
extern char D_004769A0[];
extern char D_004769A8[];
extern char D_004769B0[];

void func_001DFF90(s32 arg0, void *arg1) {
    s32 temp_5;
    s32 temp_6;
    void *temp_3;
    void *var_16;
    void *var_16_2;
    void *var_5;

    func_001D65D0("<%s", func_001D4010(arg1 + 0x20));
    temp_3 = arg1 + 0x14;
    var_16 = M2C_FIELD(arg1, void **, 0x14);
    if (var_16 != M2C_FIELD(temp_3, s32 *, 4)) {
        do {
            temp_6 = M2C_FIELD(var_16, s32 *, 4);
            temp_5 = func_001D4010(var_16);
            var_16 += 8;
            func_001D65D0(" %s=\"%s\"", temp_5, temp_6);
        } while (var_16 != M2C_FIELD(temp_3, s32 *, 4));
    }
    if (M2C_FIELD(arg1, void **, 0) == NULL) {
        func_001D65D0(&D_004769A0);
        return;
    }
    func_001D65D0(&D_004769A8);
    D_004262BC = (s32) (D_004262BC + 1);
    var_16_2 = M2C_FIELD(arg1, void **, 0);
    if (var_16_2 != NULL) {
        var_5 = var_16_2;
        do {
            func_001DFF90(arg0, var_5);
            var_16_2 = M2C_FIELD(var_16_2, void **, 4);
            var_5 = var_16_2;
        } while (var_16_2 != NULL);
    }
    D_004262BC = (s32) (D_004262BC - 1);
    func_001D65D0(&D_004769B0, func_001D4010(arg1 + 0x20));
}
