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

s32 func_001D4010();
s32 func_002AD350();
s32 func_003F9698();
extern char D_00478F98[];
extern char D_00478FB0[];

void func_0021FFE0(void *arg0) {
    s32 temp_17;
    s32 temp_18;
    s32 temp_19;
    s32 temp_20;
    s8 temp_21;
    void **var_22;
    void *var_16;

    func_003F9698(&D_00478F98);
    var_22 = M2C_FIELD(arg0, void ***, 4);
    if (var_22 != arg0) {
        var_16 = *var_22;
loop_2:
        temp_20 = func_001D4010(var_16 + 0x5C);
        temp_21 = M2C_FIELD(var_16, s8 *, 0x48);
        temp_19 = M2C_FIELD(var_16, s32 *, 0x74);
        temp_18 = func_002AD350(M2C_FIELD(M2C_FIELD(var_16, void **, 0x50), f32 *, 0x50));
        temp_17 = func_002AD350(M2C_FIELD(M2C_FIELD(var_16, void **, 0x50), f32 *, 0x54));
        func_003F9698(&D_00478FB0, var_16, temp_20, temp_21, temp_19, temp_18, temp_17, func_002AD350(M2C_FIELD(M2C_FIELD(var_16, void **, 0x50), f32 *, 0x58)));
        var_22 = M2C_FIELD(var_22, void ***, 4);
        if (var_22 != arg0) {
            var_16 = *var_22;
            goto loop_2;
        }
    }
}
