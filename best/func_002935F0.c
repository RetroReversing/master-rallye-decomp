extern s32 func_00292A48(void *, void *);

typedef struct S_935F0 {
    s32 *unk0;
    s32 *unk4;
} S_935F0;

void func_002935F0(void *arg0, S_935F0 *arg1) {
    s32 *cur;
    s32 *end;
    s32 count;

    if (arg1 == 0) return;
    end = arg1->unk4;
    cur = arg1->unk0;
    count = (s32)(end - cur);
    if (count == 0) return;
    if (cur == end) return;
    do {
        s32 obj = *cur;
        cur++;
        *(s32 *)(obj + 0x24) = func_00292A48(arg0, (void *)obj);
    } while (cur != arg1->unk4);
}

extern void func_00292F28(void *, u32);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

void func_002932E8(void *arg0, u32 *arg1) {
    s32 idx = (s32)*arg1;
    s32 *base = *(s32 **)arg0;
    s32 count = (s32)(*(s32 **)((u8 *)arg0 + 4) - base);
    if ((u32)idx < (u32)count) {
        void *elem = (void *)base[idx];
        if (elem != 0) {
            s32 *p;
            s32 n;
            func_00292F28(elem, (u32)idx);
            p = *(s32 **)elem;
            n = (s32)(*(s32 **)((u8 *)elem + 8) - p);
            if (n != 0) {
                if ((n << 2) != 0) {
                    func_002B2028(p);
                } else {
                    *p = D_0040E618[-1];
                    D_0040E618[-1] = (u32)p;
                }
            }
            D_002AD390(elem);
        }
        base[idx] = 0;
    }
}

void *func_002932A8(void *arg0) {
    void **cur = *(void ***)arg0;
    void **end = *(void ***)((u8 *)arg0 + 4);
    void **tmp;
    void *v;

    if (cur == end) {
        return 0;
    }
    tmp = end;
    v = *cur;
loop:
    if (v != 0) {
        return v;
    }
    cur++;
    if (cur != tmp) {
        v = *cur;
        goto loop;
    }
    return 0;
}
