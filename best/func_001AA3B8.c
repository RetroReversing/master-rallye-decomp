void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void *func_001AA2E0(void *arg0, void *arg1, void *arg2) {
    f32 x = *(f32 *)arg2;
    f32 y = *(f32 *)((u8 *)arg2 + 4);
    f32 z = *(f32 *)((u8 *)arg2 + 8);

    *(f32 *)((u8 *)arg0 + 4) = y;
    *(f32 *)arg0 = z;
    *(f32 *)((u8 *)arg0 + 8) = -x;
    return arg0;
}

void func_001AA308(void *arg0, void *arg1) {
    f32 *src;
    f32 *dst;
    void *base;

    base = *(void **)((u8 *)arg1 + 0x50);
    src = (f32 *)((u8 *)arg0 + 0xB0);
    dst = (f32 *)((u8 *)base + 0x50);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[3] = 1.0f;
    dst[2] = src[2];

    base = *(void **)((u8 *)arg1 + 0x50);
    src = (f32 *)((u8 *)arg0 + 0xBC);
    dst = (f32 *)((u8 *)base + 0x40);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[3] = 0.0f;
    dst[2] = src[2];

    base = *(void **)((u8 *)arg1 + 0x50);
    src = (f32 *)((u8 *)arg0 + 0xD4);
    dst = (f32 *)((u8 *)base + 0x20);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[3] = 0.0f;
    dst[2] = src[2];

    base = *(void **)((u8 *)arg1 + 0x50);
    src = (f32 *)((u8 *)arg0 + 0xC8);
    dst = (f32 *)((u8 *)base + 0x30);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[3] = 0.0f;
    dst[2] = src[2];
}

void func_001AA3B8(void *arg0) {
    f32 val = *(f32 *)((u8 *)arg0 + 0x68) + *(f32 *)((u8 *)arg0 + 0x64);
    *(f32 *)((u8 *)arg0 + 0x68) = val;

    if (*(s32 *)((u8 *)arg0 + 0x28) != 0) {
        if (*(f32 *)((u8 *)arg0 + 0x6C) < val) {
            *(s32 *)((u8 *)arg0 + 0x68) = 0;
        }
    } else {
        f32 limit = *(f32 *)((u8 *)arg0 + 0x6C);
        if (limit < val) {
            *(f32 *)((u8 *)arg0 + 0x68) = limit;
            if (*(s32 *)((u8 *)arg0 + 0x30) != 0) {
                s32 count = *(s32 *)((u8 *)arg0 + 0x54);
                if (count < *(s32 *)((u8 *)arg0 + 0x58)) {
                    *(s32 *)((u8 *)arg0 + 0x54) = count + 1;
                } else {
                    *(s32 *)((u8 *)arg0 + 0x68) = 0;
                    *(s32 *)((u8 *)arg0 + 0x54) = 0;
                }
            }
        }
    }
}
