#include<iostream>
using namespace std;

int main(int args, char* argv[])
{
	/**************ָ������ָ��*********************/
	////������ʽconst temp* p��temp const* p
	////ָ����ָָ��ĳ��������޷�ͨ��ָ�뱾���޸ģ�����ԭ��ָ��ı������ǿ����޸���������
	//int b = 8;
	//int a = 12;
	//int const* p = NULL;
	//p = &b;

	//cout << b << endl;
	//cout << *p << endl;

	////ָ����ָָ��ĳ��������޷�ͨ��ָ�뱾���޸�
	////����д��*p=a;
	//p = &a;

	//cout << a << endl;
	//cout << *p << endl;

	////ԭ��ָ��ı������ǿ����޸���������
	//a = 100;

	//cout << a << endl;
	//cout << *p << endl;
	//getchar();
	/**************ָ������ָ��*********************/

	/**************����ָ��*********************/
	//������ʽtemp* const p
	//ָ�뱾�����ݣ���ַ�������޸ģ�������ָ������ݣ����ݣ������޸�
	int a = 8;
	//����д��*p = a;
	int* const p = &a;
	
	cout << a << endl;
	cout << *p << endl;

	//int c = 10;
	//p=&c;
	//���ܸı�ָ�뱾����ַ��������
	//Ҳ���ܱ���֮���ַ��ֵ&a = &c;

	int b=100;
	*p = b;

	cout << b << endl;
	cout << *p << endl;

	cout << args<<endl;
	
	cout << strlen(*argv) << endl;
	cout << strlen(argv[0]) << endl;
	getchar();
	/**************����ָ��*********************/

	return 0;
}