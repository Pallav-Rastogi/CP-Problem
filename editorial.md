# Editorial and Solutions
Hello I am Pallav, the creator of this problem.
So this problem is quite easy !!!
Here are a few hints to help you before you directly jump to the solution.

**HINTS** 
1) To check if a number is isolated, check the opposite.
*i.e)*  try to find two adjacent non zero digits in the number and if there aren't any, then the number is isolated. Its as simple as that.
2) First store the number as a string in a character array, you CANNOT store it as an integer because the constraints on n (10^50^) exceed the size of int or even long long int by a large margin.
<br>

## Checking if a single number is isolated or not :
First store the number in a char arr[] <br>
> for (int i = 0; arr[i] != '\0'; i++){<br>
> &emsp;&emsp;if (arr[i] != '0'){<br>
> &emsp;&emsp;&emsp;&emsp;if (flag != 0){<br>
> &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;cout << "NO" << endl;<br>
> &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;break;<br>
> &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;}<br>
> &emsp;&emsp;else{<br>
> &emsp;&emsp;&emsp;&emsp; flag=0;<br>
> &emsp;&emsp;&emsp;&emsp;}<br>

## Full solution:

1) Repeat the above step for all numbers in the test case
2) If the loop runs successfully i.e. without break; then print YES.

```
#include  <bits/stdc++.h>
using  namespace  std;

int  main(){

	int  flag;
	int  flag2;
	int  t;
	cin >>  t;

	for(int  test=0;test<t;test++){
		char arr[100];
		cin >> arr;
		
		flag = 0;
		flag2 = 0;
		for (int i = 0; arr[i] != '\0'; i++){
			if (arr[i] != '0'){
				if (flag != 0){
					cout << "NO" << endl;
					flag2 = 1;
					break;
					}
			flag  =  1;
			}
			
			else{
				flag  =  0;
			}
		}
		
		if (flag2){
			continue;
		}
		cout <<  "YES"  << endl;
	}
return  0;
}
```
