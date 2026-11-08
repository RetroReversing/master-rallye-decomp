extern void func_003FA388(s32, const char *);
extern char D_00479B80[];

void func_00260288(void *arg0, void *arg1) {
    func_003FA388(*(s32 *)((u8 *)arg1 + 0x14), D_00479B80);
}

extern void func_0025E0D8(void *, s32);
extern void func_0025E298(void *);
extern void func_0025E338(void *);
extern void func_0025E4A0(void *);
extern void func_0025E670(void *);
extern void func_0025E708(void *);

void func_0025E028(void *arg0, void *arg1) {
    s32 end = *(s32 *)((u8 *)arg1 + 0x14);
    s32 start = *(s32 *)((u8 *)arg1 + 0x10);
    s32 count = (s32)(((u32)(end - start) * 0xAAAAAAAB) >> 2);
    if (count <= 0) return;
    s32 i = 0;
    s32 off = 0;
    s32 base = start;
    do {
        func_0025E0D8(arg0, base + off);
        off += 0xC;
        i++;
        func_0025E338(arg0);
        func_0025E4A0(arg0);
        func_0025E670(arg0);
        func_0025E298(arg0);
        func_0025E708(arg0);
    } while (i < count);
}

extern void func_00201620(void *);
extern void func_002027E8(void *);

void *func_0025DEB0(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    func_002027E8((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    func_00201620((u8 *)arg0 + 0x24);
    *(s32 *)((u8 *)arg0 + 0x98) = 0;
    *(s32 *)((u8 *)arg0 + 0x9C) = 0;
    *(s32 *)((u8 *)arg0 + 0xA0) = 0;
    return arg0;
}

extern void func_0025DA08(void *, s32, f32);

void func_0025D988(void *arg0) {
    s32 end = *(s32 *)((u8 *)arg0 + 0xA4);
    s32 start = *(s32 *)((u8 *)arg0 + 0xA0);
    s32 count = (end - start) >> 2;
    if (count <= 0) return;
    s32 i = 0;
    while (i < count) {
        s32 off = i << 2;
        s32 *p = (s32 *)(start + off);
        s32 *q = *(s32 **)((u8 *)arg0 + 0);
        func_0025DA08(arg0, *p, *(f32 *)(q + off));
        i++;
    }
}
