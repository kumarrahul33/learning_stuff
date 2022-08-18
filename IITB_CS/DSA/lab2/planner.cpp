#include<iostream>
#include "planner.h"
using namespace std;

Planner::Planner() {

} 

bool Planner::addRoute(Journey j) {
    Journey* temp = new Journey(j.station_one, j.station_two, j.startTime, j.endTime);
    routesDict.put(temp);

    return true;
}

void Planner::query_station(string s) {
    Journey* ptr =  routesDict.get(s);
    while (ptr->next != nullptr)
    {
        ptr -> printJourney();
    }
}

void Planner::query_journey(Query q) {
    Journey* ptr = routesDict.get(q.station_one)->next;

    while (ptr -> next !=  nullptr)
    {
        if(ptr->station_two == q.station_two){
            ptr -> printJourney();
            return;
        }

        else {
            Journey* ptr2 = routesDict.get(ptr -> station_two) -> next;
            while (ptr2 -> next != nullptr)
            {
                if (ptr->station_two == q.station_two)
                {
                    ptr->printJourney();
                    ptr2->printJourney();
                    return;
                }
                
            }
            
        }
            
    }

    cout << "no routes found \n" << endl;
    return;
    
}