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

M2C_UNK func_00155DB0(void *, s32 *, s32 *);        /* extern */
M2C_UNK func_001CC488(void *, void *, void *);      /* extern */
void *func_0021E9C0(s32, s32 *);                    /* extern */
s32 func_0021F4B0();                                /* extern */
void *func_00262FF8(s32);                           /* extern */

void func_001B7EB0(s32 arg0, s32 *arg1) {
    s32 *temp_5_2;
    s32 temp_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_5;

    temp_2 = func_0021E9C0(func_0021F4B0(), arg1);
    if (temp_2 != NULL) {
        temp_4 = M2C_FIELD(temp_2, s32 *, 0x50);
        if (temp_4 != 0) {
            temp_2_2 = func_00262FF8(temp_4);
            temp_4_2 = arg0 + 0x94;
            if (temp_2_2 != NULL) {
                temp_5 = M2C_FIELD(temp_4_2, void **, 4);
                if (temp_5 != M2C_FIELD(temp_4_2, s32 *, 8)) {
                    if (temp_5 != NULL) {
                        M2C_FIELD(temp_5, f32 *, 0) = (f32) M2C_FIELD(temp_2_2, f32 *, 0);
                        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
                        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
                        M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_2_2, f32 *, 0xC);
                        M2C_FIELD(temp_5, f32 *, 0x10) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x10);
                    }
                    M2C_FIELD(temp_4_2, void **, 4) = (void *) (M2C_FIELD(temp_4_2, void **, 4) + 0x14);
                } else {
                    func_001CC488(temp_4_2, temp_5, temp_2_2);
                }
                temp_4_3 = arg0 + 0x88;
                temp_5_2 = M2C_FIELD(temp_4_3, s32 **, 4);
                if (temp_5_2 != M2C_FIELD(temp_4_3, s32 *, 8)) {
                    if (temp_5_2 != NULL) {
                        *temp_5_2 = *arg1;
                    }
                    M2C_FIELD(temp_4_3, s32 **, 4) = (s32 *) (M2C_FIELD(temp_4_3, s32 **, 4) + 4);
                } else {
                    func_00155DB0(temp_4_3, temp_5_2, arg1);
                }
            }
        }
    }
}
