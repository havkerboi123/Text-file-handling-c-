#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>
using namespace std;



bool reg_verification(string fname,string reg)
{
    
    string file_reg[10];
    bool checkk=false;

    string line;
    fstream file;
    int i;
    int c;
    c=0;
    bool check=false;
  
    

    file.open(fname ,ios::in);
    if(file.is_open())
    {
        while(getline(file,line))
        {
            for(i=0;i<7;i=i+1)
            {
                file_reg[c]=file_reg[c]+line[i];
            }
        }  
        file.close();  
    }

    for(i=0;i<10;i=i+1)
    {
        if(reg==file_reg[c])
        checkk=true;
    }
    if(checkk=true)
    return true;
    else
    return false;

    
    





}

float easy(string name)
{

    float final_total=0;
    float final_highest=0;
    float final_lowest=20;
    int final_highest_index=0;
    int final_lowest_index=0;
    float avg=0;
    string final_marks[10];
    string final_name[10];
    string final_reg[10];
    float final_mark[10];
    string line;
    fstream file;
    int i;
    int c;
    c=0;
    
    int len1;
    

    file.open(name ,ios::in);
    if(file.is_open())
    {
        while(getline(file,line))
        {
            for(i=0;i<7;i=i+1)
            {
                final_reg[c]=final_reg[c]+line[i];
            }
            len1=line.length();
            for(i=11;i<len1+1;i=i+1)
            {
                if(line[i]>='A' && line[i]<='Z')
                {
                    final_name[c]=final_name[c]+line[i];
                }
                if(line[i]==' ')
                {
                    if(line[i+1]>='A' && line[i+1]<='Z')
                    {
                         final_name[c]=final_name[c]+line[i];
                    }
                }
                if((line[i]>='0' && line[i]<='9') || line[i]=='.')
                {
                    final_marks[c]=final_marks[c]+line[i];
                }


            }

            
            c=c+1;    
        }
        
        file.close();
    }

    for(i=0;i<10;i=i+1)
    {
        final_mark[i]=stof(final_marks[i]);
        final_total=final_total+final_mark[i];
        if(final_mark[i]>final_highest)
        {
            final_highest=final_mark[i];
            final_highest_index=i;

        }
        
        if(final_mark[i]<final_lowest)
        {
            final_lowest=final_mark[i];
            final_lowest_index=i;

        }
        
    }
    avg=final_total/c;
    cout<<"Highest from this file"<<final_name[final_highest_index]<<endl;
    cout<<"Lowest from this file"<<final_name[final_lowest_index]<<endl;
    cout<<"Average from this file"<<avg<<endl;

    
    


    
    
    
    

    



    

    
}

void search(string name,string reg)
{

    float final_total=0;
    float final_highest=0;
    float final_lowest=20;
    int final_highest_index=0;
    int final_lowest_index=0;
    float avg=0;
    string final_marks[10];
    string final_name[10];
    string final_reg[10];
    float final_mark[10];
    string line;
    fstream file;
    int i;
    int c;
    c=0;
    
    
    int len1;
    

    file.open(name ,ios::in);
    if(file.is_open())
    {
        while(getline(file,line))
        {

            for(i=0;i<7;i=i+1)
            {

                final_reg[c]=final_reg[c]+line[i];
            }
            len1=line.length();
            for(i=11;i<len1+1;i=i+1)
            {
                if(line[i]>='A' && line[i]<='Z')
                {
                    final_name[c]=final_name[c]+line[i];
                }
                if(line[i]==' ')
                {
                    if(line[i+1]>='A' && line[i+1]<='Z')
                    {
                         final_name[c]=final_name[c]+line[i];
                    }
                }
                if((line[i]>='0' && line[i]<='9') || line[i]=='.')
                {
                    final_marks[c]=final_marks[c]+line[i];
                }


            }

            
            c=c+1;    
        }
        
        file.close();
    }

    for(i=0;i<10;i=i+1)
    {
        final_mark[i]=stof(final_marks[i]);
        final_total=final_total+final_mark[i];
        if(final_mark[i]>final_highest)
        {
            final_highest=0;
            final_highest_index=i;

        }
        
        if(final_mark[i]<final_lowest)
        {
            final_lowest=final_mark[i];
            final_lowest_index=i;

        }
        
    }
    avg=final_total/c;

    for(i=0;i<10;i=i+1)
    {

        
        if(final_reg[i]==reg)


        {
            cout<<"Thier marks were"<<final_marks[i]<<endl;
            if(final_mark[i]>avg)
            cout<<"They were above average";
            else
            cout<<"They were below average";

        }
        
        
    }
    

    
}

float read(string name ,string reg)
{
    float get_marks;
    float final_total=0;
    float final_highest=0;
    float final_lowest=20;
    int final_highest_index=0;
    int final_lowest_index=0;
    float avg=0;
    string final_marks[10];
    string final_name[10];
    string final_reg[10];
    float final_mark[10];
    string line;
    fstream file;
    int i;
    int c;
    c=0;
    float result[5];
    
    int len1;
    

    file.open(name ,ios::in);
    if(file.is_open())
    {
        while(getline(file,line))
        {

            for(i=0;i<7;i=i+1)
            {

                final_reg[c]=final_reg[c]+line[i];
            }
            len1=line.length();
            for(i=11;i<len1+1;i=i+1)
            {
                if(line[i]>='A' && line[i]<='Z')
                {
                    final_name[c]=final_name[c]+line[i];
                }
                if(line[i]==' ')
                {
                    if(line[i+1]>='A' && line[i+1]<='Z')
                    {
                         final_name[c]=final_name[c]+line[i];
                    }
                }
                if((line[i]>='0' && line[i]<='9') || line[i]=='.')
                {
                    final_marks[c]=final_marks[c]+line[i];
                }


            }

            
            c=c+1;    
        }
        
        file.close();
    }

    for(i=0;i<10;i=i+1)
    {
        final_mark[i]=stof(final_marks[i]);
        if(reg==final_reg[i])
        {
            get_marks=final_mark[i];
        }
        
        
    }
    return get_marks;
    
    

}


void perfomance(string reg)
{
    float marks1;
    float marks2;
    float marks3;
    
    string filename;
  
    
    cout<<"enter quiz1 file";
    cin>>filename;
    marks1=read(filename,reg);
    cout<<marks1;
    cout<<"enter quiz 2 file";
    cin>>filename;
    marks2=read(filename,reg);
    cout<<marks2;
    cout<<"enter quiz 3 file";
    cin>>filename;
    marks3=read(filename,reg);
    cout<<marks3;

    if(marks3>marks2 && marks2>marks1)
    cout<<"Student showed improvemnt after every quiz";
    else if(marks3<marks2 && marks2<marks1)
    cout<<"Student showed poorer results after each quiz";
    else if(marks3<marks1 && marks1<marks2)
    cout<<"Student showed slight improvement";
    else
    cout<<"Student improved on one exam but perfomed poor after another";




    
    



}

void compare(string reg1, string reg2,int num_exams)
{

    int i;
    string fname;
    int student1=0;
    int student2=0;


    float student1_marks[num_exams];
    float student2_marks[num_exams];
    for(i=0;i<num_exams;i=i+1)
    {
        cout<<"enter file for exam 1";
        cin>>fname;
        student1_marks[i]=read(fname,reg1);
        student2_marks[i]=read(fname,reg2);

    }
    for(i=0;i<num_exams;i=i+1)
    {
        if(student1_marks[i]>student2_marks[i])
        student1=student1+1;
        if(student1_marks[i]<student2_marks[i])
        student2=student2+1;

    }
    cout<<reg1<<" performed better on"<<student1<<"exams"<<endl;
    cout<<reg2<<" performed better on"<<student2<<"exams"<<endl;
    









}










int main()

{
    bool check;

    char final_choice='y';
    while(final_choice=='y')
    {

        char choice2=0;
        int choice=0;
        
        string reg3;
        string reg1;
        string reg2;
        int num_of_exams;

        string fname;
        int i;
        int dec;
        string name;
        cout<<endl;
    
        cout<<"****WELCOME TO THE FILE HANDLING SYSTEM***"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Press 1 to get genral info from files(as many as u want!)"<<endl;
        cout<<"Press 2 to get specific info about a student from file"<<endl;
        cout<<"Press 3 to get perfomance report from all quizes (optimized for 3 quizez only)"<<endl;
        cout<<"Press 4 to get comparison information between two students"<<endl;

        cin>>dec;
        if(dec==1)
        {
            do 
            {
                cout<<"How many files do you want to work on?";
                cin>>choice;
                cout<<endl;


            }while(choice<0);
            for(i=0;i<choice;i=i+1)
            {
                 cout<<"Kindly enter file name for "<<i+1<<"st";
                 cin>>name;
                 cout<<endl;
                 cout<<"File "<<i+1<<":"<<endl;
                 cout<<endl;
                 easy(name);
                 cout<<endl;



            }
        
        }
        if(dec==2)
        {

            cout<<"Enter file name";
            cin>>fname;
            
            
            cout<<"enter student reg number";
            cin>>reg3;
            check=reg_verification(fname,reg3);
            if(check==false)
            {

                

                    do 
                    {
                         cout<<"Regnumber not found";
                         cin>>reg3;
                         check=reg_verification(fname,reg3);


                    }while(check==false);
                    
                       
                    
                    
            }
            search(fname,reg3);
                


            

        }
        if(dec==3)
        {
            cout<<"Enter reg number";
            cin>>reg3;
            check=reg_verification;
            if(check==false)
            {
                do
                {

                     cin>>reg3;
                     cout<<"Regnumber not found";
                     check=reg_verification(fname,reg3);


                }while(check==false);
            }
                
            perfomance(reg3);


        }
        if(dec==4)
        {
            cout<<"enter regnumber of first student"<<endl;
            cin>>reg1;
            check=reg_verification(reg1);
            if(check==false)
            {

                do
                {

                     cin>>reg1;
                     cout<<"Regnumber not found";
                     check=reg_verification(reg1);

                }while(check==false);
            }
            

            cout<<"enter reg number of second student"<<endl;
            cin>>reg2;
            check=reg_verification(reg2);
            if(check==false)
            {
                do 
                {
                     cin>>reg1;
                     cout<<"Regnumber not found";
                     check=reg_verification(reg2);


                }while(check==false);
            }

            cout<<"enter num of exams you want to compare in"<<endl;
            cin>>num_of_exams;
            compare(reg1,reg2,num_of_exams);
        }
        else if(dec<1 || dec>4 )
        cout<<"Invalid input"<<endl;
    
        
    
            
        



        
    

        

        
        
    
    
        
      
        
       
    

    



    cout<<"If you want to restart program enter y"<<endl;
    cout<<"Press any other characotr to end";
    cin>>final_choice;



    }

    
    
    
    return 0;
}