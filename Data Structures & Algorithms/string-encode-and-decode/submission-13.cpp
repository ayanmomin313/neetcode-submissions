class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";

        for( string str:strs){
                s+=to_string(str.size());
                s+='#';
                s+=str;
                        }

         return s;
    }

    vector<string> decode(string s) {
                vector<string> result;
                int i=0;
                while(i<s.size()){
                    int j=i;
                    while(s[j]!='#'){
                        j++;
                    }
                    int length=stoi(s.substr(i,j-i));
                    i=j+1;
                    string str=s.substr(i,length);
                    result.push_back(str);
                    i+=length;
                }
                return result;

    }
};
