extern s32 func_003768A8(void *, s32 *, s32, s32);
extern s32 func_002F8BE8(void *, s32 *, s32);
extern s32 func_003F94D0(void *, s32);

void func_002F8CD8(void *arg0, s32 *arg1) {
    s32 n = *arg1;
    s32 *arr = *(s32 **)((u8 *)arg0 + 0);
    s32 *elem = (s32 *)((u8 *)arr + n * 4);
    s32 *base = *(s32 **)((u8 *)arg0 + 0x24);
    void *p = (u8 *)base + *elem * 0x12C;
    if (*(s32 *)((u8 *)p + 0x120) == 0) {
        func_003768A8(p, elem, base, 0x12C);
    }
}

s32 func_002F8C98(void *arg0, s32 *arg1) {
    s32 *arr = *(s32 **)((u8 *)arg0 + 0);
    s32 *base = *(s32 **)((u8 *)arg0 + 0x24);
    s32 *elem = (s32 *)((u8 *)arr + *arg1 * 4);
    s32 *p = (s32 *)((u8 *)base + *elem * 0x12C);
    s32 ret;
    if (p == 0) ret = 0;
    else ret = p[2];
    return ret;
}

void func_002F8C28(void *arg0) {
    s32 i = 0;
    s32 count = *(s32 *)((u8 *)arg0 + 0x30);
    s32 cur = count;
    if (count != 0) {
        do {
            s32 *arr = *(s32 **)((u8 *)arg0 + 0xC);
            cur = arr[i];
            func_002F8BE8(arg0, &cur, i * 4);
            i++;
            cur = count;
        } while (i != count);
    }
}

void func_003D1290(void *arg0, char *arg1) {
    func_003F94D0(arg0, *arg1);
}
