extern s32 D_0043C3B0[12];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_002F99E8(s32, s32, void *);

s32 func_002F9AD0(void *arg0) {
    s32 temp_16;
    s32 temp_6;
    void *temp_5;
    void *temp_5_2;

    temp_5 = *(void **)((u8 *)arg0 + 0x60);
    temp_5_2 = (u8 *)temp_5 + (*(s32 *)((u8 *)temp_5 + 0x18) * 0x10);
    temp_6 = *(s32 *)((u8 *)arg0 + 0x78) - *(s32 *)((u8 *)temp_5_2 + 0);
    *(s32 *)((u8 *)arg0 + 0x78) = temp_6;
    temp_16 = *(s32 *)((u8 *)temp_5_2 + 0xC);
    func_002F99E8(temp_16, temp_6, arg0);
    return temp_16;
}

void func_002FBC08(void *a0, void **a1, void *a2);

typedef struct Node97A8 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    struct Node97A8 *unk1C;
    struct Node97A8 *unk20;
} Node97A8;

typedef struct Vec97A8 {
    void **begin; /* 0x4C */
    void **cur;   /* 0x50 */
    void **end;   /* 0x54 */
} Vec97A8;

void func_002F97A8(void *arg0, Node97A8 *arg1) {
    Node97A8 *sp0 = arg1;
    if (arg1->unk1C != 0) {
        func_002F97A8(arg0, arg1->unk1C);
    }
    if (sp0->unk20 != 0) {
        func_002F97A8(arg0, sp0->unk20);
    }
    if (sp0->unk10 == 4) {
        Vec97A8 *v = (Vec97A8 *)((u8 *)arg0 + 0x4C);
        if (v->cur != v->end) {
            if (v->cur != 0) {
                *v->cur = sp0;
            }
            v->cur = v->cur + 1;
        } else {
            func_002FBC08(v, v->cur, &sp0);
        }
    }
}

void func_003768A8(void *arg0);

void func_002F8D28(void *arg0) {
    s32 i = 0;
    s32 count = *(s32 *)((u8 *)arg0 + 0x30);
    s32 sp10 = count;
    if (count != 0) {
        do {
            void *arr = *(void **)((u8 *)arg0 + 0x24);
            void *elem = (u8 *)arr + i * 0x12C;
            sp10 = i;
            if (*(s32 *)((u8 *)elem + 0x120) == 0) {
                func_003768A8(elem);
            }
            i = i + 1;
            sp10 = *(s32 *)((u8 *)arg0 + 0x30);
        } while (i != sp10);
    }
}
