#include <iostream>
#include <vector>
using namespace std;

// solution
vector<int> majorityElements(vector<int> vec)
{
    int element1 = vec[0];
    int count1 = 1;

    int element2 = 0;
    int count2 = 0;

    for (int i = 1; i < vec.size(); i++)
    {

        if (element1 == vec[i])
        {
            count1++;
        }
        else if (element2 == vec[i])
        {
            count2++;
        }
        else if (count1 == 0)
        {
            element1 = vec[i];
            count1 = 1;
        }
        else if (count2 == 0)
        {
            element2 = vec[i];
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == element1)
        {
            count1++;
        }
        else if (vec[i] == element2)
        {
            count2++;
        }
    }

    vector<int> ans;
    if (count2 > vec.size() / 3)
    {
        ans.push_back(element2);
    }
    if (count1 > vec.size() / 3)
    {
        ans.push_back(element1);
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;
    vector<int> vec;
    int input;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    vector<int> ans;

    ans = majorityElements(vec);

    if (ans.size() == 0)
    {
        cout << "No Majority Elements";
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }

    cout << endl;
    return 0;
}