#include<iostream>
#include<vector>

using namespace std;

vector<vector<double>> product(vector<vector<double>> mt1, vector<vector<double>> mt2){
    int row_mt1=mt1.size();
    int column_mt1=mt1[0].size();
    int row_mt2=mt2.size();
    int column_mt2=mt2[0].size();

    if(column_mt1!=row_mt2){
        cout<<"Error: Columns of first matrix operand is not equal to the rows of the second matrix operand !";
        return {{}};
    }
    else{
        vector<vector<double>> result;
        int t=0;
        for(vector<double> dum:mt1){
        	result.push_back({});
            for(int i=0;i<column_mt2;i++){
                double sum=0;
                for(int j=0;j<=row_mt1;j++){
                    sum+=dum[j]*mt2[j][i];
                }
                result[t].push_back(sum);
            }
            t+=1;
        }
        return result;
    }
}
