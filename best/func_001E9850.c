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

M2C_UNK D_002AD390(s32, s32);                       /* extern */
s32 func_001CE2F8(s32 *);                           /* extern */
M2C_UNK func_001D2458(s32 *, s32);                  /* extern */
s32 func_001D24B8(s32 *, M2C_UNK, s32, M2C_UNK *);  /* extern */
M2C_UNK func_001D2A40(s32 *, s32, s32);             /* extern */
s32 func_001D4010(s32, s32);                        /* extern */
M2C_UNK func_001D4040(s32 *, s32);                  /* extern */
s32 func_003FA9B8(s32);                             /* extern */
extern M2C_UNK D_00477110;
extern M2C_UNK D_00477120;
extern M2C_UNK D_00477128;

s32 *func_001E9850(s32 *arg0, s32 arg1) {
    s32 sp10;
    s32 sp20;
    s32 temp_16;
    s32 temp_17;
    s32 var_2;

    func_001D2458(&sp10, func_001D4010(arg1, 0));
    if ((func_001D24B8(&sp10, 0, func_001CE2F8(&sp10), &D_00477110) == -1) || (temp_17 = func_001D24B8(&sp10, 0, func_001CE2F8(&sp10), &D_00477110), func_001D2A40(&sp10, temp_17, func_001D24B8(&sp10, 0, func_001CE2F8(&sp10), &D_00477128) + 1), (func_001D24B8(&sp10, 0, func_001CE2F8(&sp10), &D_00477120) == -1))) {
        *arg0 = 0;
        D_002AD390(sp10, 0);
    } else {
        temp_16 = func_001D24B8(&sp10, 0, func_001CE2F8(&sp10), &D_00477120);
        if (sp10 != 0) {
            var_2 = func_003FA9B8(sp10);
        } else {
            var_2 = 0;
        }
        func_001D2A40(&sp10, temp_16, var_2);
        func_001D4040(&sp20, sp10);
        *arg0 = sp20;
        D_002AD390(sp10, sp20);
    }
    return arg0;
}
