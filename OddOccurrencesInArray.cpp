#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int> &A);

int main()
{
    std::vector<int> A {9,3,9,3,9,7,9};
    std::cout<<solution(A);
    return 0;
}

int solution(std::vector<int> &A)
{
    if((A.size()>1000000)||(A.empty()))
        return 0;

    int result = 0;
    for(auto& n: A)
    {
        std::cout<<n<<" ";
        if((n<1)&&(n>1000000000))
        {
            return 0;
        }
        result ^= n;
    }


    return result;
}
/*
int solution(std::vector<int> &A)
{
    if((A.size()>1000000)||(A.empty()))
        return 0;
    std::vector<int>temp;
    unsigned int i = 0;
    while(i!=A.size())
    {


        auto vecFind = std::find(temp.begin(), temp.end(),i);
        if(vecFind == temp.end())
        {
            for(unsigned int j=i+1; j<A.size(); ++j)
            {
                if((A[j]<1)&&(A[j]>1000000000))
                    return 0;

                if(A[i]==A[j])
                {
                    temp.push_back(i);
                    temp.push_back(j);
                    break;
                }

            }
        }
        else
        {
            return A[i];
        }


            i++;

    }

   // for(unsigned int i = 0; i<A.size(); ++i)
   // {
   //     auto it = std::find(temp.begin(),temp.end(), i);
   //     if(it==temp.end())
  //          return A[i];

  //  }
    return 0;


}
*/
