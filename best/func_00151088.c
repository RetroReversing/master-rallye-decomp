f32 func_00151088(void *arg0, s32 arg1) {
    s32 var_5;
    s32 var_6;
    s32 count;
    f32 **arr;
    var_5 = arg1;
    var_6 = 0;
    count = *(s32 *)((char *)arg0 + 0xB0);
    arr = *(f32 ***)((char *)arg0 + 0x88);
    if (count <= 0) {
        return arr[count - 1][0];
    }
    do {
        if (var_5 == 0) {
            return arr[var_6][0];
        }
        var_6 = var_6 + 1;
        var_5 = var_5 - 1;
        if (var_6 < count) {
            if (arr[var_6][0] == -1.0f) {
                var_5 = var_5 - 1;
            }
        }
        if (var_6 >= count) {
            break;
        }
    } while (1);
    return arr[count - 1][0];
}
