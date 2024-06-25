// Problem Link: https://www.geeksforgeeks.org/problems/implement-queue-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-queue-using-array

void MyQueue :: push(int x)
{
        // Your Code
        if(rear==100005) return ;
        arr[rear++]=x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code  
        if(rear-front>0) return arr[front++];
        return -1;
}
