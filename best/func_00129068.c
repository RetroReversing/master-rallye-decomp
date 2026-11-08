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

s32 func_002B2360();
s32 func_002B4570();
s32 func_002B4658();
s32 func_002B4740();
s32 func_003F9698();
extern char D_00448800[];

void func_00129068(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        func_003F9698(&D_00448800);
        temp_2 = func_002B2360(func_002B4740(), 0, 0);
        if (temp_2 == -0xA) {
            var_2 = 2;
            goto block_10;
        }
        var_2 = 3;
        switch (temp_2) {                           /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            break;
        case 1:
            var_2 = 4;
        case -1:
block_10:
            M2C_FIELD(arg0, s32 *, 0x10) = var_2;
            break;
        default:
            var_2 = 6;
            if (temp_2 == 2) {
                var_2 = 5;
            }
            goto block_10;
        }
        temp_2_2 = func_002B4570(func_002B4740(), 0, 0);
        M2C_FIELD(arg0, s32 *, 0x14) = temp_2_2;
        if ((M2C_FIELD(arg0, s32 *, 0x10) == 4) && (temp_2_2 != 0)) {
            if (func_002B4658(func_002B4740(temp_2_2), 0, 0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 7;
    }
    temp_2_3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_2_3;
    if (temp_2_3 == 0x32) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
