typedef enum e_vlues
{
    I = 1,
    V = 5,
    X = 10,
    L = 50,
    C = 100,
    D = 500,
    M = 1000,
}   t_values;

int romanToInt(char* s) 
{
    int i = 0;
    int count = 0;
    t_values values;
    while(s[i])
    {
        if (s[i] == 'I')
        {
            if(s[i + 1] == 'V')
            {
                count += V - I;
                i++;
            }
            else if(s[i + 1] == 'X')
            {
                count += X - I;
                i++;
            }
            else 
                count += I;
        }
        else if  (s[i] == 'V')
            count += V;
        else if (s[i] == 'X')
        {
            if(s[i + 1] == 'C')
            {
                count += C - X;
                i++;
            }
            else if (s[i + 1] == 'L')
            {
                count += L - X;
                i++;
            }
            else
                count += X;
        }
        else if (s[i] == 'L')
            count += L;
        else if (s[i] == 'C')
        {
            if(s[i + 1] == 'M')
            {
                count += M - C;
                i++;
            }
            else if (s[i + 1] == 'D')
            {
                count += D - C;
                i++;
            }
            else
                count += C;
        } 
        else if (s[i] == 'D')
            count += D;
        else if (s[i] == 'M')
            count += M;
        i++;
    }
    return count;
}
