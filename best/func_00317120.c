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

M2C_UNK func_003179C8(void *);                      /* extern */
M2C_UNK func_0031E010(void *, s32);                 /* extern */
M2C_UNK func_00326CB8(void *, void **, void **, void **); /* extern */
extern M2C_UNK D_0042D690;
extern u16 D_0042DA10;
extern s32 D_0042DCB4;

void func_00317120(void *arg0, void **arg1) {
    s32 temp_5;
    void **temp_3;
    void *temp_16;
    void *temp_17;
    void *temp_4;
    void *temp_5_2;

    temp_17 = *arg1;
    temp_5 = M2C_FIELD(arg0, s32 *, 0x140);
    temp_16 = ((s16) D_0042DA10 * 0xE0) + &D_0042D690;
    if (M2C_FIELD(temp_17, s32 *, 0x18) != temp_5) {
        M2C_FIELD(temp_17, s32 *, 0x18) = temp_5;
        temp_4 = temp_16 + 0xD0;
        temp_3 = M2C_FIELD(temp_4, void ***, 4);
        if (temp_3 != M2C_FIELD(temp_4, s32 *, 8)) {
            if (temp_3 != NULL) {
                temp_5_2 = *arg1;
                *temp_3 = temp_5_2;
                if (temp_5_2 != NULL) {
                    M2C_FIELD(temp_5_2, s32 *, 0) = (s32) (M2C_FIELD(temp_5_2, s32 *, 0) + 1);
                }
            }
            M2C_FIELD(temp_4, void ***, 4) = (void **) (M2C_FIELD(temp_4, void ***, 4) + 4);
        } else {
            func_00326CB8(temp_4, temp_3, arg1, arg1);
        }
    }
    func_003179C8(temp_16);
    func_0031E010(temp_16, *M2C_FIELD(temp_17, s32 **, 0x14));
    D_0042DCB4 += M2C_FIELD(M2C_FIELD(temp_17, void **, 0x10), s32 *, 0xC);
}
