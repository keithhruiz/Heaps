/*
Keith Ruiz-Hopper
Assignment 5
Heap.h
*/ 
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template<class H>
class Heap {
    public: 
        Heap::Heap() {
            //initialize private variables
            T arr[cap];
            int lastIdx();
        }
        
        Heap::Heap(T* array, int size) { //default constructor
            
            
        } 
        
        Heap(const Heap& other)  { //constructor to initialize this heap with the contents of array
            
        }
        
        Heap& operator=(const Heap& other) { //assignment operator 
        
         
        }    
        ~Heap()  //destructor
        
        }
        
        void reset()  //removes all of the elements from the heap
        
        
        
        int size() const;  //returns the number of elemetns currently stored in the heap
            
        
        
        int capacity() const;  //returns the number of elements the heap can store without needing to perform a resize operation 
            
        
        
        T max() const{  //returns the largest element in the heap
        }
        
        T pop() {
            
        }
        //worked with Carter (tutor) to get this function
        void insert(T item) { //adds item into the heap
            if(lastIdx==cap-1) {
                T tmp= T tmp[cap*2]
                for(int i=0; i!=lastIdx;i+1) {
                    tmp[i]=arr[i];
                }
                tmp[lastIdx+1]=item;
            }
            else {
                arr[lastIdx+1]= item;
                lastIdx++;
            }    
        }
        
        
        T* toArray(); 
            
    private:
        int T num;
        int T cap;
        int T lastIdx;
        
};




