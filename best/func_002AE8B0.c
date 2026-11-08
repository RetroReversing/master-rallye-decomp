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

void **func_002AD838(M2C_UNK);                      /* extern */
void *func_002AE7F8(M2C_UNK);                       /* extern */
extern M2C_UNK func_002AE840;

void func_002AE8B0(s32 arg0, s32 arg1, s32 arg2) {
    void **temp_2_2;
    void *temp_2;

    temp_2 = func_002AE7F8(0x30);
    M2C_FIELD(temp_2, s32 *, 0xC) = arg1;
    M2C_FIELD(temp_2, s32 *, 0x10) = arg2;
    M2C_FIELD(temp_2, s32 *, 8) = arg0;
    M2C_FIELD(temp_2, s32 *, 0x28) = arg0;
    M2C_FIELD(temp_2, s64 *, 0x20) = 0;
    M2C_FIELD(temp_2, s32 *, 0x14) = 0;
    M2C_FIELD(temp_2, M2C_UNK **, 0) = &func_002AE840;
    M2C_FIELD(temp_2, s16 *, 4) = 4;
    M2C_FIELD(temp_2, s16 *, 6) = 1;
    temp_2_2 = func_002AD838(4);
    M2C_FIELD(temp_2, void **, 0x18) = (void *) *temp_2_2;
    *temp_2_2 = temp_2;
}
