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

s8 func_001D4010();
s32 func_003F9698();
extern char D_00475DB8[];

void func_001DAE40(void **arg0) {
    s32 temp_3;
    s32 var_16;
    s32 var_18;
    char *var_17;
    s8 temp_5;
    void *temp_2;

    temp_2 = *arg0;
    temp_3 = temp_2 != NULL;
    var_17 = NULL;
    if (temp_3 != 0) {
        var_17 = M2C_FIELD(temp_2, s8 **, 8);
    }
    var_18 = 0;
    if (temp_3 != 0) {
        var_18 = M2C_FIELD(temp_2, s32 *, 0xC);
    }
    func_003F9698("myASync: onLoaded(%s) (Buffer %p BufferSize %d) [", func_001D4010(arg0 + 0x10), var_17, var_18);
    var_16 = var_18;
    if (var_18 > 0) {
        do {
            temp_5 = *(s8 *)var_17;
            var_17 += 1;
            var_16 -= 1;
            func_003F9698("%c", temp_5);
        } while (var_16 != 0);
    }
    func_003F9698(&D_00475DB8);
}
