extern s32 func_003AAAA0(void *);
extern s32 func_003AAAD8(void *);

s32 func_003AAB10(void *arg0) {
    s32 end;
    s32 start;
    s32 diff;

    end = func_003AAAD8(arg0);
    start = func_003AAAA0(arg0);
    diff = end - start;
    return (s32)((diff * 0xB6DB6DB7) >> 2);
}

extern s32 func_003B0BF0(void *);

s32 func_003AAA38(void *arg0, s32 arg1) {
    s32 base;
    s32 idx;
    base = func_003B0BF0(arg0);
    idx = arg1;
    return base + idx * 0x18;
}

extern void func_003AD108(void *);
extern void func_003B0C28(void *, s32, void *);
extern void func_00374AB8(void *, s32);

void func_003AA9C8(void *arg0, s32 arg1) {
    char sp[0x30];
    func_003AD108(sp);
    func_003B0C28(arg0, arg1, sp);
    func_00374AB8(sp, 2);
}
