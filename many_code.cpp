//
//  many_code.cpp
//  WireShark
//
//  Created by huyang on 2020/9/2.
//  Copyright © 2020 huyang. All rights reserved.
//
#include <iostream>
#include <hello>
#include <set>
#include <algorithm>
#include <string>
#include <map>
#include <forward_list>
#include <stack>
#include <list>
#include <queue>
#include <math.h>
#include <stdio.h>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
a line test code
jsut for test se sef 
using namespace std;
bool is(int a[],int n)
{
    for(int i=1;i<=n;i++)
       {
             if(a[i]!=0)
             return true;
       }
       return false;
       //vector<int > downtime;
//vector<int > carweight;
}

/*class number {
    var xuehao:Int
    lazy var yinhangka:Int
    let banJi:Int
    Init(xuehao:Int){
        self.xuehao = xuehao
    }
}
var myClass = number(xuehao:112)
var student = [Int](repeating: 2 , cout: NumberOfElements)
var school:[Int] = [2,3,5]
var numberS:Int = student.count
var sdirect:[Int:String]  = [1:"wo",2:"ni"]
string it = sdirect[1]
var oldValue = sdirect.updateValue("nimen",forkey:1)
var it = sdirect.removeValue(forKey:1)
for (key,value) in sdirect{
print("key is \(key) value is \(value)")}
var myArray = [Int](repeating:1,count:10)
for item in myArray {
    print("\(item)") // ø…“‘÷±Ω” print(item)
}
myArray.enumrated()

for (index,value) in myArray.enumrated(){
    print("")
}
let directKey = [Int](sdirect.keys)
 print("hello world", termerator:"")
 let input = readLine()
 typealias feet = Int
 var distance:Feet = 100;
 print (distance)
 
 var varB = 43
 print("test\(varB)")
 import UIKit
 var myString:String? = "hello"
 if myString != nil {
 print(myString)
 
 } else {
 print("error")
 }
 Optrion(hello)
 if myString != nil {
 print(myString!)
 } else {
 print("error")
 }
 hello
 
 var myString:String! = "world"
 if let constString = myString{
 print("string is  : \(constString)")
 }
 let yourString:String = myString*/

/*for x in 1...4{
    print()
    print("/(x)",termator:"")
}

var myArray:[Int](count:2) = [Int](count:2, repateValue:0)
var myArray:[Int](count:2)

myArray[3]

1...<5

for it in myArray{
print(it)
}

for (index,value) in myArray{
    pring("/(index) : value: /(value.index)  / (value.value)") /(value[0])
}


for (index,value) int myArray.enumerated

enumrator myArray{
};

enum weekday{
    saturday
    sunday
};

if weekday  === saturday{}

var someDay:weekday = weekday.saturday
switch someDay {
case saturday:

case sunday:
    
}
var my:String = "hel"
my.isEmpty
var i = my.count

terminator:
funca = (a:Int, b:Int)

func myFunc = (arg1 c1:Int, arg2 c2:Int) returnType:Int{
}

var bibao = (arg1:Int, arg2:Int) returnType{
    
}

var a = [Int](repeating:10)_
var a:[Int] = [1,2,3]

a.append(20)
a += [20]
var somedirect:[Int:String] =[1:"s"]*/
class aClass{
    public:
 virtual  void print(){
         cout<<"super";
     }
};
//class bClass:public aClass{
//    public:
//    void print(){
//        cout<<"sub";
//    }
//};
//
//vector<int> WaitInLine_f(vector<int>& a, vector<int>& b,vector<int>& l,vector <int>& result,int t,int total) {
//    if( t == a.size())
//    {
//        vector<int> ta;
//        return ta;
//    }
//    int number = 0;
//    for(int i =0; i<a.size();i++)
//    number += a[i]*(i)+b[i]*(a.size()-i-1);
//    if(number<total)
//    {
//        total = number;
//        result = vector<int> (l) ;
//    }
//    for(int i = t+1; i < a.size(); i++)
//    {
//        int f = a[i];
//        a[i] = a[t];
//        a[t] = f ;
//        f = b[i];
//        b[i] = b[t];
//        b[t] = f ;
//        f = l[i];
//        l[i] = l[t];
//        l[t] = f ;
//        WaitInLine_f(a,b,l,result,t+1,total);
//        f = a[i];
//        a[i] = a[t];
//        a[t] = f ;
//        f = b[i];
//        b[i] = b[t];
//        b[t] = f ;
//        f = l[i];
//        l[i] = l[t];
//        l[t] = f ;
//    }
//    return result;
//}
//
//vector<int> WaitInLine(vector<int>& a, vector<int>& b) {
//        vector<int> cosu;
//        for( int i = 0; i<a.size();i++)
//            cosu.push_back(i+1);
//        cosu =  WaitInLine_f( a, b, cosu,cosu,0,1000000);
//        return cosu;
//        // write code here
//}
//#define S(a) 3*a*a
//int main(int argc, char *argv[]) {
//
//    aClass *super = new aClass();
//    bClass *sub   = new bClass();
//    super->print();
//    sub->print();
//    super = new bClass();
//    super->print();
//       /*int n,W,nexttime=0;
//       cin>>n>>W;
//       int w[n],t[n][2];
//       for(int i =0;i<n;i++)
//       cin>>w[i];
//       for(int i =0;i<n;i++)
//       cin>>t[i][0];
//       int  i =1;//µ⁄i¡æ≥µµ»…œ
//       int  j = 0; // ±º‰ «j
//       int dow =0; // µ⁄i¡æ≥µœ¬«≈
//       int c ;
//       while(i< n)
//       {
//       i =  forup(w,n,W,i,j);
//       updatetime(a,i,c,k,0);
//       j = t[y+1];
//       nexttime= a[j];
//       y++;
//       }*/
//
//    return 0;
//}
//
//void getmemory(char*p)
//{
//    p=(char*)malloc(100);
//}
//
//struct pointer{
// char a;
// int b;
// short c;
// short d;
//}c;
//class Base1{
//    virtual int fun1();
//    public:
//    void interesting(){
//        cout<<"Base1";
//    }
//};
//class Base2:public Base1{
//    virtual int fun2();
//    public:
//    void interesting(){
//        cout<<"Base1";
//    }
//};
//class Base3:public Base1{
//    virtual int fun3();
//};
//class deliverd :virtual public Base2,public Base3{
//    virtual int fun1();
//};
//void m (char *p1 , char *p2){
//    char* p=  p1;char *q =p2;
//    while(p!=p1)
//    {
//    //    p= p->next;
//    }
//    while(q!=p2)
//    {
//        p =q;
//        //q =q->next;
//    }
////    return p1;
//}
class ha{
    double a;
    int  c;
    char d;
    char e;//wenti
    short t;
    short y;
//    char f ;
//    char g;
//    char h;
    //short e;
};
// bool fun(vector<int> sequence, int begin,int end){
//            if(begin>=end)
//            return true;
//            int i = begin;
//            cout<<"begin" <<begin<<"end "<<end<<endl ;
//            while(sequence[i]<sequence[end])
//            i++;
//            int j  =i;
//            while(sequence[j]>sequence[end])
//            j++;
//            if(j!=end)
//            {
//                    return false ;
//            }
//            i = begin;
//            while(sequence[i]<sequence[end-1])
//            {
//                i++;
//            }
//            j=i;
//            while(sequence[j]>sequence[end-1])
//            {
//                j++;
//            }
//            if(j!=end-1)
//            {
//                 cout<<"j"<<j<<"end"<<end<<endl;
//                    return false ;
//            }
//            return fun(sequence,begin,i-1)&&fun(sequence,i,end-1);
//}
//bool VerifySquenceOfBST(vector<int> sequence) {
//    int len = 0;//sequence.size();
//            if (len == 0)
//            return false;
//            if(len == 1)
//            return true;
//            else
//            return fun(sequence,0,len-1);
//    }
//    
/*int main(int argc, char *argv[]) {
   // char  x[] ="hello";
   // char  *q =x;
    vector<int> sequence;
    sequence.push_back(4);
    sequence.push_back(6);
    sequence.push_back(12);
    sequence.push_back(8);
    sequence.push_back(16);
    sequence.push_back(14);
    sequence.push_back(10);
    //cout<< VerifySquenceOfBST( sequence) ;
    string str("HELLOC++");
    printf("0x%X, 0x%X",-1,(-1<<2)) ;
    //cout<<hex<<q<<endl;
   //k = (++x)+(++x)+(x++);
    //cout<<hex<<q+5<<endl;
    //strcpy(str,"Hytera");
    //strcat(str+2,"Downloader");
    //Base2* obj ;
    //Base1* obj1 =(Base1*)(obj);
    //obj1->interesting();
    //cout<<sizeof(ha);
    return 0;
}

int main(int argc, char *argv[]) {
    int x, i=0,j=0;
    cin >>x;
    int sum =0;
    for(i=0;i<=x;i++)
    {
        int ne = 0;
        for(j =0;j<=x-i;j++)
        {
        ne = (i+j)*x -2*i*j - i*(i+1)/2- j*(j+1)/2;
        if( ne > sum )
            {
                sum = ne;
                cout <<"i = "<<i <<"j ="<<j<<"  "<<sum<<endl;
            }
        }
    }
    return 0;
}*/
void path(int loc[][2], int n ,int sum,int x,int *c)
{
    if( x == n )
    {   sum =0;
        for(int i =0;i<n+1;i++)
        {
        cout<< loc[i][0]<<" "<<loc[i][1]<<endl;
        int dx = loc[i][0]>loc[i+1][0]? loc[i][0] - loc[i+1][0]:loc[i+1][0]- loc[i][0];
        int dy = loc[i][1]>loc[i+1][1]? loc[i][1] - loc[i+1][1]:loc[i+1][1]- loc[i][1];
        sum+=dx+dy;
        }
        cout<<endl;
        if(*c == 0)
        *c= sum;
        if(*c>sum)
        *c= sum;
        cout<<*c<<endl;
    }
    for(int i = x; i<=n; i++)
    {
        int temp  = loc[x][0];
        loc[x][0] = loc[i][0];
        loc[i][0] = temp;
        temp  = loc[x][1];
        loc[x][1] = loc[i][1];
        loc[i][1] = temp;
        path(loc,n,sum,x+1,c);
        temp  = loc[x][0];
        loc[x][0] = loc[i][0];
        loc[i][0] = temp;
        temp  = loc[x][1];
        loc[x][1] = loc[i][1];
        loc[i][1] = temp;
    }
}
int fun(int *a,int H,int V,int x,vector<int> v,int c1,int c2,int R1,int R2,int sum)
{
    if( x == H)
    {
    return sum;
    }
    v.push_back(1);
    sum += *(a+x)*c1;
    int sum1;
    if(v.size()>=2&& *(v.end()-1)== *(v.end()-2) == 1)
     sum1 =fun(a,H,V,x+1,v,c1,c2,R1,R2,sum+R1);
    else
     sum1 =fun(a,H,V,x+1,v,c1,c2,R1,R2,sum);
    cout<< sum1<<" ";
    v.erase(v.end()-1);
    sum -= *(a+x)*c1;
    vector <int> ::iterator it = v.begin();
    while (it!=v.end())
    {
        cout<<*it++<<" ";
    }
    cout<<endl;
    v.push_back(2);
    sum += *(a+x)*c2;
    int sum2 = 0;
//    if(v.size()>=2&& *(v.end()-1)== *(v.end()-2) == 2)
//     sum2 = fun(a,H,V,x+1,v,c1,c2,R1,R2,sum+R2);
//    else
//     sum2 = fun(a,H,V,x+1,v,c1,c2,R1,R2,sum);
//    cout<<sum2<<endl;
    it = v.begin();
    while (it!=v.end())
    {
        cout<<*it++<<" ";
    }    if(sum1>sum2)
    return sum2;
    else
    return sum1;
}
struct DirectedGraph
{
    size_t V, E; //V±Ì æ∂•µ„ ˝£¨E±Ì æ±ﬂ ˝
    list<int>* adj;
    queue<int> mq; //¡⁄Ω”±Ì
    DirectedGraph(int v);
    void addedge(int x,int y);
    int*indegree;
     void dfs();
};
DirectedGraph::DirectedGraph(int v)
{
    this->V = v;
    adj =new list<int>[v];
    indegree =new int[v];
    for(int i =0;i<v;i++ )
    indegree[i] = 0;
    //int* indegree;
}
 void DirectedGraph::addedge(int x, int y)
{
    adj[x].push_back(y);
    indegree[y]++;
}
void DirectedGraph::dfs()
{
   
    for(int i=0;i<V;i++)
    {
        if(indegree[i] ==0 )
        mq.push(i);
    }
    int count =0;
    list<int> ::iterator it ;
    while (!mq.empty())
    {
        int t = mq.front();
        mq.pop();
        cout<<t;
        count++;
        it = adj[t].begin();
        while(it!= adj[t].end())
        if (!(--indegree[*it]))
        {
            mq.push(*it);
        }
    }
}


void find(int arr[],int x,int V,int *f2)
{
    for(int i= x;i<V+1;i++  )
    if(arr[i] == x )
    {*f2+=1;find(arr,i,V,f2);}
}
    
/*int main(int argc, char *argv[]) {
    int i=0,j=0;
    
    for(i=0;i<=10;i++)
    {
        cout<<"s";
        for(j =0;j<=10-i;j++)
        cout <<"i = "<<i <<"j ="<<j<<"  "<<(10-i-j)*(i*i+j*j)<<endl;
    }
    return 0;
    for(int i=0;i<V+1;i++)
    {
        lmap.insert(map<int,list<int>>::value_type(i,listArr[i]));
    }
    gra.adj = lmap;
    TopologicalSort(gra, 4);
    //cout<<1<<endl;
    //dfs(1,-1,0);
    int N=1, H=3,V =1 ,R1 =2,R2=6,c1=4,c2=4 ,M1 =3  ,M2 =4 ;
    int a[H][V] ;
    for( int i =0;i<H;i++)
    for( int j =0;j<V;j++)
    cin>> a[i][j];
    int *p =a[0];
    vector<int >vec_deque;
    return fun(p,H,V,0,vec_deque,c1,c2,R1,R2,0);
    int n =5 ;
    cin>>n;
    int  loc[n+2][2];
    int temp;
    
    cin>>loc[0][0]>>loc[0][1];
    cin>>loc[n+1][0]>>loc[n+1][1];
    for(int i = 1;i<n+1;i++)
    {
        //loc[i][0]=loc[i][1]=i;
        cin>>loc[i][0]>>loc[i][1];
    }
    int *p =new int();
    path(loc,n,0,1,p);

    return *p;*/
/*}
struct CM
{
    void fool1(void);
    //void fool2(int a )=0;
    void fool3(int a)const;
    void fool4(int a =0);
} ;
void fun(char side,char c)
{
     vector<char >A,B;
     if(side == 'A')
     {
         vector<char> ::iterator it = A.begin();
         while(it!= A.end())
         {
             if(*it == c)
             {
             A.erase(it);
             break;
            }
            it++;
         }
     }
     else
     {
         vector<char> ::iterator it = B.begin();
         while(it!= B.end())
         {
             if(*it == c)
             {
             B.erase(it);
             break;
            }
            it++;
         }
     }
}
void km(char *A,char*B)
{
    vector <int> TB;
    int len =0 ;
    while(*B !='\0')
    {
        B++;
        len++;
    }
    B-= len;
    TB.push_back(-1);
    int k =-1,j =0;
    while(j<len-1)
    {
        if(B[j] == B[k]|| k == -1)
        {
            TB.push_back(k+1);
            k++;
            j++;
        }
        else
            k = TB[k];
    }
    for(int k = 0;k<TB.size();k++)
    cout<<" "<<TB[k];
}
void func(int a[])
{
    int f =a[0];
    int m =a[0];

    for(int i = 1;i<5;i++)
    {
        if(f+a[i]>a[i])
        f += a[i];
        if(m<f)
        m =f;
    }
    cout<<m;
}
int f(vector<vector<int> > arr,int i,int j,int sum)
{
    if(i == arr.size()-1)
    {
        cout<< sum<<endl;
        return sum;
    }
    else
    {
      if(f(arr,i+1,j,+sum+arr[i+1][j])>f(arr,i+1,j+1,sum+arr[i+1][j+1]))
       return f(arr,i+1,j,sum+arr[i+1][j]);
      else
       return f(arr,i+1,j+1,sum+arr[i+1][j+1]);
    }
}
class Aclass{
    public:
    virtual void draw() = 0;
    int n;
};
class C :public Aclass {
    int m_x;
    public :
    C(int c)
    {
        m_x = c;
    }
    void common()
    {
        cout<<"common C";
    }
    virtual void vir()
    {
        cout<<"virtual C";
    }
    void draw()
    {
        cout<< m_x*m_x;
    }
} ;
class D :public Aclass
{
    int d1;
    public :
        D(int d){
            d1 = d;
        }
        void common()
    {
        cout<<"common D";
    }
     void vir()
    {
        cout<<"virtual D";
    }
    void draw()
    {
        cout<< d1+d1;
    }
};
class e{
    int m_x;
    public:
        e(int x)
        {
            m_x = x;
        }
};
int prime(int n )
{
    vector<int> vi;
    vi.push_back(2);
    int x =3;
    int temp =1;
    while (temp*(temp)<n)
    {
        temp +=1;
    }
   vector<int > ::iterator it;
    while(x<= n)
    {
        it = vi.begin();
        while ( it!=vi.end())
        {
            if(x%*it == 0)
            break;
            it++;
        }
        if(it == vi.end())
        {cout<<"push "<<x<<endl;
        vi.push_back(x);}
        x++;
    }
    return 0;
}



int main(int argc, char *argv[]) {
    SFGHASH_NODE * node, var;
    char a = 'c';
     
    char *b = &a;
    var.data = b;
    
    node =  &var;
    
    PortObject2 * po;

    po = (PortObject2*)node->data;
    //cout<<po<<endl;
     cout<<*((char*)(po->data));
     vector<vector<int> > a;
     vector<int> b;
     C c_c(2.1);
     D c_d(4);
     //p2 =&ib;
     string  stra = "1+4*(2-3)/5";
     stack<char> sa;
     int n = stra.length();
     for(int i = 0;i< n;i++)
     {
         if((stra[i]>='0' && stra[i]<= '9')&&
        (stra[i+1]=='+'||stra[i+1] =='-'||stra[i+1] =='*'||stra[i+1]=='/'))
        {
        sa.push(stra[i+1]);
        sa.push(stra[i]);
        i++;
        }
     }
     int k = prime(30);*/
     /*int  ints[20] ;
     auto f  = [a](int a, int b){return a;};
     int x = 6 ,y=1 ,z = 3;
     auto g= [x,&z](int y){z+=3; return  x+y;};
     int re = g(4);
     //cin>> n;
     int temp;
     const int* p = &temp;
     for(int i=10;i<210; i+=10)
     {
         //for(int j =0;j<i+1;j++)
         //{
         //    cin>>temp;
             ints[(i-10)/10] = i;
         //}
        //a.push_back(b);
        //b.clear();
     }*/
     //C* base = new D();
     //base->common();
     //base->vir();
    /*int a = 1,b=2,c=5;
    int *p =&a,*q =&b,*r=&c;
    map <int,int> maptmp;
     maptmp.insert(map <int,int>::value_type(1,4));
     maptmp.insert(map <int,int>::value_type(2,5));
     maptmp.insert(map <int,int>::value_type(3,5));
     maptmp.insert(map <int,int>::value_type(4,2));
    
     vector<int> ::iterator it = vectmp.begin();
     while(it != vectmp.end())
     {
         if(*it == 5 )
             vectmp.erase(it);
         else
             it++;
     }*/
     
     /*list<int*> ::iterator it = lsttmp.begin();
     list<int*> ::iterator it2;
     while(it != lsttmp.end())
     {
         cout<<" n";
         if(**it == 5 )
         {
             it2 = it;
             lsttmp.erase(it2);
         }
             it++;
     }*/
     /*
     map<int,int> ::iterator it = maptmp.begin();
     map<int,int> ::iterator it2;
     while(it != maptmp.end())
     {
         if((*it).second == 5 )
             {
             it2 =it;
             maptmp.erase(it2);
            }
             it++;
     }
     it = maptmp.begin();
    while(it!=maptmp.end())
    {
        
        cout<<(*it).second<<endl;
        it++;
    }
    for(int i =1;i<3;i++)
    {
        cout<<"sum "<<endl;
        int c = i;
        int temp =1;
        while(c>0)
        {
        temp*=10;
        c--;
        }
        //sum+= (a[i]-1)*f[i-1][0] +temp ;
    } */
    /*int  m,n,x,temp,sum=0;
    cin>>n>>m,x;
    vector<int> a,b;
    int temp1 = n;
    int i = m;

    while(i>0)
    {
        a.push_back(i%10);
        i/=10;
    }
    int f[a.size()][3] ;
    f[0][0] = 1;
    f[1][0] = 10*f[0][0]+9;
     // <=>;
    for(i =2;i<a.size();i++)
    if (a[i] > 3)
    {
        int c = i;
        int temp =1;
        while(c>0)
        {
        temp*=10;
        c--;
        }
        f[i][0] =10*f[i-1][0]+temp;
        //s[i] = a[i]* 1+9;
        //s[i] = a[i]*f(n-1)+9*f(n-2)
    }
    else
    {
        //s[i] =0;
        //s[i] = a[i]*1;
    }
    sum = 1;
    for(int i =1;i<a.size();i++)
    {
    //    cout<<"sum "<<sum<<endl;
        int c = i;
        int temp =1;
        while(c>0)
        {
        temp*=10;
        c--;
        }
        sum+= (a[i]-1)*f[i-1][0] +temp ;
    }*/
    /*for(int i =0;i<m;i++)
    {
        it = a.begin();
        while(*it == *a.begin())
        it++;
        cout<<*it<<" < "<<*a.begin()<<endl;
        a.insert(*it + *a.begin());
        a.erase(it);
        a.erase(a.begin());
    }
    cout<<*a.begin();*/
/*    return 0;
}
#include <string.h>
#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
#include "winsock2.h"
#pragma comment(lib,"ws2_32.lib")
#include <stdlib.h>

struct TreeNode{
int val;
int * p;
};
    TreeNode* reConstructBinaryTree1(vector<int> pre,vector<int> vin,vector<int> Tree){
        int len = pre.size();
        cout<<" len1 ";
        if(len ==1 )
        {   cout<<" len ";
            TreeNode* ptr;
            Tree.push_back(pre[0]);
            vector<int > ::iterator it =Tree.begin();
            while (it!= Tree.end())
            {
                 (*ptr).val = *it;
                it++;
            ptr++;
            }
            return ptr;
        }
         int gen;
        for(gen=0;gen<len;gen++)
        {
            cout<<pre[gen]<<endl;
            cout<<vin[gen]<<endl;
            //if(pre[gen] == vin[gen])
             //   break;
        }
        Tree.push_back(pre[gen]);
        vector<int >spre1,svin1;
        vector<int >spre2,svin2;
         for(int i=1;i<=gen;i++)
         {
             spre1.push_back(pre[i]);
             svin1.push_back(pre[i-1]);
         }
         for(int i=gen+1;i<len;i++)
         {
             spre2.push_back(pre[i]);
             svin2.push_back(pre[i]);
         }
         //reConstructBinaryTree1(spre1,svin1,Tree);
         //reConstructBinaryTree1(spre2,svin2,Tree);
    }
void readdata(int fid)
{
    int ret ;
    char buff[32]={0};
    while(1)
    {
        ret =read(fid,buff,sizeof(buff));
        if(-1==ret)
        {
        exit(1);
        }
        if(!strcmp(buf,"buy"))
        {
        break;
        }
    }
    std::cout<<buf<<endl;
}
void writedata(int fid)
{
    int ret ;
    char buff[32]={0};
    cin>>buff;
    while(1)
    {
        ret =write(fid,buff,sizeof(buff));
        if(-1==ret)
        {
        exit(1);
        }
        if(!strcmp(buf,"buy"))
        {
        break;
        }
    }
    std::cout<<buf<<endl;
}*/
/*DWORD WINAPI ThreadPro(LPVOID pragm)
{
    SOCKET sock =(SOCKET)pragm;
    char send_buffer[1024],recv_buffer[1024];
    int n =recv(sock,recv_buffer,1024,0);
    cout<<"shou"<<recv_buffer<<endl;
    if( recv_buffer == "a")
    {
        strcpy(send_buffer,"hello");
        int res =send(sock,send_buffer,1024,0);//send(socket,send_buffer,1024,0);
    }
    return 0;
}
void comp()
{
    WSADATA wsd;
    WSAStartup (MAKEWORD(2,2),&wsd);//que
    sockaddr_in serveraddr,serveraddrfrom;//que
    serveraddr.sin_family =AF_INET;
    serveraddr.sin_port = htons(4600);
    serveraddr.sin_addr.S_un.S_addr =inet_addr("127.0.0.1");
    
    SOCKET sock= socket(AF_INET,SOCK_STREAM,0);//addr,*(addr)addr,&len
    int i = bind(sock,(sockaddr*)&serveraddrfrom,sizeof(serveraddrfrom));
    int len =sizeof(sockaddr);
    
    int n =listen(sock,0); //bind & listen ∑¥¡À
    SOCKET m_socket;
    m_socket = accept(sock,(sockaddr*)&serveraddrfrom,&len);
    
    char buffer[]="server\0";
    
    int is =send(sock,buffer,1024,0);
    HANDLE m_handle;
    DWORD iThread;
    m_handle= (HANDLE)::CreateThread(NULL,0,ThreadPro,(LPVOID)m_socket,0,&iThread) ;//int id= (Handle)::Create_thread(NULL,0,m_handle,DWORD pargm((m_handle)socket),iThread) ;
    WSACleanup();
}
    return 0;
}
#include <iostream>
using namespace std;


void func(int a[],int l,int r)
{
    int i,j,key;
    if(l<r)
    {
        i=l;
        j=r;
        key=a[i];
    while(i<j)
    {
        
        while(i<j&&a[j]>=key)
        {
            j--;
        }
        a[i]=a[j];
        for(int i =0;i<6;i++)
        cout<<a[i];
        cout << "i"<<i<<"j"<<j<<"key"<<key;
        cout<<endl;
        while(i<j&&a[i]<key)
        {
            i++;
        }
        a[j]=a[i];
        for(int i =0;i<6;i++)
        cout<<a[i];
        cout << "     i"<<i<<"j"<<j<<"key"<<key;
        cout <<endl;
        a[i]=key;
        for(int i =0;i<6;i++)
        cout<<a[i];
        cout << "    i"<<i<<"j"<<j<<"key"<<key;
        cout <<endl;
    }
    cout << "i"<<i<<"j"<<j<<"key"<<key;
    cout<<endl;
    func(a,l,i-1);
    func(a,i+1,r);
    }
    else
    return;
}
void reOrderArray(vector<int> &array) {
        if(array.size() > 1){
        vector<int>::iterator it1 = array.begin();
        vector<int>::iterator it2 = array.begin();
        while(it2 != array.end())
        {
            if(*it2 % 2 == 0)
            break;
            else
            it2++;
        }
        it1 = it2+1;
        while(it1 != array.end() )
        {
            if(*it1 % 2 != 0 )
            {
                cout<<"it1: "<<*it1<<" it2: "<<*it2<<endl;
                array.insert(it2,*it1);
                it1++;it2++;
                array.erase(it1);
                for(int i =0; i<array.size();i++)
                cout<<array[i]<<',';
                cout<<endl;
            }
            else
            it1++;
        }
        }
        
    }*/

