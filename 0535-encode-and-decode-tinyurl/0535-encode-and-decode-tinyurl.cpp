class Solution 
{
public:
    
    map<string, string> m;
    int count=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) 
    {
        string temp="http://tinyurl.com/" + to_string(count);
        count++;

        m[temp]=longUrl;
        return temp;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) 
    {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));