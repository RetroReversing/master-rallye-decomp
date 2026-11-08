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

M2C_UNK D_002AD530(s32);                            /* extern */
s32 D_002AD5A8(s32);                                /* extern */
M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
extern s32 D_0043C000;

void func_003279C0(void *arg0, s32 arg1) {
    s32 temp_2;
    void *temp_16;
    s32 temp_4;
    s32 temp_6;
    s32 temp_18;

    temp_16 = M2C_FIELD(arg0, void **, 0x10);
    if (M2C_FIELD(temp_16, s32 *, 8) < arg1) {
        D_0043C000 = M2C_FIELD(temp_16, s32 *, 0x10);
        temp_2 = D_002AD5A8((arg1 << 6) + 0x80);
        temp_6 = M2C_FIELD(temp_16, s32 *, 0xC);
        temp_18 = (temp_2 + 0x7F) & 0xFFFFFF80;
        if (0 < temp_6) {
            func_003F931C(temp_18, M2C_FIELD(temp_16, s32 *, 0), temp_6 << 6);
        }
        temp_4 = M2C_FIELD(temp_16, s32 *, 4);
        if (temp_4) {
            D_002AD530(temp_4);
        }
        M2C_FIELD(temp_16, s32 *, 4) = temp_2;
        M2C_FIELD(temp_16, s32 *, 0) = temp_18;
        M2C_FIELD(temp_16, s32 *, 8) = arg1;
        D_0043C000 = 0;
    }
}
