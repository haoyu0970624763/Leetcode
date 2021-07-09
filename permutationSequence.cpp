class Solution
{
public:
    string ans;

    int fact(int num)
    {
        if (num == 0 || num == 1)
            return 1;
        else
        {
            int ans_num = 1;
            for (int i = 1; i <= num; i++)
            {
                ans_num *= i;
            }
            return ans_num;
        }
    }

    void permute(string str, int k, string finalAns)
    {

        if (str.length() == 0)
        {
            ans = finalAns;
            return;
        }

        int factNum = fact(str.length() - 1);

        for (int index = 0; index < str.length(); index++)
        {

            if (factNum < k)
            {
                k -= factNum;
                continue;
            }
            else
            {
                string subStr = str.substr(0, index) + str.substr(index + 1);
                permute(subStr, k, finalAns + str[index]);
                break;
            }
        }
    }

    string getPermutation(int n, int k)
    {

        string str = "";

        for (int num = 1; num <= n; num++)
            str += to_string(num);

        permute(str, k, "");

        return ans;
    }
};