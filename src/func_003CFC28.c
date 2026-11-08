extern int func_003CE4E8(void *, void *, unsigned, unsigned);
extern int func_003CE620(void *, void *, unsigned, unsigned);
extern int func_003CE6B8(void *, void *, unsigned, unsigned);
extern int func_003CE760(void *, void *, unsigned, unsigned);
extern unsigned func_003FA9B8(void *);

int func_003CFD38(void *a, void *b, unsigned c)
{
    return func_003CE4E8(a, b, c, func_003FA9B8(b));
}

int func_003CFCC0(void *a, void *b, unsigned c)
{
    return func_003CE620(a, b, c, func_003FA9B8(b));
}

int func_003CFC28(void *a, void *b, unsigned c)
{
    return func_003CE6B8(a, b, c, func_003FA9B8(b));
}

int func_003CFB90(void *a, void *b, unsigned c)
{
    return func_003CE760(a, b, c, func_003FA9B8(b));
}
