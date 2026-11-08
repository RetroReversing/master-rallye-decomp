/* identical to func_001CE2F8 (matched), with its names changed by decompdecomp */
extern int func_003FA9B8(int);

int func_002A7E68(void *arg0)
{
    int *p = (int *)arg0;
    int v = *p;
    if (v == 0) {
        return 0;
    }
    return func_003FA9B8(v);
}

int func_001CE8D8(void *arg0, unsigned int arg1)
{
    int *begin = *(int **)((char *)arg0 + 0x14);
    int end = *(int *)((char *)arg0 + 0x18);
    int count = (end - (int)begin) >> 2;
    if (arg1 >= (unsigned int)count) {
        return 0;
    }
    return begin[arg1];
}

int func_001CE910(void *arg0, unsigned int arg1)
{
    int *begin = *(int **)((char *)arg0 + 0x20);
    int end = *(int *)((char *)arg0 + 0x24);
    int count = (end - (int)begin) >> 2;
    if (arg1 >= (unsigned int)count) {
        return 0;
    }
    return begin[arg1];
}

extern unsigned char D_0044DCD8[];
extern void D_002AD390(void *);

void func_001CE978(void *arg0, int flag)
{
    *(void **)((char *)arg0 + 8) = D_0044DCD8;
    if (flag & 1) {
        D_002AD390(arg0);
    }
}
