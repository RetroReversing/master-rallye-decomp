extern int func_003ACF20(int arg0);
extern int func_003AF4E8(int arg0, int arg1, int arg2, int arg3);

int func_003A8B80(int arg0, int arg1, int arg2) {
    int s0;
    int s1;
    int fp[4];
    s0 = arg0;
    s1 = arg1;
    fp[0] = arg2;
    return func_003AF4E8(s0, s1, fp[0], func_003ACF20((int)fp));
}
