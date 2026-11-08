/* identical to func_001DAD18 (matched), with its names changed by decompdecomp */
void func_0027B340(void *arg0, void *arg1)
{
  void *t2 = *((void **) (((char *) arg1) + 4));
  void *t1 = *((void **) (((char *) arg1) + 8));
  *((void **) (((char *) t2) + 8)) = t1;
  *((void **) (((char *) t1) + 4)) = t2;
  void *t3 = *((void **) (((char *) arg0) + 4));
  *((void **) (((char *) arg1) + 8)) = arg0;
  *((void **) (((char *) arg1) + 4)) = t3;
  void *t4 = *((void **) (((char *) arg0) + 4));
  *((void **) (((char *) t4) + 8)) = arg1;
  *((void **) (((char *) arg0) + 4)) = arg1;
}

