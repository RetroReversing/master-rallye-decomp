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

s32 func_003F9698();
extern s32 D_0043C0EC;
extern char D_0048A8F8[];
extern void *D_004A9950;

void func_003EEC00(s32 arg0, s32 arg1, s32 arg2, void **arg3) {
    s32 var_5;
    s32 var_6;
    void **var_7;
    void *temp_2;

    var_6 = arg2;
    var_7 = arg3;
    var_5 = 0;
    if (D_0043C0EC > 0) {
        var_6 = D_0043C0EC;
        var_7 = &D_004A9950;
        do {
            temp_2 = *var_7;
            var_7 += 4;
            var_6 -= 1;
            var_5 = var_5 - 0xC + M2C_FIELD(temp_2, s32 *, 4);
        } while (var_6 != 0);
    }
    func_003F9698(&D_0048A8F8, var_5, var_6, var_7);
}
