extern void func_002B2028(void *);
extern u32 D_0040E618[];

typedef struct S_0042DD70 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} S_0042DD70;

extern S_0042DD70 D_0042DD70;

void func_0033FEC8(s32 arg0, s32 arg1) {
    char pad[16] __attribute__((aligned(16)));
    (void)pad;
    if (arg1 != 0xFFFF) {
        return;
    }
    if (arg0 != 0) {
        D_0042DD70.unk0 = 0;
        D_0042DD70.unk4 = 0;
        D_0042DD70.unk8 = 0;
        return;
    } else {
        S_0042DD70 *p = &D_0042DD70;
        u32 cur = p->unk0;
        u32 end = p->unk4;
        if (cur < end) {
            do {
                cur += 0x40;
            } while (cur < end);
        }
        {
            u32 cap = p->unk8;
            u32 begin = p->unk0;
            s32 n = (s32)(cap - begin) >> 6;
            if (n != 0) {
                if ((n << 6) != 0) {
                    func_002B2028((void *)begin);
                    return;
                } else {
                    *(u32 *)begin = D_0040E618[-1];
                    D_0040E618[-1] = begin;
                }
            }
        }
    }
}
