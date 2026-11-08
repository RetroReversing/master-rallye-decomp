/* machine draft (m2c), tried by autopilot */
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

void func_00210FF8(s32 arg0, s32 arg1, void *arg2) {
    s32 var_7;
    void *temp_10;
    void *temp_8;
    void *temp_9;
    void *var_4;

    var_7 = arg0;
    var_4 = arg0 + 0x28;
    if (var_7 != arg1) {
        temp_10 = arg2 + 0x10;
        temp_9 = arg2 + 0x1C;
        temp_8 = arg2 + 0x28;
        do {
            var_7 += 0x34;
            M2C_FIELD(var_4, s32 *, -0x28) = (s32) M2C_FIELD(arg2, s32 *, 0);
            M2C_FIELD(var_4, s32 *, -0x24) = (s32) M2C_FIELD(arg2, s32 *, 4);
            M2C_FIELD(var_4, s32 *, -0x20) = (s32) M2C_FIELD(arg2, s32 *, 8);
            M2C_FIELD(var_4, s32 *, -0x1C) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
            M2C_FIELD(var_4, s32 *, -0x18) = (s32) M2C_FIELD(arg2, s32 *, 0x10);
            M2C_FIELD(var_4, s32 *, -0x14) = (s32) M2C_FIELD(temp_10, s32 *, 4);
            M2C_FIELD(var_4, s32 *, -0x10) = (s32) M2C_FIELD(temp_10, s32 *, 8);
            M2C_FIELD(var_4, s32 *, -0xC) = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
            M2C_FIELD(var_4, s32 *, -8) = (s32) M2C_FIELD(temp_9, s32 *, 4);
            M2C_FIELD(var_4, s32 *, -4) = (s32) M2C_FIELD(temp_9, s32 *, 8);
            M2C_FIELD(var_4, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0x28);
            M2C_FIELD(var_4, s32 *, 4) = (s32) M2C_FIELD(temp_8, s32 *, 4);
            M2C_FIELD(var_4, s32 *, 8) = (s32) M2C_FIELD(temp_8, s32 *, 8);
            var_4 += 0x34;
        } while (var_7 != arg1);
    }
}
