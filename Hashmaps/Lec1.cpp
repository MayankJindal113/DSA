#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> m;//Declared/ Initialised a map named 'm' of type <strin,int>:<key,val>

    pair<string,int> p = make_pair("Scorpio", 9);
    m.insert(p);

    // 2nd way
    pair<string, int > p2("Alto",2);
    m.insert(p2);
    
    //3rd way 
    m["Fortuner"]=7;

    //cout<<m.at("alto"); CASE SENSITIVE SO ERROR

    cout<<m["Fortuner"];
    //cout<<m[7]; Can call valu from the key but not vice-versa

    cout<<endl<<m.size();

    /*
    unorder_map <int, string>Stud;
    stud[2,"Harry"];    
    */
}