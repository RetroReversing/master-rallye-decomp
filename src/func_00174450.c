void func_00198170(void *);
void func_001981E8(void *, void *);
void func_00198298(void *, void *);
void func_00198348(void *, void *);

void func_00174450(void *arg0) {
    s32 i = 0;
    func_00198170(*(void **)((u8 *)arg0 + 0x50));
    {
        s32 count = (s32)(*(void **)((u8 *)arg0 + 0x18) - *(void **)((u8 *)arg0 + 0x14)) >> 2;
        if (count > 0) {
            do {
                void **base = *(void **)((u8 *)arg0 + 0x14);
                s32 idx = i * 4;
                void *p = *(void **)((u8 *)base + idx);
                i++;
                func_001981E8(*(void **)((u8 *)arg0 + 0x50), p);
                func_00198298(*(void **)((u8 *)arg0 + 0x50), p);
                func_00198348(*(void **)((u8 *)arg0 + 0x50), p);
            } while (i < count);
        }
    }
}
