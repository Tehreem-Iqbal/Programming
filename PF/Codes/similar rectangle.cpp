#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'nearlySimilarRectangles' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts 2D_LONG_INTEGER_ARRAY sides as parameter.
 */
/*
long nearlySimilarRectangles(vector<vector<long>> sides) {

}
*/
int main(){
    int i, j, n,k, count =0;
    cin >> n ;
    int a[n][2];
    for(i=0;i< n;i++)
        for(j=0;j< 2 ;j++)
            cin >> a[i][j];
       for(i=0;i< n;i++)
       	for(k=i+1;k < n;k++)
            for(j=0;j< 2 ;j++){
                               if(a[k][j]/a[i][j] == a[k][j+1]/a[i][j+1] )	count++;
                cout << a[k][j]/a[i][j] <<" == " <<a[k][j+1]/ a[i][j+1]<< '\n';
                   
                }
    cout << count;
    return 0;
}  

