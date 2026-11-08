float func_00170B98(void *arg0) {
    float var_f2;
    unsigned int temp_7;
    char **a = (char **)arg0;

    temp_7 = *(unsigned int *)arg0;
    var_f2 = 0.0f;
    var_f2 = *(float *)(a[7] + 0xE0) + var_f2;
    if (temp_7 < 2U) {
        var_f2 += *(float *)(*(char **)(a[1] + 0xC) + 0x10C);
        var_f2 += *(float *)(*(char **)(a[2] + 0xC) + 0x10C);
    }
    if (temp_7 == 0 || temp_7 == 2) {
        var_f2 += *(float *)(*(char **)(a[3] + 0xC) + 0x10C);
        var_f2 += *(float *)(*(char **)(a[4] + 0xC) + 0x10C);
    }
    return var_f2;
}
