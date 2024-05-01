/*WAP to declare a array of size 10  nd enter the values ask the user the indexed number
whose value he wants to check and throw the expection if the indexed number is
 outside the range of array*/
 #include<iostream>
 using namespace std;
 main()
 {
 	int n,array[15];
 	cout<<"\nEnter no of values";
 	cin>>n;
 	index
 	try
 	{
 		if(n>10)
 		throw 'a';
 		else
 		{
 			cout<<"\nEnter values";
			 for(i=n;i<10;i++)
 			{
 			cin>>array[i];	
			 }
		 }
	 }
	 catch(char)
	 {
	 	cout<<"\nYou are exceding limit";
	 }
	  for(i=0;i<10;i++)
 			{
 			cout<<"\nNum "<<i+1<<"="<<array[i];	
			 }
 };
