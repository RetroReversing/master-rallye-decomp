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

s32 func_001930D8(s32, s32);                        /* extern */
s32 func_00193138(s32, s32);                        /* extern */
void *func_00193340(s32, s32);                      /* extern */
s32 func_00193B60();                                /* extern */
M2C_UNK func_001D4040(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0021E4F0(void *);                      /* extern */
M2C_UNK func_0029EC50(void *, M2C_UNK, s32, f32);   /* extern */
M2C_UNK func_003FA310(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK D_0044BC40;

void func_00144BB0(void *arg0, void *arg1) {
    f32 sp4;
    M2C_UNK32 sp8;
    M2C_UNK sp10;
    f32 temp_f0;
    f32 temp_f1;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;

    if (func_00193138(func_00193B60(), M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        func_0021E4F0(arg1);
    }
    temp_2 = func_00193340(func_00193B60(), M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(temp_2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = func_001930D8(func_00193B60(), M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    temp_3 = M2C_FIELD(arg1, void **, 4);
    temp_2_2 = temp_3 + 0xC;
    if (temp_3 != NULL) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x14);
        sp8 = 0;
        sp4 = temp_f0;
        M2C_FIELD(temp_3, f32 *, 0xC) = temp_f1;
        M2C_FIELD(temp_2_2, f32 *, 4) = temp_f0;
        M2C_FIELD(temp_2_2, M2C_UNK32 *, 8) = sp8;
        func_0029EC50(temp_3, 0xC8, M2C_FIELD(arg0, s32 *, 0x28), temp_f1);
    }
    func_003FA310(&sp10, &D_0044BC40, M2C_FIELD(arg0, s32 *, 0x18));
    func_001D4040(arg0 + 0x24, &sp10);
}
