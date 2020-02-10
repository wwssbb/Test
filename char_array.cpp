#include<iostream>

using namespace std;

int str_cpy(const char*  src, char* des)
{
	int length = strlen(src);
	des = (char*)calloc(length, sizeof(char));

	for (int i = 0; i < length; i++)
	{
		des[i] = src[i];
	}

	return 0;
}

int str_cat(char* src1, char* src2, char* des)
{
	int length1 = strlen(src1);
	int length2 = strlen(src2);
	des = (char*)calloc(length1, length2);

	for (int i = 0; i < length1; i++)
	{
		des[i] = src1[i];
	}

	for (int j = length1; j < length1+ length2; j++)
	{
		des[j] = src1[j];
	}

	return 0;
}

int main(int argc, char** argv)
{
	//�ո�Ҳ���ַ���str1���ж�Ϊ�ַ�������β��ת���ַ�\0
	char str1[] = "Hello world.";
	char str2[] = { 'H','e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '.' };

	//��ͬ��������string��sizeof��һ����32λ��һ��Ϊ28��64λ��һ��Ϊ40
	string str3 = "Hello world.";
	string str5 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

	//C�����¿�ֱ��char* str4=��xxxxxx��;
	char* str4 = NULL;
	str4 = (char*)calloc(13, sizeof(char));
	//��Ȼ��13λ������ĩβ\0�����ƽ�str4����strlen������12
	strcpy_s(str4, 13, str1);

	cout << sizeof(str1) << endl;
	cout << sizeof(str2) << endl;
	cout << sizeof(str3) << endl;
	cout << sizeof(str5) << endl;
	cout << str3.length() << endl;
	cout << str5.length() << endl;

	cout << str4 << endl;
	cout << sizeof(str4) << endl;
	cout << strlen(str4) << endl;

	//ֻ�������ά���鲻�þ��峤��
	char str6[][7] = { {"hello "},{"world."} };
	char str7[][2][16] = { {{"Hello world."},{"My friend."}},{{"I am here! Haha"},{"Good luck."}} };
	char str8[][7] = { {'H','e', 'l', 'l', 'o', '\0'}, {'w', 'o', 'r', 'l', 'd', '.', '\0'} };
	cout << str6[0] << endl;
	cout << str7[1][0] << endl;
	cout << str8<< endl;

	return 0;
}