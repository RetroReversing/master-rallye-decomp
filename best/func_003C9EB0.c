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

extern int D_0049B9A4;
extern int D_0049B9CC;
s32 func_003C9FF0();
s32 func_003CB060();
s32 func_003F9698();
s32 func_00405CC0();
extern s32 D_00436150;
extern s32 D_00436154;
extern char D_00488B58[];
extern char D_0049B980[];
extern char D_FFFF[];

s32 func_003C9EB0(s32 arg0) {
    s32 *var_2;
    s32 *var_2_2;
    s32 temp_16;
    s32 temp_2;

    D_00436150 = 1;
loop_4:
    func_00405CC0(&D_0049B980, 0x80000100, 0);
    var_2 = &D_FFFF;
    if (D_0049B9A4 == 0) {
        do {

        } while (var_2 != (s32 *)-1);
        goto loop_4;
    }
loop_9:
    func_00405CC0(D_0049B980 + 0x28, 0x80000101, 0);
    var_2_2 = &D_FFFF;
    if (D_0049B9CC == 0) {
        do {

        } while (var_2_2 != (s32 *)-1);
        goto loop_9;
    }
    temp_2 = func_003CB060();
    temp_16 = temp_2 >> 8;
    if (temp_16 != 4) {
        if (D_00436154 != 0) {
            func_003F9698("libpad: Module version mismatch ");
            func_003F9698(&D_00488B58, 4, 0, temp_16, temp_2 & 0xFF);
        }
        return 0;
    }
    return func_003C9FF0(arg0);
}
