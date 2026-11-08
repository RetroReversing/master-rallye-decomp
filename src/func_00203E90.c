extern float func_003F2F50(float);
extern float func_003F3140(float);
void func_00203E18(void *arg0, float arg1);
void func_00203E90(void *arg0, float arg1)
{
  void **new_var;
  float c = func_003F2F50(arg1);
  float s = func_003F3140(arg1);
  float ns = -s;
  ((float *) arg0)[8] = c;
  ((float *) arg0)[0] = c;
  ((float *) arg0)[(long long) 4] = 1.0f;
  ((float *) arg0)[6] = s;
  new_var = &arg0;
  ((float *) (*new_var))[2] = ns;
  ((int *) (*new_var))[1] = 0;
  ((int *) (*new_var))[3] = 0;
  ((int *) (*new_var))[5] = 0;
  ((int *) (*new_var))[7] = 0;
  ((float *) arg0)[0] = c;
}

void func_00203F08(void *arg0, float arg1);
