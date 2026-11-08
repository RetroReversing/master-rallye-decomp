extern u8 D_00487F08[];
extern u32 D_0042FD60;

extern void D_002AD390(void *);
extern void func_003A4418(void *, s32);
extern void *func_003B1F48(void *arg0, void *arg1);
extern void *func_003B20D0(void *arg0, void *arg1, void *arg2);

void *func_003ADBD8(void *arg0, s32 arg1) {
    char sp10[0x20];
    void *tmp;

    *(void **)((u8 *)arg0 + 8) = (void *)D_00487F08;
    tmp = func_003B1F48(sp10, (u8 *)arg0 + 4);
    func_003B20D0((void *)&sp10, &D_0042FD60, sp10);
    func_003A4418(arg0, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
    return arg0;
}
