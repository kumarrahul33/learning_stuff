#include<bits/stdc++.h>
using namespace std;

class course{
    public:
    string course_name;
    string status;
    int days_left_for_exam;
    course* next;
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

 void add_at_begin(string a,string b,int c,course* &head){
     course* temp=new course(a,b,c);
     if(head==NULL){
         head=temp;
         return;
     }
     

     temp->next=head;
     head=temp;
     

 }

 int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif


    course* starting=NULL;

    append_LinkedL("Ph107","fucked up",20,starting);
    append_LinkedL("Ch105","havent started",20,starting);    
    append_LinkedL("Ma109","okish",20,starting);
    append_LinkedL("Cs101","doin' great",0,starting);

    add_at_begin("computer science","noob",10,starting);


    course* i=starting;
    while(1==1){
        i->PrintInfo();
    //https://stackoverflow.com/questions/11373139/c-class-object-pointers-and-accessing-member-functions
        
        if(i==NULL){break;}
        i=i->next;
     }


    return 0;

 }
