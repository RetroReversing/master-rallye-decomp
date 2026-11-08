typedef struct { f32 x0, x1, x2, x3, x4; } V5;
V5 *func_001CC438(V5 *s, V5 *e, V5 *d) {
    if (s != e) {
        do {
            if (d) {
                d->x0 = s->x0;
                d->x1 = s->x1;
                d->x2 = s->x2;
                d->x3 = s->x3;
                d->x4 = s->x4;
            }
            s++;
            d++;
        } while (s != e);
    }
    return d;
}
