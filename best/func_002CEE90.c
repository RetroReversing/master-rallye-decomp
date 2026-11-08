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

s32 func_002CD128();                                /* extern */
M2C_UNK func_002CD170(s32);                         /* extern */
M2C_UNK func_002CE930(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_002D04D0();                            /* extern */
M2C_UNK func_0030D4D0(M2C_UNK);                     /* extern */
M2C_UNK func_00403370();                            /* extern */
extern s32 D_004297F4;
extern s32 D_004297F8;

void func_002CEE90(s32 arg0, f32 fparg0) {
    s32 var_17;
    s32 var_3;

    D_004297F4 = 0;
    func_002D04D0();
    func_002D04D0();
    if (0x463FFC00 >= 0) {
        var_3 = (0x463FFC00 < 0x3000) ? 0x463FFC00 : 0x2FFF;
    } else {
        var_3 = 0;
    }
    var_17 = 0x13;
    func_002CE930(arg0, 0, var_3, 0xEB3);
    D_004297F8 = var_3;
    func_00403370();
    func_0030D4D0(0);
    do {
        var_17 -= 1;
        func_00403370();
        func_002CD170(func_002CD128());
    } while (var_17 >= 0);
    func_0030D4D0(0);
}
