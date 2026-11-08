/* func_001D3920 - known bnel idiom, best effort */
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((u8 *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

/* func_00228270 */
extern void D_002AD390(void *);
extern void func_002267C0(void *, s32);
extern char D_0047A820[];

void func_00228270(void *arg0, s32 arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    *(u32 *)((u8 *)arg0 + 0x28) = (u32)D_0047A820;
    obj = *(void **)((u8 *)arg0 + 0x0);
    if (obj != 0) {
        D_002AD390(obj);
    }
    obj = *(void **)((u8 *)arg0 + 0x8);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj + 0x28);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    obj = *(void **)((u8 *)arg0 + 0xC);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj + 0x28);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    obj = *(void **)((u8 *)arg0 + 0x4);
    if (obj != 0) {
        func_002267C0(obj, 3);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

/* func_0022A998 */
void func_0022A998(void *arg0) {
    void *head = *(void **)arg0;
    void *cur = *(void **)head;
    while (cur != head) {
        cur = *(void **)cur;
    }
}

/* func_0022AA20 */
extern void func_00228270(void *, s32);
extern char D_0047A808[];

void func_0022AA20(void *arg0, s32 arg1) {
    *(u32 *)((u8 *)arg0 + 0x28) = (u32)D_0047A808;
    func_00228270(arg0, arg1);
}
