extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void *D_00437E18[];
extern void *D_0047D9A8;

void func_003D1A88(void **arg0, s32 arg1) {
    void *p = arg0[1];
    void *q = (void *)((char *)p - 0x10);
    s32 cnt = *(s32 *)((char *)q + 8);
    cnt--;
    *(s32 *)((char *)q + 8) = cnt;
    if (cnt == 0) {
        s32 sz = *(s32 *)((char *)q + 4);
        if ((unsigned)(sz + 0x10) >= 0x81) {
            func_002B2028(q);
            goto done;
        } else {
            unsigned idx = ((unsigned)(sz + 0x17) >> 3) - 1;
            void **ent = &D_00437E18[idx];
            *(void **)((char *)p - 0x10) = ent[0];
            ent[0] = q;
        }
    }
done:
    arg0[0] = &D_0047D9A8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
