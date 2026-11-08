extern void func_00222AA0(void);
extern void func_002208A8(void *);
extern void func_001D4040(void *, void *);
extern s32 func_00222B60(void *, void *);
extern u8 D_00479010[];

void func_00222B10(void *arg0) {
    u8 buf[0x170];
    s32 ret;

    func_00222AA0();
    func_002208A8(buf);
    func_001D4040(buf, D_00479010);
    ret = func_00222B60(arg0, buf);
    *(s32 *)((u8 *)arg0 + 0xC) = ret;
}

void *func_00222C48(void *arg0, void *arg1) {
    u8 *begin;
    s32 count;
    s32 i;
    s32 key;
    u8 *p;

    begin = *(u8 **)arg0;
    count = (*(s32 *)((u8 *)arg0 + 4) - *(s32 *)arg0) / 0x170;
    if (count != 0) {
        key = *(s32 *)arg1;
        p = begin;
        for (i = 0; i < count; i++) {
            if (*(s32 *)p == key) {
                return p;
            }
            p += 0x170;
        }
    }
    return *(void **)arg0;
}

s32 func_00222CA0(void *arg0, void *arg1) {
    u8 *begin;
    s32 count;
    s32 i;
    s32 key;
    u8 *p;

    begin = *(u8 **)arg0;
    count = (*(s32 *)((u8 *)arg0 + 4) - *(s32 *)arg0) / 0x170;
    if (count != 0) {
        key = *(s32 *)arg1;
        p = begin;
        for (i = 0; i < count; i++) {
            if (*(s32 *)p == key) {
                return i;
            }
            p += 0x170;
        }
    }
    return -1;
}
