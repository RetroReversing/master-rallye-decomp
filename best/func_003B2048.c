void *func_003B1F48(void *, void *);                    /* extern */
void *func_003B3668(void *);                            /* extern */

void *func_003B2048(void *arg0, void *arg1, s32 arg2) {
    func_003B1F48((void *)0, arg1);
    func_003B3668(arg1);
    func_003B1F48(arg0, (void *)0);
    return arg0;
}
