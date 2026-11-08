u8 func_003D88B8(void *arg0, s32 arg1) {
    u8 *end;
    u8 *cap;
    u8 ch;
    u8 *vtable;
    u8 (*fn)(void *);
    u8 ret;

    end = *(u8 **)((u8 *)arg0 + 0x4);
    cap = *(u8 **)((u8 *)arg0 + 0xC);
    if (cap < end) {
        ch = *(end - 1);
        if (ch == (arg1 & 0xFF)) {
            *(u8 **)((u8 *)arg0 + 0x4) = end - 1;
            ret = ch;
            goto done;
        }
    }
    vtable = *(u8 **)((u8 *)arg0 + 0x50);
    fn = *(u8 (**)(void *))((u8 *)vtable + 0x2C);
    ret = fn(arg0);
done:
    if (ret != 0xFF) {
        *(s32 *)arg0 &= ~0x10;
    }
    return ret;
}
