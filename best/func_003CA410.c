extern s32 D_0049B9D0;
void *func_003CA3B0(s32 arg0, s32 arg1);
void *func_004037D8(void *arg0, s32 arg1);
void *func_003F931C(s32 arg0, void *arg1, s32 arg2);

void func_003D7B00(void *arg0, s32 arg1) {
    if (!*(s32 *)arg0) {
        arg1 |= 4;
    }
    *(u8 *)(arg0 + 0x1A) = arg1;
}

void *func_003CA3B0(s32 arg0, s32 arg1) {
    void *temp_16;
    temp_16 = (void *)((*(s32 *)((u8 *)&D_0049B9D0 + arg1 * 0x1C + arg0 * 0x70)));
    func_004037D8(temp_16, (s32)temp_16 + 0x100);
    return (void *)((s32)temp_16 + ((*(s32 *)(temp_16 + 0x58) < *(s32 *)(temp_16 + 0xD8)) << 7));
}

void *func_003CA410(s32 arg0, s32 arg1) {
    void *temp;
    void *res = NULL;
    s32 *entry = (s32 *)((u8 *)&D_0049B9D0 + arg1 * 0x1C + arg0 * 0x70);
    if (entry[4]) { /* +0x10 */
        temp = func_003CA3B0(arg0, arg0);
        res = (void *)(*(s32 *)(temp + 0x58));
    }
    return res;
}

void *func_003CA460(s32 arg0, s32 arg1, s32 arg2) {
    void *temp;
    void *res = NULL;
    s32 *entry = (s32 *)((u8 *)&D_0049B9D0 + arg1 * 0x1C + arg0 * 0x70);
    if (entry[4]) { /* +0x10 */
        temp = func_003CA3B0(arg0, arg0);
        func_003F931C(arg2, temp, *(s32 *)(temp + 0x60));
        res = (void *)(*(s32 *)(temp + 0x60));
    }
    return res;
}
