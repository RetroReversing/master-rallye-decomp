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

void func_004055A0(s32 arg0, s32 arg1) {
    s32 var_9;
    u32 temp_11;
    u32 var_10;

    if (arg1 > 0) {
        temp_11 = ((u32) ((((arg0 + arg1) - 1) & 0xFFFFFFC0) - (arg0 & 0xFFFFFFC0)) >> 6) + 1;
        var_9 = temp_11 & 7;
        var_10 = temp_11 >> 3;
        if (var_9 != 0) {
            do {
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, ($a4) */);
                M2C_SYNC();
                var_9 -= 1;
            } while (var_9 > 0);
        }
        if (var_10 != 0) {
            do {
                var_10 -= 1;
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, ($a4) */);
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, 0x40($a4) */);
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, 0x80($a4) */);
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, 0xc0($a4) */);
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, 0x100($a4) */);
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, 0x140($a4) */);
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, 0x180($a4) */);
                M2C_SYNC();
                M2C_ERROR(/* unknown instruction: cache 0x18, 0x1c0($a4) */);
                M2C_SYNC();
            } while ((s32) var_10 > 0);
        }
    }
}
