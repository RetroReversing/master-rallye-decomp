extern void *func_002B2028(void *);

extern u32 D_0040E618[];

typedef struct { void *unk0; s32 unk4; void *unk8; } Elem;

void func_003276C8(void *obj) {
    Elem *cur = *(Elem **)((char *)obj + 0);
    Elem *end = *(Elem **)((char *)obj + 4);
    s32 total = (s32)((char *)end - (char *)cur);
    Elem *top;
    Elem *e;
    s32 c;
    if ((u32)cur < (u32)end) {
        top = cur;
        do {
            s32 q = (s32)(u32)top->unk8;
            void *p = top->unk0;
            s32 n = (s32)((u32)q - (u32)p) >> 2;
            if (n != 0) {
                u32 sz = (u32)n << 2;
                if (sz != 0) {
                    func_002B2028(p);
                } else {
                    *(void **)p = (void *)D_0040E618[-1];
                    D_0040E618[-1] = (u32)p;
                }
            }
            top += 1;
        } while (top < end);
    }
    e = *(Elem **)((char *)obj + 4);
    c = *(s32 *)((char *)obj + 0x2C);
    *(Elem **)((char *)obj + 4) = (Elem *)((char *)e - total);
    *(s32 *)((char *)obj + 0x2C) = c + 1;
}
