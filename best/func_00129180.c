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

s32 func_0011E278();
s32 func_00129068();
s32 func_00129330();
s32 func_00129430();
s32 func_003F9698();
extern char D_00448C58[];
extern char D_00448C80[];
extern char D_00448C98[];
extern char D_00448CB8[];

void func_00129180(void *arg0) {
    s32 temp_3;
    u32 temp_3_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_3 != 0) {
        if (temp_3 == 1) {
            func_00129068();
            goto block_3;
        }
    } else {
block_3:
        temp_3_2 = M2C_FIELD(arg0, u32 *, 0x10);
        switch (temp_3_2) {
        case 0:
        case 5:
            func_003F9698(&D_00448C58);
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 4);
        default:
            break;
        case 3:
            func_003F9698(&D_00448C80);
            func_00129330(arg0);
block_8:
            M2C_FIELD(arg0, s32 *, 0x18) = 1;
            break;
        case 4:
            func_003F9698(&D_00448C98);
            func_00129430(arg0);
            goto block_8;
        case 6:
            func_003F9698(&D_00448CB8);
            if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
                func_00129068(arg0);
            }
            break;
        }
    }
}
