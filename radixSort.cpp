#include <iostream>
#include <string>

using namespace std ;

class queue{
 public :   int front = 0 ;
            int rear = -1 ;
            int arr[10] ;
            int size ;
            int filled = 0 ;

     queue(){
          size = 10 ;
     }
     
     void enqueue(int x){
          if(filled == size){
               cout << "Queue exced the size " <<endl;
          }
          else{
               if(rear==size-1){
                    rear = 0 ;
                    arr[rear] = x ;
                    
               }else
                  arr[++rear] = x ;
               ++filled ;
          }
     }
     int dequeue(){
          
          if(filled == 0) {
               cout << "Empty Queue" << endl;
               return -1 ;
          }else {
          
               int rvalue = arr[front] ;
               if(front == size-1){
                     front = 0 ;
                     filled-- ;
               }
               else{
                  front++ ;
                  filled-- ;
               }
               return rvalue ;
          }
     }
     int returnSize(){
          return size ;
     }
     
     bool isEmpty(){
          if (filled == 0) 
             return true ;
          else 
             return false ;
          
     }
};


int getDigit(int a , int num){
     int divider = 1 ;
     --a ;
     while(a--){
          divider = divider * 10 ;
     }
     int digit = num / divider % 10 ;
     return digit ;
}


int getMax(int a[]){
     int largest = a[0] ;
     for(int i=1 ; i<10 ; ++i){
          if(a[i] > largest){
               largest = a[i];
          }
     }
     return largest ;
}

int lengthOfInt(int x){
     int length = 0 ;
     while(x!=0){
          x /= 10 ;
          ++length ;
     }
     return length ;
}

void printArray(int a[] , int len){
     for(int i=0; i<len ; ++i){
          cout << a[i] << " , " ; 
     }
}


int main(){
     int lengthOfArray = 10 ;
     int a[10] = {458,4449,966,558,62454,244,145,28854,636,447} ;
     int length = lengthOfInt(getMax(a)) ;
     queue q[10] ;
     
     
     
     for(int i=1 ; i<=length ; ++i){
          
           for(int j=0 ; j<lengthOfArray ; ++j){
               
                int k  = getDigit(i,a[j]) ;
               q[k].enqueue(a[j]) ;
               
           }
           int j=0 ;
           for(int k=0 ; k<10 ; ++k){
                while(q[k].filled > 0) {
                     a[j++] = q[k].dequeue() ;
                }
           }
     }
     printArray(a , 10) ;
     
     return 0 ;
}
