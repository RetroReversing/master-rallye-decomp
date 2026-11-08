extern int D_002AD5A8(int);
extern void func_00277510(void *, int *, void *);

typedef struct {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int *unk14;
    int *unk18;
} S_002776D0;

void func_002776D0(S_002776D0 *arg0, int arg1) {
    int i;
    int spval;

    i = 0;
    arg0->unkC = D_002AD5A8(arg1 * arg0->unk4);
    if (arg1 > 0) {
        int *base = &arg0->unk10;
        do {
            int *cur = (int *)base[1];
            spval = arg0->unkC + i * arg0->unk4;
            if (cur != (int *)base[2]) {
                if (cur != 0) {
                    *cur = spval;
                }
                base[1] = (int)(cur + 1);
            } else {
                func_00277510(base, cur, &spval);
            }
            i++;
        } while (i < arg1);
    }
}
