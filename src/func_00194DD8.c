extern int func_001E4280(void);
extern void *func_001E3820(int, void *, void *);
extern void func_0029EC50(void *, int, int, int, float);
extern char D_0040E698[];

int func_00194DD8(int arg0, int arg1, int arg2) {
    int ret = -1;
    switch (arg1) {
    case 0:
        ret = arg2 + 0x3C;
        break;
    case 1:
        ret = arg2 + 0x47;
        break;
    case 2:
        ret = arg2 + 0x52;
        break;
    default:
        break;
    }
    return ret;
}

void func_00144CA8(char *arg0, char *arg1) {
    if (*(int *)(arg1 + 0x4C) == 0) {
        return;
    }
    {
        void *found = func_001E3820(func_001E4280(), arg0 + 0x24, D_0040E698);
        if (found != 0) {
            char *obj = *(char **)(arg1 + 4);
            if (obj != 0) {
                int val = *(int *)(*(char **)((char *)found + 8) + 4);
                if (*(int *)(arg0 + 0x28) != val) {
                    float f0 = *(float *)(arg0 + 0x14);
                    float f1 = *(float *)(arg0 + 0x10);
                    float sp_f0 = f0;
                    int sp_i = 0;
                    *(int *)(arg0 + 0x28) = val;
                    *(float *)(&sp_f0 - 1) = f1; /* wrong idea, fix below */
                }
            }
        }
    }
}
