void func_002BE050(void *arg0, void **arg1, void *arg2) {
    void *temp;

    (void)arg0;
    *(void **)((char *)arg2 + 4) = 0;
    temp = *arg1;
    *(void **)arg2 = temp;
    if (temp != 0) {
        *(void **)((char *)temp + 4) = arg2;
    }
    *arg1 = arg2;
}

void func_002BE070(void *arg0, void **arg1, void *arg2) {
    void *prev;
    void *next;

    (void)arg0;
    prev = *(void **)((char *)arg2 + 4);
    next = *(void **)arg2;
    if (prev != 0) {
        *(void **)prev = next;
    } else {
        *arg1 = next;
    }
    next = *(void **)arg2;
    if (next != 0) {
        prev = *(void **)((char *)arg2 + 4);
        *(void **)((char *)next + 4) = prev;
    }
}

void *func_002BE0A8(void *arg0, void **arg1, s32 arg2) {
    void *cur;
    s32 val;

    (void)arg0;
    cur = *arg1;
    while (cur != 0) {
        val = *(s32 *)((char *)cur + 8);
        if (val == arg2) {
            break;
        }
        cur = *(void **)cur;
    }
    return cur;
}
