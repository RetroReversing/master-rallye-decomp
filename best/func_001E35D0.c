typedef struct {
    void *begin;
    int unk4;
    void *unk0;
} S1E35D0;
int func_001E35D0(S1E35D0 *arg0) {
    void **p = (void**)arg0->unk0;
    void **end = (void**)arg0->unk4;
    int count = 0;
    if (p != end) {
        do {
            if (((int)*(int*)(p + 2)) != 0xC) {
                count++;
            }
            p = (void**)((int)p + 0x1C);
        } while (p != end);
    }
    return count;
}
