void func_003DA688(s32 arg0, s32 arg1) {
    extern void func_003D88B8(s32, u32);
    if (arg0 != -1) {
        func_003D88B8(arg1, (u32)(arg0 & 0xFF));
    }
}

u8 func_003D81E8(void);

u8 func_003DA6B8(void *arg0) {
    u8 *p = (u8 *)arg0;
    u32 temp;
    u8 res;
    temp = *(u32 *)(p + 4);
    if (temp >= *(u32 *)(p + 8)) {
        res = func_003D81E8();
    } else {
        res = *(u8 *)temp;
        *(u32 *)(p + 4) = temp + 1;
    }
    return res;
}

void func_003D9FC8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern void func_003D7F00(void *);
    s32 var_17 = arg1;
    u32 *p = (u32 *)arg0;
    if (p[0x24/4] != 0) {
        if ((arg2 == 1) && (p[0] & 0x100)) {
            var_17 = var_17 - ((s32)p[2] - (s32)p[1]);
        }
        func_003D7F00(arg0);
    }
    {
        void **v = (void **)((u8 *)arg0 + 0x50);
        void (*fn)(void *, s32, s32, s32) = (void (*)(void *, s32, s32, s32))v[0x44/4];
        fn(arg0, var_17, arg2, arg3);
    }
}

void func_003D7B00(void *arg0, s32 arg1) {
    if (*(s32 *)arg0 == 0) {
        arg1 |= 4;
    }
    *(u8 *)((u8 *)arg0 + 0x1A) = (u8)arg1;
}
