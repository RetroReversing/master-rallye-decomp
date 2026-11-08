void func_0040AF58(void);
void func_0040AFA0(s32);

typedef struct {
    u8 pad[0x10];
    s32 unk10;
    void *unk14;
    s32 unk18;
    u8 pad2[0x24];
} Entry05818;

typedef struct {
    s32 unk0;
    Entry05818 *unk4;
    s32 unk8;
} Pool05818;

void *func_00405818(Pool05818 *arg0) {
    s32 count;
    s32 i;
    Entry05818 *cur;

    func_0040AF58();
    count = arg0->unk8;
    i = 0;
    cur = arg0->unk4;
    if (count > 0) {
        while (1) {
            if (!(cur->unk10 & 1)) {
                s32 tmp;
                cur->unk10 = (i << 16) | 5;
                tmp = arg0->unk0;
                tmp++;
                arg0->unk0 = tmp;
                if (tmp == 1) {
                    tmp = 2;
                    arg0->unk0 = tmp;
                }
                cur->unk14 = cur;
                cur->unk18 = tmp;
                func_0040AFA0(count);
                return cur;
            }
            i++;
            cur++;
            if (i >= count) break;
        }
    }
    func_0040AFA0(count);
    return 0;
}
