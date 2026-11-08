u8 func_003D8938(void *arg0) {
    u8 *end = *(u8 **)((u8 *)arg0 + 0x4);
    u8 *cap = *(u8 **)((u8 *)arg0 + 0xC);
    u8 ch;
    if (cap < end) {
        *(u8 **)((u8 *)arg0 + 0x4) = end - 1;
        ch = *(end - 1);
        goto done;
    }
    {
        u8 *vtable = *(u8 **)((u8 *)arg0 + 0x50);
        u8 (*fn)(void *, s32) = *(u8 (**)(void *, s32))(vtable + 0x2C);
        ch = fn(arg0, -1);
    }
done:
    if (ch != 0xFF) {
        *(s32 *)arg0 &= ~0x10;
    }
    return ch;
}
