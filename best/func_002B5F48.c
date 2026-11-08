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

s32 func_002B6108();
s32 func_002B61D0();
s32 func_002BB060();
s32 func_002BB840();
extern s32 D_0040E67C;
extern s32 D_0044E7F0;
extern s32 D_0044E7F4;

void func_002B5F48(s32 *arg0) {
    s32 *temp_16;
    s32 *temp_16_2;
    s32 var_18;

    if (D_0044E7F0 != 0) {
        temp_16 = "CD:";
        var_18 = func_002B61D0(temp_16, NULL);
        func_002B6108(arg0, temp_16);
    } else {
        temp_16_2 = "HOST0:";
        var_18 = func_002B61D0(arg0, temp_16_2, 0);
        func_002B6108(arg0, temp_16_2);
    }
    if (D_0044E7F4 != 0) {
        func_002BB840(func_002BB060(), D_0040E67C, var_18);
        func_002B6108(arg0, "PACK:");
    }
}
