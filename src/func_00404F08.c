void func_00404F08(void *arg0, void *arg1) {
    s32 idx = *(s32 *)((u8 *)arg0 + 0x10);
    s32 val = *(s32 *)((u8 *)arg0 + 0x14);
    s32 *base = *(s32 **)((u8 *)arg1 + 0x1C);
    base[idx] = val;
}

extern void *D_00441118;
extern void func_004045C8(void);
extern void func_004048A8(void *);

void func_00404EA8(s32 arg0, ...) {
    /* varargs: save a1-a7 area and pass pointer */
    volatile char buf[0xB0];
    void *saved = D_00441118;
    D_00441118 = (void *)func_004045C8;
    /* args stored by caller convention at sp+0x78 relative to frame? */
    func_004048A8((void *)((char *)&buf + 0x78));
    D_00441118 = saved;
}
