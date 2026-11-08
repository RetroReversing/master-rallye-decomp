extern void func_00178028(void *arg0);
extern void func_00267F60(void *arg0);

void func_001666D0(void *arg0, void *arg1) {
    s32 i;
    s32 n;
    s32 n1;
    s32 n2;

    n1 = (*(s32 *)((u8 *)arg1 + 4) - *(s32 *)arg1) >> 2;
    n2 = (*(s32 *)((u8 *)arg0 + 0x30) - *(s32 *)((u8 *)arg0 + 0x2C)) >> 5;
    n = (u32)n2 < (u32)n1 ? n2 : n1;
    i = 0;
    if (n > 0) {
        do {
            void **arr1;
            u8 *arr2;
            void *obj;
            u8 *p;
            u8 *q;
            s32 off;

            arr1 = *(void ***)arg1;
            arr2 = *(u8 **)((u8 *)arg0 + 0x2C);
            off = i << 2;
            obj = ((void **)arr1)[i];
            p = arr2 + (i << 5);
            q = (u8 *)obj + 0xA4;
            *(f32 *)((u8 *)obj + 0xA4) = *(f32 *)(p + 4);
            *(f32 *)(q + 4) = *(f32 *)(p + 8);
            *(f32 *)(q + 8) = *(f32 *)(p + 12);
            *(f32 *)((u8 *)obj + 0x24) = *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 8) + off);
            i++;
        } while (i < n);
    }
}

void func_00174318(void *arg0) {
    s32 i;
    s32 count;

    count = (*(s32 *)((u8 *)arg0 + 0x18) - *(s32 *)((u8 *)arg0 + 0x14)) >> 2;
    i = 0;
    if (count > 0) {
        do {
            void **base = *(void ***)((u8 *)arg0 + 0x14);
            func_00178028(base[i]);
            i++;
        } while (i < count);
    }

    count = (*(s32 *)((u8 *)arg0 + 0x24) - *(s32 *)((u8 *)arg0 + 0x20)) >> 2;
    i = 0;
    if (count > 0) {
        do {
            void **base = *(void ***)((u8 *)arg0 + 0x20);
            func_00267F60(base[i]);
            i++;
        } while (i < count);
    }
}
