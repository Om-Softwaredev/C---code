#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -02  
        1 
        1 2 
        1 2 3 
        1 2 3 4 
        1 2 3 4 5   
     */  
    int row,col;
    for (row = 1; row <= 5; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    } 
}