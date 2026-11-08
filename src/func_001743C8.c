void func_00198170(void *);
s32 func_0023B6E8(void *, void *);

void func_001743C8(void *arg0) {
    s32 count = (s32)(*(void **)((u8 *)arg0 + 0x18) - *(void **)((u8 *)arg0 + 0x14)) >> 2;
    s32 i = 0;
    if (count > 0) {
        do {
            void **base = *(void **)((u8 *)arg0 + 0x14);
            s32 idx = i * 4;
            void *p = *(void **)((u8 *)base + idx);
            void *sub = *(void **)((u8 *)p + 0xC);
            i++;
            *(s32 *)((u8 *)sub + 0x14) = func_0023B6E8(*(void **)((u8 *)arg0 + 0x2C), *(void **)((u8 *)sub + 4));
        } while (i < count);
    }
}
