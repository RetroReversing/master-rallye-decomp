void func_001AA308(void *arg0, void *arg1)
{
  void *base;
  f32 *s0 = (f32 *) (((u8 *) arg0) + 0xB0);
  u8 *new_var;
  f32 *s1 = (f32 *) (((u8 *) arg0) + 0xBC);
  f32 *s2 = (f32 *) (((u8 *) arg0) + 0xD4);
  f32 *s3 = (f32 *) (((u8 *) arg0) + 0xC8);
  f32 *d;
  base = *((void **) (((u8 *) arg1) + 0x50));
  d = (f32 *) (((u8 *) base) + 0x50);
  d[0] = s0[0];
  d[1] = s0[1];
  d[2] = s0[2];
  d[3] = 1.0f;
  base = *((void **) (((u8 *) arg1) + 0x50));
  d = (f32 *) (((u8 *) base) + 0x40);
  d[0] = s1[0];
  d[1] = s1[1];
  d[2] = s1[2];
  d[3] = 0.0f;
  base = *((void **) (((u8 *) arg1) + 0x50));
  d = (f32 *) (((u8 *) base) + 0x20);
  d[0] = s2[0];
  d[1] = s2[1];
  d[2] = s2[2];
  d[3] = 0.0f;
  base = *((void **) (((u8 *) arg1) + 0x50));
  new_var = ((u8 *) base) + 0x30;
  d = (f32 *) new_var;
  d[0] = s3[0];
  d[1] = s3[1];
  d[2] = s3[2];
  d[3] = 0.0f;
}

