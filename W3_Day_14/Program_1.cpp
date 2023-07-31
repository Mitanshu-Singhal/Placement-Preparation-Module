class Solution
{
    public:
       	LOGIC

       	APPROACH-1(NAIVE)
       	1. Merge Sort❓ (Kyoki hame 2 sorted array dikh gaye), Ab median kyoki hame merge karke hi milega.
       	O(M+N)

       	APPROACH-2(BINARY SEARCH)

       	1.Why❓ Sorted array se hame Binary Search strike karega.

       	2.Ab isme Binary Search lagayenge kaise❓

       	3.We will partition both the arrays lets say Left part of both into L1,L2
       	and Right part of both into R1,R2.

       	4.Left part and Right part se matlab?->Left part (L1+L2) wo hoga joki agar 
       	merge karte arrays ko to median ke left part wala hota aur Right part (R1+R2)
       	jo median ke right mein hota.

       	5.Now main action of BINARY SEARCH 😎 is 🔥PARTITIONING🔥.

       	6.Implement kaise karenge❓
       	- We will do the Binary Search in the array having shortest size.

       	- Why shortest❓TC less hoga 

       	- median = (n+m+1)/2, low=0, high=n

       	- PARTITION -> cut1 = (low+high)/2 {Pehle array ke kitne elem L1 mein honge}
       	cut2= median - cut1 {Dusre array ke kitne elem L2 mein honge}.

       	- Ab L1,L2 ki border values jo ki median ke just left = l1,l2 and R1,R2 ki 
       	border values jo ki median ke just right will r1,r2

       	Ab sara khel inhi ka hain

       	- If cut1!=0 take l1=nums1[cut1-1],cut2!=0 l2=nums2[cut2-1],cut1!=n 
       	r1=nums1[cut1],cut2!=m r2=nums2[cut2].

       	Now the 🔥VALIDITY🔥 of Partition is when l1<=r2 and l2<=r1

       	- Agar aisa hua to hame hamara merged array mil gaya nahin to aur even 
       	odd ke hisab se median nikal lenge.

       	- if(l1>r2) to high=cut1-1(Hame L1 mein number ghatane padenge)

       	- if(l2>r1) to low=cut1+1(Matlan cut2 kam hoga means L2 se number ghatayenge).

       	- Aur fir dobara ghumenge loop mein.

       	- TC: O(log(min(m,n)))
//------------------------------------------------------------------------------------------------
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            int n = nums1.size();
            int m = nums2.size();
            if (m < n)
                return findMedianSortedArrays(nums2, nums1);
           	//Shortest Array finding
            int medianPos = (n + m + 1) / 2;
           	//Median Pos in merged array
            int low = 0;
           	//low of shortest array
            int high = n;
           	//high of shortest array
            while (low <= high)
            {
                int cut1 = (low + high) / 2;
               	//L1 array - 0 to cut1,R1 array - cut1 to n
                int cut2 = medianPos - cut1;
               	//L2 array - 0 to cut2,R2 array - cut2 to m

                int l1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
                int l2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];
                int r1 = cut1 == n ? INT_MAX : nums1[cut1];
                int r2 = cut2 == m ? INT_MAX : nums2[cut2];
               	//Above are boundary values of L1,L2,R1,R2
               	//---------l1 r1--------
               	//---------l2 r2--------

                if (l1 <= r2 && l2 <= r1)
               	//Validity of Partition
                {
                    if ((n + m) % 2 == 0)
                       	//Even no merged array
                        return (max(l1, l2) + min(r1, r2)) / 2.0;
                    else
                       	//Odd no merged array
                        return max(l1, l2);
                }
                else if (l1 > r2)
                   	//Invalid case
                    high = cut1 - 1;
               	//L1 ki boundary se piche jayenge
                else
                   	//L2 ki boundary se piche jayenge
                    low = cut1 + 1;
            }
            return 0.0;
        }
};