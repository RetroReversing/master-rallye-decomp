extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

typedef struct S_func_003401F0_arg0 {
    s8 unk_00;
    s8 unk_01;
    s8 unk_02;
    s8 unk_03;
} S_func_003401F0_arg0;

void func_00340230(S_func_003401F0_arg0 *arg0, f32 arg1) {
    s32 v;
    s32 max = 0xFE;

    v = (s32)(arg1 * 255.0f);
    if (v < 2) {
        v = 2;
    } else if (max < v) {
        v = max;
    }
    arg0->unk_01 = (s8)v;
}

void func_003401F0(S_func_003401F0_arg0 *arg0, f32 arg1) {
    s32 v;
    s32 max = 0xFE;

    v = (s32)(arg1 * 255.0f);
    if (v < 2) {
        v = 2;
    } else if (max < v) {
        v = max;
    }
    arg0->unk_00 = (s8)v;
}

extern void func_002B2028(void *);
extern u32 D_0040E618[];

typedef struct S_0042DD70 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} S_0042DD70;

extern S_0042DD70 D_0042DD70;

void func_0033FEC8(s32 arg0, s32 arg1) {
    S_0042DD70 *p = &D_0042DD70;
    if (arg1 != 0xFFFF) {
        return;
    }
    if (arg0 != 0) {
        p->unk0 = 0;
        p->unk8 = 0;
        p->unk4 = 0;
        return;
    }
    {
        u32 cur = p->unk0;
        u32 end = p->unk4;
        if (cur < end) {
            do {
                cur += 0x40;
            } while (cur < end);
        }
        {
            u32 begin = p->unk0;
            s32 count = (s32)(p->unk8 - begin) >> 6;
            if (count != 0) {
                s32 size = count << 6;
                if (size != 0) {
                    func_002B2028((void *)begin);
                    return;
                }
                *(u32 *)begin = D_0040E618[-1];
                D_0040E618[-1] = begin;
            }
        }
    }
}
