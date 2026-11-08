/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_003F7820(void *);                      /* extern */
M2C_UNK func_003F79D0(void *, s32);                 /* extern */
M2C_UNK func_003F8488(void *);                      /* extern */
extern void *D_004404DC;

s32 func_003FDBA8(void *arg0) {
    s32 temp_5;
    s32 var_2;
    s32 var_3_3;
    u16 temp_2;
    u16 temp_3;
    u16 var_3_2;
    void *var_3;

    var_3 = M2C_FIELD(arg0, void **, 0x54);
    if (var_3 != NULL) {
        var_2 = M2C_FIELD(var_3, s32 *, 0x38);
    } else {
        var_3 = D_004404DC;
        M2C_FIELD(arg0, void **, 0x54) = var_3;
        var_2 = M2C_FIELD(var_3, s32 *, 0x38);
    }
    if (var_2 == 0) {
        func_003F7820(var_3);
    }
    var_3_2 = M2C_FIELD(arg0, u16 *, 0xC);
    if (var_3_2 & 8) {
        goto block_20;
    }
    if (!(var_3_2 & 0x10)) {
        return -1;
    }
    if (!(var_3_2 & 4)) {

    } else {
        temp_5 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_5 != 0) {
            if (temp_5 != (arg0 + 0x40)) {
                func_003F79D0(M2C_FIELD(arg0, void **, 0x54), temp_5);
            }
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
        temp_2 = M2C_FIELD(arg0, u16 *, 0xC) & ~0x24;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        var_3_2 = temp_2;
        M2C_FIELD(arg0, u16 *, 0xC) = temp_2;
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    }
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (var_3_2 | 8);
block_20:
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        func_003F8488(arg0);
    }
    temp_3 = M2C_FIELD(arg0, u16 *, 0xC);
    if (temp_3 & 1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) -M2C_FIELD(arg0, s32 *, 0x14);
    } else {
        var_3_3 = 0;
        if (!(temp_3 & 2)) {
            var_3_3 = M2C_FIELD(arg0, s32 *, 0x14);
        }
        M2C_FIELD(arg0, s32 *, 8) = var_3_3;
    }
    return 0;
}
