#include <iostream>  

using namespace std;  

int max (int num1, int num2);  
int sum (int a, int b=20){  
    int result;  
    result = a + b;  
    return result;  
}  

int main() {  
    int a;
    int b;

    cout << "Enter the Value of a and b: " << endl;
    cin >> a;
    cin >> b;

    int ret, ans;  
    ret = max(a, b);  
    ans = sum(a, b);  

    if(a%2 and b%2){
        cout << "You have entered an odd value" << endl;
    }else{
        cout << "You have entered an even value" << endl;
    }
    cout<<"Max value is : "<<ret<<endl;  
    cout<<"Total value is : "<<ans<<endl; 
    return 0;  
}  

int max(int num1, int num2) {
    int result;
    if( num1> num2)  
    result = num1;  
    else  
    result = num2;  
    return result;  
}