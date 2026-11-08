extern void func_001E2460(void *, int);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern int func_001E4280(void);
extern void *func_001E3820(int, void *, void *);
extern void func_0029EC50(void *, int, int, int, float);

extern char D_0044BC38[];
extern char D_0044BE80[];
extern char D_0044BE90[];
extern char D_0044BEA0[];
extern char D_0044BEB0[];
extern char D_0040E698[];

void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

int func_00194DD8(int arg0, int arg1, int arg2) {
    int var_3;

    if (arg1 != 1) {
        if (arg1 < 2) {
            if (arg1 != 0) {
                return -1;
            }
            var_3 = arg2 + 0x3C;
            goto block_9;
        }
        if (arg1 != 2) {
            return -1;
        }
        var_3 = arg2 + 0x52;
        goto block_9;
    }
    var_3 = arg2 + 0x47;
block_9:
    return var_3;
}

void func_00144F58(char *p, int u, int a) {
    int k[4];
    func_001E2460(k, a);
    func_001E25B0(k, D_0044BC38, p + 12);
    func_001E28F8(k, D_0044BE80, p + 16);
    func_001E28F8(k, D_0044BE90, p + 20);
    func_001E2470(k, D_0044BEA0, p + 24);
    func_001E2510(k, D_0044BEB0, p + 28);
}

void func_00144CA8(char *arg0, char *arg1) {
    if (*(int *)(arg1 + 0x4C) != 0) {
        void *temp_2 = func_001E3820(func_001E4280(), arg0 + 0x24, D_0040E698);
        if (temp_2 != NULL) {
            char *temp_3 = *(char **)(arg1 + 4);
            int temp_7 = *(int *)(*(char **)((char *)temp_2 + 8) + 4);
            if (temp_3 != NULL) {
                char *temp_2_2 = temp_3 + 0xC;
                if (*(int *)(arg0 + 0x28) != temp_7) {
                    float temp_f0 = *(float *)(arg0 + 0x14);
                    float temp_f1 = *(float *)(arg0 + 0x10);
                    *(int *)(arg0 + 0x28) = temp_7;
                    *(float *)(temp_3 + 0xC) = temp_f1;
                    *(float *)(temp_2_2 + 4) = temp_f0;
                    *(int *)(temp_2_2 + 8) = 0;
                    func_0029EC50(temp_3, 0xC8, temp_7, temp_7, temp_f1);
                }
            }
        }
    }
}
