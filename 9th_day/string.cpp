#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //给字符串初始化
    // string s;

    // cout << "S=" << s << endl;

    // const char *str = "dsfadsfds";
    // string s2(str);
    // cout << "S2=" << s2 << endl;

    // string s3(s2);
    // cout << "S3=" << s3 << endl;

    // string s4(5,'a');
    // cout << "S4=" << s4 << endl;

    //给字符串赋值
    // string s;
    // s = "dsfasdf";
    // cout << "S=" << s << endl;

    // string s1;
    // s1 = s;
    // cout << "S1=" << s1 << endl;

    // string s2;
    // s2 = 'a';
    // cout << "S2=" << s2 << endl;

    // string s3;
    // s3.assign("hello C++");
    // cout << "S3=" << s3 << endl;

    // string s4;
    // s4.assign("hello C++", 9);
    // cout << "S4=" << s4 << endl;

    // string s5;
    // s5.assign(s4);
    // cout << "S5=" << s5 << endl;

    // string s6;
    // s6.assign(5,'x');
    // cout << "S6=" << s6 << endl;

    //实现字符串的拼接
    // string s="1234";
    // s+="5678";
    // cout<<"s="<<s<<endl;

    // string s1="0";
    // s1+=s;
    // cout<<"s1="<<s1<<endl;

    // string s2="I";
    // s2.append(" LOVE");
    // cout<<"s2="<<s2<<endl;
    // s2.append(" GAME! 313",6);
    // cout<<"s2="<<s2<<endl;
    // s2.append(s1,0,9);
    // cout<<"s2="<<s2<<endl;

    //查找 替换
    // string s;
    // s = "12332111";
    // int post = s.find("3213");//从左到右找
    // if (post != -1)
    // {
    //     cout << "字符串的第:" << post << "位置" << endl;
    // }
    // else
    // {
    //     cout << "没有找到！" << endl;
    // }

    // post = s.rfind("12");//从右往左找
    // if (post != -1)
    // {
    //     cout << "字符串的第第:" << post << "位置" << endl;
    // }
    // else
    // {
    //     cout << "没有找到！" << endl;
    // }

    // //替换
    // s.replace(1,1,"abc");
    // cout<<"s="<<s<<endl;

    //字符串比较
    // string s1="2234";
    // string s2="3234";

    // if (s1.compare(s2)==0)
    // {
    //     cout<<"s1==s2"<<endl;
    // }
    // else if (s1.compare(s2)>0)
    // {
    //     cout<<"s1>s2"<<endl;
    // }
    // else
    // {
    //     cout<<"s1<s2"<<endl;
    // }

    // string s = "abcd";
    // for (size_t i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << ' ';
    // }
    // cout << endl;

    // for (size_t i = 0; i < s.size(); i++)
    // {
    //     cout << s.at(i) << ' ';
    // }
    // cout << endl;

    // s[0] = 'x';
    // for (size_t i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << ' ';
    // }
    // cout << endl;

    // s.at(0) = 'x';
    // for (size_t i = 0; i < s.size(); i++)
    // {
    //     cout << s.at(i) << ' ';
    // }
    // cout << endl;

    //插入和删除
    // string s="1234";
    // s.insert(0,"abcd");
    // cout<<"s="<<s<<endl;

    // //删除
    // s.erase(0,4);
    // cout<<"s="<<s<<endl;

    // //得到子串
    // string s="123456";
    // string s1=s.substr(0,4);
    // cout<<"s1="<<s1<<endl;

    // //实际应用
    // string email="YANG@sina.com";
    // int post=email.find('@');
    // string name=email.substr(0,post);
    // cout<<"name="<<name<<endl;

    getchar();
    system("clear");
    return 0;
}