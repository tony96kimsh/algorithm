/*숫자 n이 주어졌을 때, n의
피보나치(Fibonacci) 수열을 출력하는 프로그램을 작성하시오. */
#include <iostream>

using namespace std;

int cycle;

int main () {
    cout << "파보나치 연산 횟수 입력 : ";
    cin >> cycle;

    int* arr = new int[cycle + 2];

    arr[0] = 0;
    arr[1] = 1;

    for(int i = 0; i < cycle - 1; i++) {
        arr[i + 2] = arr[i] + arr[i + 1];
    }

    for(int i=0; i < cycle + 1; i++) {
        cout << arr[i];
        if(i != cycle)
            cout << ", ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}