#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt = 0;
    string input;
    while(getline(cin, input))
        if(input == "gum gum for jay jay") cnt++;
    cout << cnt;
}