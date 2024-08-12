#include<iostream>
void   _3()
{
    std::cout<<"Hello, World!"<<std::endl;
}
void _4()
{
    std::cout<<5+6<<std::endl;
    std::cout<<5*6<<std::endl;
}
void _5()
{
    
}
void _6()
{
    //合法
}
void _9()
{
    int i=50;
    int sum=0;
    while(i<=100)
    {
        sum+=i++;
    }
    std::cout<<"sum="<<sum<<std::endl;
}
void _10()
{
    int i=10;
    while(i>=0)
    {
        std::cout<<i--<<std::endl;
    }
}
void _11()
{
    int i,j;
    std::cout<<"Please input two numbers:"<<std::endl;
    std::cin>>i>>j;
    int sum=0;    
    while(i<=j)
    {
        sum+=i++;
    }
    std::cout<<"sum="<<sum<<std::endl;
}
int main()
{
    //_3();
    //_9();
    return 0;
}