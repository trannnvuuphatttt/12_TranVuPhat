<<<<<<< HEAD
#include <iostream.h>
#include <conio.h>

void main()
{
	char doc[9][5] = { "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin" };
	int van, ngan, tram, chuc, donvi, chv, dv;
	long so;
	clrscr();

	cout << "Nhap so nguyen duong < 1000000 can doc = ";
	cin >> so;
	cout << "Cach doc so " << so << " la:\n";

	van = so / 10000;
	ngan = so / 1000 % 10;
	tram = so / 100 % 10;
	chuc = so / 10 % 10;
	donvi = so % 10;

	if (van)
	{
		chv = van / 10;
		dv = van % 10;
		if (chv == 1)
			cout << "muoi ";
		else if (chv > 1)
			cout << doc[chv - 1] << " muoi ";
		if (dv)
			cout << doc[dv - 1];
		cout << " van ";
	}

	if ((ngan == 0) && van)
		cout << " khong ngan ";
	else if (ngan)
		cout << doc[ngan - 1] << " ngan ";

	if ((tram == 0) && (van || ngan))
		cout << " khong tram ";
	else if (tram)
		cout << doc[tram - 1] << " tram ";

	if ((chuc == 0) && donvi && (van || ngan || tram))
		cout << "le ";
	else if (chuc == 1)
		cout << " muoi ";
	else
		cout << doc[chuc - 1] << " muoi ";
	if (donvi)
		cout << doc[donvi - 1];
	getch();
}
=======
#include<stdio.h>
#include<conio.h>
void
main ()
{
  int a, b;
  char dv, chuc, tram;
  clrscr ();
  printf ("Nhap so bi nhan co 3 chu so a=");
  scanf ("%d", &a);
  printf ("Nhap so nhan co 3 chu so b=");
  scanf ("%d", &b);
  dv = b % 10;
  chuc = b % 100 / 10;
  tram = b / 100;
  printf ("\nMo phong phep nhan tay\n\n");
  printf ("%20d\n", a);
  printf ("%15c%5d\n", 'x', b);
  printf ("%20s\n", "-------");
  printf ("%20d\n", a * dv);
  printf ("%19d\n", a * chuc);
  printf ("%18d\n", a * tram);
  printf ("%20s\n", "-------");
  printf ("%20ld\n", long (a) * b);
  getch ();

}
>>>>>>> main
