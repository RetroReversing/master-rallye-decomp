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

M2C_UNK func_001D4040(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_001E3598(s32, s32);                        /* extern */
M2C_UNK func_001E3D10(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0029C110(void *);                      /* extern */
M2C_UNK func_0029C1C8(void *, s32);                 /* extern */
extern s32 D_00426850;
extern M2C_UNK D_0047AD68;
extern M2C_UNK D_00494B48;

void func_0029BFE8(void *arg0, s32 arg1) {
    s32 temp_17;

    if (D_00426850 == 0) {
        func_001D4040(&D_00494B48, &D_0047AD68);
        D_00426850 = 1;
    }
    if (func_001E3598(func_001E4280(), arg0 + 0x18) != 0) {
        temp_17 = arg0 + 0x1C;
        if (func_001E3598(func_001E4280(), temp_17) != 0) {
            func_001E3D10(func_001E4280(), temp_17, 0);
            func_0029C1C8(arg0, arg1);
        }
    } else if (func_001E3650(func_001E4280(), (s32) &D_00494B48) <= 0) {
        if (func_001E3650(func_001E4280(), (s32) (arg0 + 0x14)) != M2C_FIELD(arg0, s32 *, 0x10)) {
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
            func_0029C110(arg0);
        }
    }
}
