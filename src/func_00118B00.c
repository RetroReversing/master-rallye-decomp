extern u32 D_0040E618[];
extern void *D_0044DB88;
extern void *D_0044DBA0;
extern void func_00152688(void *p);
extern void func_002B2028(void *p);
extern void D_002AD390(void *p);

void func_00118B00(void *p, s32 flags) {
    s32 *begin1;
    s32 *end1;
    s32 n1;
    s32 *begin2;
    s32 *end2;
    s32 n2;
    *(u32 *)((u8 *)p + 0x24) = (u32)&D_0044DB88;
    func_00152688(p);
    *(u32 *)((u8 *)p + 0x20) = (u32)&D_0044DBA0;
    begin1 = *(s32 **)((u8 *)p + 0xC);
    end1 = *(s32 **)((u8 *)p + 0x14);
    n1 = (s32)((u8 *)end1 - (u8 *)begin1) >> 2;
    if (n1 != 0) {
        if ((s32)(n1 << 2) != 0) {
            func_002B2028(begin1);
        } else {
            *begin1 = D_0040E618[-1];
            D_0040E618[-1] = (u32)begin1;
        }
    }
    end2 = *(s32 **)((u8 *)p + 0x8);
    begin2 = *(s32 **)p;
    n2 = (s32)((u8 *)end2 - (u8 *)begin2) >> 2;
    if (n2 != 0) {
        if ((s32)(n2 << 2) != 0) {
            func_002B2028(begin2);
        } else {
            *begin2 = D_0040E618[-1];
            D_0040E618[-1] = (u32)begin2;
        }
    }
    if (flags & 1) {
        D_002AD390(p);
    }
}
