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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_0034E698(s32, void *);                     /* extern */
M2C_UNK func_00357E70(s32, f32, f32, M2C_UNK);      /* extern */
M2C_UNK func_003581E8(s32, s32);                    /* extern */
extern s32 D_0042DD2C;

void func_003375A0(void *arg0, void *arg1) {
    s32 temp_16;
    s32 temp_17;
    void *temp_2;

    if (M2C_FIELD(arg1, s32 *, 0x2C) != 0) {
        if (D_0042DD2C == 0) {
            D_0042DD2C = func_0034E698(D_002AD408(0x106C), arg1);
        }
        temp_2 = M2C_FIELD(arg0, void **, 0x34);
        temp_17 = D_0042DD2C;
        temp_16 = M2C_FIELD(arg0, s32 *, 0x404);
        func_00357E70(temp_17, M2C_FIELD(temp_2, f32 *, 0xC0), M2C_FIELD(temp_2, f32 *, 0xC8), 0x42700000);
        func_003581E8(temp_17, temp_16);
    }
}
