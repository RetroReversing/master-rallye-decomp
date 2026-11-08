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

s32 func_003F9698();
extern s32 D_00421E78;
extern char D_0046F670[];
extern char D_0046F688[];
extern char D_0046F6B8[];

void func_0017E1F0(void) {
    s32 *temp_18;
    char *var_16;
    s32 *var_17;
    s32 temp_4;
    s32 var_21;
    s32 var_2;

    var_21 = 0;
    func_003F9698(&D_0046F670);
    var_17 = &D_00421E78;
    if (D_00421E78 != -2) {
        do {
            temp_4 = M2C_FIELD(var_17, s32 *, 0);
            temp_18 = var_17 + 0xC;
            if (temp_4 >= 0) {
                var_21 = (var_21 < temp_4) ? temp_4 : var_21;
                var_16 = temp_18;
                if (M2C_FIELD(var_17, s32 *, 0xC) != -2) {
                    var_2 = M2C_FIELD(var_17, s32 *, 0xC);
loop_5:
                    if ((M2C_FIELD(var_17, s32 *, 0) == var_2) && (M2C_FIELD(var_17, s32 *, 4) == M2C_FIELD(var_16, s32 *, 4))) {
                        func_003F9698(&D_0046F688, M2C_FIELD(var_17, s32 *, 0));
                    }
                    var_16 += 0xC;
                    var_2 = *(s32 *)var_16;
                    if (var_2 != -2) {
                        goto loop_5;
                    }
                }
            }
            var_17 = temp_18;
        } while (M2C_FIELD(var_17, s32 *, 0xC) != -2);
    }
    func_003F9698(&D_0046F6B8, var_21);
}
