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

s32 func_002BCDA8();
s32 func_002BCE48();
s32 func_002BD8E0();
s32 func_003F931C();
s32 func_003F9698();
extern s32 D_0042D440;
extern char D_004806F8[];

s32 func_002BD428(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 var_17;

    var_17 = 0;
    if (arg2 != 0) {
        func_002BD8E0();
    }
    if (M2C_FIELD(arg1, s32 *, 0x58) != 0) {
        temp_5 = M2C_FIELD(arg1, s32 *, 0x50);
        if (temp_5 != 0) {
            temp_4 = M2C_FIELD(arg1, s32 *, 0x4C);
            if (temp_4 != temp_5) {
                if (temp_4 == 0) {
                    func_003F9698(&D_004806F8, temp_5);
                } else {
                    func_003F931C(temp_4, temp_5, M2C_FIELD(arg1, s32 *, 0x54));
                }
                func_002BCDA8(M2C_FIELD(arg1, s32 *, 0x50));
            }
        }
        temp_4_2 = M2C_FIELD(arg1, s32 *, 0x40);
        if ((temp_4_2 != 0) && (M2C_FIELD(arg1, s32 *, 0x3C) != temp_4_2)) {
            func_002BCDA8(temp_4_2);
        }
        var_17 = 1;
        func_002BCE48(arg1);
        D_0042D440 = 0;
    }
    return var_17;
}
