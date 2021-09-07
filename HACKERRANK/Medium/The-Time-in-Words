#include <bits/stdc++.h>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/************************************MY SOLUTION******************************************* */
string timeInWords(int h, int m) {
    vector<string> count{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine" };
    string result_time{""};
    if(m<=30){
        if(m==0){
            result_time=count[h]+" o' clock";
        }else if(m==15){
                result_time="quarter past "+count[h];
        }else{
            if(m!=30){
                if(m==1){
                    result_time=count[m]+" minute past "+count[h];
                }else{
                    result_time=count[m]+" minutes past "+count[h];
                }
            }else{
                result_time="half past "+count[h];
            }
        }
    }else{
        if(m==45){
            result_time="quarter to "+count[h+1];
        }else{
            result_time=count[60-m]+" minutes to "+count[h+1];
        }
    }
    return result_time;
}
/*************************************************************************************/

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

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
