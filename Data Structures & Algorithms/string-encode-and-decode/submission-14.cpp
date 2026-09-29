class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
            for(string str :strs ){
                encoded+=to_string(str.size());
                encoded+='#';
                encoded+=str;


             
              }  
              return encoded;
            }


    

    vector<string> decode(string s) {
                vector<string> result;
                int i=0;//i represents begining of next remaining string 
                //whatever is in between of i and j-1 is lenght of nect string
                while(i<s.size()){
                    int j=i;
                    while (s[j]!='#')// jab hash pass hoga tab e if condition exit hogi
                     {
                        j++;
                    }
                   int length= stoi(s.substr(i,j-i));
                      i=j+1;
                    string str=s.substr(i,length);
                    result.push_back(str);
                       i+=length;
                 
                }
                return result;

            

        

    }
};
