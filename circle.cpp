#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class circle
{
    private:
    char buffer[8];
    int i = 0;  //计数
    circle *next;
    circle *last;
    public:
    //生产
    void protect( char data)
    {
        circle *Head = new circle;
        circle *Last = new circle;
        while(Head -> next != Last)
        {

            if(Head -> next == NULL)
            {
                Head -> buffer[i] = data;
            }
        }
        i++;
    }

    //消费
    void consume(void)
    {
        circle *Head = new circle;
        circle *Last = new circle;
        while(Head != Last)
        {
            
            if(Last -> buffer != NULL)
            {
                buffer[i] = 0;
            }
        }
        i++;
    }

    //显示缓存
    void travel(void)
    {
        circle *Head = new circle;
        circle *Last = new circle;
        while(Last -> next != NULL)
        {
            cout << buffer[i] << endl;
            i++;
        }
    }
};

int main(void)
{

    circle c;
    char *Head;
    char *Last;
    char data;

    cout << " 请输入一个字符" << endl;
    cin >> data;
    c.protect(data);
    // cout << " 请输入一个字符" << endl;
    // cin >> data;
    // c.protect(data);cout << " 请输入一个字符" << endl;
    // cin >> data;
    // c.protect(data);

    c.travel();

    c.consume();
    c.travel();

    



}