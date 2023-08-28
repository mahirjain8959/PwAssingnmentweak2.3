#include <iostream>
using namespace std ;
int main(){
    // question number 1
    // obb number
    for (int i = 1; i <= 100; i+=2){
        cout << i << endl ;
    }
    
    // question number 2
    // all number 1 to 100 divisible by 3
    for (int j = 1; j <= 100; j++){
        if (j % 3 == 0){
            cout << j << endl ;
        }
    }

    // question number 3
    int n , k;
    cout <<"enter the table you have to print :";
    cin >> n ;
    for (int i = 1; i <= 10; i++){
       k = i * n ;
       cout << k << endl ; 
    }
    
    // question numbre 4 
    // display ap  4,7,10,13,16..
    int m ;
    cout <<"enter the value of m:";
    cin >> m ;
    for (int i = 4; i <= m; i += 3){
        cout << i << endl ;
    }

    // question number 5
    // display gp - 3,12,48
    int p ;
    cout <<"Enter the value of p :" ;
    cin >> p ;
    int a = 3 ;
    for (int i = 1; i <= p; i++){
        cout << a << endl ;
        a = a * 4 ;
    }
    
    // question number 6
    // print ascii value all alphabat
    char ch = 'A';
    while (ch <= 'Z'){
        cout << ch <<" "<< (int)ch <<endl;
        ch++ ;
    }
    
}