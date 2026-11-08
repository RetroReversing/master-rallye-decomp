extern void func_00217220(void *, void *);
extern void func_00217598(void *, void *, int);

void func_002176B0(void *p, void *end) {
    if ((s32)(((u32)end - (u32)p) * 0xCCCCCCCDu) >> 4 >= 17) {
        void *q = (char *)p + 0x500;
        func_00217220(p, q);
        func_00217598(q, end, 0);
    } else {
        func_00217220(p, end);
    }
}
