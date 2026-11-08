/* func_001D3920 - known bnel idiom, best ~110 */
void *func_001D3920(void *arg0) {
    void *v = *(void **)((char *)arg0 + 4);
    void *ret = 0;
    if (v != arg0) {
        ret = *(void **)v;
    }
    return ret;
}

/* func_0023D390 */
extern f32 func_0023D418(void *, void *);

void func_0023D390(void *arg0) {
    s32 count = (s32)((u32)*(void **)((u8 *)arg0 + 0xB4) - (u32)*(void **)((u8 *)arg0 + 0xB0)) >> 2;
    s32 i = 0;
    if (count > 0) {
        do {
            void **base = *(void ***)((u8 *)arg0 + 0xB0);
            s32 idx = i << 2;
            void *elem = *(void **)((u8 *)base + idx);
            f32 *dst = (f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x18) + idx);
            i++;
            *dst = func_0023D418(arg0, elem);
        } while (i < count);
    }
}

/* func_00242B60 */
extern void func_00237350(void);
extern void func_002373F8(void *, void *);
extern void D_0047A5C0;

void *func_00242B60(void *arg0, void *arg1) {
    void *v;

    func_00237350();
    v = (u8 *)arg0 + 0x20;
    *(u32 *)((u8 *)arg0 + 0x20) = 0;
    *(void **)arg0 = &D_0047A5C0;
    *(u32 *)((u8 *)v + 8) = 0;
    *(u32 *)((u8 *)v + 4) = 0;
    *(u32 *)((u8 *)arg0 + 0x34) = 0;
    *(u32 *)((u8 *)arg0 + 0x38) = 0;
    func_002373F8(arg0, arg1);
    return arg0;
}

/* func_00242BC8 */
extern void func_002373D0(void *, s32);
extern void func_002B2028(void *);
extern void D_0047A5C0;
extern u32 D_0040E618[];

void *func_00242BC8(void *arg0, s32 arg1) {
    void *b;
    s32 n;

    *(void **)arg0 = &D_0047A5C0;
    b = *(void **)((u8 *)arg0 + 0x20);
    n = (s32)((u32)*(void **)((u8 *)arg0 + 0x28) - (u32)b) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            *(u32 *)b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    func_002373D0(arg0, arg1);
    return arg0;
}
