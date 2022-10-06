#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string, int> m;

    //insertion 1
    pair<string,int>p = make_pair("babbar",3);
    m.insert(p);

    //insertion 2
    pair<string, int> pair2("love",2); 
    m.insert(pair2);
    
    //insertion 3
    m["mera"] = 1;

    //search
    cout << m["love"] << endl;
    cout << m.at("mera") << endl;

    //unknownKey
    cout << m["unkownKey"] << endl;
    cout << m.at("unkownKey") << endl;

    //size
    cout<< m.size() << endl;

    //to check presence
    cout << m.count("bro") << endl;
    cout << m.count("love") << endl;

    //erase
    m.erase("love");
    cout << m.size() << endl;

    //printing map using for loop
    for(auto i:m){
        cout << i.first << " " << i.second <<endl;
    }

    //iterators
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout <<it->first << it->second <<endl;
        it++;
    }

    return 0;
}