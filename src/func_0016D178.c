void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

int func_0023C038(void *arg0, void *arg1, void *arg2) {
    int v7 = *(int *)((char *)arg1 + 0x4C);
    int v4 = *(int *)((char *)arg2 + 0x4C);
    if (v7 != v4) {
        int v6 = *(int *)((char *)arg2 + 0x50);
        if (v7 != v6) {
            int v5 = *(int *)((char *)arg1 + 0x50);
            if (v5 == v4)
                return v5;
            return (v5 ^ v6) ? 0 : v5;
        }
        return v6;
    }
    return v4;
}

void func_0023C668(void *arg0, void *arg1) {
    int *base = *(int **)arg1;
    int count = ((*(int *)((char *)arg1 + 4) - (int)base) * (int)0xAAAAAAAB) >> 2;
    int i = 0;
    if (count <= 0)
        return;
    do {
        int next = i + 1;
        int *entry = (int *)((char *)base + i * 12);
        int inner = (entry[1] - entry[0]) >> 2;
        i = next;
        if (inner > 0) {
            int j = inner - 1;
            while (j != 0)
                j--;
            i = next;
        }
    } while (i < count);
}

extern void func_002027E8(void *);
extern void func_00201620(void *);

void *func_0023C6F8(void *arg0) {
    *(int *)((char *)arg0 + 0x00) = 0;
    *(int *)((char *)arg0 + 0x04) = 0;
    *(int *)((char *)arg0 + 0x08) = 0;
    func_002027E8((char *)arg0 + 0x0C);
    *(int *)((char *)arg0 + 0x18) = 0;
    *(int *)((char *)arg0 + 0x20) = 0;
    *(int *)((char *)arg0 + 0x1C) = 0;
    *(int *)((char *)arg0 + 0x24) = 0;
    *(int *)((char *)arg0 + 0x2C) = 0;
    *(int *)((char *)arg0 + 0x28) = 0;
    *(int *)((char *)arg0 + 0x30) = 0;
    *(int *)((char *)arg0 + 0x38) = 0;
    *(int *)((char *)arg0 + 0x34) = 0;
    func_00201620((char *)arg0 + 0x3C);
    *(int *)((char *)arg0 + 0xB0) = 0;
    *(int *)((char *)arg0 + 0xB8) = 0;
    *(int *)((char *)arg0 + 0xB4) = 0;
    return arg0;
}
