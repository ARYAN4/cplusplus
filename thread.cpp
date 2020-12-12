#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
std::mutex _mutex;
void func(int a)
{
   // Mutex
    
   _mutex.lock();
   cout<<"A :"<<a<<" "<<endl;
   _mutex.unlock();
   return ;
}

class thread_obj
{
    public:
    
    void operat()
    {
      cout<<"print funt"<<endl;
    }  

};

int main()
{
    //thread_obj   obj ;
     

     std::thread th1(func,1);
     std::thread th2(func,2);
     std::thread th3(func,3);
     std::thread th4(func,4);
     std::thread th5(func,5);
     std::thread th6(func,6);
     //th1.detach();
     th1.join(); 
     th2.join();
     th3.join();      
     th4.join();
     th5.join();
     th6.join();
  return 0;
}


