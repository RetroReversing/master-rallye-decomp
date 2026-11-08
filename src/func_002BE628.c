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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_002B1FC0(s32);                             /* extern */
s32 func_002BE138(s32, M2C_UNK);                    /* extern */
M2C_UNK func_002BE220(s32);                         /* extern */
M2C_UNK func_003F94D0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_00405238(s32, s32);                    /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */
extern s32 D_00428D90;
extern s32 D_00428D94;
extern M2C_UNK D_00480B40;

s32 func_002BE628(s32 *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_2;

    if (D_00428D90 == 0) {
        temp_16 = arg1 * 8;
        temp_2 = func_002B1FC0(temp_16);
        D_00428D90 = temp_2;
        func_003F94D0(temp_2, 0, temp_16);
        D_00428D94 = arg1;
        func_0040AF58();
        func_00405238(D_00428D90, arg1);
        func_0040AFA0();
        temp_2_2 = func_002BE138(D_002AD408(0x1C), 0x100);
        *arg0 = temp_2_2;
        func_002BE220(temp_2_2);
    } else {
        func_003F9698(&D_00480B40, D_00428D94, arg1);
    }
    return 1;
}
