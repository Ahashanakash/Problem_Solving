#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        string ov="Over";
        string rn="Run";
        string wt="Wicket";
        
    int over=0;
    int ball=0;
    int run=0;
    int wicket=0;
    cin>>s;
    for (size_t i = 0; i < s.size(); i++)
    {
        ball++;
        over++;
        if (s[i]=='W')
        {
            wicket++;
        }
        else if (s[i]=='1')
        {
            run+=1;
        }
        else if (s[i]=='2')
        {
            run+=2;
        }
        else if (s[i]=='3')
        {
            run+=3;
        }
        else if (s[i]=='4')
        {
            run+=4;
        }
        else if (s[i]=='5')
        {
            run+=5;
        }
        else if (s[i]=='6')
        {
            run+=6;
        }
        
    }
    if (ball>=6)
    {
        ball=ball%6;
        over=over/6;
    }
    else {
        ball=over;
        over=0;
    }

    if ((over>=1 && ball>=1) || (over>1 && ball==0))
    {
        ov="Overs";
    }
    if (run>1)
    {
        rn="Runs";
    }
    if (wicket>1)
    {
        wt="Wickets";
    }
    cout<<over<<"."<<ball<<" "<<ov<<" "<<run<<" "<<rn<<" "<<wicket<<" "<<wt<<"."<<endl;
    }
return 0;
}