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

M2C_UNK func_003E78D0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_00489EE0;
extern M2C_UNK D_0049D480;

void func_003E7968(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            M2C_FIELD(&D_0049D480, s32 *, 0) = 1;
            M2C_FIELD(&D_0049D480, M2C_UNK **, 0x10) = &D_00489EE0;
            M2C_FIELD(&D_0049D480, s32 *, 0x14) = 0xFF0000;
            M2C_FIELD(&D_0049D480, s32 *, 4) = 0;
            M2C_FIELD(&D_0049D480, s32 *, 0xC) = 0;
            M2C_FIELD(&D_0049D480, s32 *, 8) = 0;
            return;
        }
        M2C_FIELD(&D_0049D480, M2C_UNK **, 0x10) = &D_00489EE0;
        func_003E78D0(&D_0049D480, 2, &D_0049D480);
    }
}
