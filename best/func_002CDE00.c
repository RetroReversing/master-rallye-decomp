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

void *func_002D04D0();                              /* extern */
M2C_UNK func_0030C868(s32, s32, M2C_UNK, f32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_00429868;

void func_002CDE00(s32 arg0, s32 arg1, f32 fparg0) {
    s32 temp_2;
    void *temp_5;

    if (arg0 >= 0) {
        if (arg1 >= 2) {
            func_002D04D0();
            func_0030C868(arg0, arg1, 0x3F666666, M2C_FIELD(func_002D04D0(), f32 *, 0x10), 0x75D, 0x1F, 0x1F);
            temp_2 = arg1 * 0x10;
            temp_5 = &D_00429868 + temp_2;
            *(temp_2 + &D_00429868) = arg0;
            M2C_FIELD(temp_5, f32 *, 0xC) = 22100.0f;
            M2C_FIELD(temp_5, f32 *, 4) = fparg0;
            M2C_FIELD(temp_5, f32 *, 8) = fparg0;
        }
    }
}
