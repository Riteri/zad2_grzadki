#include <iostream>

using namespace std;

struct Warzywo
{
    float kryteria[3];
    string nazwa;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,kryterium1,kryterium2,kryterium3;

    cin>>n;
    cin>>kryterium1;
    cin>>kryterium2;
    cin>>kryterium3;

    Warzywo *warzywa_korzeniowe=new Warzywo[n];
    Warzywo *warzywa_niekorzeniowe=new Warzywo[n];
    Warzywo wczytane;

    kryterium1=kryterium1-1;
    kryterium2=kryterium2-1;
    kryterium3=kryterium3-1;

    for(int i=0;i<n;i++)
    {
        cin>>wczytane.nazwa;
        cin>>wczytane.kryteria[0];
        cin>>wczytane.kryteria[1];
        cin>>wczytane.kryteria[2];

        int temp=i;

        for(int j=i-1;j>=0;j--)
        {
            if(wczytane.kryteria[kryterium1]>warzywa_korzeniowe[j].kryteria[kryterium1])
            {
                warzywa_korzeniowe[j+1]=warzywa_korzeniowe[j];
                temp=j;
            }
            else if(wczytane.kryteria[kryterium1]==warzywa_korzeniowe[j].kryteria[kryterium1])
            {
                if(wczytane.kryteria[kryterium2]>warzywa_korzeniowe[j].kryteria[kryterium2])
                {
                    warzywa_korzeniowe[j+1]=warzywa_korzeniowe[j];
                    temp=j;
                }
                else if(wczytane.kryteria[kryterium2]==warzywa_korzeniowe[j].kryteria[kryterium2])
                {
                    if(wczytane.kryteria[kryterium3]>warzywa_korzeniowe[j].kryteria[kryterium3])
                    {
                        warzywa_korzeniowe[j+1]=warzywa_korzeniowe[j];
                        temp=j;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        warzywa_korzeniowe[temp]=wczytane;
    }

    for(int i=0;i<n;i++)
    {
        cin>>wczytane.nazwa;
        cin>>wczytane.kryteria[0];
        cin>>wczytane.kryteria[1];
        cin>>wczytane.kryteria[2];

        int temp=i;

        for(int j=i-1;j>=0;j--)
        {
            if(wczytane.kryteria[kryterium1]>warzywa_niekorzeniowe[j].kryteria[kryterium1])
            {
                warzywa_niekorzeniowe[j+1]=warzywa_niekorzeniowe[j];
                temp=j;
            }
            else if(wczytane.kryteria[kryterium1]==warzywa_niekorzeniowe[j].kryteria[kryterium1])
            {
                if(wczytane.kryteria[kryterium2]>warzywa_niekorzeniowe[j].kryteria[kryterium2])
                {
                    warzywa_niekorzeniowe[j+1]=warzywa_niekorzeniowe[j];
                    temp=j;
                }
                else if(wczytane.kryteria[kryterium2]==warzywa_niekorzeniowe[j].kryteria[kryterium2])
                {
                    if(wczytane.kryteria[kryterium3]>warzywa_niekorzeniowe[j].kryteria[kryterium3])
                    {
                        warzywa_niekorzeniowe[j+1]=warzywa_niekorzeniowe[j];
                        temp=j;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }

        warzywa_niekorzeniowe[temp]=wczytane;
    }

    for(int i=0;i<n;i++)
    {
        cout<<warzywa_korzeniowe[i].nazwa;
        cout<<"-";
        cout<<warzywa_niekorzeniowe[i].nazwa;
        cout<<" ";
    }

    return 0;
}