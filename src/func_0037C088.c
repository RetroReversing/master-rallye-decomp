/* identical to func_002FAC50 (matched), with its names changed by decompdecomp */
void func_003D5858(void *unused, void (*arg1)(void)) { (void)unused; arg1(); }

u16 *func_0037C088(u16 *arg0, u16 *arg1, u16 *arg2) {
    while (arg0 != arg1) {
        if (arg2 != 0) {
            *arg2 = *arg0;
        }
        arg0++;
        arg2++;
    }
    return arg2;
}

extern s32 func_002F9AD0(void *arg0);
extern void func_003768A8(void *arg0, s32 arg1);

void func_002FA388(void *arg0) {
    while (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
        s32 idx = func_002F9AD0(arg0);
        void **base = *(void ***)((u8 *)arg0 + 0x0);
        s32 v = *(s32 *)((u8 *)base[idx] + 0);
        s32 off = v * 0x12C;
        void *arr = *(void **)((u8 *)arg0 + 0x24);
        func_003768A8((u8 *)arr + off, (s32)arr);
    }
}

extern s32 func_002F9C80(void *arg0);
extern s32 func_00377788(void *arg0);

void func_002FA058(void *arg0, s32 *arg1) {
    s32 val = *arg1;
    *(s32 *)((u8 *)arg0 + 0x5C) = val;
    func_002F9C80(arg0);

    {
        void **base = *(void ***)((u8 *)arg0 + 0x0);
        s32 v = *(s32 *)((u8 *)base[val] + 0);
        void *arr24 = *(void **)((u8 *)arg0 + 0x24);
        void *entry = (u8 *)arr24 + v * 0x12C;
        void *arr40 = *(void **)((u8 *)arg0 + 0x40);
        void *slot = (u8 *)arr40 + (val << 4);
        s32 r = func_00377788(*(void **)((u8 *)arg0 + 0x3C));
        void *obj = *(void **)entry;
        void *vtable = *(void **)obj;
        void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((u8 *)vtable + 0x2C);
        s32 adj = *(s16 *)((u8 *)vtable + 0x28);
        fn((u8 *)obj + adj, r, slot);
    }
}
