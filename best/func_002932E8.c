extern void func_00292F28(void *, u32);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

typedef struct S_932E8_Inner {
    void *unk0;
    u8 pad4[4];
    void *unk8;
} S_932E8_Inner;

typedef struct S_932E8 {
    S_932E8_Inner **unk0;
    S_932E8_Inner **unk4;
} S_932E8;

void func_002932E8(S_932E8 *arg0, u32 *arg1) {
    s32 idx = (s32)*arg1;
    s32 count = (s32)((u8 *)arg0->unk4 - (u8 *)arg0->unk0) >> 2;
    if ((u32)idx < (u32)count) {
        S_932E8_Inner *elem = arg0->unk0[idx];
        if (elem != NULL) {
            func_00292F28(elem, (u32)idx);
            {
                void *p = elem->unk0;
                s32 n = (s32)((u8 *)elem->unk8 - (u8 *)p) >> 2;
                if (n != 0) {
                    if ((n << 2) != 0) {
                        func_002B2028(p);
                    } else {
                        *(u32 *)p = D_0040E618[-1];
                        D_0040E618[-1] = (u32)p;
                    }
                }
            }
            D_002AD390(elem);
        }
        arg0->unk0[idx] = 0;
    }
}

void *func_002932A8(void *arg0) {
    void **end = *(void ***)((u8 *)arg0 + 4);
    void **cur = *(void ***)arg0;
    void **tmp;
    void *v;

    tmp = end;
    if (cur == end) return 0;
    v = *cur;
    do {
        if (v != 0) return v;
        cur++;
        if (cur == tmp) break;
        v = *cur;
    } while (1);
    return 0;
}
