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

s32 func_002BE550();
s32 func_002BE6F8();
s32 func_003ECE50();
extern s32 D_00429B70;
extern s32 D_00429B74;
extern char D_00483680[];
extern char D_00483690[];
extern char D_0049AFB8[];

void func_002CF530(s32 arg0) {
    s32 sp74;
    char *var_16;
    char *var_18;
    s32 temp_2;
    s32 temp_3;
    s32 var_17;
    s32 var_19;

    var_18 = D_0049AFB8 + 0x74;
    var_19 = 0;
    var_17 = 0x1D;
    D_00429B74 = 0;
    D_00429B70 += 1;
    var_16 = &sp74;
    do {
        temp_2 = func_002BE6F8(func_002BE550(), var_17);
        *(s32 *)var_16 = temp_2;
        if (temp_2 != 0) {
            var_19 = 1;
            func_003ECE50(&D_00483680, var_17, temp_2);
        }
        temp_3 = *(s32 *)var_16;
        var_17 -= 1;
        var_16 -= 4;
        *(s32 *)var_18 = temp_3;
        var_18 -= 4;
    } while (var_17 >= 6);
    if (var_19 != 0) {
        func_003ECE50(&D_00483690, arg0, D_00429B70);
    }
}
