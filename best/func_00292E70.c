extern void *D_002AD408(s32);
extern void *func_00292330(void *, void *);
extern void func_002926E0(void *, void *);
extern s32 func_001D4010(s32);
extern void func_001D4040(void *, s32);

void *func_00292E70(void *arg0) {
    s32 *it;
    s32 *end;
    void *res;
    void *elem;
    s32 tmp[4];

    res = D_002AD408(0xC);
    it = *(s32 **)arg0;
    ((s32 *)res)[0] = 0;
    ((s32 *)res)[1] = 0;
    ((s32 *)res)[2] = 0;
    end = *(s32 **)((u8 *)arg0 + 4);
    if (it != end) {
        do {
            elem = func_00292330(D_002AD408(0xE0), res);
            func_002926E0(elem, (void *)*it);
            func_001D4040(tmp, func_001D4010(((s32 *)*it)[8]));
            *(s32 *)((u8 *)elem + 0x20) = tmp[0];
            it++;
        } while (it != ((s32 *)((u8 *)arg0 + 4))[0] /* not quite */);
    }
    return res;
}
