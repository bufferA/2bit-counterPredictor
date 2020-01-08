#include <iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<fstream>
using namespace std;

int main()
{
    int nextstate=0;
    string inputState;
    int counter=0;//計算多大
    int twocounter=0;//有沒有兩次
    cin>>inputState;//if(inputState[i]=='0')
    // for(int i=0;i<inputState.size();i++)
    // {
    //     counter++;
    // }
    int actual[inputState.size()];
    for(int i=0;i<inputState.size();i++)
    {
        if(inputState[i]=='T'||inputState[i]=='t'||inputState[i]=='1')
        {
            actual[i]=1;
        }
        else if(inputState[i]=='F'||inputState[i]=='f'||inputState[i]=='0')
        {
            actual[i]=0;
        }
    }
    //cout<<"IM HERE:"<<inputState.size()<<endl;
    int pred[inputState.size()];
    int result[inputState.size()];
    pred[0]=0;
    int Totalcounter=0;//輸出用的算第幾項
    string res;
    for(int i=0;i<inputState.size();i++)
    {
        if(twocounter==2)//轉換predictstate
        {
            if(nextstate==0)
            {
                nextstate=1;
                twocounter=0;
            }
            else if(nextstate==1)
            {
                nextstate=0;
                twocounter=0;
            }
        }
        
        pred[i]=nextstate;

        if(pred[i]==actual[i])
        {
            twocounter=0;
            result[i]=1; 
        }

        else if(pred[i]!=actual[i])
        {
            twocounter++;
            result[i]=0;
        }
        
        Totalcounter++;

        if(result[i]==0)
        {
            res="N";
        }
        else
        {
            res="T";
        }
        //cout<<twocounter<<endl;
        cout<<"prediction:"<<pred[i]<<",Actual State:"<<actual[i]<<endl<<"result"<<Totalcounter<<" : "<<res<<endl;
        cout<<endl;
    }

    return 0;
}
