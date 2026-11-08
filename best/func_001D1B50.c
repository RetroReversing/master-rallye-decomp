extern void *D_00476780;
extern void *D_00475C50;
extern void *func_001D21D8(void);
extern void func_001D78C0(void *, void *, void *);
extern void func_003F93CC(void *, void *, s32);
extern void D_002AD390(void *);
extern s32 func_001D1F58(void *);
extern s32 func_003FA9B8(s32);
extern s32 func_003FABD0(void *, s32, s32);
extern s32 func_003FA388(void *, void *, s32, s32 *);

/* func_001D1B50: parse a %f from the stream */
s32 func_001D1B50(void *arg0, s32 arg1) {
    if (*(char **)((char*)arg0 + 4) < *(char **)((char*)arg0 + 8)) {
        s32 n;
        if (func_003FA388(*(char **)((char*)arg0 + 4), &D_00475C50, arg1, &n) == 1) {
            *(char **)((char*)arg0 + 4) = *(char **)((char*)arg0 + 4) + n;
            func_001D1F58(arg0);
            return 1;
        }
    }
    return 0;
}

/* func_001D1BC8: parse via two helpers */
s32 func_001D1BC8(void *arg0, s32 arg1) {
    s32 n = func_003FA9B8(arg1);
    if (*(char **)((char*)arg0 + 4) < *(char **)((char*)arg0 + 8)) {
        if (func_003FABD0(*(char **)((char*)arg0 + 4), arg1, n) == 0) {
            *(char **)((char*)arg0 + 4) = *(char **)((char*)arg0 + 4) + n;
            func_001D1F58(arg0);
            return 1;
        }
    }
    return 0;
}

/* func_001D2040: remove this from singleton vector, optionally destroying */
void func_001D2040(void *arg0, s32 arg1) {
    *(void **)arg0 = (void *)&D_00476780;
    void *p = func_001D21D8();
    void **begin = *(void ***)p;
    void **end = *(void ***)((char*)p + 4);
    s32 flag = arg1 & 1;
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

/* func_001D1DB0: copy a quoted string from the stream */
s32 func_001D1DB0(void *arg0, u8 *arg1, s32 arg2) {
    if (*(char **)((char*)arg0 + 4) < *(char **)((char*)arg0 + 8)) {
        char *ptr = *(char **)((char*)arg0 + 4);
        if (*ptr != '"')
            return 0;
        ptr++;
        *(char **)((char*)arg0 + 4) = ptr;
        if (ptr[0] == '"')
            goto done;
        for (;;) {
            ptr = *(char **)((char*)arg0 + 4);
            if (!(ptr < *(char **)((char*)arg0 + 8)))
                return 0;
            if (arg2 <= 0)
                return 0;
            arg2--;
            *arg1 = (u8)*ptr;
            ptr++;
            *(char **)((char*)arg0 + 4) = ptr;
            arg1++;
            if (ptr[0] == '"')
                break;
        }
done:
        *arg1 = 0;
        (*(char **)((char*)arg0 + 4))++;
        func_001D1F58(arg0);
        return 1;
    }
    return 0;
}
