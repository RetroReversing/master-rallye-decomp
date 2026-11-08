typedef struct __attribute__((packed, aligned(1))) { u32 v; } U32P;

s32 func_002BFCA0(void *arg0, u16 arg1) {
    u8 *p = *(u8 **)((char *)arg0 + 0x14);
    u64 t = ((u64)p[3] << 8) | p[2];
    u16 count = (u16)t;
    s32 ret = 0;
    if ((u32)arg1 < (u32)count) {
        U32P *up = (U32P *)(p + 4);
        u32 base = up->v;
        ret = (s32)(base + ((u32)arg1 << 4));
    }
    return ret;
}
