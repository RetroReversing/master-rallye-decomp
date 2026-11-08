s32 func_0023FBB0(void *, void *);
void func_0023F7D8(void *);

s32 func_0025AD90(void *arg0, void *arg1) {
    s32 i = 0;
    void **base;
    s32 count;
    s32 ret;
    func_0023F7D8(arg1);
    count = (s32)(*(void **)((unsigned char *)arg1 + 4) - *(void **)((unsigned char *)arg1 + 0)) >> 2;
    if (count <= 0) {
        return 1;
    }
    base = *(void **)((unsigned char *)arg1 + 0);
    do {
        void *elem = base[i];
        ret = func_0023FBB0(*(void **)((unsigned char *)arg0 + 4), *(void **)((unsigned char *)elem + 0xC));
        if (ret == 0) {
            return 0;
        }
        i++;
    } while (i < count);
    return 1;
}
