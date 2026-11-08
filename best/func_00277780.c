extern int *func_001C67D0(int);
extern void func_00277408(int, int, int, void *, int);
extern void func_003F9698(char *, int);
extern char D_0047A020[];

typedef struct {
    int pad0[2];
    int unk8;
    int unkC;
    int unk10;
    int *unk14;
    int unk18;
} S_00277780;

void func_00277780(S_00277780 *arg0, int arg1, int arg2) {
    int spval;
    if (*func_001C67D0(arg0->unk8) == 0) {
        int *base = &arg0->unk10;
        int *cur = (int *)base[1];
        if (base[0] != (int)cur) {
            int val;
            cur--;
            val = *cur;
            spval = val;
            base[1] = (int)cur;
            func_00277408(arg0->unk8, arg1, arg2, &spval, val);
        } else {
            func_003F9698(D_0047A020, arg1);
        }
    }
}
