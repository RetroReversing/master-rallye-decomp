/* machine draft (m2c), tried by autopilot */
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

extern s32 D_0042D5D0;
extern u8 D_0042D5F0;
extern s32 D_0048D51C;
extern u8 D_0048D520;
extern u8 D_0048D524;
extern s32 D_0048D528;
extern s32 D_0048D52C;
extern s32 D_004A46C0;
extern s32 D_004A46E8;
extern s32 D_004A4710;
extern s32 D_004A4738;

void func_0030E4C8(void *arg0) {
    s32 *var_14;
    s32 *var_5;
    s32 *var_6;
    s32 *var_7;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 var_8;
    void *var_13;

    M2C_FIELD(arg0, s32 *, 0) = (s32) D_0042D5D0;
    var_14 = &D_004A46C0;
    M2C_FIELD(arg0, u8 *, 4) = (u8) D_0042D5F0;
    var_13 = arg0 + 0x84;
    var_5 = &D_004A46E8;
    var_6 = &D_004A4738;
    var_7 = &D_004A4710;
    M2C_FIELD(arg0, s32 *, 8) = (s32) D_0048D51C;
    var_8 = 8;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) D_0048D52C;
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) D_0048D524;
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) D_0048D520;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) D_0048D528;
    do {
        temp_3 = *var_7;
        var_8 -= 1;
        var_7 += 4;
        M2C_FIELD(var_13, s32 *, -0x6C) = temp_3;
        temp_2 = *var_6;
        var_6 += 4;
        M2C_FIELD(var_13, s32 *, -0x48) = temp_2;
        temp_3_2 = *var_5;
        var_5 += 4;
        M2C_FIELD(var_13, s32 *, -0x24) = temp_3_2;
        temp_2_2 = *var_14;
        var_14 += 4;
        M2C_FIELD(var_13, s32 *, 0) = temp_2_2;
        var_13 += 4;
    } while (var_8 >= 0);
}
