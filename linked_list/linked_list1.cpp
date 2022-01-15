#include<bits/stdc++.h>
using namespace std;

class course{
    public:
    string course_name;
    string status;
    int days_left_for_exam;
    course* next;
    
    

    //this is the a counstructor
    //we will be able to work without this but we will have to write much more crap
    //like for each class member we will have to do something like course physics; phycis.status="so and so"....
    //mind it the default constructor has the same name but now it is unaccessible because we 
    //modifed it to fit our needs

    //the following is called a default constructor we need not define it like this
    // it is by default defined by cpp

    /*course(){

    }*/
//the following is called a parameterized constructor
    course(string a, string b, int c){
        course_name=a;
        status=b;
        days_left_for_exam=c;
        //course* next=d;
    }

   

       
    

    

    void PrintInfo(){
        cout<<course_name<<endl;
        cout<<status<<endl;
        cout<<days_left_for_exam<<endl;
        cout<<next<<endl;
        cout<<endl;
    }


    


};

 void append_LinkedL(string a, string b, int c,course* &head){

     course* temp=new course(a,b,c);

     if(head==NULL){
         head=temp;
        return;
     }
     course* ptr=head;
       while(ptr->next!=NULL){
           ptr=ptr->next;
       }
       
       ptr->next=temp;
       temp->next=NULL;
     
 }




int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif


    course* starting=NULL;


    //course* head=maths;
    //course physics;
    append_LinkedL("Ph107","fucked up",20,starting);

    //course chem;
    append_LinkedL("Ch105","havent started",20,starting);

    //course* head;
    
    //course maths;
    append_LinkedL("Ma109","okish",20,starting);
    //head=&maths;
    append_LinkedL("Cs101","doin' great",0,starting);

    course* i=starting;
    while(1==1){
        i->PrintInfo();
    //https://stackoverflow.com/questions/11373139/c-class-object-pointers-and-accessing-member-functions
        
        if(i==NULL){break;}
        i=i->next;
     }

}