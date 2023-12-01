#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;


vector<vector<int>> surfaceBoard(4,vector<int>(4,0));

vector<vector<int>> exponentBoard(4,vector<int>(4,0));

// - UI Interaction
void openningUI(){
    cout << "Hello young man." << endl;
    cout << "Welcome to the world of 2048." << endl;
    cout << "Enter s to start and q to quit." << endl;
}

// - 
void randomTile(){
    srand(time(0));

    // - Generate the value of a single tile
    srand(time(0));
    int random=0;
    int a=rand()%10;
    if(a!=9) random = 1;
    else random = 2;

    // - Generate the values of row and col
    int index=0;
    int count=0;
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            if(!surfaceBoard[i][j]) count++;
        }
    }

    index=rand()%count+1;
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            if(!surfaceBoard[i][j]) index--;
            if(index==0) surfaceBoard[i][j]=random;
        }
    }

}

// 逻辑：board用二的指数表示，便于操作，但现实要改为真实值

// goal 1: 指数->真实
// goal 2: 用指数形式修改randomTile

void boardTransform(){
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){

            // - Change exponent into true value

            int a=surfaceBoard[i][j];
            if(!a) exponentBoard[i][j]=0;
            else exponentBoard[i][j]=int(pow(2,a));
        }
    }
}





int main(){
    randomTile()
}
