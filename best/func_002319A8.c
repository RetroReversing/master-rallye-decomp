s32 func_002319A8(void *arg0, s32 arg1) {
    void *head = *(void **)((u8 *)arg0 + 0x30);
    void *cur = *(void **)head;
    if (cur != head) {
        do {
            if (*(s32 *)((u8 *)cur + 8) == arg1) return 1;
            cur = *(void **)cur;
        } while (cur != head);
    }
    return 0;
}
