extern void *func_002AFEB8(s32, void *);

typedef struct { u8 b[24]; } Block24;

void *func_003A61F0(void *arg0, void *arg1) {
    Block24 *ret;
    ret = (Block24 *)func_002AFEB8(0x18, arg0);
    if (ret != 0) {
        *ret = *(Block24 *)arg1;
    }
    return ret;
}
