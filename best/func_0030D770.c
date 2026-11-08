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

s32 func_0030C350();
s32 func_0030C3C0();
s32 func_0030C508();
s32 func_0030C570();
s32 func_003F9698();
extern u32 D_0042D5F4;
extern char D_00484AC0[];
extern char D_00484B20[];
extern char D_00484B48[];
extern char D_00484B70[];
extern char D_00484B90[];

s32 func_0030D770(u16 arg0, u16 arg1, void *arg2) {
    s32 temp_4;
    u16 var_17;
    void *var_16;

    var_17 = arg1;
    var_16 = arg2;
    if (arg0 >= (u32) D_0042D5F4) {
        func_003F9698(&D_00484B20);
        func_003F9698(&D_00484B48, arg0);
        func_003F9698(&D_00484AC0);
        return -1;
    }
    if ((u32) (var_17 - 1) >= 8U) {
        func_003F9698(&D_00484B20);
        func_003F9698(&D_00484B70, var_17);
        func_003F9698(&D_00484B90);
        return -2;
    }
    func_0030C350(0x1B);
    func_0030C508(arg0);
    func_0030C508(var_17);
    if ((s32) var_17 > 0) {
        do {
            var_17 -= 1;
            func_0030C508(M2C_FIELD(var_16, u16 *, 0));
            func_0030C570(M2C_FIELD(var_16, s32 *, 8));
            temp_4 = M2C_FIELD(var_16, s32 *, 4);
            var_16 += 0xC;
            func_0030C570(temp_4);
        } while (var_17 != 0);
    }
    func_0030C3C0();
    return 0;
}
