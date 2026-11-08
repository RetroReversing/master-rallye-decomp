extern void *D_002AD408(int);
extern void func_00215918(void *, int, void *, void *, int);
extern void func_00216D98(void *, void *, int, int);
extern void func_002176B0(void *, void *);
extern int D_00426428;

void func_00200250(void *arg0) {
    int one = 1;
    ((int *)arg0)[8] = 0;
    ((float *)arg0)[7] = 1.0f;
    ((int *)arg0)[2] = one;
}

void func_001FD818(void *arg0, int arg1) {
    void **p = (void **)arg0;
    void *begin = p[0];
    void *end = p[1];
    void *copy = begin;
    D_00426428 = arg1;
    if (begin != end) {
        int diff = (char *)end - (char *)begin;
        int n = (int)((unsigned int)(diff * (int)0xCCCCCCCD) >> 4);
        int k = 0;
        if (n != 1) {
            do {
                n = n >> 1;
                k = k + 1;
            } while (n != 1);
        }
        func_00216D98(copy, end, 0, k + k);
        func_002176B0(begin, end);
    }
    D_00426428 = 0;
}

void func_00202D88(void *arg0) {
    int *p = (int *)arg0;
    int diff = p[1] - p[0];
    int prod = diff * (int)0xAAAAAAAB;
    int count = prod >> 2;
    if (count != 0) {
        int i = 0;
        int limit = count;
        do {
            int j = 0;
            if (limit != 0) {
                int inner = prod >> 2;
                do {
                    j = j + 1;
                } while ((unsigned int)j < (unsigned int)inner);
            }
            i = i + 1;
        } while ((unsigned int)i < (unsigned int)limit);
    }
}

void *func_001FD6B0(void *arg0) {
    void **in = (void **)arg0;
    void *p;
    void *a2 = in[0];
    void *a3 = in[1];
    p = D_002AD408(12);
    ((int *)p)[0] = 0;
    ((int *)p)[1] = 0;
    ((int *)p)[2] = 0;
    func_00215918(p, 0, a2, a3, 0);
    return p;
}
