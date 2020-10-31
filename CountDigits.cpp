#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int d=0,cnt=0,tp1=n;
    vector<int> c;
    while(n>0){
        d= n%10;
        n = n/10;
        c.push_back(d);
    }   
    for(int x: c){
        if(x==0)    continue;
        if( tp1%x ==0)  cnt++;
    }
    return cnt;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
