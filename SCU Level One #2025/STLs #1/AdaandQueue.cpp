    #include <bits/stdc++.h>

    #define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    #define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


    #define ll long long
    #define ld long double
    #define all(X) X.back(),X.front()


     using namespace std;
    const int N=1e5+5;


    void rq(queue<int>& q) {
        stack<int>sk;
        while (!q.empty()) {
            sk.push(q.front());
            q.pop();
        }

        while (!sk.empty()) {
            q.push(sk.top());
            sk.pop();
        }

    }
        void toFront(queue<int>& q,int n) {
            queue<int>t;

            while (!q.empty()) {
                t.push(q.front());
                q.pop();
            }

            q.push(n);

            while (!t.empty()) {
                q.push(t.front());
                t.pop();
            }

        }

    void back(queue<int>& q) {
        stack<int>sk;
        stack<int>sk2;
        queue<int>qnew;
        while (!q.empty()) {
            sk.push(q.front());
            q.pop();
        }
        sk.pop();
        while (!sk.empty()) {
            sk2.push(sk.top());
            sk.pop();
        }
        while (!sk2.empty()) {
            q.push(sk2.top());
            sk2.pop();
        }

    }
    void solve() {
        int t;cin>>t;
        deque<int>dq;
        bool rv=0;
        while (t--) {
            string s;cin>>s;
            int x;
            if(s=="toFront") {
                cin>>x;
                if(rv)dq.push_back(x);
                else dq.push_front(x);

            }
            else if(s=="push_back") {
                cin>>x;
                if(rv)dq.push_front(x);
                else dq.push_back(x);
            }else if(s=="reverse") {
                rv=!rv;
            }else if(s=="front") {

                if(dq.empty()) {
                    cout<<"No job for Ada?\n";
                }else {
                    if (rv) {
                        cout<<dq.back()<<'\n';
                        dq.pop_back();
                    }
                    else{
                        cout<<dq.front()<<'\n';
                        dq.pop_front();
                    }
                }

            }else if(s=="back") {
                if(dq.empty()) {
                    cout<<"No job for Ada?\n";
                }else {
                    if (rv) {
                        cout<<dq.front()<<'\n';
                        dq.pop_front();
                    }
                    else{
                        cout<<dq.back()<<'\n';
                        dq.pop_back();
                    }
                }
            }


        }
    }

    int main (){

        //txt
        HAMED
        solve();
        return 0;
    }