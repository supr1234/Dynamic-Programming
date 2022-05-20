#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const int N = 1e5+2;
int dp[N];
uint64_t number_of_ways(uint64_t n)
{
    if(n==0){
        return 1;
    }
    if(n==1||n==2){
        return n;

    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = number_of_ways(n-1)+number_of_ways(n-2)+number_of_ways(n-3);
    return dp[n];
}


int main()
{
    uint64_t n;
    cin >> n;
    rep(i,0,N)
        dp[i] = -1;
    cout << number_of_ways(n)%1000000007 << endl;
}

/* 
Crio Methodology

Milestone 1: Understand the problem clearly
1. Ask questions & clarify the problem statement clearly.
2. Take an example or two to confirm your understanding of the input/output & extend it to test cases
Milestone 2: Finalize approach & execution plan
1. Understand what type of problem you are solving.
     a. Obvious logic, tests ability to convert logic to code
     b. Figuring out logic
     c. Knowledge of specific domain or concepts
     d. Knowledge of specific algorithm
     e. Mapping real world into abstract concepts/data structures
2. Brainstorm multiple ways to solve the problem and pick one
3. Get to a point where you can explain your approach to a 10 year old
4. Take a stab at the high-level logic & write it down.
5. Try to offload processing to functions & keeping your main code small.
Milestone 3: Code by expanding your pseudocode
1. Make sure you name the variables, functions clearly.
2. Avoid constants in your code unless necessary; go for generic functions, you can use examples for your thinking though.
3. Use libraries as much as possible
Milestone 4: Prove to the interviewer that your code works with unit tests
1. Make sure you check boundary conditions
2. Time & storage complexity
3. Suggest optimizations if applicable
*/
