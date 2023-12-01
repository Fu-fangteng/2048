#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>


using namespace std;

vector<vector<int>> board(4,vector<int>(4,0));


void randomTile(){
    srand(time(0));

    // - Generate the value of a single tile
    srand(time(0));
    int random=0;
    int a=rand()%10;
    if(a!=9) random = 2;
    else random = 4;

    // - Generate the values of row and col
    int r=rand()%4;
    int c=rand()%4;
    if(board[r][c]){
        randomTile();
    } else board[r][c]=random;
}


int main(){

}
