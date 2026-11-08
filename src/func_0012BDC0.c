void func_0012BC70(void *arg0, s8 arg1);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_0012BDC0(void *arg0) {
    s32 i;
    for (i = 0x41; i < 0x5B; i++) {
        func_0012BC70(arg0, (s8)i);
    }
    for (i = 0x30; i < 0x3A; i++) {
        func_0012BC70(arg0, (s8)i);
    }
    func_0012BC70(arg0, 0x20);
    func_0012BC70(arg0, 0x3C);
    func_0012BC70(arg0, 0x3E);
}

void func_0012BBF8(void *arg0) {
    s32 count;
    s32 i;
    s32 offset;
    f32 val;
    f32 step;
    s8 *base;
    s32 diff;

    diff = *(s32 *)((u8 *)arg0 + 0x14) - *(s32 *)((u8 *)arg0 + 0x10);
    count = (s32)((s64)diff * (s64)(s32)0xB6DB6DB7) >> 2;
    val = 0.0f;
    if (count > 0) {
        step = 6.283185f / (f32)count;
        base = *(s8 **)((u8 *)arg0 + 0x10);
        offset = 0;
        i = count;
        do {
            i--;
            *(f32 *)(base + offset + 4) = val;
            offset += 0x1C;
            val += step;
        } while (i != 0);
    }
}

void func_0012ADE0(void *arg0) {
    f32 val = *(f32 *)((u8 *)arg0 + 0x14);
    if (*(s32 *)((u8 *)arg0 + 0x18) != 0) {
        *(f32 *)((u8 *)arg0 + 0x14) = val * 0.7f;
    } else {
        *(f32 *)((u8 *)arg0 + 0x14) = 1.0f - ((1.0f - val) * 0.7f);
    }
}
