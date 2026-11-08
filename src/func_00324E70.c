/* identical to func_002DE780 (matched), with its names changed by decompdecomp */
typedef struct{u64 a,b,c,d,e,f;}Block;
void func_00324E70(Block*p,Block*end,Block*v){while(p!=end){p->a=v->a;p->b=v->b;p->c=v->c;p->d=v->d;p->e=v->e;p->f=v->f;++p;}}
s32 func_002DDAD0(s8*s1,s8*e1,s8*s2,s8*e2){s8 c1,c2;while(s1!=e1&&s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}if(s2==e2)return s1!=e1;return -1;}
s32 func_002DDA68(s8*s1,s8*e1,s8*s2,s8*e2){s8 c1,c2;while(s1!=e1&&s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return 1;if(c2<c1)return 0;s1++;s2++;}return s1==e1&&s2!=e2;}
s32*func_002E1808(s32*src,s32*end,s32*dst){while(src!=end){if(dst)*dst=*src;src++;dst++;}return dst;}
