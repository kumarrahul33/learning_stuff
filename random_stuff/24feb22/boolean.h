#include<bits/stdc++.h>
using namespace std;

const int MAX_SYMBOLS = 5;
const int MAX_EXPR_SIZE = 20;
struct Symbol
{
    char name;
    bool value;
};

class BooleanExpr
{
private:

    int symbol_cnt;
    int expr_len;
    Symbol symbols[MAX_SYMBOLS];
    char expr[MAX_EXPR_SIZE];

    int getbit(int n, int pos)
    {
        return ((n&(1<<pos))!=0);
    }

    bool run_cmd(bool a, bool b , char cmd)
    {
        if(cmd == '+') return a && b;
        else if(cmd == '*') return a || b;
        //change it
        return 0;
    }

    bool eval_expr()
    {
        char cmd_wo_not[MAX_EXPR_SIZE];
        int j=0; int k = 0;
        
        for (int i = 0; i < expr_len; i++)
        {
            if(expr[i] != symbols[j].name && expr[i] != '!')
            {
                cmd_wo_not[k] = expr[i];
                k++;
                continue;
            }
            else if(expr[i] == '!')
            {
                symbols[j].value = !symbols[j].value;
                continue;
            }
            j++;            

        }

        // cout << cmd_wo_not << '\n';
        // for (int i = 0; i < symbol_cnt; i++)
        // {
        //     cout << symbols[i].name << " " << symbols[i].value << '\n';
        // }
        
        
        int itr = 0;
        bool final_res = symbols[0].value;
        while (cmd_wo_not[itr] != '\0')
        {
            final_res = run_cmd(final_res, symbols[itr+1].value, cmd_wo_not[itr]);
            itr++;
        }
        
        return final_res;
        
    }

public:
    void read_expr(char* _expr, int expr_size, char* _symbols, int symbols_size)
    {
        for (int i = 0; i < expr_size; i++) expr[i] = _expr[i];

        for (int i = 0; i < symbols_size; i++) symbols[i].name = _symbols[i];

        symbol_cnt = symbols_size;
        expr_len = expr_size;
    }


    void print_truth_table()
    {
        for (int k = 0; k < symbol_cnt; k++)
        {
            cout << symbols[k].name << " ";
        }
        cout << "-> (";// << expr << ")"<< endl;    
        //cout << expr << ")"<< endl;
        for(int itr2 = 0; itr2 < expr_len ; itr2++)
        {
            cout << expr[itr2] ;
        }
        cout << ")"<< endl;
            
        for (int i = 0; i <  1<<symbol_cnt; i++)    //replace 1 with 1<<symbol_cnt
        {
            
            for (int j = 0; j < symbol_cnt; j++)
            {
                symbols[j].value = getbit(i, symbol_cnt-j-1);
            }
            
            for (int j = 0; j < symbol_cnt; j++)
            {
                cout << symbols[j].value << " ";
            }

                cout << "-> " << eval_expr() << '\n';
            
        }
        
    }
    BooleanExpr(/* args */)
    {

    }

};



