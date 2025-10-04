class Solution 
{
public:
    string decodeMessage(string key, string message) 
    {
        string temp, output;

        for(int i=0; i<key.length(); i++)
        {
            if(key[i]==' ')
              continue;
            if(temp.find(key[i]) == string::npos)
            {
                temp += key[i];
            }
        }  
        for(int i=0; i<message.length(); i++)
        {
            if(message[i]==' ')
            {
                output += ' ';
                continue;
            }
            int a = temp.find(message[i]);
            output += ('a' + a);
        }
        return output;
    }
};