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

void *func_001E3820(s32, s32, s32);                 /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_0044F828;
extern M2C_UNK D_0044F850;

void func_00168E60(s32 arg0, s32 arg1) {
    void *temp_2;
    void *temp_2_2;

    temp_2 = func_001E3820(func_001E4280(), arg0 + 0x80, arg0 + 0x84);
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, void **, 8);
        if (temp_2_2 != NULL) {
            M2C_FIELD(temp_2_2, s32 *, 0x90) = arg1;
            return;
        }
        func_003F9698(&D_0044F828);
        return;
    }
    func_003F9698(&D_0044F850);
}
