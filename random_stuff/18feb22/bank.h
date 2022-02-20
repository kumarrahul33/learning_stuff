#include<bits/stdc++.h>
using namespace std;
struct Transaction
{
    int user_id;
    bool is_deposit;
    int amount,balance;
    
    void print()
    {
        if(is_deposit==1)
        {
            {
                cout<<user_id<<" deposit "<<amount<<" "<<balance<<'\n';
                return;
            }
        }
        cout<<user_id<<" withdraw "<<amount<<" "<<balance<<'\n';
        return;
    }
};

struct User
{
    int id;
    int balance;
    int n_deposits,n_withdrawals;
    vector<Transaction> Transaction_History;

    void update_History(bool is_deposit, int _amount, int _balance)
    {
        Transaction temp = {id, is_deposit, _amount, _balance};
       
            Transaction_History.push_back(temp);
            return;
    }

    int deposit(int amount)
    {
        balance+=amount;
        update_History(1,amount,balance);
        n_deposits++;
        return 0;
    }

    int withdraw(int amount)
    {
        if(balance<amount) return -1;

        balance-=amount;
        update_History(0,amount,balance);
        n_withdrawals++;
        return 0;
    }

    void print_history()
    {
        //vector<Transaction>::iterator head=Transaction_History.end();
        
        for(int i = 0; i < Transaction_History.size(); i++)
        {
            if(i==3) break;
            Transaction_History[Transaction_History.size()-1-i].print();
            
        }
    }

};

struct Request
{
    int user_id;
    bool is_deposit;
    int amount;

    void print()
    {
        if(is_deposit==1)
        {
            {
                cout<<user_id<<" deposit "<<amount<<" "<<'\n';
                return;
            }

            cout<<user_id<<" withdraw "<<amount<<" "<<'\n';
        }
    }
};


struct Bank
{
    int n_users=0;
    User users[10];
    int n_reqs=0;
    Request reqs[10]; 

    int add_user(int init_bal)
    {
        if(n_users>9)
        {
           // n_users++;
            return -1;
        }

        users[n_users] = {n_users, init_bal, 0 , 0};
        n_users++;
        return 0;
    }

    void add_request(int user_id, bool is_deposit, int amount)
    {
        if(n_reqs<10)
        {
            reqs[n_reqs]={user_id, is_deposit, amount};
            n_reqs++;
        }
    }

    int get_balance(int user_id)
    {
        return users[user_id].balance;
    }

    int get_num_deposits(int user_id)
    {
        return users[user_id].n_deposits;
    }

    int get_num_withdrawals(int user_id)
    {
        return users[user_id].n_withdrawals;
    }

    void deposit(int user_id, int amount)
    {
        users[user_id].deposit(amount);
    }

    void withdraw(int user_id, int amount)
    {
        users[user_id].withdraw(amount);
    }

    void print_user_history(int user_id)
    {
        users[user_id].print_history();
    }
};




