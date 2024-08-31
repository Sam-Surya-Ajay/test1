class Solution 
{
public:
    int maxscore=0;
    
    int cal(string word, map<char, int>& m, vector<int> score)
    {
        int result=0;
        for(int i=0; i<word.size(); i++)
        {
            if(m[word[i]]>0)
            {
                m[word[i]]--;
                result+=score[word[i]-'a'];
            }
            else
               return -1;
        }

        return result;
    }

    void ans(vector<string> words, map<char, int> m, vector<int> score, int currscore, int i)
    {
        if(i==words.size())
        {
            maxscore=max(maxscore, currscore);
            return;
        }
        
        ans(words, m, score, currscore, i+1);

        int s=cal(words[i], m, score);
        if(s!=-1)
        {
            ans(words, m, score, currscore + s, i+1);
        }
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) 
    {
        map<char, int> m;
        for(int i=0; i<letters.size(); i++)
        {
            m[letters[i]]++;
        }
        ans(words, m, score, 0, 0);
        return maxscore;
    }
};