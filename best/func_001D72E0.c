extern const char D_00476118[];
extern void **D_004262C8;
extern void func_003F9698(void *, s32, s32 *, void **);
extern void *D_004767A8;
extern u32 D_004761B0[];
extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001D72E0(void) {
    void **head;
    s32 count;
    void **node;
    head = D_004262C8;
    count = 0;
    node = *head;
    if (node != head) {
        do {
            node = *node;
            count = count + 1;
        } while (node != head);
    }
    func_003F9698((void *)&D_00476118, count, &count, head);
}

void func_001D7488(void *p, s32 flags) {
    if (flags & 1) {
        *(u32 *)((u8 *)p + 0xC) = (u32)D_004761B0;
        D_002AD390(p);
    }
}

void func_001D7610(void *p, s32 flags) {
    s32 *start1;
    s32 *end1;
    s32 n1;
    s32 *start2;
    s32 *end2;
    s32 n2;
    start1 = *(s32 **)((u8 *)p + 0xC);
    end1 = *(s32 **)((u8 *)p + 0x14);
    n1 = (s32)((u8 *)end1 - (u8 *)start1) >> 2;
    if (n1 != 0) {
        if ((s32)(n1 << 2) != 0) {
            func_002B2028(start1);
        } else {
            *start1 = D_0040E618[-1];
            D_0040E618[-1] = (u32)start1;
        }
    }
    start2 = *(s32 **)p;
    end2 = *(s32 **)((u8 *)p + 0x8);
    n2 = (s32)((u8 *)end2 - (u8 *)start2) >> 2;
    if (n2 != 0) {
        if ((s32)(n2 << 2) != 0) {
            func_002B2028(start2);
        } else {
            *start2 = D_0040E618[-1];
            D_0040E618[-1] = (u32)start2;
        }
    }
    if (flags & 1) {
        D_002AD390(p);
    }
}
