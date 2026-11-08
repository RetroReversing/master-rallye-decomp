s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0)
        ret = *v;
    return ret;
}

s32 func_001DE268(void *arg0) {
    s32 a = *(s32 *)((u8 *)arg0 + 0x1C);
    s32 b = *(s32 *)((u8 *)arg0 + 0x24);
    return (a < b) ? b : a;
}

void func_001DEBC0(void *arg0) {
    s32 count = (*(s32 *)((char *)arg0 + 8) - *(s32 *)((char *)arg0 + 4)) >> 2;
    if (count != 0) {
        s32 idx = *(s32 *)arg0;
        if ((u32)idx < (u32)count) {
            void *item;
            *(s32 *)arg0 = idx + 1;
            item = *(void **)(*(u32 *)((char *)arg0 + 4) + (idx << 2));
            {
                void *v = *(void **)((char *)item + 4);
                ((void (*)(void *))*(void **)((char *)v + 0x1C))((char *)item + *(s16 *)((char *)v + 0x18));
            }
        }
    }
}

void func_001DEC20(void *arg0) {
    char *vec = (char *)arg0 + 4;
    *(s32 *)arg0 = 0;
    if (((*(s32 *)(vec + 4) - *(s32 *)((char *)arg0 + 4)) >> 2) != 0) {
        do {
            s32 n = (*(s32 *)(vec + 4) - *(s32 *)((char *)arg0 + 4)) >> 2;
            void *item = *(void **)(*(u32 *)((char *)arg0 + 4) + ((n - 1) << 2));
            if (item != 0) {
                void *v = *(void **)((char *)item + 4);
                ((void (*)(void *, int))*(void **)((char *)v + 0xC))((char *)item + *(s16 *)((char *)v + 8), 3);
            }
            *(s32 *)(vec + 4) -= 4;
        } while (((*(s32 *)(vec + 4) - *(s32 *)((char *)arg0 + 4)) >> 2) != 0);
    }
}
