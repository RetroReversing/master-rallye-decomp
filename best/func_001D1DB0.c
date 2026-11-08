extern s32 func_003FA9B8(s32);
extern s32 func_003FABD0(void *, s32, s32);
extern s32 func_001D1F58(void *);
extern s32 func_001D21D8(void);
extern void *D_00476780;
extern void D_002AD390(void *);
extern void *func_003F93CC(void *, void *, s32);

void func_001D1810(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 n, b, a;
    register s32 *a3 = arg1;
    void *p;
    n = *a3 + 1;
    *a3 = n;
    p = (void *)(arg0 + (*arg2) * 4);
    b = *(s32 *)((char*)p + 0x44);
    a = *(s32 *)((char*)p + 0x4C);
    if (n >= b + a)
        *a3 = b;
}

s32 func_001D1BC8(void *arg0, s32 arg1) {
    s32 n = func_003FA9B8(arg1);
    if (*(void **)((char*)arg0 + 4) >= *(void **)((char*)arg0 + 8))
        return 0;
    if (func_003FABD0(*(void **)((char*)arg0 + 4), arg1, n) != 0)
        return 0;
    *(void **)((char*)arg0 + 4) = (void *)((char*)(*(void **)((char*)arg0 + 4)) + n);
    func_001D1F58(arg0);
    return 1;
}

s32 func_001D1DB0(void *arg0, u8 *arg1, s32 arg2) {
    char *ptr;
    if (*(char **)((char*)arg0 + 4) >= *(char **)((char*)arg0 + 8))
        return 0;
    ptr = *(char **)((char*)arg0 + 4);
    if (*ptr != '"')
        return 0;
    *(char **)((char*)arg0 + 4) = ptr + 1;
    if (ptr[1] == '"')
        goto done;
    for (;;) {
        ptr = *(char **)((char*)arg0 + 4);
        if (ptr >= *(char **)((char*)arg0 + 8))
            return 0;
        if (arg2 <= 0)
            return 0;
        arg2--;
        *arg1 = (u8)*ptr;
        *(char **)((char*)arg0 + 4) = *(char **)((char*)arg0 + 4) + 1;
        arg1++;
        if (ptr[1] == '"')
            break;
    }
done:
    *arg1 = 0;
    *(char **)((char*)arg0 + 4) = *(char **)((char*)arg0 + 4) + 1;
    func_001D1F58(arg0);
    return 1;
}

void func_001D2040(void *arg0, s32 arg1) {
    void *p;
    void **begin, **end;
    s32 flag;
    p = func_001D21D8();
    *(void **)arg0 = &D_00476780;
    begin = *(void ***)p;
    end = *(void ***)((char*)p + 4);
    flag = arg1 & 1;
    if (begin != end) {
        do {
            if (*begin == arg0) {
                void **next = begin + 1;
                if (next != end)
                    func_003F93CC(begin, next, (((s32)end - (s32)next) >> 2) << 2);
                *(void **)((char*)p + 4) = (void **)((char*)end - 4);
                break;
            }
            begin++;
        } while (begin != end);
        flag = arg1 & 1;
    }
    if (flag)
        D_002AD390(arg0);
}
