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

M2C_UNK func_0030CB08(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0030D4D0(M2C_UNK);                         /* extern */
M2C_UNK func_0030E6F8();                            /* extern */
M2C_UNK func_0030E720();                            /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern u8 D_0042D5D8;
extern u8 D_0042D5D9;
extern u8 D_0042D5DA;
extern s32 D_0042D674;
extern s32 D_0042D678;
extern M2C_UNK D_00484E48;
extern M2C_UNK D_00484E90;
extern M2C_UNK D_00484EC8;
extern M2C_UNK D_00484EF8;

s32 func_0030E798(void) {
    s32 var_3;
    u8 temp_2;

    if (D_0042D5D8 == 1) {
        temp_2 = D_0042D5D8;
        if (D_0042D678 == 0) {
            func_003F9698(&D_00484E48);
        }
        D_0042D678 = (s32) temp_2;
        func_0030E720();
        func_0030CB08(-1, 0);
        do {

        } while (func_0030D4D0(0) < 0);
        var_3 = D_0042D674;
        if (D_0042D5DA == 0) {
            func_003F9698(&D_00484E90);
            func_0030E6F8();
            func_0030D4D0(0);
            goto block_8;
        }
    } else {
        D_0042D678 = 0;
block_8:
        var_3 = D_0042D674;
    }
    if ((var_3 == 1) && (D_0042D5D9 == 0)) {
        func_003F9698(&D_00484EC8);
        func_003F9698(&D_00484EF8);
    }
    D_0042D674 = (s32) D_0042D5D9;
    if (D_0042D5D8 != 1) {
        return (((s32) D_0042D5D9 ^ 1) != 0) ? 0 : -2;
    }
    return -1;
}
