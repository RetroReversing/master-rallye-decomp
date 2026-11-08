/* func_00200250 */
void func_00200250(void *arg0) {
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(f32 *)((char *)arg0 + 0x1C) = 1.0f;
    *(s32 *)((char *)arg0 + 0x08) = 1;
}

/* func_00201280 */
extern void func_00200870(void *);

void func_00201280(void *arg0) {
    s32 count;
    s32 i;
    void **p;

    count = *(s32 *)((char *)arg0 + 0x10);
    if (count > 0) {
        i = 0;
        p = (void **)arg0;
        do {
            func_00200870(p[i]);
            i++;
        } while (i < count);
    }
}

/* func_00201950 */
extern void func_00201990(void *, void *, void *, void *);
extern void func_00201D38(void *, void *);

void func_00201950(void *arg0, void *arg1, void *arg2, void *arg3) {
    func_00201990(arg0, arg1, arg2, arg3);
    func_00201D38(arg0, arg3);
}

/* func_00202000 */
s32 func_00202000(void *arg0, s32 arg1) {
    void **head;
    void **cur;

    head = *(void ***)((char *)arg0 + 0x6C);
    cur = (void **)*head;
    if (cur != head) {
        do {
            if ((s32)cur[2] == arg1) {
                return 1;
            }
            cur = (void **)*cur;
        } while (cur != head);
    }
    return 0;
}
