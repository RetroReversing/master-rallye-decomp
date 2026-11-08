/* func_00233750 */
s32 func_00233750(void *arg0, s32 arg1) {
    s32 *p = *(s32 **)((u8 *)arg0 + 0xC);
    s32 *end = *(s32 **)((u8 *)arg0 + 0x10);
    s32 n = ((s32)end - (s32)p) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            i++;
            if (arg1 == *p) return 1;
            p++;
        } while (i < n);
    }
    return 0;
}

/* func_00233790 */
s32 func_00233790(void *arg0, s32 arg1) {
    s32 *p = *(s32 **)((u8 *)arg0 + 0x18);
    s32 *end = *(s32 **)((u8 *)arg0 + 0x1C);
    s32 n = ((s32)end - (s32)p) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            i++;
            if (arg1 == *p) return 1;
            p++;
        } while (i < n);
    }
    return 0;
}

/* func_00233708 */
s32 func_00233708(void *arg0, s32 arg1) {
    s32 *p = *(s32 **)arg0;
    s32 *end = *(s32 **)((u8 *)arg0 + 4);
    s32 n = ((s32)end - (s32)p) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            i++;
            if (arg1 == *p) return 1;
            p++;
        } while (i < n);
    }
    return 0;
}

/* func_002342A0 */
extern void *D_0047A450;
extern void func_002364D0(void *, s32);
extern void func_00236F50(void *, s32);

void func_002342A0(void *arg0, s32 arg1) {
    *(void **)arg0 = &D_0047A450;
    func_002364D0((u8 *)arg0 + 4, 2);
    func_00236F50(arg0, arg1);
}
