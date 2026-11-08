typedef struct S_2660C8 {
    s32 unk0;
    s32 pad4, pad8, padC, pad10, pad14, pad18;
    s32 unk1C;
    s32 pad20;
    s32 unk24;
    s32 unk28;
    s32 pad2C;
    s32 unk30;
} S_2660C8;

void func_002660C8(S_2660C8 *arg0) {
    arg0->unk1C = 0;
    arg0->unk0 = 1;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    arg0->unk30 = 0;
}

void func_00268550(int *arg0, s32 arg1) {
    if (arg1 == 1) {
        arg0[7] = 1;
        return;
    }
    if (arg1 != 0) {
        arg0[7] = 1;
        return;
    }
    arg0[7] = 0;
}

typedef struct S_2634C0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} S_2634C0;

S_2634C0 *func_002634C0(S_2634C0 *arg0) {
    S_2634C0 *ret = arg0;
    S_2634C0 *p = (S_2634C0 *)((char *)arg0 + 0x10);

    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk10 = 0;
    p->unk8 = 0;
    p->unk4 = 0;
    arg0->unkC = 40.0f;
    return ret;
}

typedef struct Elem20 {
    s32 id;
    f32 f0, f1, f2, f3, f4, f5, f6;
} Elem20;

typedef struct Container634 {
    Elem20 *begin;
    Elem20 *end;
} Container634;

s32 func_00263428(Container634 *arg0, s32 *arg1) {
    Elem20 *cur;
    Elem20 *end;
    s32 idx;
    s32 target;
    Elem20 tmp;
    s32 *curw;

    end = arg0->end;
    cur = arg0->begin;
    idx = 0;
    if (cur == end) {
        return -1;
    }
    target = *arg1;
    curw = (s32 *)((char *)cur + 4);
    do {
        s32 id = curw[-1];
        tmp.id = id;
        tmp.f0 = *(f32 *)(curw + 0);
        tmp.f1 = *(f32 *)(curw + 1);
        tmp.f2 = *(f32 *)(curw + 2);
        tmp.f3 = *(f32 *)(curw + 3);
        tmp.f4 = *(f32 *)(curw + 4);
        tmp.f5 = *(f32 *)(curw + 5);
        tmp.f6 = *(f32 *)(curw + 6);
        if (id == target) {
            return idx;
        }
        idx++;
        cur++;
        curw += 8;
    } while (cur != end);
    return -1;
}
