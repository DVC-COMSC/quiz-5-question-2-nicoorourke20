#include <iostream>
using namespace std;

int main(){
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
   
   if (N <= 0 || N >= 10 || M < 1 || M > 10) {
        cerr << "Error: N must be between 1 and 9, and M must be between 1 and 10." << endl;
        return 1;
    }
   
   cout << N << " to power number: ";
    for (int i = 0; i <= M; i++){
        int result = 1;
       for (int j = 0; j < i; j++){
            result *= N;
        }
        cout << result;
        if (i < M){
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}
