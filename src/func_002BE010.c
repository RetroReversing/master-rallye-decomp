void func_002BE050(void **arg1, void *arg2) {
    void *temp;

    *(void **)((char *)arg2 + 4) = 0;
    temp = *arg1;
    *(void **)arg2 = temp;
    if (temp != 0) {
        *(void **)((char *)temp + 4) = arg2;
    }
    *arg1 = arg2;
}

void func_002BE070(void **arg1, void *arg2) {
    void *prev;
    void *next;

    prev = *(void **)((char *)arg2 + 4);
    next = *(void **)arg2;
    if (prev != 0) {
        *(void **)prev = next;
    } else {
        *arg1 = next;
    }
    next = *(void **)arg2;
    if (next != 0) {
        *(void **)((char *)next + 4) = prev;
    }
}

void func_002BE010(void *arg0, void *arg1) {
    char *v;

    if (arg1 != 0) {
        v = *(char **)((char *)arg1 + 4);
        *(s32 *)arg1 = *(s32 *)arg1 + 1;
        ((void (*)(void *, void *))*(void **)(v + 0x14))((char *)arg1 + *(s16 *)(v + 0x10), arg0);
    }
}

void *func_002BE0A8(void *arg0, void **arg1, s32 arg2) {
    void *cur;

    cur = *arg1;
    while (cur != 0) {
        if (*(s32 *)((char *)cur + 8) == arg2) {
            break;
        }
        cur = *(void **)cur;
    }
    return cur;
}
