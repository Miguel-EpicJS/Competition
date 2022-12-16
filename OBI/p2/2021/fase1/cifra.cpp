#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string word;
//    char consoants[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};

    // 0 4 8 14 20

    cin >> word;

    int len = word.size();

    string result = "";

    char plus;

    for ( int i = 0; i < len; i++ )
    {
	result.push_back(word[i]);
	if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' )
	{
	    continue;
	}
	else
	{
	    if (word[i]-'a' < 4)
	    {
		if ( abs(word[i] - 'a' ) == abs(word[i] - 'e') )
		{
		    result.push_back('a');
		} else if ( abs(word[i] - 'a' ) > abs(word[i] - 'e') )
		{
		    result.push_back('e');
		}
		else
		{
		    result.push_back('a');
		}
	    }
	    else if (word[i]-'a' < 8)
	    {
		if ( abs(word[i] - 'e' ) == abs(word[i] - 'i') )
		{
		    result.push_back('e');
		} else if ( abs(word[i] - 'e' ) > abs(word[i] - 'i') )
		{
		    result.push_back('i');
		}
		else
		{
		    result.push_back('e');
		}
	    }
	    else if (word[i]-'a' < 14)
	    {
		if ( abs(word[i] - 'i' ) == abs(word[i] - 'o') )
		{
		    result.push_back('i');
		} else if ( abs(word[i] - 'i' ) > abs(word[i] - 'o') )
		{
		    result.push_back('o');
		}
		else
		{
		    result.push_back('i');
		}
	    }
	    else if (word[i]-'a' < 20)
	    {
		if ( abs(word[i] - 'o' ) == abs(word[i] - 'u') )
		{
		    result.push_back('o');
		} else if ( abs(word[i] - 'o' ) > abs(word[i] - 'u') )
		{
		    result.push_back('u');
		}
		else
		{
		    result.push_back('o');
		}
	    }
	    else
	    {
		result.push_back('u');
	    }


	    plus = word[i]+1;
	    
	    if(word[i] == 'z')
	    {
		result.push_back('z');
	    }
	    else if(word[i] == 'v')
	    {
		result.push_back('x');
	    }
	    else if(word[i] == 'x')
	    {
		result.push_back('z');
	    }
	    else if(plus == 'a' || plus == 'e' || plus == 'i' || plus == 'o' || plus == 'u')
	    {
		result.push_back(plus+1);
	    }
	    else
	    {
		result.push_back(plus);
	    }


	}
    }

    cout << result << "\n";

    return 0;
}
