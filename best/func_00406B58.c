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

M2C_UNK func_00406B18(M2C_UNK);                     /* extern */
M2C_UNK func_00406B48();                            /* extern */
M2C_UNK func_00406C18();                            /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */
extern s32 D_004411A8;
extern M2C_UNK D_004A12C0;

s32 func_00406B58(s32 arg0, s32 arg1) {
    s32 temp_16;

    func_00406B18(0x1B);
    if (D_004411A8 == 0) {
        func_00406C18();
    }
    func_0040AF58();
    temp_16 = M2C_FIELD(&D_004A12C0, s32 *, 0);
    M2C_FIELD(&D_004A12C0, s32 *, 4) = arg1;
    M2C_FIELD(&D_004A12C0, s32 *, 0) = arg0;
    func_0040AFA0();
    func_00406B48();
    return temp_16;
}
