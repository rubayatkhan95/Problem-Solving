#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int i;
    int alice_arr[3] , bob_arr[3];
    for(i = 0;i<3 ;i++){
        cin>>alice_arr[i];
    }
    int arr[3];
    for(i = 0;i<3 ;i++){
        cin>>bob_arr[i];
    }

    int pointArray[2] = {0,0};
    for(i = 0;i<3; i++){

       if(alice_arr[i] > bob_arr[i]) {
        pointArray[0] = pointArray[0]+1;
       }
       if(alice_arr[i] < bob_arr[i]){
        pointArray[1] = pointArray[1]+1;
       }
       if(alice_arr[i] = bob_arr[i]){
         pointArray[0] = pointArray[0]+0;
          pointArray[1] = pointArray[1]+0;
       }
     }
    for(i=0;i<2;i++){
     cout<<pointArray[i]<<" ";
    }

    return 0;
}
/*
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int i ,sizeOfArray;
    cout<<"Enter Elements for Alice's Array"<<endl;
    cin>>sizeOfArray;

    cout<<"Enter Elements for Alice's Array"<<endl;
    int alice_arr[sizeOfArray] , bob_arr[sizeOfArray];

    for(i = 0;i<sizeOfArray ;i++){
        cin>>alice_arr[i];
    }

    cout<<"Enter Elements for Bob's Array"<<endl;
    int arr[sizeOfArray];
    for(i = 0;i<sizeOfArray ;i++){
        cin>>bob_arr[i];
    }

    int pointArray[2] = {0,0};
    for(i = 0;i<sizeOfArray; i++){

       if(alice_arr[i] > bob_arr[i]) {
        pointArray[0] = pointArray[0]+1;
       }
       else if(alice_arr[i] < bob_arr[i]){
        pointArray[1] = pointArray[1]+1;
       }
       else{
         pointArray[0] = pointArray[0]+0;
          pointArray[1] = pointArray[1]+0;
       }
     }
    for(i=0;i<2;i++){
     cout<<pointArray[i]<<endl;
    }

    return 0;
}



*/


