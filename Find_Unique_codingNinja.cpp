int count=0;
    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                
            }
            if(count==2)
            {
                break;
            }
            
        }
        if(count==1||)
        {
            return arr[i];
        }

    }
