
int vr = 10;

int f1(int pr){
int vr = 1;
vr++;
return vr+pr;
}

int main()
{
	printf("%d\n", f1(1) + f1(1));
}
