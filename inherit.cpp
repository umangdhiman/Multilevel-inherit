#include<iostream>
using namespace std;
class student{
protected:   //visible to base class and inherited class
    int rollno;
    char name[30];
public:
    void get_rollname(){    // get name & roll no.
        cout<<"Enter student's rollno and name\n";
        cin>>rollno>>name;
    }
    void put_rollname(){    //print name & roll no.
        cout<<"Roll no. is "<<rollno<<"\nName is "<<name<<endl;
    }
};
class marks: public student{    //class inherited publically
protected:
    int i;
    int marks[5];
public:
    void get_marks(){   //function to get marks
        cout<<"Enter marks in 5 subjects\n";
        for(i=0;i<5;i++)
            cin>>marks[i];
    }
    void put_marks(){   //function to print marks
        cout<<"Marks are --> \n";
        for(i=0;i<5;i++)
            cout<<marks[i]<<"\t";
        cout<<"\n";
    }
};
class result: public marks{ //multilevel inheritance
    int sum,percent;
public:
    void re_sult(){ //result function
        sum=0;
        for(i=0;i<5;i++)
            sum=sum+marks[i];   //total marks achieved
        cout<<"Total marks scored out of 500 -> "<<sum<<endl;
        percent=sum/5;  //percentage of marks
        cout<<"Percentage = "<<percent<<"%\n";
    }
};
int main(){
    result r;
    r.get_rollname(); //function called
    r.get_marks();
    r.put_rollname();
    r.put_marks();
    r.re_sult();
    return 0;
}

