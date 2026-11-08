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
M2C_UNK func_002F4400(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_0042A950;
extern M2C_UNK D_0042D2D0;
extern s32 D_0042D2D4;
extern M2C_UNK D_0042D2E8;
extern s32 D_0042D2EC;
extern M2C_UNK D_0042D300;
extern M2C_UNK D_0049B1D0;
extern s32 D_0049B1D4;

void func_002F7430(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_002F4400(&D_0042A950, 3);
            M2C_FIELD(&D_0042D2D0, s32 *, 0) = 0;
            M2C_FIELD(&D_0042D300, s64 *, 0x28) = 0xA;
            M2C_FIELD(&D_0042D2D0, s32 *, 0x10) = 0;
            M2C_FIELD(&D_0042D2E8, s32 *, 0) = 0;
            M2C_FIELD(&D_0042D2E8, s32 *, 0x10) = 0;
            M2C_FIELD(&D_0042D300, s64 *, 0x10) = (s64) ((((M2C_FIELD(&D_0042D300, s64 *, 0x10) & ~0x7FFF) | 1 | 0x8000) & ((0xBFFFFFFF << 0x10) | 0xFFFF) & ((((((0xF3FF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) & (-1U >> 4)) | (0x8000 << 0x2D));
            M2C_FIELD(&D_0042D300, s64 *, 0x18) = (s64) ((M2C_FIELD(&D_0042D300, s64 *, 0x18) & ~0xF) | 0xE);
            M2C_FIELD(&D_0049B1D0, s32 *, 0) = 0;
            M2C_FIELD(&D_0049B1D0, s32 *, 0x10) = 0;
            M2C_FIELD(&D_0042D2D0, s32 *, 4) = 0;
            M2C_FIELD(&D_0042D2D0, s32 *, 8) = 0;
            M2C_FIELD(&D_0042D2D0, s32 *, 0xC) = 0;
            M2C_FIELD(&D_0042D2E8, s32 *, 4) = 0;
            M2C_FIELD(&D_0042D2E8, s32 *, 8) = 0;
            M2C_FIELD(&D_0042D2E8, s32 *, 0xC) = 0;
            M2C_FIELD(&D_0049B1D0, s32 *, 4) = 0;
            M2C_FIELD(&D_0049B1D0, s32 *, 8) = 0;
            M2C_FIELD(&D_0049B1D0, s32 *, 0xC) = 0;
        } else {
            if (D_0049B1D4 != 0) {
                D_002AD530(D_0049B1D4);
            }
            if (D_0042D2EC != 0) {
                D_002AD530(D_0042D2EC);
            }
            if (D_0042D2D4 != 0) {
                D_002AD530(D_0042D2D4);
            }
        }
    }
}
