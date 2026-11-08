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

M2C_UNK func_00377688(void *, M2C_UNK, void *, M2C_UNK, void *); /* extern */

void *func_003769C8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_3_2;
    s32 var_4;
    s32 var_4_2;
    s32 var_4_3;
    void *temp_10;
    void *temp_7;
    void *temp_8;
    void *var_2;
    void *var_2_2;
    void *var_2_3;
    void *var_3;

    var_2 = arg0;
    var_4 = 0xE;
    do {
        M2C_FIELD(var_2, s32 *, 4) = 0;
        var_4 -= 1;
        M2C_FIELD(var_2, s32 *, 8) = 0;
        M2C_FIELD(var_2, s32 *, 0) = 0;
        M2C_FIELD(var_2, s32 *, 0xC) = 0xFFFFFFFF;
        var_2 += 0x10;
    } while (var_4 != -1);
    var_2_2 = arg0 + 0xF0;
    var_4_2 = 0xE;
    temp_7 = arg0 + 0x1E0;
    temp_8 = arg0 + 0x1F0;
    temp_10 = arg0 + 0x200;
    do {
        M2C_FIELD(var_2_2, s32 *, 4) = 0;
        var_4_2 -= 1;
        M2C_FIELD(var_2_2, s32 *, 8) = 0;
        M2C_FIELD(var_2_2, s32 *, 0) = 0;
        M2C_FIELD(var_2_2, s32 *, 0xC) = 0xFFFFFFFF;
        var_2_2 += 0x10;
    } while (var_4_2 != -1);
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    var_3 = temp_10;
    M2C_FIELD(temp_7, s32 *, 0xC) = 0xFFFFFFFF;
    var_4_3 = 0x7FF;
    M2C_FIELD(temp_8, s32 *, 4) = 0;
    M2C_FIELD(temp_8, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
    M2C_FIELD(temp_8, s32 *, 0xC) = 0xFFFFFFFF;
    do {
        M2C_FIELD(var_3, s32 *, 0) = 0;
        var_4_3 -= 1;
        M2C_FIELD(var_3, s32 *, 4) = 0;
        M2C_FIELD(var_3, s32 *, 8) = 0;
        M2C_FIELD(var_3, s32 *, 0xC) = -1;
        M2C_FIELD(var_3, s32 *, 0x10) = 0;
        M2C_FIELD(var_3, s32 *, 0x14) = 0;
        M2C_FIELD(var_3, s32 *, 0x18) = 0;
        M2C_FIELD(var_3, s32 *, 0x1C) = 0;
        M2C_FIELD(var_3, s32 *, 0x20) = 0;
        var_3 += 0x24;
    } while (var_4_3 != -1);
    M2C_FIELD(arg0, s32 *, 0x14200) = 0x800;
    M2C_FIELD(arg0, s32 *, 0x14208) = 0;
    M2C_FIELD(arg0, s32 *, 0x14204) = 0;
    var_2_3 = arg0 + 0x1420C;
    var_3_2 = 0x7FF;
    do {
        M2C_FIELD(var_2_3, s32 *, 4) = 0;
        var_3_2 -= 1;
        M2C_FIELD(var_2_3, s32 *, 8) = 0;
        M2C_FIELD(var_2_3, s32 *, 0) = 0;
        M2C_FIELD(var_2_3, s32 *, 0xC) = 0xFFFFFFFF;
        var_2_3 += 0x10;
    } while (var_3_2 != -1);
    M2C_FIELD(arg0, s32 *, 0x1C210) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C214) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C218) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C20C) = 0;
    func_00377688(arg0, -1, temp_8, -1, temp_10);
    return arg0;
}
