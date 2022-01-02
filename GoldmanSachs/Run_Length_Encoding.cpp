string encode(string src)
{     
        string s;
        int i=0,j=1,count=1;
        while(j<src.length())
        {
            if(src[i]==src[j])
            {
                count++;
                j++;
            }
            else
            {
                s+=src[i];
                s+=to_string(count);
                i=j;
                j++;
                count=1;
            }
        }   
        s+=src[i]; //to add the last remaining string and its count because j will be equal to length hence will not go inside while loop. 
        s+=to_string(count);
        return s;
}     
 
