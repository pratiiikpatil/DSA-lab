/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

struct student 
{
    int rollno;
    char name[50];
    int marks;
    float SGPA;
};

class STUDDB
{
    private : student R[20];
                int n;
    
    public :
            STUDDB (void)
            {n=0;}
            void accept_records(void);
            void display_records(void);
            int Linear_search(int rno);
};

void STUDDB :: accept_records(void)
{
    int i;
    cout <<"how many records(1-20):";
    cin >> n;
    if ( n> 20 || n < 1 ) { cout <<" invalid input "; exit (0);}
    for ( i=0;i<n;i++)
    {
        cout <<"Enter rollno:";
        cin >> R[i].rollno;
        cout <<"Enter name :";
        cin >> R[i].name;
        cout << "Enter marks :";
        cin >> R[i].marks ;
        cout << "Enter SGPA :";
        cin >> R[i].SGPA ;
    }
}
void STUDDB ::display_records(void)
{
        int i;
        for (i=0;i<n;i++)
         {
             cout <<"\nrollno;";
             cout <<R[i].rollno;
             cout <<"\nname :";
             cout <<R[i].name;
             cout <<"\nmarks :";
             cout <<R[i].marks;
             cout << "\nSGPA :";
             cout <<R[i].SGPA;
             
         }     
}

int STUDDB :: Linear_search(int rno)
{
    int i;
    for ( i=0;i<n;i++)
     { if ( R[i].rollno==rno)
            return(i);
     }
    return(-1);
    
}
int main()
{
        int rno,ans;
        STUDDB D;
        D.accept_records();
        D.display_records();
        cout <<" Enter Rollno to search records : ";
        cin >> rno;
        ans=D.Linear_search(rno);
        if (ans==-1)
        cout << " Not Found";
        else 
        cout << "found at position:"<<ans;
        
        return 0;
        
}

