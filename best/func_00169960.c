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

void func_00169960(void *arg0) {
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 8), 1.0f, 30.0f);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0xC), 30.0f, 200.0f);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x10), 5.0f, 20.0f);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x14), 0.5f, 1.5f);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x18), 0.0f, 15.0f);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x1C), 0.0f, 60.0f);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x28), 0.0f, 100.0f);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x2C), 0.0f, 100.0f);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x20), 3.0f, 10.0f);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x24), 10.0f, 100.0f);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x30), 0.0f, 3.0f);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x34), 0.0001f, 0.1f);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x38), 0.0f, 1.0f);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x5C), 0.0f, 1.0f);
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x60), 0.0f, 1.0f);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
    func_0015ACE0(M2C_FIELD(arg0, f32 *, 0x64), 0.0f, 2.0f);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_ERROR(/* Read from unset register $f0 */);
}
