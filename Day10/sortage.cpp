#include <iostream>
#include <fstream>
#include <string>
using namespace std;


/*int Search()
{
    const int n = 15;
    string name;
    //string fatherName;
    int age[n];
    string gender;
    int experience[] = {};
    string qualification[n];
    string paperChoice;

    int ch;

    cout<<"\n\nWhat Would You Like To Search\n1. Experience\n2.Qualification\n";
    cin>>ch;

    switch (ch)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            if(experience[i] < 5)
            {
                cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                <<paperChoice[i];
            }
            else if(experience[i] > 5 && experience[i] < 10)
            {
                cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                <<paperChoice[i];
            }
            else
            {
                cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                <<paperChoice[i];
            }
                 
        }
        
        break;

    case 2:
        for (int i = 0; i < n; i++)
        {
            if(qualification[i] == "B.Ed")
            {
                cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                <<paperChoice[i];
            }
            else if(qualification[i] == "MSC")
            {
                cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                <<paperChoice[i];
            }
            else if(qualification[i] == "D.El.Ed")
            {
                cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                <<paperChoice[i];
            }
                 
        }
    
    default:
        cout<<"Invalid Input...";
        break;
    }
    
        
    
    

}*/

int main()
{
    int n =15, ch1, ch2;
    char c;
    string name[n]={};
    int age[n] ={};
    string gender[n] ={};
    string qualification[n]= {};
    string paperChoice[n]= {};
    int experience[n]= {};
    

    cout<<"\n\n--- Teacher Eligibility Test Form ---\n";
    cout <<"\tEnter Candidate Details\n";

    for (int i = 0; i < n; i++)
    {
        cout <<i+1 <<".\tName: ";
        cin>>name[i];
        cout <<"\tAge: ";
        cin>>age[i];
        cout <<"\tGender: ";
        cin>>gender[i];
        cout <<"\tQualification: ";
        cin>>qualification[i];
        cout <<"\tExperience: ";
        cin>>experience[i];
        cout <<"\tPaper Choice: ";
        cin>>paperChoice[i];
        cout<<"\n\n";
        
        
    }

    do//Loop For All Details.
    {
        int ch1;
        cout<<"\n\nEnter Your Choice:";
        cout<<"\n1. Show All Details\n2. Show Sorted Details\n";
        cout<<"INPUT: ";
        cin>>ch1;

        switch (ch1)
        {//Showing All Details.
        case 1:
            for (int i = 0; i < n; i++)
            {
                cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                <<paperChoice[i];
            }
            break;


        case 2:
            int ch;

            cout<<"\n\nWhat Would You Like To Sort Search\n1. Experience\n2.Qualification\n";
            cin>>ch;

            switch (ch)
            {
            case 1:
                cout<<"\n---- Sort For ----\n ";
                cout<<"1. Fresher\n2. More Than 5 Yrs\n3. More Than 10 Yrs";
                cout<<"INPUT: ";
                cin>>ch2;

                switch (ch2)
                {
                case 1:
                    for (int i = 0; i < n; i++)
                    {
                        cout<<"\n\n ==== Freshers ==== \n";
                        if(experience[i] < 5)
                        {
                            cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                            "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                            "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                            <<paperChoice[i];
                        }
                    }
                    /* code */
                    break;

                case 2:
                    for (int i = 0; i < n; i++)
                    {
                        cout<<"\n\n ==== Exp More Than 5yrs ==== \n";
                        if(experience[i] > 5 && experience[i] < 10)
                        {
                            cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                            "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                            "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                            <<paperChoice[i];
                        }
                        /* code */
                    }

                case 3:
                    for (int i = 0; i < n; i++)
                    {
                        cout<<"\n\n ==== Exp More Than 10yrs ==== \n";
                        if(experience[i] < 10)
                        {
                            cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                            "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                            "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                            <<paperChoice[i];
                        }
                    }
                    
                    
                
                default:
                    cout<<"Invalid Input...";
                    break;
                }

            case 2:
                cout<<"\n---- Sort For Qualification ----\n ";
                cout<<"1. B.Ed\n2. M.Sc\n3. D.El.Ed";
                cout<<"INPUT: ";
                cin>>ch2;

                switch (ch2)
                {
                case 1:
                    for (int i = 0; i < n; i++)
                    {
                        if(qualification[i] == "B.Ed")
                        {
                            cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                            "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                            "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                            <<paperChoice[i];
                        }
                    }
                    /* code */
                    break;

                case 2:
                    for (int i = 0; i < n; i++)
                    {
                        if(qualification[i] == "MSC")
                        {
                            cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                            "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                            "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                            <<paperChoice[i];
                        }
                        /* code */
                    }

                case 3:
                    for (int i = 0; i < n; i++)
                    {
                        if(qualification[i] == "D.E")
                        {
                            cout <<i+1<<". Name - "<<name[i]<<"\nAge - "<<age[i]<<
                            "\nGender - "<<gender[i]<<"\nQualification - "<<qualification[i]<<
                            "\nExperience In Years - "<<experience[i]<<"\nPaper Choice - "
                            <<paperChoice[i];
                        }
                    }
                    
                    
                
                default:
                    cout<<"Invalid Input...";
                    break;
                }
               
                        
    
            
            default:
                cout<<"Invalid Input...";
                break;
            }
            
        
        default:
            cout<<"Invalid Input...";
            break;
        }

        cout<<"Do You Want To Search Again (y/n): ";
        cin>>c;
    } while (c == 'y');

    return 0;
}