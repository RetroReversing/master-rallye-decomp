void func_003D7B70(void *arg0, u32 arg1) {
    *(u64*)((u8*)arg0 + 0x10) |= (u64)arg1;
}

u16 func_003D7B80(void *arg0, u32 arg1) {
    u16 old = *(u16*)((u8*)arg0 + 0x1C);
    *(u32*)((u8*)arg0 + 0x1C) = arg1 & 0xFFFF;
    return old;
}

void func_003D7B50(void *arg0, u32 arg1, u32 arg2) {
    u64 *p = (u64*)((u8*)arg0 + 0x10);
    *p = (*p & ~(u64)arg2) | ((u64)arg1 & (u64)arg2);
}

void func_003D7B38(void *arg0, u32 arg1) {
    u64 *p = (u64*)((u8*)arg0 + 0x10);
    *p &= ~(u64)arg1;
}
