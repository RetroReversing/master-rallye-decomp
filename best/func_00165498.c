void func_00164440(void *, s32);
void func_00166160(void *);
void func_001666D0(void *, void *);

void func_00165498(void *arg0) {
    void *p10 = (u8 *)arg0 + 0x10;
    void *p88 = (u8 *)arg0 + 0x88;
    s32 v;
    s32 i;
    s32 count;

    func_00166160(p10);
    func_001666D0(p10, p88);
    v = (*(s32 *)((u8 *)arg0 + 0xB4) == 0);
    *(s32 *)((u8 *)arg0 + 0xB4) = v;
    i = v;
    count = (*(s32 *)((u8 *)p88 + 4) - *(s32 *)((u8 *)arg0 + 0x88)) >> 2;
    while ((u32)i < (u32)count) {
        s32 base = *(s32 *)((u8 *)arg0 + 0x88);
        func_00164440((u8 *)arg0 + 0x94, *(s32 *)(base + (i << 2)));
        i += 2;
        count = (*(s32 *)((u8 *)p88 + 4) - *(s32 *)((u8 *)arg0 + 0x88)) >> 2;
    }
}
