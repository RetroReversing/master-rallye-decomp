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

M2C_UNK func_00177E50(void *, M2C_UNK, s32 *);      /* extern */
f32 func_0019ECD0(s32, void *);                     /* extern */
extern s32 D_00425DBC;

void func_0019EAF0(s32 arg0, void *arg1) {
    s32 temp_18;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;

    temp_18 = func_001E3650(func_001E4280(), arg0);
    D_00425DBC += 1;
    switch (temp_18) {                              /* irregular */
    case 1:
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, f32 *, 4) = 1.0f;
        M2C_FIELD(arg1, s32 *, 0x10) = 0;
        M2C_FIELD(arg1, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x90), s32 **, 0x14), s32 *, 0x74);
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 4) == 1) {
            func_00177E50(M2C_FIELD(arg1, void **, 0x90), 1, &D_00425DBC);
            *M2C_FIELD(M2C_FIELD(arg1, void **, 0x90), s32 **, 0x14) = 0;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x90), s32 **, 0x14), s32 *, 0x74) = 0;
        }
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x90), s32 **, 0x14), f32 *, 0x2C) = (f32) (func_0019ECD0(arg0, arg1) * 1.8f);
        M2C_FIELD(arg1, s32 *, 0x14) = 0;
        M2C_FIELD(arg1, s32 *, 0x10) = 0;
        break;
    case 0:
        if (M2C_FIELD(arg0, s32 *, 4) == 2) {
            func_00177E50(M2C_FIELD(arg1, void **, 0x90), 0, &D_00425DBC);
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x90), s32 **, 0x14), s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 8);
        } else if (temp_18 == 3) {
            M2C_FIELD(arg1, s32 *, 0x84) = 1;
            M2C_FIELD(arg1, f32 *, 4) = 1.0f;
            M2C_FIELD(arg1, s32 *, 0) = 0;
            M2C_FIELD(arg1, s32 *, 0x10) = 0;
            M2C_FIELD(arg1, s32 *, 0x14) = 0;
            temp_5 = M2C_FIELD(arg1, void **, 0x90);
            temp_2 = M2C_FIELD(M2C_FIELD(temp_5, void **, 0xC), void **, 4);
            temp_4 = temp_2 + 0x11C;
            temp_3 = temp_2 + 0xF8;
            if ((((M2C_FIELD(temp_2, f32 *, 0x11C) * M2C_FIELD(temp_2, f32 *, 0xF8)) + (M2C_FIELD(temp_4, f32 *, 4) * M2C_FIELD(temp_3, f32 *, 4)) + (M2C_FIELD(temp_4, f32 *, 8) * M2C_FIELD(temp_3, f32 *, 8))) < M2C_FIELD(arg0, f32 *, 0x10)) && (((s32) D_00425DBC % 100) == 0)) {
                func_00177E50(temp_5, 1, &D_00425DBC);
            }
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 4) = temp_18;
}
