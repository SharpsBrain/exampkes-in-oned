#include <iostream>

using namespace std;

int main()
{
   /* //declaration of arrays:
    int number[5],i,search_key;
    cout<<"Simple C++ Example Program for searching in arrays\n";
    //Read input:
    for(i=0;i<5;i++){
        cout<<"Enter the number:"<<(i+1)<<" :";
        cin>>number[i];

    }
    cout<<"Enter the key \n";
    cin>>search_key;
    /*simple search with position ;
    for(i=0;i<5;i++){
        if(number[i]==search_key){
            cout<<"Search element is found.Position id:"<<(i+1)<<"\n";
            break;
        }
        if(i==5-1){
            cout<<"Search element is not in the array.\n";

        }
    }
*/
//declaration of array:
int  number[5],i;
cout<<"\nRead array and print array in c++ by sharps brain\n";
cout<<"Reading array with the position : \n";
for(i=0;i<5;i++){
cout<<"Enter the number :"<<(i+1)<<" :";
cin>>number[i];
}
cout<<"\nPrinting Array: \n";
for(i=0;i<5;++i){
    cout<<number[i]<<"\t\t";

}
    return 0;
}
