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

void *func_001B16A8();
s32 func_00205CE0();
s32 func_002060F8();
s32 func_002062A8();
s32 func_0021E620();
s32 func_002AD408();

void func_001B0410(s32 arg0, void *arg1, s32 arg2) {
    void *temp_16;
    void *temp_17;

    temp_17 = M2C_FIELD(arg1, void **, 0x4C);
    if (temp_17 != NULL) {
        func_002060F8(temp_17);
        func_002062A8(temp_17, arg0 + 0x28);
        M2C_FIELD(temp_17, s32 *, 0x74) = 1;
        M2C_FIELD(temp_17, s32 *, 0x88) += 2;
        M2C_FIELD(temp_17, s64 *, 0x78) = (s64) ((((M2C_FIELD(temp_17, s64 *, 0x78) & ~2) | 2) & ~4) | 4);
        M2C_FIELD(temp_17, s32 *, 0x64) = 0;
        if (arg2 == 0) {
            temp_16 = func_001B16A8(func_002AD408(0x20, -5, 4, 2));
            func_00205CE0(temp_17, 0);
            M2C_FIELD(temp_16, s32 *, 0x14) = 0;
            M2C_FIELD(temp_16, s32 *, 0x18) = 2;
            M2C_FIELD(temp_16, s32 *, 0x1C) = 3;
            func_0021E620(arg1, 1, temp_16);
            return;
        }
        func_00205CE0(temp_17, 3, 4, 2);
    }
}
