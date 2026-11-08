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

s32 func_001D3310();
s32 func_002A0DE8();
void *func_002AD408();
extern char D_0047C6F8[];

void func_002A1298(s32 arg0, s32 arg1) {
    void *temp_2;

    temp_2 = func_002AD408(0x20);
    func_001D3310(temp_2);
    M2C_FIELD(temp_2, s32 **, 0x14) = &D_0047C6F8;
    M2C_FIELD(temp_2, s32 *, 0x18) = 0;
    func_002A0DE8(temp_2, arg1);
}
