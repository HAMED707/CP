//
// Created by h70ab on 8/24/2024.
//

/*  Standered Template Library  */
// // sequntial containers ( arr+functions)=> (vector - dequeue - array )// index
// // container adapters (stack - queue - priority queue) // only one element
// //associative container( set - map - multiset )// cna access every element

// in arr
/*
 *binary_search(arr,arr+N,5)if 5 exist => in sorted arr
 *upper_bound(arr,arr+N,5)1st element greater than 5
 *lower_bound(arr,arr+N,5)greater than or = 5
 *max_element(arr,arr+N)
 *min_element(arr,arr+N)
 */

//mutiset
/*not unique 3 3 3*/
//set
//if(set.find(2)!=set.end())
//if(set.erase(set.find(2)) )
/*
 * Binary search
 * unique
 * sorted always
 * no presize - (sz)
 * erase not exiting element couse time run time error
 */
#include<iostream>
#include<set>
using namespace std;

int main() {
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 set<int>st;
 st.insert(1);
 st.insert(3);
 st.insert(4);
 st.insert(5);
 st.insert(7);
 st.insert(9);
 for(auto& x:st)cout<<x<<" ";
 cout<<endl;
 //st.erase(8);
 for(auto& x:st)cout<<x<<" ";
 cout<<endl;
 cout<<*st.upper_bound((5))<<endl;
 cout<<*st.lower_bound((5))<<endl;
 auto it=--st.upper_bound(5);
 auto itr=++st.upper_bound(5);

 cout<<*it<<" "<<*itr;
}
//stl2 50: