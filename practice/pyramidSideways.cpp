/*

*                         *
   *                   *
*     *             *     *
   *     *       *     *
*     *      *      *     *
   *     *       *     *
*     *             *     *
   *                   *
*                         *

*/
#include<iostream>
using namespace std;

int main(){

   int n ;
   cin>>n;

   for(int i =1; i <= n ; i++){     

      for(int j =1; j <= i; j++){

      if( (i %2 == 0 &&  j %2 != 0 ) ||
        ( i % 2 != 0 && j % 2 ==0) ){
         cout<<"  ";

      }else{
         cout<<"* ";
       }
      
      }

      for(int j =1; j <= 2*(n-i) -1; j++){
         cout<<"  ";
      }

      for(int j =1; j <= i; j++){

      if( j %2 == 0 ){

         cout<<"  ";

      }else if(i ==n && j ==1){
         continue;
      
       }else{
         cout<<"* ";

       }
      
      }

      cout<<endl;
   }

   for(int i =n-1; i >= 1 ; i--){     

         for(int j =1; j <= i; j++){

         if( (i %2 == 0 &&  j %2 != 0 ) ||
           ( i % 2 != 0 && j % 2 ==0) ){
            cout<<"  ";

         }else{
            cout<<"* ";
          }
         
         }

         for(int j =1; j <= 2*(n-i) -1; j++){
            cout<<"  ";
         }

         for(int j =1; j <= i; j++){

         if( j %2 == 0 ){

            cout<<"  ";

         }else if(i ==n && j ==1){
            continue;
         
          }else{
            cout<<"* ";

          }
         
         }

         cout<<endl;
      }


   
   
   return 0;
}