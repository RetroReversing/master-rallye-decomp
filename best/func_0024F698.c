/* func_0024F698 */
s32 func_0024F698(void *arg0) {
    s32 count = 0;
    void *head = *(void **)((char *)arg0 + 8);
    void *cur = *(void **)head;
    if (cur != head) {
        s32 *pcount = &count;
        void **pcur = &cur;
        void *phead = head;
        do {
            *pcount = *pcount + 1;
            *pcur = *(void **)*pcur;
        } while (*pcur != phead);
    }
    return count;
}
