extern float func_00170B98(void *arg0);
extern void func_00170C58(void *arg0, void *arg1, float *a, float *b, float *c, float d);

void func_001706F0(void *arg0) {
    float sp0;
    float sp4;
    float sp8;
    float spC;
    float temp;
    char **base = (char **)arg0;

    temp = func_00170B98(arg0);
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    spC = 0.0f;
    func_00170C58(arg0, &sp0, &sp4, &sp8, &spC, temp);
    *(float *)(base[1] + 8) = *(float *)(base[1] + 8) + sp0;
    *(float *)(base[2] + 8) = *(float *)(base[2] + 8) + sp4;
    *(float *)(base[3] + 8) = *(float *)(base[3] + 8) + sp8;
    *(float *)(base[4] + 8) = *(float *)(base[4] + 8) + spC;
}

float func_00170B98(void *arg0) {
    float var_f2;
    unsigned int temp_7;
    char **a = (char **)arg0;

    temp_7 = *(unsigned int *)arg0;
    var_f2 = 0.0f + *(float *)(a[7] + 0xE0);
    if (temp_7 < 2U) {
        var_f2 = var_f2 + *(float *)(*(char **)(a[1] + 0xC) + 0x10C);
        var_f2 = var_f2 + *(float *)(*(char **)(a[2] + 0xC) + 0x10C);
    }
    if (temp_7 == 0 || temp_7 == 2) {
        var_f2 = var_f2 + *(float *)(*(char **)(a[3] + 0xC) + 0x10C);
        var_f2 = var_f2 + *(float *)(*(char **)(a[4] + 0xC) + 0x10C);
    }
    return var_f2;
}
