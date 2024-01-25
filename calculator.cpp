#include<iostream>
using namespace std;

string find_opt(string str1){
    //initialising the values
    string add="+";
    string sub="-";
    string mult="*";
    string div="/";
    string mod="%";
    int length = str1.length();
    for (int i=0;i<length+1;i++){
        if(str1[i]==add[0]){
            return "add";
        } else if (str1[i]==sub[0]){
            return "sub";
        } else if (str1[i]==mult[0]){
            return "multi";
        } else if (str1[i]==div[0]){
            return "div";
        } else if (str1[i]==mod[0]){
            return "mod";
        }
    }
}
int do_opt(string num){
    int len = num.length();
    for (int i=0;i<len+1;i++){
        if (num[i]=='+' || num[i]=='-' || num[i]=='*' || num[i]=='/' || num[i]=='%'){
            int l =i;
            int ans1 = stoi(num.substr(0,l));
            int ans2 = stoi(num.substr(l+1,len-1));

            if (find_opt(num)=="add"){
                return ans1+ans2;
            } else if(find_opt(num)=="sub"){
                return ans1-ans2;
            } else if(find_opt(num)=="multi"){
                return ans1*ans2;
            } else if(find_opt(num)=="div"){
                return ans1/ans2;
            } else if(find_opt(num)=="mod"){
                return ans1%ans2;
            } 
        }
    }
}
int main(){
    string expression;
    getline(cin,expression);
    cout<<do_opt(expression);
}