extern void (*D_00426AC4)(void);
extern void func_002AD888(void);

void func_002AD860(void) {
    void (*p)(void) = func_002AD888;
    D_00426AC4 = p;
    p();
}

extern void *func_002B1FC0(s32);
extern void func_002AD758(void);
extern void func_003F94D0(void *, s32, s32);

void *func_002AD7B8(void) {
    void *temp_2;

    temp_2 = func_002B1FC0(0x18);
    if (temp_2 == NULL) {
        func_002AD758();
    }
    func_003F94D0(temp_2, 0, 0x18);
    *(void **)((char *)temp_2 + 4) = (void *)((char *)temp_2 + 0x10);
    return temp_2;
}
