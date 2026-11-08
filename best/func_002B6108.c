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

s32 func_002B61D0();
s32 func_003F9698();
extern char D_0047EE00[];
extern char D_0047EE38[];

void func_002B6108(s32 *arg0, s32 *arg1) {
    s32 *var_5;

    func_003F9698(&D_0047EE00);
    var_5 = arg1;
    if (arg1 == NULL) {
        var_5 = "NULL";
    }
    func_003F9698(&D_0047EE38, var_5);
    func_003F9698(&D_0047EE00);
    *arg0 = func_002B61D0(arg0, arg1, 1);
}
