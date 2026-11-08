extern int ReferSemaStatus_2(int, int *);

int func_002BEDA0(int *arg0) {
    int sema;
    int result;
    int status[8];

    sema = *arg0;
    result = 0;
    if (sema != -1) {
        ReferSemaStatus_2(sema, status);
        result = status[0];
    }
    return result;
}
