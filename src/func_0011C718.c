extern void func_001D2458(void *);
extern void func_001D2CD8(void *, void *);
extern void D_002AD390(void *);

void func_0011C718(void *arg0) {
    s32 buf[4];
    func_001D2458(buf);
    func_001D2CD8((u8 *)arg0 + 0x34, (void *)buf[0]);
    D_002AD390((void *)buf[0]);
    *(s32 *)((u8 *)arg0 + 0x30) = 1;
    *(s32 *)((u8 *)arg0 + 0x38) = 1;
}
