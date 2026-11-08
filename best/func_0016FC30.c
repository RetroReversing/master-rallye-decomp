extern f32 func_00167DB8(s32, void *, s32);
extern void func_00168448(void *);
extern f32 func_00168BA0(s32, f32, void *);

f32 func_0016FC30(void *arg0) {
    s32 count = 0;
    f32 sum = 0.0f;
    s32 i = 3;
    u8 *ptr = *(u8 **)((u8 *)arg0 + 0x34);
    u8 *arr = *(u8 **)(ptr + 0x10);
    do {
        i -= 1;
        if (*(s32 *)(arr + 0x24) != 0) {
            count += 1;
            sum += *(f32 *)(arr + 0x128);
        }
        arr += 0x190;
    } while (i >= 0);
    f32 val = *(f32 *)(*(u8 **)((u8 *)arg0 + 0x64) + (*(s32 *)((u8 *)arg0 + 0x80)) * 4);
    f32 scale = *(f32 *)((u8 *)arg0 + 0x4C);
    f32 count_f = (f32)count;
    f32 result = (val * scale * sum) / count_f;
    if (result < 0.0f) {
        result = 0.0f;
    }
    return result;
}
