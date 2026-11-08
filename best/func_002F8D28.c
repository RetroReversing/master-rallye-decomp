extern s32 D_0043C3B0[12];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_002F99E8(void *arg0, s32 arg1);

s32 func_002F9AD0(void *arg0) {
    void *a = arg0;
    void *r = *(void **)((u8 *)a + 0x60);
    s32 idx = *(s32 *)((u8 *)r + 0x18);
    void *q = (u8 *)r + (idx << 4);
    s32 cnt = *(s32 *)((u8 *)a + 0x78);
    s32 sub = *(s32 *)q;
    s32 ret = *(s32 *)((u8 *)q + 0xC);
    cnt -= sub;
    *(s32 *)((u8 *)a + 0x78) = cnt;
    func_002F99E8(a, ret);
    return ret;
}

void func_003768A8(void *arg0);

void func_002F8D28(void *arg0) {
    s32 i;
    s32 sp10;
    s32 count;
    void *arr;

    i = 0;
    count = *(s32 *)((u8 *)arg0 + 0x30);
    sp10 = count;
    if (count != 0) {
        s32 step = 0x12C;
        do {
            void *elem;
            sp10 = i;
            arr = *(void **)((u8 *)arg0 + 0x24);
            elem = (u8 *)arr + i * step;
            if (*(s32 *)((u8 *)elem + 0x120) == 0) {
                func_003768A8(elem);
            }
            i++;
            sp10 = *(s32 *)((u8 *)arg0 + 0x30);
        } while (i != sp10);
    }
}
