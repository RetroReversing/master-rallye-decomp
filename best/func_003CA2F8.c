extern s32 D_0049B9D0;
extern s32 D_0049B980;
extern s32 D_0049BBC0;
void *func_003CA3B0(s32 arg0, s32 arg1);
void *func_004037D8(void *arg0, s32 arg1);
void *func_003F931C(s32 arg0, void *arg1, s32 arg2);
s32 func_00405E90(void *a0, s32 a1, s32 a2, void *a3, s32 a4, void *a5, s32 a6, s32 a7, s32 a8);

void *func_003CA3B0(s32 arg0, s32 arg1) {
    void *temp_16;
    temp_16 = *(void **)((u8 *)&D_0049B9D0 + arg0 * 0x70 + arg1 * 0x1C);
    func_004037D8(temp_16, (s32)temp_16 + 0x100);
    if (*(s32 *)(temp_16 + 0x58) < *(s32 *)(temp_16 + 0xD8)) {
        return (void *)((s32)temp_16 + 0x80);
    }
    return temp_16;
}

void *func_003CA410(s32 arg0, s32 arg1) {
    void *res = NULL;
    s32 *entry = (s32 *)((u8 *)&D_0049B9D0 + arg0 * 0x70 + arg1 * 0x1C);
    if (entry[4]) {
        res = (void *)(*(s32 *)(func_003CA3B0(arg0, arg0) + 0x58));
    }
    return res;
}

void *func_003CA460(s32 arg0, s32 arg1, s32 arg2) {
    void *res = NULL;
    void *temp;
    s32 *entry = (s32 *)((u8 *)&D_0049B9D0 + arg0 * 0x70 + arg1 * 0x1C);
    if (entry[4]) {
        temp = func_003CA3B0(arg0, arg0);
        func_003F931C(arg2, temp, *(s32 *)(temp + 0x60));
        res = (void *)(*(s32 *)(temp + 0x60));
    }
    return res;
}

s32 func_003CA2F8(s32 arg0, s32 arg1) {
    s32 *entry = (s32 *)((u8 *)&D_0049B9D0 + arg0 * 0x70 + arg1 * 0x1C + 0x10);
    s32 res = 0;
    if (*entry) {
        D_0049BBC0 = 0xE;
        *(s32 *)((u8 *)&D_0049BBC0 + 4) = arg0;
        *(s32 *)((u8 *)&D_0049BBC0 + 8) = arg1;
        *(s32 *)((u8 *)&D_0049BBC0 + 0x10) = 1;
        if (func_00405E90(&D_0049B980, 1, 0, &D_0049BBC0, 0x80, &D_0049BBC0, 0x80, 0, 0) >= 0) {
            *entry = 0;
            return *(s32 *)((u8 *)&D_0049BBC0 + 0xC);
        }
        return 0;
    }
    return res;
}
