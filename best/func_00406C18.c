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

M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK WaitSema_2(s32);                            /* extern */
M2C_UNK func_00405268(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00405650(M2C_UNK);                     /* extern */
s32 func_00405CC0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK **, M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_004065B0();                            /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */
extern s32 D_004411A8;
extern s32 D_004411B0;
extern M2C_UNK *D_0049FF40;
extern M2C_UNK D_004A0BC0;
extern M2C_UNK D_004A0C00;
extern M2C_UNK D_004A1040;
extern M2C_UNK D_004A1240;
extern M2C_UNK D_004A1268;
extern M2C_UNK D_004A1280;
extern M2C_UNK D_004A12C0;
extern M2C_UNK D_FFFFF;
extern M2C_UNK func_00406708;
extern M2C_UNK func_00406BE8;

s32 func_00406C18(void) {
    M2C_UNK *var_2_2;
    M2C_UNK *var_3;
    s32 var_2;
    void *temp_4;

    func_00405650(0);
    M2C_FIELD(&D_004A12C0, s32 *, 0) = 0;
    M2C_FIELD(&D_004A12C0, s32 *, 4) = 0;
    func_0040AF58();
    func_00405268(0x80000011, &func_00406708, &D_004A1280);
    func_00405268(0x80000013, &func_00406BE8, &D_004A12C0);
    func_0040AFA0();
loop_4:
    var_2 = -1;
    if (func_00405CC0(&D_004A1240, 0x80000001, 0) >= 0) {
        var_2_2 = &D_FFFFF;
        if (M2C_FIELD(&D_004A1240, s32 *, 0x24) != 0) {
            func_004065B0();
            WaitSema_2(D_004411B0);
            var_3 = &D_004A1040;
            temp_4 = &D_004A1040 + 0x200;
            if ((u32) &D_004A1040 < (u32) temp_4) {
                do {
                    M2C_FIELD(var_3, s32 *, 4) = 0;
                    var_3 += 0x10;
                } while ((u32) var_3 < (u32) temp_4);
            }
            SignalSema_2(D_004411B0);
            D_0049FF40 = &D_004A0C00;
            if (func_00405E90(&D_004A1240, 0xFF, 0, &D_0049FF40, 4, (s32) &D_004A0BC0, 4, 0, 0) >= 0) {
                D_004A1268 = M2C_UNALIGNED32(M2C_FIELD(((s32) &D_004A0BC0 | 0x20000000), M2C_UNK *, 0));
                D_004411A8 = 1;
                var_2 = 0;
                /* Duplicate return node #16. Try simplifying control flow for better match */
                return var_2;
            }
            return 0xFFFEFFFF;
        }
        do {

        } while (var_2_2 != (M2C_UNK *)-1);
        goto loop_4;
    }
    return var_2;
}
