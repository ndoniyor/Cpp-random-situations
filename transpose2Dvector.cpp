vector<vector<int>> transpose;
transpose.resize(r, vector<int>(c)); //r=rows c=columns

for(int i = 0; i < rows.size(); i++){
    for(int j = 0; j < rows.at(0).size(); j++){
        transpose[i][j]=rows[j][i];
        cout << transpose.at(i).at(j) << " ";
    }
    cout << endl;
}
