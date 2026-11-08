extern s32 func_003C8B08(void *, s32);
extern s32 func_003C8710(void *, s32, s32, s16);
extern s32 func_003C8798(void *, s32, s32, s16);
extern s32 func_002F8BE8(void *, int *, int);

void func_002EF7D0(void *p, s32 a1, s32 a2) {
    s32 v4 = 0, v10 = 0, v6, v5, v3, v8, v7;
    u64 result;
    if (*(u32*)((u8*)p + 0x295C) == 3) { v4 = 0x10; v10 = 0x12; }
    v6 = *(u32*)((u8*)p + 0x2940);
    v4 = v4 + a1;
    v7 = v10 + a2;
    v8 = 0xA00 / v6;
    v3 = v6 + 0x9FF;
    v5 = *(u32*)((u8*)p + 0x2944);
    v7 = (v7 + 0x32) << 12;
    v3 = v3 / v6;
    v4 = v4 * v8;
    result = (u64)(v4 + 0x27C) | (u64)v7 | ((u64)(v3 - 1) << 23) | (((u64)((v5 << 1) - 1)) << 44) | ((u64)0x9FF0 << 28);
    *(u64*)((u8*)p + 0x2618) = result;
    *(u64*)((u8*)p + 0x2640) = result;
}

void func_002F1868(void *a0, s32 a1) {
    s32 v18, v4;
    s16 v16;
    v18 = a1 & 1;
    func_003C8B08((u8*)a0 + 0x2600, v18);
    v16 = (s16)(1 - v18);
    v4 = (u32)((u8*)a0 + 0x27D0);
    if (!v18) v4 = (u32)((u8*)a0 + 0x2660);
    func_003C8710((void*)v4, 0x800, 0x800, v16);
    v4 = (u32)((u8*)a0 + 0x2850);
    if (!v18) v4 = (u32)((u8*)a0 + 0x26E0);
    func_003C8798((void*)v4, 0x800, 0x800, v16);
}

void func_002F8C28(void *arg0) {
    s32 i, count, cur;
    i = 0;
    count = *(u32*)((u8*)arg0 + 0x30);
    cur = count;
    if (count != 0) {
        do {
            s32 *arr = *(s32**)((u8*)arg0 + 0xC);
            cur = arr[i];
            func_002F8BE8(arg0, &cur, i * 4);
            i++;
            cur = count;
        } while (i != count);
    }
}
