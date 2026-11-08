void *func_002B1FC0(s32); /* allocator, may return NULL */
void *func_003D2910(s32); /* fallback allocator */

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((u8 *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

s32 func_001EE050(void *arg0, s32 arg1, s32 arg2) {
    s32 stride = *(s32 *)((u8 *)arg0 + 0xC);
    s32 *base = *(s32 **)((u8 *)arg0 + 8);
    return base[arg2 * stride + arg1];
}

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
    {
        void *n = *(void **)((u8 *)arg0 + 0xC);
        *(void **)((u8 *)n + 4) = n;
    }
    return arg0;
}

s32 func_001EF980(void *arg0, s32 arg1) {
    void **it = *(void ***)arg0;
    void **end = *(void ***)( (u8 *)arg0 + 4 );

    if (it != end) {
        void *elem = *it;
        while (1) {
            s32 *inner = (s32 *)elem;
            s32 count = (s32)((u32)(inner[1] - inner[0]) * 0xAAAAAAABu) >> 2;
            if (count == arg1) {
                return 0;
            }
            it++;
            if (it == end) break;
            elem = *it;
        }
    }
    return 1;
}
