#define F(p,t,o) (*(t*)((char*)(p)+(o)))
void func_003D4D70(int);
int func_003D6678(void*,u64*,s8);
void *func_003D67B8(void *a,int *out,s8 delim){
 u64 count;s64 value;void *s=F(a,void*,0),*buf,*check;int ok,tie,r;
 if(F(s,u8,26)){ok=0;F(s,u8,26)|=2;}
 else{tie=F(s,int,4);if(tie){check=F(s,void*,0);if(F(check,int,8)==F(check,int,4))func_003D4D70(tie);}ok=1;}
 if(ok){
 count=0;buf=F(F(a,void*,0),void*,0);r=func_003D6678(buf,&count,delim);*out=r;
 if(r){value=(s64)(*(volatile u64*)&count<<32)>>32;F(a,int,4)=value;}else{value=0;F(a,int,4)=value;}
 if(F(buf,int,0)&16){F(F(a,void*,0),u8,26)|=1;
 if(!F(a,int,4))F(F(a,void*,0),u8,26)|=2;}
 }else{*out=0;F(a,int,4)=0;}
 return a;
}
