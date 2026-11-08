void func_00192FD8(void *);
void func_001D2900(void *, s32);
void func_001D4040(void *, s32);
s32 func_001E4280(void);
s32 func_001E3610(s32, void *);
s32 func_001E3850(s32, void *);

void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

void func_00193280(void *arg0) {
    unsigned char sp[0x10];
    s32 tmp;

    func_00192FD8(arg0);
    func_001D2900((unsigned char *)arg0 + 0xC, *(s32 *)((unsigned char *)arg0 + 0xA8));
    tmp = func_001E4280();
    func_001D4040(sp, *(s32 *)((unsigned char *)arg0 + 0xC));
    func_001E3610(tmp, sp);
}

void func_001932E0(void *arg0) {
    unsigned char sp[0x10];
    s32 tmp;

    func_00192FD8(arg0);
    func_001D2900((unsigned char *)arg0 + 0xC, *(s32 *)((unsigned char *)arg0 + 0xAC));
    tmp = func_001E4280();
    func_001D4040(sp, *(s32 *)((unsigned char *)arg0 + 0xC));
    func_001E3610(tmp, sp);
}

void func_00193340(void *arg0) {
    unsigned char sp[0x10];
    s32 tmp;

    func_00192FD8(arg0);
    func_001D2900((unsigned char *)arg0 + 0xC, *(s32 *)((unsigned char *)arg0 + 0xB0));
    tmp = func_001E4280();
    func_001D4040(sp, *(s32 *)((unsigned char *)arg0 + 0xC));
    func_001E3850(tmp, sp);
}
