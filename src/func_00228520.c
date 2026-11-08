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

M2C_UNK func_002269D8(s32, void *);                 /* extern */
s32 func_00227690(s32);                             /* extern */
s32 func_00227850(s32);                             /* extern */
M2C_UNK func_002285B8(void *);                      /* extern */
M2C_UNK func_00228720(void *);                      /* extern */
extern s32 D_004265E0;

void func_00228520(void *arg0) {
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x14);
    if (D_004265E0 >= temp_3) {
        if ((func_00227850(M2C_FIELD(arg0, s32 *, 4)) >= 2) && (func_00227690(M2C_FIELD(arg0, s32 *, 4)) == 0)) {
            func_002285B8(arg0);
            return;
        }
        func_00228720(arg0);
        return;
    }
    if ((D_004265E0 + 1) == temp_3) {
        func_002269D8(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x1C);
    }
    func_00228720(arg0);
}
