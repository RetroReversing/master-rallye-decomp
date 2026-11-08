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

M2C_UNK func_0030CAB8();                            /* extern */
extern M2C_UNK D_00429868;

void func_002CE730(s32 arg0) {
    s32 *temp_5;
    s32 temp_4;
    void *temp_7;

    if ((u32) (arg0 - 2) < 0x2EU) {
        func_0030CAB8();
        temp_4 = arg0 * 0x10;
        temp_5 = temp_4 + &D_00429868;
        temp_7 = &D_00429868 + temp_4;
        *temp_5 |= 0x80;
        M2C_FIELD(temp_7, s32 *, 0xC) = 0;
        M2C_FIELD(temp_7, s32 *, 4) = 0;
        M2C_FIELD(temp_7, s32 *, 8) = 0;
    }
}
