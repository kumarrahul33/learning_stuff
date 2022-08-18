#include<iostream>
#include "planner.h"
#include <string>
#include "plannerDict.cpp"
using namespace std;



Planner::Planner() {
 routesDict = new Dictionary();
} 

bool Planner::addRoute(Query *q) {
    Journey* j = new Journey();
    j->station_one = q->station_one;
    j->station_two = q->station_two;
    j->startTime = q->time;
    j->endTime = q->endtime;

    routesDict->put(j);

    //cout << routesDict->get("jammu") << endl;
    return true;
}

void Planner::query_station(Query* q) {
    string s = q->station_one;
    Journey* ptr =  routesDict->get(s)->next;
    while (ptr != 0)
    {
        ptr -> printStationOne();
        ptr = ptr -> next;
    }
}

void Planner::query_journey(Query* q) {
    Journey* ptr = routesDict->get(q->station_one)->next;
    //cout << ptr <<endl;
    //ptr ->printJourney();
    while (ptr -> next !=  nullptr)
    {
        if(q->station_two == ptr->station_two && ptr->startTime >= q ->time){
            ptr -> printSoonestJourney();
            return;
        }

        else {
            Journey* ptr2 = routesDict->get(ptr -> station_two)->next;
            while (ptr2 != nullptr)
            {
                //cout << "checked on";
                //ptr2->printJourney(); 
                if (ptr2->station_two == q->station_two && ptr->startTime >= q->time)
                {
                    ptr->printSoonestJourney();
                    //ptr2->printJourney();
                    return;
                }

                ptr2 = ptr2 -> next;
                
            }
        }
        
        ptr = ptr -> next; 
        
            
    }

    cout << "ERROR" << endl;
    return;
    
}

void automatic(){
    Planner *p = new Planner();
    freopen("sample-planner.txt","r", stdin);

    string word;
    vector<Query*> queries;
    
    while (cin >> word)
    {
        //cout << word <<endl;
            if (word == "EXIT")
            {
                break;
            }
            
            Query* tempQ = new Query();

            if (word == "QUERY_JOURNEY")
            {            
            
            for (int i = 0; i < 4; i++)
            {  
                if (i == 0)
                {
                    tempQ ->action = word;
                }
                
                else if (i==1)
                {
                    tempQ ->station_one = word;
                }

                else if (i==3)
                {
                    tempQ -> station_two = word;
                    break;
                }

                else if (i == 2)
                {
                    tempQ -> time = (float)stoi(word);
                }
                cin >> word;
            }

        }

        else if (word == "ADD")
        {
            for(int i=0; i<5; i++){
                if (i == 0)
                {
                    tempQ ->action = word;
                }
                
                else if (i==1)
                {
                    tempQ ->station_one = word;
                }

                else if (i==3)
                {
                    tempQ -> station_two = word;
                }

                else if (i == 2)
                {
                    tempQ -> time = (float)stoi(word);
                }
                
                else if (i == 4)
                {
                    tempQ -> endtime = (float)stoi(word);
                    break;
                }
                
                cin >> word;
            }
        }

        else if (word == "QUERY_STATION")
            {
                for (int i = 0; i < 2; i++)
                {
                    if (i == 0)
                    {
                        tempQ ->action = word;
                    }

                    else if (i == 1)
                    {
                        tempQ -> station_one = word;
                        break;
                    }
                    
                    cin >> word;
                }
                
            }   

            queries.push_back(tempQ);
    }

/*
    while (cin >> word)
    {
        cout << 3 <<"-" << word << endl;
    }
    
*/
    //cout << "madarchod" << endl;
    //cout << queries.size();
    //queries[0] ->printQuery();

    for (auto q : queries)
    {
       // q ->printQuery();
       // cout << endl;
        
        if (q ->action == "ADD")
        {
            p->addRoute(q);
        }

        else if (q ->action == "QUERY_JOURNEY")
        {
            p ->query_journey(q);
        }
        
        else if (q -> action == "QUERY_STATION")
        {
           p->query_station(q);
        }
        
           
    }
    
}

int main() {
    automatic();
}
/*

int main() {
    Journey j1 = {"jammu","kashmir", 2100, 1600};
    Journey j2 = {"jammu", "kanpur", 1600, 1800};
    Journey j5 = {"jammu","madarchod",1800,3000};
    Journey j6 = {"jammu", "bsdchod", 1300,5000};

    Journey j3 = {"newyork", "delhi", 1200, 1800};
    Journey j4 ={"bsdchod","madarchod", 1300, 1200};

    Planner *p = new Planner();
    p->addRoute(&j1);
    p->addRoute(&j2);
    p->addRoute(&j3);
    p->addRoute(&j4);
    p->addRoute(&j5);
    p->addRoute(&j6);

    //p->query_station("jammu");
    //p->query_station("bsdchod");
    Query q = {"jammu","madarchod",1200};
    p->query_journey(&q);
    //p -> query_station("bsdchod");
    //Journey* ptr = p->routesDict->get("jammu");

   
   
    

//    Query q = {"jammu","gujrat",1100};

//    p.query_journey(q);

}
*/