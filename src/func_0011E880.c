/* identical to func_0011E808 (matched), with its names changed by decompdecomp */
extern void func_001D4040(void *, void *);
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);
extern char D_004476E0[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_0011E880(void *self, s32 flag) {
    s32 temp;
    char buf[0x10];
    void *o;
    void *x;

    temp = func_0021F4B0();
    func_001D4040(buf, D_004476E0);
    o = func_0021E9C0(temp, buf);
    if (o != 0) {
        x = *(void **)((char *)o + 0x4C);
        if (x != 0) {
            *(u64 *)((char *)x + 0x78) = (*(u64 *)((char *)x + 0x78) & ~1ULL) | (flag & 1);
        }
    }
}

void func_001BD878(void *arg0) {
    s32 n = (*(s32 *)((char *)arg0 + 8) - *(s32 *)((char *)arg0 + 4)) >> 2;
    s32 i;

    if (n <= 0)
        return;
    for (i = 0; i < n; i++) {
        void *o = *(void **)(*(s32 *)((char *)arg0 + 4) + i * 4);
        void *v = *(void **)((char *)o + 0xDC);
        ((void (*)(void *))*(void **)((char *)v + 0x2C))((char *)o + *(s16 *)((char *)v + 0x28));
    }
}

void func_001BD8F8(void *arg0) {
    s32 n = (*(s32 *)((char *)arg0 + 8) - *(s32 *)((char *)arg0 + 4)) >> 2;
    s32 i;

    if (n <= 0)
        return;
    for (i = 0; i < n; i++) {
        void *o = *(void **)(*(s32 *)((char *)arg0 + 4) + i * 4);
        void *v = *(void **)((char *)o + 0xDC);
        ((void (*)(void *))*(void **)((char *)v + 0x1C))((char *)o + *(s16 *)((char *)v + 0x18));
    }
}
