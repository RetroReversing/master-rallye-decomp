void *func_002B1FC0(s32);
void *func_003D2910(s32);

void *func_001EE2F8(void *arg0) {
    void *node;

    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    node = func_002B1FC0(0xC);
    if (node == NULL) {
        node = func_003D2910(0xC);
    }
    *(void **)((u8 *)arg0 + 0xC) = node;
    *(void **)node = node;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0xC) + 4) = *(void **)((u8 *)arg0 + 0xC);
    return arg0;
}

s32 func_001EF980(void *arg0, s32 arg1) {
    s32 end = *(s32 *)((u8 *)arg0 + 4);
    s32 it = *(s32 *)arg0;

    if (it == end) {
        return 1;
    }
    {
        s32 *elem = *(s32 **)it;
        while (1) {
            s32 a = *(s32 *)elem;
            s32 b = *(s32 *)((u8 *)elem + 4);
            s32 diff = b - a;
            s32 count = (s32)((u32)diff * 0xAAAAAAABu) >> 2;
            if (count == arg1) {
                return 0;
            }
            it += 4;
            if (it == end) break;
            elem = *(s32 **)it;
        }
    }
    return 1;
}
