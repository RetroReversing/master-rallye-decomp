extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern const char D_00479FB8[];
extern void D_0047A088;

void func_0027E5B8(void *arg0, void *arg1) {
    void **v1 = (void **)((u8 *)arg0 + 0xC);
    void **it = *(void ***)((u8 *)arg0 + 0xC);

    if (it != v1[1]) {
        void **s1 = v1;
        do {
            void *obj = *it;
            void *vt = *(void **)((u8 *)obj + 8);
            void (*fn)(void *, void *, void *) = *(void (**)(void *, void *, void *))((u8 *)vt + 0x34);
            it++;
            fn((u8 *)obj + *(s16 *)((u8 *)vt + 0x30), arg1, obj);
        } while (it != s1[1]);
    }
}

void *func_0027DD60(void) {
    s32 sp[4];
    void *obj = D_002AD408(0xC);
    func_001D4040(sp, D_00479FB8);
    *(s32 *)obj = sp[0];
    *(void **)((u8 *)obj + 4) = &D_0047A088;
    return obj;
}

s32 func_0027DAD0(s32 *arg0, s32 arg1) {
    return arg0[arg1 + 2];
}

void func_0027DAC0(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[arg1 + 2] = arg2;
}
