class Solution {
public:
    bool isHappy(int num) {
        int arr[1000]={0};
        while(num!=1){

            
            int sum=0;
            
            while(num!=0){
                sum+=(num%10)*(num%10);
                num/=10;
            }
            num=sum;
            if(arr[num] == 1)
                return false;
            arr[num] = 1;
            
        }
        return num==1;
}};