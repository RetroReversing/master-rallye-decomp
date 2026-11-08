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

M2C_UNK func_003274C8(s32, M2C_UNK);                /* extern */
M2C_UNK func_00342C50(void *, s32);                 /* extern */
extern M2C_UNK D_004853F0;

void func_00311BF8(void *arg0, s32 arg1) {
    s32 temp_4;

    M2C_FIELD(arg0, M2C_UNK **, 0x148) = &D_004853F0;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x16C);
    if (temp_4 != 0) {
        func_003274C8(temp_4, 3);
    }
    func_00342C50(arg0, arg1);
}
