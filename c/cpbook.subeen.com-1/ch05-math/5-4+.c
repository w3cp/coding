#include <stdio.h>

int main()
{
	double u, a, t, v, s, x;
	printf("কোনো বস্তু u আদিবেগে (initial velocity) এবং a সুষম ত্বরনে (acceleration) যাত্রা শুরু করল। ");
	printf("t সময় পরে এর বেগ যদি v হয় তবে বস্তুটির অতিক্রান্ত দূরত্ব নির্ণয় কর।\n");
	printf("Please enter the value of initial velocity (m/s) : ");
	scanf("%lf", &u);
	printf("Please enter the value of acceleration(ms^-2) : ");
	scanf("%lf", &a);
	printf("Plesse enter the value of time(s) : ");
	scanf("%lf", &t);
	v = u + a * t;
	printf("The last velocity of the object is : %0.2lf m/s\n", v);
	x = u + v;
	s = (x / 2) * t;
	printf("বস্তুটির অতিক্রান্ত দূরত্ব : %0.2lf m\n", s);
	return 0;
}
