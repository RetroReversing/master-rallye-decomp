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

void *func_003CA3B0(s32, s32);                      /* extern */
M2C_UNK func_003F931C(s32, void *, s32);            /* extern */
extern M2C_UNK D_0049B9D0;

s32 func_003CA460(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_2;

    if (M2C_FIELD((&D_0049B9D0 + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) == 0) {
        return 0;
    }
    temp_2 = func_003CA3B0(arg0, arg0);
    func_003F931C(arg2, temp_2, M2C_FIELD(temp_2, s32 *, 0x60));
    return M2C_FIELD(temp_2, s32 *, 0x60);
}
