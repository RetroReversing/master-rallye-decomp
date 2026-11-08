s32 func_0013BB10(void *arg0) {
    s32 type = *(s32 *)((u8 *)arg0 + 0x10);
    switch (type) {
    case 0:
        return *(s32 *)((u8 *)arg0 + 0x14);
    case 1:
        return *(s32 *)((u8 *)arg0 + 0x18) + 7;
    case 2:
        return *(s32 *)((u8 *)arg0 + 0x1C) + 0xF;
    }
    return 0;
}
