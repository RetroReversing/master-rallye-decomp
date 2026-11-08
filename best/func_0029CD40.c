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

M2C_UNK func_001D4040(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_001E3598(s32, void *);                     /* extern */
M2C_UNK func_001E3D10(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0029CEA8(void *, void *);              /* extern */
extern s32 D_00426854;
extern M2C_UNK D_0047AD68;
extern M2C_UNK D_00494B50;

void func_0029CD40(void *arg0, void *arg1) {
    void *temp_18;

    if (D_00426854 == 0) {
        func_001D4040(&D_00494B50, &D_0047AD68);
        D_00426854 = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_0029CEA8(arg0, arg1);
    } else if (func_001E3598(func_001E4280(), arg0 + 0xC) != 0) {
        temp_18 = arg0 + 0x14;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_ERROR(/* Read from unset register $f2 */) + M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_ERROR(/* Read from unset register $f2 */) + M2C_FIELD(arg0, s32 *, 0x3C));
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
        if (func_001E3598(func_001E4280(), temp_18) != 0) {
            func_001E3D10(func_001E4280(), temp_18, 0);
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x50) = (f32) M2C_FIELD(arg0, s32 *, 0x30);
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x54) = (f32) M2C_FIELD(arg0, s32 *, 0x44);
            func_001E3D10(func_001E4280(), arg0 + 0x10, 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        } else {
            func_0029CEA8(arg0, arg1);
        }
    }
    func_001E3650(func_001E4280(), (s32) &D_00494B50);
}
