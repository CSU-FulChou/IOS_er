#include<iostream>
#include<string>

using namespace std;
int main(){
    string str;
    while(getline(cin, str)){
        if(str=="ENDOFINPUT") break;
        getline(cin, str);
        for(int i=0;i<str.size();i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]= (str[i]-'A'-5+26)%26+'A';//+26防止出现负数不方便取余
            }
        }
        cout<<str<<endl;
        getline(cin, str);
    }
    return 0;
}