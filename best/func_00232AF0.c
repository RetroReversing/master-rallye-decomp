/* func_002329D8 */
extern s32 func_00231AA8(void *, void *);

void *func_002329D8(void *arg0, void *arg1) {
    void **headp = *(void ***)((u8 *)arg0 + 0x14);
    void *cur = *headp;
    void *obj;
    if (cur != headp) {
        obj = *(void **)((u8 *)cur + 8);
        do {
            if (func_00231AA8(obj, arg1) != 0) return obj;
            cur = *(void **)cur;
        } while (cur != *(void ***)((u8 *)arg0 + 0x14) && (obj = *(void **)((u8 *)cur + 8), 1));
    }
    return 0;
}

/* func_00232AF0 */
s32 func_00232AF0(void *arg0) {
    s32 count;
    void **head;
    void *cur;
    s32 *p;

    head = *(void ***)((u8 *)arg0 + 0x18);
    count = 0;
    cur = *head;
    if (cur != head) {
        p = &count;
        do {
            s32 v = *p;
            cur = *(void **)cur;
            v++;
            *p = v;
        } while (cur != head);
    }
    return count - 2;
}

/* func_00233180 */
void *func_00233180(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *q = p + 0x0C;
    u8 *r = p + 0x18;

    *(s32 *)(p + 0x00) = 0;
    *(s32 *)(p + 0x04) = 0;
    *(s32 *)(p + 0x08) = 0;
    *(s32 *)(p + 0x0C) = 0;
    *(s32 *)(q + 0x08) = 0;
    *(s32 *)(q + 0x04) = 0;
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(r + 0x08) = 0;
    *(s32 *)(r + 0x04) = 0;
    return arg0;
}

/* func_00233450 */
extern s32 func_0024C4B8(void *, void *, void *);

void *func_00233450(void *arg0, void *arg1, void *arg2) {
    s32 n = (*(s32 *)((u8 *)arg0 + 0x10) - *(s32 *)((u8 *)arg0 + 0x0C)) >> 2;
    s32 i = 0;
    if (n > 0) {
        s32 *base = *(s32 **)((u8 *)arg0 + 0x0C);
        do {
            void *elem = *(void **)((u8 *)base + (i << 2));
            if (func_0024C4B8(elem, arg1, arg2) != 0) return elem;
            i++;
        } while (i < n);
    }
    return 0;
}
