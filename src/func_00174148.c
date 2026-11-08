extern void func_001745E8(void *arg0, s32 arg1);
extern void func_00178028(void *arg0);
extern void func_00267F60(void *arg0);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001666D0(void *arg0, void *arg1) {
    s32 n1;
    s32 n2;
    s32 n;
    s32 i;
    void **arr1;
    u8 *arr2;
    f32 *arr8;

    n1 = (*(s32 *)((u8 *)arg1 + 4) - *(s32 *)((u8 *)arg1 + 0)) >> 2;
    n2 = (*(s32 *)((u8 *)arg0 + 0x30) - *(s32 *)((u8 *)arg0 + 0x2C)) >> 5;
    n = (u32)n2 < (u32)n1 ? n2 : n1;
    i = 0;
    if (n > 0) {
        do {
            void *obj;

            arr1 = *(void ***)((u8 *)arg1 + 0);
            arr2 = *(u8 **)((u8 *)arg0 + 0x2C);
            obj = arr1[i];
            *(f32 *)((u8 *)obj + 0xA4) = *(f32 *)(arr2 + (i << 5) + 4);
            *(f32 *)((u8 *)obj + 0xA8) = *(f32 *)(arr2 + (i << 5) + 8);
            *(f32 *)((u8 *)obj + 0xAC) = *(f32 *)(arr2 + (i << 5) + 12);
            arr8 = *(f32 **)((u8 *)arg0 + 8);
            *(f32 *)((u8 *)obj + 0x24) = arr8[i];
            i++;
        } while (i < n);
    }
}

void func_00174148(void *arg0) {
    func_001745E8(arg0, 1);
    func_00174318(arg0);
}

void func_00174318(void *arg0) {
    s32 count;
    s32 i;
    void **base;

    count = (*(s32 *)((u8 *)arg0 + 0x18) - *(s32 *)((u8 *)arg0 + 0x14)) >> 2;
    i = 0;
    if (count > 0) {
        base = *(void ***)((u8 *)arg0 + 0x14);
        do {
            func_00178028(base[i]);
            i++;
        } while (i < count);
    }

    count = (*(s32 *)((u8 *)arg0 + 0x24) - *(s32 *)((u8 *)arg0 + 0x20)) >> 2;
    i = 0;
    if (count > 0) {
        base = *(void ***)((u8 *)arg0 + 0x20);
        do {
            func_00267F60(base[i]);
            i++;
        } while (i < count);
    }
}
