/* func_001D3920 - known bnel idiom, best effort */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((u8 *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

/* func_0022AE70 */
extern void D_002AD390(void *);

void func_0022AE70(void *arg0, s32 arg1) {
    void *obj;
    s32 *vt;
    s32 off;
    s32 fn;

    obj = *(void **)arg0;
    if (obj != 0) {
        vt = *(s32 **)((u8 *)obj + 0x28);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(s32 *)((u8 *)vt + 0xC);
        ((void (*)(void *, s32))fn)((u8 *)obj + off, 3);
    }
    obj = *(void **)((u8 *)arg0 + 4);
    if (obj != 0) {
        vt = *(s32 **)obj;
        off = *(s16 *)((u8 *)vt + 0x10);
        fn = *(s32 *)((u8 *)vt + 0x14);
        ((void (*)(void *, s32))fn)((u8 *)obj + off, 3);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

/* func_0022B5A0 */
extern void func_0022B5F8(void *, void *, void *);
extern void func_0022ADB8(void *);
extern void func_0022C208(void *);
extern void *func_0022C238(void *, void *);
extern void func_0022C210(void *, s32);

void *func_0022B5A0(void *arg0, void *arg1, void *arg2) {
    void *ret;
    u8 sp[0x10];

    func_0022B5F8(arg0, arg1, arg2);
    func_0022ADB8(arg1);
    func_0022C208(sp);
    ret = func_0022C238(sp, arg1);
    func_0022C210(sp, 2);
    return ret;
}

/* func_0022B5F8 */
extern void func_0022ABB0(void *, void *, void *, void *);

void func_0022B5F8(void *arg0, void *arg1, void *arg2) {
    s32 count;
    s32 *basep;
    s32 base;
    s32 i;
    s32 offA;
    s32 offB;
    s32 offC;

    count = ((s32)((*(s32 *)((u8 *)arg2 + 4) - *(s32 *)arg2) * (s64)0xAAAAAAAB) >> 2) / 3;
    if (count > 0) {
        offC = 0x18;
        offB = 0xC;
        offA = 0;
        i = count;
        do {
            base = *(s32 *)arg2;
            i--;
            func_0022ABB0(arg1, (void *)(base + offA), (void *)(base + offB), (void *)(base + offC));
            offC += 0x24;
            offB += 0x24;
            offA += 0x24;
        } while (i != 0);
    }
}
