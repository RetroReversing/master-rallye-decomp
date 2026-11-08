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

M2C_UNK func_0021C770(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0021CA00(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0021CB18(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0021CDA8(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_00426438;
extern M2C_UNK D_00426450;
extern M2C_UNK D_00426478;
extern M2C_UNK D_004264A8;
extern M2C_UNK D_004264C0;
extern M2C_UNK D_004264E8;
extern M2C_UNK D_00426508;
extern M2C_UNK D_00426518;
extern M2C_UNK D_00426528;
extern M2C_UNK D_00426538;
extern M2C_UNK D_00426548;

void func_0021CEC0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            M2C_FIELD(&D_004264A8, f32 *, 0) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
            M2C_FIELD(&D_004264A8, s32 *, 0x10) = -1;
            M2C_FIELD(&D_00426438, f32 *, 0) = 0.0f;
            M2C_FIELD(&D_00426438, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 0) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 0x20) = 0.0f;
            M2C_FIELD(&D_00426478, f32 *, 0) = 1.0f;
            M2C_FIELD(&D_00426478, f32 *, 0x20) = 1.0f;
            M2C_FIELD(&D_004264A8, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
            M2C_FIELD(&D_004264A8, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
            M2C_FIELD(&D_00426438, f32 *, 4) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 4) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 0xC) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 0x10) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 0x14) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 0x18) = 0.0f;
            M2C_FIELD(&D_00426450, f32 *, 0x1C) = 0.0f;
            M2C_FIELD(&D_00426478, f32 *, 4) = 0.0f;
            M2C_FIELD(&D_00426478, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_00426478, f32 *, 0xC) = 0.0f;
            M2C_FIELD(&D_00426478, f32 *, 0x10) = 1.0f;
            M2C_FIELD(&D_00426478, f32 *, 0x14) = 0.0f;
            M2C_FIELD(&D_00426478, f32 *, 0x18) = 0.0f;
            M2C_FIELD(&D_00426478, f32 *, 0x1C) = 0.0f;
            M2C_FIELD(&D_004264A8, f32 *, 0xC) = 0.0f;
            func_0021C770(&D_004264C0, -1, &D_004264A8, &D_004264A8, &D_00426438, &D_00426438, &D_00426450, &D_00426478);
            M2C_FIELD(&D_00426538, f32 *, 8) = 1.0f;
            M2C_FIELD(&D_004264E8, f32 *, 0) = 1.0f;
            M2C_FIELD(&D_004264E8, f32 *, 0xC) = 0.0f;
            M2C_FIELD(&D_00426508, f32 *, 0) = 0.0f;
            M2C_FIELD(&D_00426508, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_00426518, f32 *, 0) = 1.0f;
            M2C_FIELD(&D_00426518, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_00426528, f32 *, 0) = 0.0f;
            M2C_FIELD(&D_00426528, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_00426538, f32 *, 0) = 0.0f;
            M2C_FIELD(&D_00426538, f32 *, 4) = 0.0f;
            M2C_FIELD(&D_004264E8, f32 *, 4) = 0.0f;
            M2C_FIELD(&D_004264E8, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_00426508, f32 *, 4) = 0.0f;
            M2C_FIELD(&D_00426518, f32 *, 4) = 0.0f;
            M2C_FIELD(&D_00426528, f32 *, 4) = 1.0f;
            func_0021CB18(&D_00426548, &D_00426538, &D_00426518, &D_00426528, &D_00426538, &D_00426518, &D_00426528);
            return;
        }
        func_0021CDA8(&D_00426548, 2);
        func_0021CA00(&D_004264C0, 2);
    }
}
