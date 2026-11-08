extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern s32 func_001D4010(void *);
extern s32 func_003FA580(void *, s32);

typedef struct S_93068 {
    void **unk0;
    void **unk4;
} S_93068;

void *func_00293068(S_93068 *arg0, void *arg1) {
    void **cur = arg0->unk0;
    void **end = arg0->unk4;
    if (cur != end) {
        do {
            void *obj = *cur;
            s32 v = func_001D4010((u8 *)obj + 0x20);
            if (func_003FA580(arg1, v) == 0) {
                return obj;
            }
            cur++;
        } while (cur != arg0->unk4);
    }
    return 0;
}

s32 func_00292FE8(S_93068 *arg0, void *arg1) {
    void **cur = arg0->unk0;
    void **end = arg0->unk4;
    if (cur != end) {
        do {
            void *obj = *cur;
            s32 v = func_001D4010((u8 *)obj + 0x20);
            if (func_003FA580(arg1, v) == 0) {
                return 1;
            }
            cur++;
        } while (cur != arg0->unk4);
    }
    return 0;
}

extern void func_00292928(void *);
extern void D_002AD390(void *);
extern void func_003F93CC(void *, void *, s32);

typedef struct S_92F28 {
    void **unk0;
    void **unk4;
} S_92F28;

void func_00292F28(S_92F28 *arg0) {
    void **cur = arg0->unk0;
    void **end = arg0->unk4;
    void **begin;
    void **old_end;

    if (cur != end) {
        do {
            void *elem = *cur;
            if (elem != 0) {
                u8 *p = (u8 *)elem + 0x20;
                if ((u8 *)elem != p) {
                    do {
                        p -= 8;
                        func_00292928(p);
                    } while ((u8 *)elem != p);
                }
                D_002AD390(elem);
            }
            cur++;
        } while (cur != arg0->unk4);
    }

    begin = arg0->unk0;
    old_end = arg0->unk4;
    func_003F93CC(begin, old_end, 0);
    arg0->unk4 = (void **)((u8 *)arg0->unk4 - ((u8 *)old_end - (u8 *)begin));
}
