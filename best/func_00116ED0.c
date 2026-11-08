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

M2C_UNK func_00116D50();                            /* extern */
M2C_UNK func_00116F88(void *);                      /* extern */
M2C_UNK func_00117AF0(void *);                      /* extern */
M2C_UNK func_00118600(void *);                      /* extern */
M2C_UNK func_00118908(void *);                      /* extern */
extern M2C_UNK D_0044DBF8;

void *func_00116ED0(void *arg0) {
    s32 var_17;
    s32 var_17_2;
    void *var_16;
    void *var_16_2;

    var_17 = 0x1C;
    var_16 = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0xC98) = &D_0044DBF8;
    do {
        var_17 -= 1;
        func_00118600(var_16);
        var_16 += 0x34;
    } while (var_17 != -1);
    var_16_2 = arg0 + 0x5E4;
    var_17_2 = 0x26;
    do {
        var_17_2 -= 1;
        func_00118908(var_16_2);
        var_16_2 += 0x2C;
    } while (var_17_2 != -1);
    func_00116D50();
    func_00116F88(arg0);
    func_00117AF0(arg0);
    return arg0;
}
