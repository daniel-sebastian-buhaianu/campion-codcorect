#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	ifstream f("codcorect.in");
	ofstream g("codcorect.out");
	int n;
	f >> n;
	while (n > 0)
	{
		char cod[10];
		f >> cod;
		int lg = strlen(cod);
		if (lg % 2)
			if (cod[0]-'0' < cod[lg-1]-'0')
				swap(cod[0], cod[lg-1]);
		g << cod << ' ';
		n--;
	}
	f.close();
	g.close();
	return 0;
}

