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

s32 func_002B1FC0();
s32 func_002B53F8();
s32 func_002B5608();
s32 func_003F931C();
s32 func_003F9698();
s32 func_003FA9B8();
s32 func_00406EA8();
extern char D_0047EAB8[];
extern char D_0047EAF0[];

s32 func_002B54B8(void *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_19;

    var_19 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_002B5608();
    }
    temp_2 = func_002B53F8(arg1);
    temp_16 = func_003FA9B8(temp_2) + 1;
    temp_2_2 = func_002B1FC0(temp_16);
    M2C_FIELD(arg0, s32 *, 8) = temp_2_2;
    func_003F931C(temp_2_2, temp_2, temp_16);
    temp_2_3 = func_00406EA8(temp_2, 0x603);
    if (temp_2_3 >= 0) {
        func_003F9698(&D_0047EAB8, temp_2_3, temp_2);
        var_19 = 1;
        M2C_FIELD(arg0, s32 *, 0) = temp_2_3;
        M2C_FIELD(arg0, s32 *, 4) = 1;
    }
    if (var_19 == 0) {
        func_003F9698(&D_0047EAF0, temp_2);
    }
    return var_19;
}
