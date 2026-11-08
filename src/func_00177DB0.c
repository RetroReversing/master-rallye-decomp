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

M2C_UNK func_0016D688(s32);                         /* extern */
M2C_UNK func_0016F080(s32, void *);                 /* extern */
M2C_UNK func_0016F740(s32);                         /* extern */
M2C_UNK func_00177E50(void *, M2C_UNK);             /* extern */
void *func_0021E9C0(s32, M2C_UNK *);                /* extern */
s32 func_0021F4B0();                                /* extern */
extern M2C_UNK D_0040E690;

void func_00177DB0(void *arg0) {
    s32 temp_4;
    s32 var_3;
    s32 var_4;
    void *temp_2;
    void *temp_2_2;

    func_0016D688(M2C_FIELD(arg0, s32 *, 0xC));
    var_4 = 0;
    var_3 = 3;
    do {
        var_3 -= 1;
        M2C_FIELD((var_4 + M2C_FIELD(arg0, s32 *, 0x10)), s32 *, 0x128) = 0;
        var_4 += 0x190;
    } while (var_3 >= 0);
    func_0016F740(M2C_FIELD(arg0, s32 *, 0x14));
    func_00177E50(arg0, 0);
    temp_2 = func_0021E9C0(func_0021F4B0(), &D_0040E690);
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, void **, 4);
        if (temp_2_2 != NULL) {
            temp_4 = M2C_FIELD(temp_2_2, s32 *, 0x34);
            if (temp_4 != 0) {
                func_0016F080(temp_4, arg0);
            }
        }
    }
}
