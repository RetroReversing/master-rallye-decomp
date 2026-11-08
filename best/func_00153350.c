extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void func_002B2028(void *);
extern void *func_00152D28(int, void *);
extern void *func_00153318(void *, void *, void *, int);

typedef struct Block {
    int unk0;
    int unk4;
    int unk8;
} Block;

static void *D_0040E618[16];

void func_00153350(Block *arg0, void *arg1, void *arg2) {
    if (arg0->unk4 != arg0->unk8) {
        if (arg0->unk4 != 0) {
            /* copy last block header */
        }
        arg0->unk4 += 8;
        /* shift */
        return;
    }
    /* grow */
}
