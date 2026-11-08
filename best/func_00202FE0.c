void func_00202F20(void *arg0, void *arg1, void *arg2, void *arg3) {
    int n = (*(int *)((char *)arg3 + 4) - *(int *)arg3) >> 2;
    int i = 0;
    if (n > 0) {
        int c12 = 12;
        do {
            float *out = *(float **)arg3;
            int off = i * 4;
            int j = 0;
            *(float *)((char *)out + off) = *(float *)(*(int *)arg2 + off);
            if (n > 0) {
                int i12 = i * c12;
                int off2 = off;
                int dummy = 0; /* try to create nop/slot? */
                (void)dummy;
                do {
                    float **rows = *(float ***)arg0;
                    int joff = j * 4;
                    float *row = *(float **)((char *)rows + i12);
                    float *w = *(float **)arg1;
                    float *o = *(float **)arg3;
                    j++;
                    *(float *)((char *)o + off2) += *(float *)((char *)row + joff) * *(float *)((char *)w + joff);
                } while (j < n);
            }
            i++;
        } while (i < n);
    }
}

void func_00202FE0(void *arg0, void *arg1, void *arg2, void *arg3) {
    int n = (*(int *)((char *)arg3 + 4) - *(int *)arg3) >> 2;
    int i = 0;
    if (n > 0) {
        int c12 = 12;
        do {
            float *out = *(float **)arg3;
            int off = i * 4;
            int j = 0;
            *(float *)((char *)out + off) = -*(float *)(*(int *)arg2 + off);
            if (n > 0) {
                int i12 = i * c12;
                int off2 = off;
                int dummy = 0;
                (void)dummy;
                do {
                    float **rows = *(float ***)arg0;
                    int joff = j * 4;
                    float *row = *(float **)((char *)rows + i12);
                    float *w = *(float **)arg1;
                    float *o = *(float **)arg3;
                    j++;
                    *(float *)((char *)o + off2) += *(float *)((char *)row + joff) * *(float *)((char *)w + joff);
                } while (j < n);
            }
            i++;
        } while (i < n);
    }
}
