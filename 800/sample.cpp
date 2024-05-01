#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        
        int AA = 0, DA= 0, AP = 0,DP= 0;
        
        
        for (int i = 0; i < n; ++i) {
            int att;
            cin >> att;
            AA += att;
        }
        
        for (int i = 0; i < n; ++i) {
            int def;
            cin >> def;
            DA+= def;
        }
        
        
        for (int i = 0; i < n; ++i) {
            int att;
            cin >> att;
            AP += att;
        }
        
        for (int i = 0; i < n; ++i) {
            int def;
            cin >> def;
           DP+= def;
        }
        
        
        if (AA > AP && DA> defP) {
            cout << "A" << endl;
        } else if (AA < AP && DA< defP) {
            cout << "P" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
    
    return 0;
}
