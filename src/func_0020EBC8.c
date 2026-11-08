void func_0020EBC8(s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 fparg0)
{
    s32 var_2;
    f32 temp_f1;
    f32 temp_f0;

    var_2 = 2;
    do {
        temp_f1 = *arg1;
        var_2 -= 1;
        temp_f0 = *arg2;
        arg1 += 1;
        arg2 += 1;
        *arg3 = temp_f1 + fparg0 * (temp_f0 - temp_f1);
        arg3 += 1;
    } while (var_2 >= 0);
}
