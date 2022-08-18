
#ifndef PLANNER_H
#define PLANNER_H
#include<iostream>
using namespace std;

int total_routes;

// Can change this value for debugging
int DICT_SIZE = 100;

struct Journey {
  // define suitable fields here
  string station_one;
  string station_two;
  float startTime;
  float endTime;
  Journey * next;

  Journey() {
    station_one = " ";
    station_two = " ";
    startTime = 0;
    endTime = 0;
    next = nullptr;
  }

  Journey(string s1, string s2, float st, float et) {
    station_one = s1;
    station_two = s2;
    startTime = st;
    endTime = et;
    next = nullptr;
  }

  void printJourney() {
    cout << station_one << endl ;
    cout << station_two << endl;
    cout << startTime << endl;
    cout << endTime << endl;
    cout << next << endl;
    cout << endl;
  }
};

class Dictionary {
 private:
  int N; // size of array A
  struct Journey *A; // Array of dictionary entries

 public:

  // Return the hash value (between 0 and N-1) of the given string; assume string is null terminated and of max length 32
  int hashValue(string key);

    
  // Default constructor
  Dictionary(); 

  // Return the entry corresponding to given key, or NULL if the given key does not exist in the dictionary
  struct Journey *get(string key);

  // Put the given entry in the appropriate location (using hashing) in the dictionary; return true if success, false if failure (array is full)
  bool put(struct Journey* j);


};

//------------------------------------------------------------------------------------------------------------------
//planner
struct Station {
  // define suitable fields here
  string station_one;
  float time;
};


struct Query{
  // define suitable fields here
  string station_one;
  string station_two;
  float time;
};

class Planner { 
  Dictionary routesDict;

  Planner() {
  }

  bool addRoute(Journey j) {
    //routesDict.add(j)
  }

  void query_station(string s){
    //return routesdict.get(s)
  }
  
  void query_journey(Query q) {

  }
  
};
#endif