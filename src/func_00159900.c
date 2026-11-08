extern void D_002AD390(void *);
extern u8 D_0044D800[];
extern u8 D_0044DCD8[];
void func_00159900(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 8) = (void *)D_0044D800;
    D_002AD390(*(void **)((char *)arg0 + 0x34));
    *(void **)((char *)arg0 + 8) = (void *)D_0044DCD8;
    if (arg1 & 1) D_002AD390(arg0);
}
