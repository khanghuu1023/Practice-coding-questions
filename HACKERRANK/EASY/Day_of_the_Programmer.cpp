#include <bits/stdc++.h>
#include<string>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/* *********************************MY SOLUTION**************************************** */
string dayOfProgrammer(int year) {
   string dayOfProgrammer(int year) {
    int date{12};
    if (year==1918){
        date+=14;
    }else if(year>1918){
        if ( (year%4==0&&year%100!=0) || (year%400==0) ){
            date=12;
        }else{
            date=13;
        }
    }else{
        if ( year%4==0 ){
            date=12;
        }else{
            date=13;
        }
    }
    return (to_string(date)+".09."+to_string(year));
}
/*****************************************************************************************/
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
