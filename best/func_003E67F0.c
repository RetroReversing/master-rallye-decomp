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

s32 func_003E6328(void *, void *, u32, void *);     /* extern */
M2C_UNK func_003E63C8(void *, void *);              /* extern */
M2C_UNK func_003E6638(void *);                      /* extern */
M2C_UNK func_003E6660(s32, s32, s32);               /* extern */
M2C_UNK func_003E71C8(void *, void *);              /* extern */
extern M2C_UNK D_0043AF68;

void func_003E67F0(void *arg0, void *arg1) {
    u32 temp_6;
    void *temp_7;
    void *temp_7_2;

    temp_7 = M2C_FIELD(arg0, void **, 0x858);
    func_003E6660(temp_7 + 0x10, temp_7 + 0x18, temp_7 + 0x20);
    temp_7_2 = M2C_FIELD(arg0, void **, 0x858);
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(temp_7_2, s32 *, 0x10);
    temp_6 = *(((((s64) (M2C_FIELD(temp_7_2, s64 *, 0x20) << 0x1B) >> 0x20) & 0xF) * 4) + &D_0043AF68);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg1, s32 *, 0x5C);
    M2C_FIELD(arg0, s64 *, 0x88) = (s64) temp_6;
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg1, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg1, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(arg1, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(arg1, s32 *, 0x54);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg1, s32 *, 0x58);
    if (func_003E6328(arg0, arg1, temp_6, temp_7_2) != 0) {
        if (M2C_FIELD(arg1, s32 *, 0x28) == 1) {
            if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
                func_003E71C8(arg0, arg1);
            } else {
                func_003E63C8(arg0, arg1);
            }
            func_003E6638(arg0);
        }
    }
}
