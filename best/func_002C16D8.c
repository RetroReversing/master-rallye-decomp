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

s32 func_004039B0();
s32 func_00403A18();
s32 func_00403A80();
s32 func_00403AE8();
extern char D_00428DE0[];

void func_002C16D8(void *arg0, s32 arg1, s32 arg2) {
    void *temp_2;
    void *temp_2_2;

    if (arg2 != 0) {
        temp_2 = D_00428DE0 + (M2C_FIELD(arg0, s32 *, 4) * 0x10);
        if (M2C_FIELD(temp_2, s32 *, 4) != 0) {
            func_00403A18(M2C_FIELD(temp_2, s32 *, 8), &D_00428DE0);
        } else {
            func_00403AE8(M2C_FIELD(temp_2, s32 *, 8), &D_00428DE0);
        }
    } else {
        temp_2_2 = D_00428DE0 + (M2C_FIELD(arg0, s32 *, 4) * 0x10);
        if (M2C_FIELD(temp_2_2, s32 *, 4) != 0) {
            func_004039B0(M2C_FIELD(temp_2_2, s32 *, 8), &D_00428DE0);
        } else {
            func_00403A80(M2C_FIELD(temp_2_2, s32 *, 8), &D_00428DE0);
        }
    }
    M2C_FIELD((D_00428DE0 + (M2C_FIELD(arg0, s32 *, 4) * 0x10)), s32 *, 0xC) = arg2;
}
