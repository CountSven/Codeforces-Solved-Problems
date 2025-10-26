#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while ( 1 ) {
		int n;
		cin >> n;

		if ( n == 0 ) break;
		else {
			int cnt = 0;

			while ( n-- ) {
				string s;
				cin >> s;

				char tp = s[0];

				string hs = "", ms =  "", ss = "", hl = "", ml = "", sl = "";

				int cc = 0;

				for ( int i = 1; i < s.size(); i++ ) {
					if ( cc == 1 ) hs += s[i];
					else if ( cc == 2 ) ms += s[i];
					else if ( cc == 3 ) ss += s[i];
					else if ( cc == 4 ) hl += s[i];
					else if ( cc == 5 ) ml += s[i];
					else if ( cc == 6 ) sl += s[i];

					if ( s[i] == ':' ) cc++;
				}

				hs.pop_back();
				ms.pop_back();
				ss.pop_back();
				hl.pop_back();
				ml.pop_back();

				// cout << hs << ms << ss << " ";
				// cout << hl << ml << sl << "\n";

				int hsMain = stoi( hs );
				int msMain = stoi( ms );
				int ssMain = stoi( ss );
				int hlMain = stoi( hl );
				int mlMain = stoi( ml );
				int slMain = stoi( sl );

				if ( hsMain == 8 && msMain >= 0 && msMain < 30 ) {
					hsMain = 8;
					msMain = 30;
					ssMain = 0;
				}
				else if ( hsMain < 8 ) {
					hsMain = 8;
					msMain = 30;
					ssMain = 0;
				}

				// cout << hsMain << msMain << ssMain << " ";
				// cout << hlMain << mlMain << slMain << "\n";

				int tmp1 = hsMain, tmp2 = msMain, tmp3 = ssMain;

				// cout << tmp1 << " " << tmp2 << " " << tmp3 << "\n";

				hsMain = hsMain * 60 * 60;
				msMain = msMain * 60;
				hlMain = hlMain * 60 * 60;
				mlMain = mlMain * 60;

				int totSt = hsMain + msMain + ssMain;
				int totLs = hlMain + mlMain + slMain;

				// cout << totSt << " " << totLs << "\n";

				int res = totLs - totSt;

				// cout << res << "\n";

				if ( tp == 'D' && tmp1 == 9 && tmp2 == 30 && tmp3 > 0 ) cnt++;
				else if ( tp == 'D' && tmp1 == 9 && tmp2 >= 31 && tmp2 <= 59 ) cnt++;
				else if ( tp == 'D' && tmp1 >= 10 ) cnt++;
				else if ( tp == 'D' && res < 28800 ) cnt++;
				else if ( tp == 'E' && tmp1 == 12 && tmp2 == 30 && tmp3 > 0 ) cnt++;
				else if ( tp == 'E' && tmp1 == 12 && tmp2 >= 31 && tmp2 <= 59 ) cnt++;
				else if ( tp == 'E' && tmp1 >= 13 ) cnt++;
				else if ( tp == 'E' && res < 32400 ) cnt++;
			}

			if ( cnt == 0 ) cout << "All OK" << "\n";
			else if ( cnt == 1 ) cout << "1 Point(s) Deducted" << "\n";
			else if ( cnt == 2 ) cout << "2 Point(s) Deducted" << "\n";
			else if ( cnt == 3 ) cout << "3 Point(s) Deducted" << "\n";
			else cout << "Issue Show Cause Letter" << "\n";
		}
	}

	return 0;
}