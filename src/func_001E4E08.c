/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

extern M2C_UNK D_004769B8;
extern M2C_UNK D_004769C8;
extern M2C_UNK D_004769D0;
extern M2C_UNK D_004769D8;
extern M2C_UNK D_004769E8;
extern M2C_UNK D_004769F8;
extern M2C_UNK D_00476A28;
extern M2C_UNK D_00476A30;
extern M2C_UNK D_00476A58;
extern M2C_UNK D_00476A60;
extern M2C_UNK D_00476A68;
extern M2C_UNK D_00476A70;
extern M2C_UNK D_00476F08;

M2C_UNK *func_001E4E08(void *arg0) {
    u32 temp_3;

    temp_3 = M2C_FIELD(arg0, u32 *, 8);
    switch (temp_3) {
    case 0:
        return &D_004769B8;
    case 1:
        return &D_004769C8;
    case 2:
        return &D_004769D0;
    case 8:
        return &D_004769D8;
    case 3:
        return &D_004769F8;
    case 4:
        return &D_00476A28;
    case 9:
        return &D_00476A30;
    case 7:
        return &D_00476A58;
    case 6:
        return &D_00476A60;
    case 5:
        return &D_00476A68;
    case 10:
        return &D_00476A70;
    case 11:
        return &D_004769E8;
    default:
        return &D_00476F08;
    }
}
