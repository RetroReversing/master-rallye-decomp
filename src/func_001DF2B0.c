#include "context.h"
void func_0016D178(void *arg0, f32 *arg1);
extern void func_001DF368(void *, void *);
void func_001DF2B0(void *arg0, void *arg1, void *arg2)
{
  if (arg1 == NULL)
  {
    return;
  }
  if ((*((void **) (((u8 *) arg1) + 8))) != NULL)
  {
    func_001DF368(*((void **) (((u8 *) arg1) + 8)), arg1);
  }
  *((void **) (((u8 *) arg1) + 8)) = arg0;
  if ((*((void **) arg0)) == NULL)
  {
    *((void **) (((u8 *) arg0) + 0xC)) = (*((void **) arg0) = arg1);
  }
  else
    if (arg2 == NULL)
  {
    *((void **) (((u8 *) (*((void **) (((u8 *) arg0) + 0xC)))) + 4)) = arg1;
    *((void **) (((u8 *) arg0) + 0xC)) = arg1;
  }
  else
  {
    void *cur = *((void **) arg0);
    while (cur != NULL)
    {
      if (cur == arg2)
      {
        *((void **) (((u8 *) arg1) + 4)) = *((void **) (((u8 *) cur) + 4));
        *((void **) (((u8 *) cur) + 4)) = arg1;
        if (cur == (*((void **) (((u8 *) arg0) + 0xC))))
        {
          *((void **) (((u8 *) arg0) + 0xC)) = arg1;
        }
        return;
      }
      cur = *((void **) (((u8 *) cur) + 4));
    }

    *((void **) (((u8 *) (*((void **) (((u8 *) arg0) + 0xC)))) + 4)) = arg1;
    *((void **) (((u8 *) arg0) + 0xC)) = arg1;
  }
}

void func_001DF368(void *arg0, void *arg1);
extern void func_001DF2B0(void *, void *, void *);
void func_001DF3C8(void *arg0, void *arg1);
