/* identical to func_003DB9C0 (matched), with its names changed by decompdecomp */
s32 func_00400378(void *arg0, void *arg1) {
    s32 l1 = *(s32 *)((u8 *)arg1 + 0x10);
    s32 diff = *(s32 *)((u8 *)arg0 + 0x10) - l1;
    if (diff != 0) {
        return diff;
    }
    u32 *base0 = (u32 *)((u8 *)arg0 + 0x14);
    u32 *base1 = (u32 *)((u8 *)arg1 + 0x14);
    u32 *p0 = base0 + l1;
    u32 *p1 = base1 + l1;
    while (1) {
        p0--;
        p1--;
        if (*p0 != *p1) {
            if (*p0 >= *p1) {
                return 1;
            }
            return -1;
        }
        if ((u8 *)base0 >= (u8 *)p0) {
            break;
        }
    }
    return 0;
}
