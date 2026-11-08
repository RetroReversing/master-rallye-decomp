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

extern int D_004262BC;
s32 func_001DEE60();
s32 func_003F9698();
extern char D_004262B0[];
extern char D_00476810[];
extern char D_00476920[];
extern char D_00476940[];

void func_001DF028(s32 arg0, void *arg1) {
    s32 temp_6;
    s32 var_16;
    s32 var_17;

    var_16 = 0;
    func_003F9698(&D_00476920);
    D_004262BC = (s32) (D_004262BC + 1);
    if (M2C_FIELD(arg1, s32 *, 4) > 0) {
        do {
            func_003F9698("[%4d] ", var_16);
            var_17 = 0;
loop_5:
            temp_6 = var_17;
            if (func_001DEE60(arg1, var_16, var_17) != -1) {
                var_17 += 1;
                func_003F9698("%d ", func_001DEE60(arg1, var_16, temp_6));
                goto loop_5;
            }
            var_16 += 1;
            func_003F9698(&D_00476940);
        } while (var_16 < M2C_FIELD(arg1, s32 *, 4));
    }
    D_004262BC = (s32) (D_004262BC - 1);
    func_003F9698(&D_00476810);
}
