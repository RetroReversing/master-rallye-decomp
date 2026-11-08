/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

void *func_0017E500(M2C_UNK);                       /* extern */
M2C_UNK func_001D4040(s32, M2C_UNK *);              /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_0046F6D0;
extern M2C_UNK D_0046F6E0;

void func_0017E2E8(s32 arg1, s32 arg2) {
    void *temp_2;

    temp_2 = func_0017E500(0);
    if (temp_2 != NULL) {
        func_001D4040(arg2, M2C_FIELD(temp_2, M2C_UNK **, 8));
        return;
    }
    func_001D4040(arg2, &D_0046F6D0);
    func_003F9698(&D_0046F6E0, arg1);
}
