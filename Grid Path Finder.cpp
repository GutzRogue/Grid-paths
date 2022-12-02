#include <iostream>
using namespace std;
void func(int N,int M){
	int Grid[N][M];
  for(int i=0 ; i<N ; i++){
  	Grid[i][0] = 1;
  }
  for(int i=0 ; i<M ; i++){
  	Grid[0][i] = 1;
  }
  for(int i=1 ; i<N ; i++){
  	  for(int j=1 ; j<M; j++){
  	  	      Grid[i][j] = 	Grid[i-1][j] + Grid[i][j-1]; 
		}
  }
  for(int i=0 ; i<N ; i++){
  	  for(int j=0 ; j<M; j++){
  	  	      cout << "\t pos(" << i+1 << "," << j+1 << ") =" << Grid[i][j];
		}
		cout << "\n";
  }
  cout << "the total number of ways to reach the grid location is :" << Grid[N-1][M-1];
}
int main() {
  int N,M;
  cout << "Give the N of the grid \n";
  cin >> N;
  cout << "Give the M of the grid \n";
  cin >> M;
  func(N,M);
  return 0;
} 
