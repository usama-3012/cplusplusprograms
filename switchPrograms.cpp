#include <iostream>
using namespace std;

void isEvenOrOdd(int n) {
	cout<<"Enter a number";
	cin>>n;
	if(n%2==0) {
		cout<< "number is even";
	} else {
		cout<< "number is odd";
	}

}

void fibonacci(int n) {
	int i,a=0,b=1,c;
	cout<<"Enter a number";
	cin>>n;
	for(i=0; i<n; i++) {
		cout<<a;
		c=a+b;
		a=b;
		b=c;
	}

}

void factorial(int n) {
	int i,result;
	cout<<"Enter a number";
	cin>>n;
	result=n;
	for(i=n-1; i>n; i++) {
		result=result*i;
	}
	cout<<result;

}

void prime(int n) {
	int check=0,i;
	cout<<"Enter a number";
	cin>>n;
	for(i=1; i<=n; i++)
		if(n%i==0)
			check++;

	if(check==2)
		cout<<"this is prime number";
	else
		cout<<"this is not a prime number";

}
3.
void sumOfMatrices() {
	int rows, colums;

	cout<<"enter the number of rows:";
	cin>>rows;
	cout<<"enter the number of colums:";
	cin>>colums;

	int arr1[rows][colums];
	int arr2[rows][colums];
	int sum[rows][colums];

	for(int i=0; i<rows; i++) {
		for(int j=0; j<colums; j++) {
			cout<<"Enter Number :" <<"["<<i<<"]["<<j<<"]=";
			cin>>arr1[i][j];
		}
	}

	cout<<"2nd Array"<<endl;
	for(int i=0; i<rows; i++) {
		for(int j=0; j<colums; j++) {
			cout<<"Enter Number :" <<"["<<i<<"]["<<j<<"]=";
			cin>>arr2[i][j];
		}
	}

	for(int i=0; i<rows; i++) {
		for(int j=0; j<colums; j++) {
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

	cout<<"1st array"<<endl;
	for(int i=0; i<rows; i++) {
		for(int j=0; j<colums; j++) {
			cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<"2nd array"<<endl;
	for(int i=0; i<rows; i++) {
		for(int j=0; j<colums; j++) {
			cout<<arr2[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<"sum of Array"<<endl;
	for(int i=0; i<rows; i++) {
		for(int j=0; j<colums; j++) {
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main() {
	int n, choice;
	cout<<"1.even"<<endl;
	cout<<"2.fibonacci"<<endl;
	cout<<"3.factorial"<<endl;
	cout<<"4.prime"<<endl;
	cout<<"5.sum of matrics"<<endl;
	cout<<"Enter a choice"<<endl;
	cin>>choice;

	switch(choice) {
	case 1:
		isEvenOrOdd(n);
		break;
	case 2:
		fibonacci(n);
		break;
	case 3:
		factorial(n);
		break;
	case 4:
		prime(n);
		break;
	case 5:
		sumOfMatrices();
		break;
	}

	return 0;
}
