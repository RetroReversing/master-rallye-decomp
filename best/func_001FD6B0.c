extern void *D_002AD408(int);
extern void func_00215918(void *, int, void *, void *, int);
extern void func_00216D98(void *, void *, int, int);
extern void func_002176B0(void *, void *);
extern int D_00426428;

void func_00200250(void *arg0) {
    ((int *)arg0)[8] = 0;
    ((float *)arg0)[7] = 1.0f;
    ((int *)arg0)[2] = 1;
}

void func_001FD818(void *arg0, int arg1) {
    void *end;
    void *begin;
    void *copy;
    int diff;
    int n;
    int k;

    begin = ((void **)arg0)[0];
    end = ((void **)arg0)[1];
    copy = begin;
    D_00426428 = arg1;
    if (begin != end) {
        diff = (int)((char *)end - (char *)begin);
        n = (int)((unsigned int)(diff * (int)0xCCCCCCCD) >> 4);
        k = 0;
        if (n != 1) {
            do {
                n >>= 1;
                k++;
            } while (n != 1);
        }
        func_00216D98(copy, end, 0, k << 1);
        func_002176B0(begin, end);
    }
    D_00426428 = 0;
}

int func_00202D88(void *arg0) {
    int begin = ((int *)arg0)[0];
    int end = ((int *)arg0)[1];
    int diff = end - begin;
    int prod = diff * (int)0xAAAAAAAB;
    int count = prod >> 2;
    int i = 0;
    if (count != 0) {
        int limit = count;
        do {
            int j = 0;
            if (limit != 0) {
                int inner = prod >> 2;
                do {
                    j++;
                } while ((unsigned int)j < (unsigned int)inner);
            }
            i++;
        } while ((unsigned int)i < (unsigned int)limit);
    }
    return 0;
}

void *func_001FD6B0(void *arg0) {
    void **in = (void **)arg0;
    void *p = D_002AD408(12);
    void *a2 = in[0];
    void *a3 = in[1];
    ((int *)p)[0] = 0;
    ((int *)p)[1] = 0;
    ((int *)p)[2] = 0;
    func_00215918(p, 0, a2, a3, 0);
    return p;
}
