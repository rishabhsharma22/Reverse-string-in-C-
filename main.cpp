#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    string word;
    vector <string> reversed_string;
    string rev_str;
    //vector <string> forward_string;



    getline(cin,word);
    int len = word.size();
    int pos=0;

    for(int i=0;i<len;i++)
    {
        if(word[i]==' ')
        {
            reversed_string.push_back(word.substr(pos,i-pos));
            pos = i+1;
        }
        if(i== (len-1))
        {
            reversed_string.push_back(word.substr(pos,i-(pos-1)));
        }
    }

    reverse(reversed_string.begin(),reversed_string.end());
    len = reversed_string.size();

    for(int i=0;i<len;i++)
    {
        cout<<reversed_string[i]<<" ";
        if(i==len-1)
        {
            rev_str = rev_str + reversed_string[i];
        }
        else
        rev_str = rev_str+reversed_string[i]+' ';
    }
    cout<<endl;
    //cout<<mismatch(reversed_string.begin(),reversed_string.end().forward_string.begin()).first();
    cout<<rev_str.compare(word);
    return 0;
}
