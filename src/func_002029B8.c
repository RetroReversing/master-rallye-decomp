extern void *D_002AD408(s32);
extern void *func_001FC9A0(void *);
extern void func_00156C38(void *, void *);
extern void func_00202A50(void *);
extern void func_00202BA0(void *, s32);

void func_00200250(void *arg0) {
    volatile s32 v = 1;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(f32 *)((u8 *)arg0 + 0x1C) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x08) = v;
}

void *func_001FDBA8(void *arg0, void *arg1) {
    u32 *base = *(u32 **)arg0;
    u32 *end = *(u32 **)((u8 *)arg0 + 4);
    u32 idx = *(u32 *)arg1;
    u32 count = (u32)(end - base);
    if (idx < count) {
        return (void *)base[idx];
    }
    return 0;
}

void *func_002029B8(void *arg0, void *arg1) {
    s32 count;
    s32 off;
    s32 n;

    count = (((s32)*(u32 *)((u8 *)arg1 + 4) - (s32)*(u32 *)arg1) * (s32)0xAAAAAAAB) >> 2;
    func_00202A50(arg0);
    func_00202BA0(arg0, count);
    if (count > 0) {
        n = count;
        off = 0;
        do {
            n--;
            func_00156C38((u8 *)*(void **)arg0 + off, (u8 *)*(void **)arg1 + off);
            off += 0xC;
        } while (n != 0);
    }
    return arg0;
}

void *func_001FD8C8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = (s32)func_001FC9A0(D_002AD408(0xC));
    return arg0;
}
