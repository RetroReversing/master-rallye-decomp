extern void func_00192FD8(void *, s32);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, void *);
extern s32 func_001E4280(void);
extern void func_001E3E90(s32, void *, float);

void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

void func_00193748(void *arg0, s32 arg1, float arg2) {
    s32 tmp;
    char buf[16];

    func_00192FD8(arg0, arg1);
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0xA4));
    tmp = func_001E4280();
    func_001D4040(buf, *(s32 *)((char *)arg0 + 0xC));
    func_001E3E90(tmp, buf, arg2);
}

void func_001937B8(void *arg0, s32 arg1, float arg2) {
    s32 tmp;
    char buf[16];

    func_00192FD8(arg0, arg1);
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0xA8));
    tmp = func_001E4280();
    func_001D4040(buf, *(s32 *)((char *)arg0 + 0xC));
    func_001E3E90(tmp, buf, arg2);
}

void func_00193828(void *arg0, s32 arg1, float arg2) {
    s32 tmp;
    char buf[16];

    func_00192FD8(arg0, arg1);
    func_001D2900((char *)arg0 + 0xC, *(s32 *)((char *)arg0 + 0xAC));
    tmp = func_001E4280();
    func_001D4040(buf, *(s32 *)((char *)arg0 + 0xC));
    func_001E3E90(tmp, buf, arg2);
}
