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

s32 func_002BE6F8(s32, s32);                        /* extern */
M2C_UNK func_002BE8C0(s32, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002BEAA0(s32);                         /* extern */
M2C_UNK func_003F9698(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK D_00428DA0;
extern M2C_UNK D_00480BA0;
extern M2C_UNK D_00480BE0;
extern M2C_UNK D_00480C28;
extern M2C_UNK D_00480C30;

void func_002BE738(s32 arg0, s32 arg1, s32 arg2, M2C_UNK *arg3) {
    s32 var_16;
    s32 var_2;
    s32 var_3;

    if (arg3 != NULL) {
        func_003F9698(&D_00480BA0, arg3, arg1, arg2);
    }
    M2C_FIELD(&D_00428DA0, s32 *, 0x10) = arg1;
    M2C_FIELD(&D_00428DA0, s32 *, 0x14) = arg2;
    func_002BE8C0(arg0, 0x80000001, &D_00428DA0, 0x18, 0, 0, 0);
    var_16 = 0;
loop_12:
    if (arg2 != func_002BE6F8(arg0, arg1)) {
        var_2 = 0x12C;
loop_9:
        if (var_2 >= 0) {
            var_2 -= 1;
            var_3 = 0x30;
loop_6:
            var_3 -= 1;
            if (var_3 >= 0) {
                goto loop_6;
            }
            goto loop_9;
        }
        var_16 += 1;
        if (var_16 > 0xD05) {
            var_16 = 0;
            func_003F9698(&D_00480BE0, (arg3 != NULL) ? arg3 : &D_00480C28, arg1, arg2);
        }
        goto loop_12;
    }
    func_002BEAA0(arg0);
    if (arg3 != NULL) {
        func_003F9698(&D_00480C30, arg3, arg1, arg2);
    }
}
