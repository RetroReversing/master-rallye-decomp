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

M2C_UNK func_0014C6F0();                            /* extern */
M2C_UNK func_0014CAB8(void *, s32);                 /* extern */
M2C_UNK func_0014CD38(void *, s32);                 /* extern */
s32 func_001E3598(s32, s32);                        /* extern */
M2C_UNK func_001E3D10(s32, void *, s32);            /* extern */

void func_0014C5D8(void *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_18;
    s32 temp_19;
    s32 temp_2;
    s32 temp_3;

    func_0014C6F0();
    temp_19 = func_001E3598(func_001E4280(), arg0 + 0x14);
    temp_18 = func_001E3650(func_001E4280(), arg0 + 0x24);
    temp_16 = func_001E3598(func_001E4280(), arg0 + 0x1C);
    temp_2 = func_001E3598(func_001E4280(), arg0 + 0x20);
    if ((temp_16 != 0) || (temp_2 != 0) || (temp_18 != 0) || (temp_19 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    temp_3 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_3) {                               /* irregular */
    case 1:
        func_0014CAB8(arg0, arg1);
        break;
    case 2:
        func_0014CD38(arg0, arg1);
        break;
    }
    func_001E3D10(func_001E4280(), arg0 + 0x18, M2C_FIELD(arg0, s32 *, 0x40));
}
