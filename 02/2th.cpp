#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	cout << "hello world" << endl;
	cout << 1 << endl; // printf("%d", 1);
	cout << 1 + 2 << endl;

	int num;
	cin >> num;
	cout << num << endl;
	*/

	// �簢���� �ʺ�, ����, ����
	/*
	int width, height;
	cout << "�ʺ� �Է��ϼ���>>";
	cin >> width;
	cout << "���̸� �Է��ϼ���>>";
	cin >> height;
	cout << "������ " << width * height << endl;
	*/

	/*
	int num = 1;
	char ch = 'a';
	float fnum = 1.13;
	double dnum = 1.14;
	bool b = true; //false, 1, 0

	cout << "num�� ������� " << sizeof(num) << endl;
	cout << "ch�� ������� " << sizeof(ch) << endl;
	cout << "fnum�� ������� " << sizeof(fnum) << endl;
	cout << "dnum�� ������� " << sizeof(dnum) << endl;
	cout << "b�� ������� " << sizeof(b) << endl;
	*/

	/*
	int num = 1;
	int num(1);
	int num{ 1 };

	int x = 1, y(1), z{ 1 };
	*/

	/*
	int num = 1; // 4byte = 32bit, -2^32~2^31-1

	cout << std::numeric_limits<int>::max() << endl;
	cout << std::numeric_limits<int>::min() << endl;
	cout << std::numeric_limits<int>::lowest() << endl;

	cout << std::numeric_limits<float>::max() << endl;
	cout << std::numeric_limits<float>::min() << endl;
	cout << std::numeric_limits<float>::lowest() << endl;

	cout << std::numeric_limits<int>::max()+1 << endl;
	cout << std::numeric_limits<int>::min()-1 << endl;
	cout << std::numeric_limits<int>::lowest()-1 << endl;
	*/

	/*
	int8_t a = 1;
	int16_t b = 1;
	int32_t c = 1;

	cout << (int)a << " " << sizeof(a) << endl; //8bit = 1byte //C style
	cout << int(a) << " " << sizeof(a) << endl; //8bit = 1byte //C++ style
	cout << b << " " << sizeof(b) << endl; //16bit = 2byte
	cout << c << " " << sizeof(c) << endl; //32bit = 4byte
	*/

	/*
	int intnum = 11;
	unsigned int uintnum = 11u;
	long int longnum = 11L;
	long long int longlongnum = 11LL;
	unsigned long long int ulonglongnum = 11uLL;

	float fnum = 1.0f;
	double dnum = 1.0;
	long double ld = 1.0L;

	int decimal = 11;
	int octal = 021;
	int hexa = 0x11;
	int binary = 0b11;

	cout << decimal << endl;
	cout << octal << endl;
	cout << hexa << endl;
	cout << binary << endl;
	*/

	// ����� �ڸ��� ����
	/*
	//cout.precision(16);
	cout << std::setprecision(8);
	cout << 4.0 / 3.0 << endl;
	*/

	/*
	float f1 = 0.1f;
	float f2 = 0.02f * 5.0f;
	cout.precision(16);
	cout << f1 << endl;
	cout << f2 << endl;

	if (f1 == f2)
	{
		cout << "ok" << endl;
	}

	float e = 1e-10; //0.0000000001

	if ((f1-f2) < e)
	{
		cout << "ok" << endl;
	}

	float f3 = 1.0;
	float f4 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

	if (f3 == f4)
	{
		cout << "ok" << endl;
	}
	*/

	/*
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << endl;
	cout << neginf << " " << endl;
	cout << nan << " " << endl;
	cout << 1.0  << " " << endl;
	*/

	/*
	char ch1 = 'a';
	char ch2 = 97;

	cout << ch1 << endl;
	cout << char(ch2) << endl;
	*/

	/*
	cout << "hello world";
	cout << '\n';
	cout << "hello" << "\tworld" << endl;
	*/

	/*
	bool b = (0==0);
	bool b1 = false;

	cout.setf(ios_base::boolalpha); // bool�� true, false�� ���
	cout << b << endl;
	cout << b1 << endl;
	*/

	/*
	const int num = 1;
	//num = 2; // ���ٲ�
	constexpr int num2 = 1;

	int a;
	cin >> a;

	const int num = a; //���� �־��� �� ����
	constexpr int num2 = a; //�������Ҷ����� ���� �־������
	*/

	/*
	auto a = 1;
	auto b = 1.0+2;
	*/

	//cout << ((1 > 2) ? 1 : 0) << endl;
	
	/*
	cout << 1 + 2 << endl;
	cout << 1 - 2 << endl;
	cout << 1 * 2 << endl;
	cout << 1 / 2 << endl;
	cout << 1 % 2 << endl;

	int num = 10;
	cout << (num += num) << endl;
	cout << (num -= num) << endl;
	cout << (num *= num) << endl;
	cout << (num /= num) << endl;
	cout << (num %= num) << endl;

	int num2 = 0;
	cout << (++num2) << endl;
	cout << (--num2) << endl;
	cout << (num2++) << endl;
	cout << (num2--) << endl;

	int x = 3;
	int y = { 5 };
	int z = (++x, ++y);// y���� ��
	//int z = ++x, ++y;// x���� ��
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	*/
    
	int num0 = 0, num1(1);
	cout << "num0 = 0, num = 1\n";
}