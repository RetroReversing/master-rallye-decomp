s32 func_002F9AD0(void *arg0);
void func_003768A8(void *arg0, void *arg1);

void func_002FA388(void *arg0) {
    while (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
        s32 idx = func_002F9AD0(arg0);
        s32 *table = *(s32 **)((u8 *)arg0 + 0x0);
        s32 *entryPtr = (s32 *)((u8 *)table + (idx << 2));
        s32 *elem = *(s32 **)entryPtr;
        s32 val = *elem;
        void *arr = *(void **)((u8 *)arg0 + 0x24);
        func_003768A8((u8 *)arr + val * 0x12C, arr);
    }
}

s32 func_002F9C80(void *arg0);
s32 func_00377788(void *arg0);

void func_002FA058(void *arg0, s32 *arg1) {
    s32 val = *arg1;
    void **base;
    s32 *elem;
    s32 v;
    void *arr24;
    void *arr40;
    void *slot;
    void *entry;
    void *ctx;
    s32 r;
    void **obj;
    void *vt;

    *(s32 *)((u8 *)arg0 + 0x5C) = val;
    func_002F9C80(arg0);

    base = *(void ***)((u8 *)arg0 + 0x0);
    elem = (s32 *)base[val];
    arr40 = *(void **)((u8 *)arg0 + 0x40);
    v = *elem;
    arr24 = *(void **)((u8 *)arg0 + 0x24);
    slot = (u8 *)arr40 + (val << 4);
    entry = (u8 *)arr24 + v * 0x12C;

    ctx = *(void **)((u8 *)arg0 + 0x3C);
    r = func_00377788(ctx);

    obj = *(void ***)entry;
    vt = obj[0];
    {
        s16 adj = *(s16 *)((u8 *)vt + 0x28);
        void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((u8 *)vt + 0x2C);
        fn((u8 *)obj + adj, r, slot);
    }
}
