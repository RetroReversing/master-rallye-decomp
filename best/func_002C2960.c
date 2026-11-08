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

s32 func_002C2588(void *, s32);                     /* extern */
s32 func_002C2640(void *, void *, s32, s32);        /* extern */
M2C_UNK func_002C2708(void *, s32, s32);            /* extern */
s32 func_003D7CB0(s32);                             /* extern */
M2C_UNK func_003F9698(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern s32 D_00428F0C;
extern M2C_UNK D_004814D0;
extern M2C_UNK D_004814E8;
extern M2C_UNK D_00481520;
extern M2C_UNK D_00481540;
extern M2C_UNK D_00481560;

s32 func_002C2960(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_19;
    void *temp_17;
    void *temp_2;
    void *temp_3;

    var_19 = 0;
    temp_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_2, s16 *, 0x28));
    temp_17 = arg0 + 0x78;
    if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
        temp_3 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_3, M2C_UNK (**)(void *), 0x14)(arg0 + M2C_FIELD(temp_3, s16 *, 0x10));
        var_19 = func_002C2640(arg0, temp_17, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20)) != 0;
        if (var_19 != 0) {
            var_19 = func_002C2588(temp_17, arg1) != 0;
            if (var_19 != 0) {
                M2C_FIELD(arg0, s32 *, 8) = arg2;
                M2C_FIELD(arg0, s32 *, 0xC) = arg3;
                func_002C2708(arg0, arg2, arg3);
                M2C_FIELD(arg0, s32 *, 4) = func_003D7CB0(arg1);
            } else {
                func_003F9698(&D_004814D0, &D_004814E8, &D_00481520, arg1);
            }
        } else {
            func_003F9698(&D_004814D0, &D_004814E8, &D_00481540, arg1);
        }
        M2C_FIELD(arg0, s32 *, 0x68) = var_19;
        M2C_FIELD(arg0, s32 *, 0x6C) = 1;
        D_00428F0C = 0;
    } else {
        func_003F9698(&D_004814D0, &D_004814E8, &D_00481560, arg1);
    }
    return var_19;
}
