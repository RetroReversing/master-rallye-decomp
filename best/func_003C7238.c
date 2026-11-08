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

s32 func_002AD390();
s32 func_002AD530();
extern char D_004767A8[];
extern char D_00488628[];

void func_003C7238(void *arg0, s32 arg1) {
    char *var_16;
    s32 temp_4;
    s32 var_17;

    M2C_FIELD(arg0, s32 **, 4) = &D_00488628;
    var_17 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1BC) > 0) {
        var_16 = arg0 + 8;
        do {
            temp_4 = *(s32 *)var_16;
            if (temp_4 != 0) {
                func_002AD530(temp_4);
            }
            var_17 += 1;
            var_16 += 0x10;
        } while (var_17 < M2C_FIELD(arg0, s32 *, 0x1BC));
    }
    M2C_FIELD(arg0, s32 **, 4) = &D_004767A8;
    if (arg1 & 1) {
        func_002AD390(arg0);
    }
}
