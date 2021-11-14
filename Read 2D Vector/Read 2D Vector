#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ifstream input;
    ofstream output;
    vector<vector<int>> rows;
    vector<int> cols;
    string x;
    string temp;
    
    input.open("input.txt");
    if(input.fail()){
        cout << "Could not open input file\n";
        exit(1);
    }
    while(!input.eof()){
        getline(input, x, '\n');
        for(int i = 0; i < x.size(); i++){
            if(x[i]!= ' ' && x[i]!= '\n'){
                cols.push_back((x[i]-48));
            }
        }
        rows.push_back(cols);
        cols.clear();
     }
    
    for(int i = 0; i < rows.size(); i++){
        for(int j = 0; j < rows.at(0).size(); j++){
            cout << rows.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
